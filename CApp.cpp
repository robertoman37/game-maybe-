#include "CApp.h"

CApp::CApp() {
    running = true;
}
int CApp::OnExecute(){
    if(!OnInit()) {
        return -1;
    }

    SDL_Event Event;

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