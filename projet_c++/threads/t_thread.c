

#include <time.h>
#include <stdio.h>
#include "c11threads.h"

int tfunc(void *arg);
void run_timed_test();
int hold_mutex_three_seconds(void* arg);

mtx_t mtx;
mtx_t startup_mtx;

int main(void)
{
	int i;
	thrd_t threads[4];

	printf("start thread test\n");

	for(i=0; i<4; i++) {
		thrd_create(threads + i, tfunc, (void*)(long)i);
	}

	for(i=0; i<4; i++) {
		thrd_join(threads[i], 0);
	}

	printf("end thread test\n\n");

	printf("start timed mutex test\n");
	run_timed_test();
	printf("stop timed mutex test\n");

	return 0;
}

int tfunc(void *arg)
{
	int num = (long)arg;
	struct timespec dur;

	printf("hello from thread %d\n", num);

	dur.tv_sec = 4;
	dur.tv_nsec = 0;
	thrd_sleep(&dur, 0);

	printf("thread %d done\n", num);
	return 0;
}

int hold_mutex_three_seconds(void* arg) {
	struct timespec dur;
	mtx_lock(&mtx);
	mtx_unlock(&startup_mtx);
	dur.tv_sec = 3;
	dur.tv_nsec = 0;
	thrd_sleep(&dur, 0);
	mtx_unlock(&mtx);

	return 0;
}

void run_timed_test()
{
	thrd_t thread;
	struct timespec ts;
	struct timespec dur;

	mtx_init(&mtx, mtx_timed);
	mtx_init(&mtx, mtx_plain);

	mtx_lock(&startup_mtx);
	thrd_create(&thread, hold_mutex_three_seconds, &mtx);

	mtx_lock(&startup_mtx);
	timespec_get(&ts, 0);
	ts.tv_sec = ts.tv_sec + 2;
	ts.tv_nsec = 0;
	if (mtx_timedlock(&mtx,&ts)==thrd_timedout) {
		printf("thread has locked mutex & we timed out waiting for it\n");
	}

	dur.tv_sec = 4;
	dur.tv_nsec = 0;
	thrd_sleep(&dur, 0);

	if (mtx_timedlock(&mtx,&ts)==thrd_success) {
		printf("thread no longer has mutex & we grabbed it\n");
	}

	mtx_destroy(&mtx);
}

/*#define _REENTRANT
# include <pthread.h>
# include <unistd.h>
# include <stdio.h>

#define THREAD_COUNT 10
#define THREAD_LOOP 10
 void afficher(int n , char lettre )
{
    int i , j ;
    for( j = 1 ; j<n ; j++) {
    for ( i = 1 ; i <2000000 ; i++) ;
     printf("%c " , lettre) ;
    fflush( stdout ) ;
    }
}

void *threadA ( void *init)
{
    afficher( 10 , 'A') ;
    printf( "\n Fin du thread A\n" ) ;
    fflush( stdout ) ;
    pthread_exit (NULL) ;
 }
void *threadC( void *init )
{
    afficher( 15, 'c') ;
    printf( "\n Fin du thread C\n" ) ;
    fflush( stdout ) ;
    pthread_exit (NULL) ;
}
void *threadB ( void *init )
{
    pthread_t thC ;
    pthread_create (&thC , NULL, threadC , NULL) ;
    afficher(20,'b') ;
    printf( "\n Le thread B at tend l a f i n du thread C\n" ) ;
    pthread_join ( thC ,NULL) ;
    printf( "\n Fin du thread B\n" ) ;
    fflush( stdout ) ;
    pthread_exit (NULL) ;
}

int main ( )
{
int i ;
pthread_t thA , thB ;
printf ( " Creation du thread A" ) ;
pthread_create (&thA , NULL, threadA , NULL) ;
pthread_create (&thB , NULL, threadB , NULL) ;
sleep( 1 ) ;

//at t endr e que l e s threads a i ent termine
printf( "Le thread pr inc ipa l at tend que l e s aut r e s se terminent\n" ) ;
pthread_join ( thA ,NULL) ;
pthread_join ( thB ,NULL) ;

exit( 0 ) ;
}











/*


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "c11threads.h"

bool mustExit = false;

// La fonction sur laquelle vont démarrer nos deux threads
int threadMain( void * data ) {
    const char * threadName = (const char *) data;
    while( ! mustExit ) {
        printf( "%s\n", threadName );
    }
    printf( "%s terminé !\n", threadName );
    return EXIT_SUCCESS;
}


int main() {

    // On crée un premier thread.
    thrd_t thread1;
    void * threadName1 = (void *) "Mon premier thread";
    if ( thrd_create( &thread1, threadMain, threadName1 ) != thrd_success ) {
        fprintf( stderr, "Impossible de créer le premier thread\n" );
        return EXIT_FAILURE;
    }

    // On crée un second thread.
    thrd_t thread2;
    void * threadName2 = (void *) "Mon second thread";
    if ( thrd_create( &thread2, threadMain, threadName2 ) != thrd_success ) {
        fprintf( stderr, "Impossible de créer le second thread\n" );
        return EXIT_FAILURE;
    }

    // Appuyez sur la touche <ENTER> pour stopper le programme.
    char ch;
    scanf( "%c", &ch );

    // Tous les threads d'un même processus partagent la même zone de mémoire.
    // Les deux threads doivent donc voir cette variable et se suspendrent
    // quand cela sera nécessaire.
    mustExit = true;

    // On sort du programme.
    printf( "Le thread initial/principal s'arrête.\n" );
    return EXIT_SUCCESS;
}
*/
