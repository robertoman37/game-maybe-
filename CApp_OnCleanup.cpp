#include "CApp.h"

void CApp::OnCleanup() {
    screenSurface = NULL;
    window = NULL;
    
    SDL_Quit();
}