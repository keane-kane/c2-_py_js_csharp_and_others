
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <threads.h>

bool mustExit = false;

// La fonction sur laquelle vont d�marrer nos deux threads
int threadMain( void * data ) {
    const char * threadName = (const char *) data;
    while( ! mustExit ) {
        printf( "%s\n", threadName );
    }
    printf( "%s termin� !\n", threadName );
    return thrd_success;
}


int main() {

    // On cr�e un premier thread.
    thrd_t thread1;
    void * threadName1 = (void *) "Mon premier thread";
    if ( thrd_create( &thread1, threadMain, threadName1 ) != thrd_success ) {
        fprintf( stderr, "Impossible de cr�er le premier thread\n" );
        return EXIT_FAILURE;
    }

    // On cr�e un second thread.
    thrd_t thread2;
    void * threadName2 = (void *) "Mon second thread";
    if ( thrd_create( &thread2, threadMain, threadName2 ) != thrd_success ) {
        fprintf( stderr, "Impossible de cr�er le second thread\n" );
        return EXIT_FAILURE;
    }

    // Appuyez sur la touche <ENTER> pour stopper le programme.
    char ch;
    scanf( "%c", &ch );

    // Tous les threads d'un m�me processus partagent la m�me zone de m�moire.
    // Les deux threads doivent donc voir cette variable et se suspendrent
    // quand cela sera n�cessaire.
    mustExit = true;

    // On sort du programme.
    printf( "Le thread initial/principal s'arr�te.\n" );
    return EXIT_SUCCESS;
