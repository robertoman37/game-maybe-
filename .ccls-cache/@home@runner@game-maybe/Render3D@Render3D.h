#include <SDL.h>
#include <iostream>
#include <cmath>
#include "../Matrix/Matrix.h"
#include "../Camera/Camera.h"
#include "../Vec/Vec2.h"
#ifndef _Render3D_H_
    #define _Render3D_H_
using namespace std;
class Render3D {
    private:
        Camera camera;
        int SCREEN_HEIGHT;
        int SCREEN_WIDTH;
    public:
        Render3D(int height, int width);

        Vec2 TransformPoint(Vec3 point);

        void RenderLine(Vec3 p1, Vec3 p2, SDL_Renderer *renderer);

        void SetView(int rot[3], int pos[3]);
};
#endif