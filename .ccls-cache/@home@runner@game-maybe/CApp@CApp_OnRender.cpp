#include "CApp.h"

void CApp::OnRender() {
    //render test
    //SDL_FillRect(window, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_SetRenderDrawColor(renderer, 250, 250, 250, 255);
    SDL_RenderClear(renderer);
    player.OnRender(renderer);
    SDL_UpdateWindowSurface(window);
    SDL_RenderPresent(renderer);
}