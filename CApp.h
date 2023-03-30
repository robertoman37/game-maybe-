#include <SDL.h>
#include <iostream>
#ifndef _CApp_H_
    #define _CApp_H_
class CApp {
    private:
        bool         running;
        SDL_Surface* screenSurface;
        SDL_Window*  window;
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