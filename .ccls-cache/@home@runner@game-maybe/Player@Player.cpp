#include "Player.h"

Player::Player(int Ww, int Wh) {
    pos[0] = 0;
    pos[1] = 0;
    WINDOW_WIDTH = Ww;
    WINDOW_HEIGHT = Wh;
}

bool Player::CheckEdge() {
    return  pos[1] != 1 ||
            pos[1] < WINDOW_HEIGHT - 10 ||
            pos[0] != 1 ||
            pos[0] < WINDOW_WIDTH - 10;
}

void Player::OnEvent(SDL_Event* Event) {
    if (Event->type == SDL_KEYDOWN){
        bool coll = CheckEdge();
        switch (Event->key.keysym.scancode) {
        case SDL_SCANCODE_W:
            if (coll) {
                pos[1]-=step;
            }
            break;
        case SDL_SCANCODE_S:
            if (coll) {
                pos[1]+=step;
            }
            break;
        case SDL_SCANCODE_A:
            if (coll) {
                pos[0]-=step;
            }
            break;
        case SDL_SCANCODE_D:
            if (coll) {
                pos[0]+=step;
            }
            break;
        default:
            break;
        }
    }
}

void Player::OnRender(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, 100, 0, 0, 255);
    SDL_RenderDrawLine(renderer, pos[0], pos[1], pos[0]+10, pos[1]);
    SDL_RenderDrawLine(renderer, pos[0]+10, pos[1], pos[0]+10, pos[1]+10);
    SDL_RenderDrawLine(renderer, pos[0]+10, pos[1]+10, pos[0], pos[1]+10);
    SDL_RenderDrawLine(renderer, pos[0], pos[1]+10, pos[0], pos[1]);
}