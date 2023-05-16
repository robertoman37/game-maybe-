#include <SDL.h>
#include <iostream>
#ifndef _Player_H_
    #define _Player_H_
class Player{
    private:
        int pos[2];
        int WINDOW_WIDTH;
        int WINDOW_HEIGHT;
        int step = 5;
    public:
        Player(int Ww, int Wh);

        void OnEvent(SDL_Event* Event);

        void OnRender(SDL_Renderer* renderer);

        bool CheckEdge();

        bool CheckWall();
};
#endif