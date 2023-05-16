#include <SDL.h>
#include <iostream>
#include "../Render3D/Render3D.h"
#ifndef _CApp_H_
    #define _CApp_H_
class CApp {
    private:
        Render3D      Renderer3D;
        bool          running;
        SDL_Surface*  screenSurface;
        SDL_Window*   window;
        SDL_Renderer* renderer;
        int           WINDOW_WIDTH  = 1920;
        int           WINDOW_HEIGHT = 1080;
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