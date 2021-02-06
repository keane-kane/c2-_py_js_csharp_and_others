#include <SDL.h>
#include <stdlib.h>
#include <stdio.h>


/*
SDL_RENDERER_SOFWARE
SDL_RENDERER_ACCELERATED
SDL_RENDERER_PRESENTVSYNC
SDL_RENDERER_TARGETTEXTURE
SDL_RendererClear()
SDL_RendererPresent()
SDL_CreateWindowAndRenderer()
if(SDL_SetRenderDrawColor(render, 125, 54 ,145, SDL_ALPHA_OPAQUE) != 0)
               SDL_ExitWithError("Impossible de changer la couleur");
    SDL_Rect rectangle;
    rectangle.x = 300;
    rectangle.y = 300;
    rectangle.w = 200;
    rectangle.h = 200;
        
    SDL_RenderFillRect(render, &rectangle);
        
    SDL_Surface *image =NULL;

    image = SDL_LoadBMP("src/image.bmp");
      if (image == NULL)
   {
       SDL_ExitWithError("Initialisation de rendu");
   }

    texture= SDL_CreateTextureFromSurface(render, image);
    SDL_FreeSurface(image);
    SDL_Rect rectangle;

    SDL_QueryTexture(texture, NULL,NULL,&rectangle.w, &rectangle.h);
     
     rectangle.x =(800- rectangle.w)/2;
    rectangle.y =(600- rectangle.h)/2;

    SDL_RenderCopy(render, texture, NULL, &rectangle);


    SDL_RenderPresent(render);
    SDL_Delay(5000);
     
*/





void SDL_ExitWithError(const char *message);

int main(int argc, char **argv)
{
   SDL_Window *window =NULL;
   SDL_Texture *texture = NULL;
   SDL_Renderer *render = NULL;



   if(SDL_Init(SDL_INIT_VIDEO) !=0)
   {
      SDL_ExitWithError("Error d'initialisation");

   }
/*=========================================================*/

   window = SDL_CreateWindow("Mon titre de fenetre", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600 ,0);
   if(window == NULL)
   {
       SDL_ExitWithError("Initialisation de video echouee");
   }

   render = SDL_CreateRenderer(window , -1, SDL_RENDERER_SOFTWARE);
   if (render == NULL)
   {
       SDL_ExitWithError("Initialisation de rendu");
   }
   /*===============================================================*/
    SDL_bool booleen = SDL_TRUE;
while (booleen)
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_KEYDOWN:

              switch (event.key.keysym.sym)
             {   
                 case SDLK_a:
                 printf("la touche B est presser\n");
                  continue;
            
                default:
                continue;
             }
            case SDL_KEYUP:

              switch (event.key.keysym.sym)
             {   
                 case SDLK_a:
                 printf("la touche A est relacher\n");
                  continue;
            
                default:
                continue;
             }
           case SDL_QUIT:
              booleen = SDL_FALSE;
              break;

        default:
              break;
        }
    }
}
    
   /*===============================================================*/
   SDL_DestroyRenderer(render);
   SDL_DestroyWindow(window);
   SDL_Quit();

   return EXIT_SUCCESS;
}
void SDL_ExitWithError(const char *message)
{
     SDL_Log("Error : %s > %s", SDL_GetError());
     SDL_Quit();
     exit(EXIT_FAILURE);
}