#include "CApp.h"

CApp::CApp() {
    running = true;
}
int CApp::OnExecute(){
    if(!OnInit()) {
        return -1;
    }

    SDL_Event Event;
    //Test stuff, delete this later

    for (int i = 0; i < WINDOW_WIDTH) {
        for (int j= 0; j < WINDOW_HEIGHT)
    }
    
    while (running) {
        while(SDL_PollEvent(&Event)){
            OnEvent(&Event);
        }

        OnLoop();
        OnRender();
    }

    OnCleanup();
    return 0;
}
int main(int argc, char* argv[]) {
    CApp theApp;
    return theApp.OnExecute();
}