#include "CApp.h"

CApp::CApp() : player(1920, 1080){
    running = true;
    
}
int CApp::OnExecute(){
    if(!OnInit()) {
        std::cout << SDL_GetError();
        return -1;
    }

    SDL_Event Event;
    //Test stuff, delete this later

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