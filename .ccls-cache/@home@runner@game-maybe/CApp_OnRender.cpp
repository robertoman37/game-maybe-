#include "CApp.h"

void CApp::OnRender() {
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_RenderDrawLine(renderer, 0, 0, 100, 100);
    SDL_UpdateWindowSurface(window);
    SDL_RenderPresent(renderer);
}