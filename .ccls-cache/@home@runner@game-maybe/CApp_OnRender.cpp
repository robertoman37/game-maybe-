#include "CApp.h"

void CApp::OnRender() {
    //render test
    //SDL_FillRect(window, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_SetRenderDrawColor(renderer, 250, 250, 250, 255);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderDrawLine(renderer, spot[0], spot[1], spot[0]+5, spot[1]);
    SDL_RenderDrawLine(renderer, spot[0]+5, spot[1], spot[0]+5, spot[1]+5);
    SDL_RenderDrawLine(renderer, spot[0]+5, spot[1]+5, spot[0], spot[1]+5);
    SDL_RenderDrawLine(renderer, spot[0], spot[1]+5, spot[0], spot[1]);
    SDL_UpdateWindowSurface(window);
    SDL_RenderPresent(renderer);
}