#include <stdio.h>
#include <stdlib.h>
#include "SDL.h"
#include <string.h>
/*for(i = 0; i <= 255; i++)
        lignes[i] = SDL_CreateRGBSurface(SDL_HWSURFACE,640, 1, 32, 0, 0, 0, 0);


    SDL_WM_SetCaption("Le degradee en SDL",NULL)

    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));

    for(i = 0; i<= 255; i++)
    {
        position.x = 0;
        position.y = 0;
        SDL_FillRect(lignes[i], NULL, SDL_MapRGB(ecran->format, i, i, i));
        SDL_BlitSurface(lignes[i], NULL, ecran, &position);

    }
    SDL_Flip(ecran);
    SDL_Delay(6000);

    for(i =0 ; i <=255; i++)
    {
        SDL_FreeSurface(lignes[i]);

    }*/
int main(int argc , char *argv[])
{

    SDL_Surface *ecran = NULL, *imageFond = NULL;
    SDL_Rect position;

    position.x = 0;
    position.y = 0;


    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(800, 600,32, SDL_HWSURFACE);
    SDL_WM_SetCaption("Le degradee en SDL",NULL)

    imageF = SDL_LoadBMP("src/image.bmp");

    SDL_BlitSurface(imageF, NULL, ecran, &position);

    SDL_Flip(ecran);
    SDL_Delay(6000);

    SDL_FreeSurface(imageF);
    SDL_Quit();
    return EXIT_SUCCESS;
}
