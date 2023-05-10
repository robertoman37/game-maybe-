#include "CApp.h"

bool CApp::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }
    window = SDL_CreateWindow("The window",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED, 
                              WINDOW_WIDTH,
                              WINDOW_HEIGHT, 
                              SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);
    if(window==NULL) {
        return false;
    }
    /*
    screenSurface = SDL_GetWindowSurface(window);
    if (screenSurface == NULL) {
        return false;
    }
    */
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(renderer == NULL)
        return false;
    
    return true;
}