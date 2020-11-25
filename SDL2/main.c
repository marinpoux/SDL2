#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

#define WINDOW_HEIGHT 1024
#define WINDOW_WIDTH 1720

SDL_Window *pWindow=NULL;
SDL_Renderer *pRenderer=NULL;

//prototype


int main(int argc, char *argv[])
{
    if(SDL_Init(SDL_INIT_EVERYTHING)!=0){

        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return 1;
    } else {

        pWindow=SDL_CreateWindow(   //http://wiki.libsdl.org/SDL_CreateWindow
        "An SDL2 window",           // window title
        0,                          // initial x position
        0,                          // initial y position
        WINDOW_WIDTH,               // width, in pixels
        WINDOW_HEIGHT,              // height, in pixels
        SDL_WINDOW_SHOWN            // flags
        );

        if(pWindow){

            pRenderer=SDL_CreateRenderer(pWindow, -1, SDL_RENDERER_PRESENTVSYNC);
        }
    }

    SDL_Delay(1000);    //fenetre reste ouverte 1000ms (1s)

    SDL_Quit();

    return 0;
}
