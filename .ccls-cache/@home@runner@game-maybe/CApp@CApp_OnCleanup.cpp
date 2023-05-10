#include "CApp.h"

void CApp::OnCleanup() {
    window = NULL;
    
    SDL_Quit();
}