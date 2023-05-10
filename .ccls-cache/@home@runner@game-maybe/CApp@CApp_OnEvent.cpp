#include "CApp.h"

void CApp::OnEvent(SDL_Event *Event) {
    switch(Event->type) {
        case SDL_QUIT:
            running = false;
            break;
        case SDL_KEYDOWN:
            player.OnEvent(Event);
        default:
            break;
    }
}