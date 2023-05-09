#include <SDL.h>
#include <iostream>
#ifndef _CApp_H_
    #define _CApp_H_
class CApp {
    private:
        bool          running;
        SDL_Surface*  screenSurface;
        SDL_Window*   window;
        SDL_Renderer* renderer;
        const int     WINDOW_WIDTH  = 340;
        const int     WINDOW_HEIGHT = 480;
        int           spot[2] = {0, 0};
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