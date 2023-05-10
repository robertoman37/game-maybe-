#include <SDL.h>
#include <iostream>
#include "Player.h"
#ifndef _CApp_H_
    #define _CApp_H_
class CApp {
    private:
        bool          running;
        SDL_Surface*  screenSurface;
        SDL_Window*   window;
        SDL_Renderer* renderer;
        int           WINDOW_WIDTH  = 1920;
        int           WINDOW_HEIGHT = 1080;
        int           spot[2] = {0, 0};
        Player        player;
    public:
        CApp();

        int OnExecute();

        bool OnInit();

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();
};
#endif