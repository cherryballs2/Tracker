#include "config.h"
#include "gui-sdl.h"
#include <SDL2/SDL.h>

int init_gui() {
    SDL_Init(SDL_INIT_VIDEO && SDL_INIT_TIMER) ? ! 0 : -1;
    SDL_CreateWindow("btTracker", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_BORDERLESS);
    SDL_Window *window = SDL_CreateWindow("btTracker", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_BORDERLESS);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    return 0;
}