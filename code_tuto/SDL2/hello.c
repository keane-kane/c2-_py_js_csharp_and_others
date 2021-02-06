#include <stdio.h>
#include <SDL.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void pause();
int main(int argc, char **argv)
{
	SDL_Rect position;
	SDL_Window *window =NULL;
   SDL_Texture *texture = NULL;
   SDL_Renderer *render = NULL;


	position.x = 0;
	position.y = 0;
	
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("Mon titre de fenetre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600 ,0);
	
	SDL_RenderFillRect(render, &window);
        
    SDL_Surface *image =NULL;

    image = SDL_LoadBMP("imagee.bmp");
      if (image == NULL)
   {
       SDL_ExitWithError("Initialisation de rendu");
   }

    texture= SDL_CreateTextureFromSurface(render, image);
    SDL_FreeSurface(image);
    SDL_Rect rectangle;

    SDL_QueryTexture(texture, NULL,NULL,&position.w, &position.h);
     
     position.x =(800- position.w)/2;
    position.y =(600- position.h)/2;

    SDL_RenderCopy(render, texture, NULL, &position);


    SDL_RenderPresent(render);
	
//window = SDL_SetVideoMode(800,600,32,NULL);
	pause();
	
	SDL_Quit();
	
}

void pause()
{
		SDL_Event event;
int	continuer = 1;
	while(continuer)
	{
	SDL_WaitEvent(&event);
	switch(event.type){
	
		case SDL_QUIT:
			continuer = 0;
			break;
}
		
	}
	
	
}
