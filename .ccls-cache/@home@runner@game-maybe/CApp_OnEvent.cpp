#include "CApp.h"

void CApp::OnEvent(SDL_Event *Event) {
    switch(Event->type) {
        case SDL_QUIT:
            running = false;
            break;
        case SDL_KEYDOWN:
            switch (Event->key.keysym.scancode) {
                case SDL_SCANCODE_W:
                    if (spot[1] != 1) {
                        spot[1]--;
                    }
                    break;
                case SDL_SCANCODE_S:
                    if (spot[1] < WINDOW_HEIGHT - 5) {
                        spot[1]++;
                    }
                    break;
                case SDL_SCANCODE_A:
                    if (spot[0] != 1) {
                        spot[0]--;
                    }
                    break;
                case SDL_SCANCODE_D:
                    if (spot[0] < WINDOW_WIDTH - 5) {
                        spot[0]++;
                    }
                    break;
                default:
                    break;
            }
        default:
            break;
    }
}