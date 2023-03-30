#include "CApp.h"

void CApp::OnCleanup() {
    Surf_Display = NULL;
    
    SDL_Quit();
}