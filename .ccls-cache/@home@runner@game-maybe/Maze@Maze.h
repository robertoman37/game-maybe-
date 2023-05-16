#include <SDL.h>
#include <iostream>
#include <list>
#include "../Wall/Wall.h"
#ifndef _Maze_H_
    #define _Maze_H_
class Maze{
    private:
        std::list<Wall> walls;
        int WINDOW_WIDTH;
        int WINDOW_HEIGHT;
    public:
        Maze(int Ww, int Wh);

        void Render(SDL_Renderer* renderer);
};
#endif