#include "Render3D.h"

Render3D::Render3D(int width, int height) {
    Camera camera = {{0, 0, 0}, {0, 0, 0}};
    SCREEN_HEIGHT = height;
    SCREEN_WIDTH = width;
}

Vec2 Render3D::TransformPoint(Vec3 point){
    vector<vector<int>> a, b, c, d, e;
    a = {
        {1, 0, 0},
        {0, (int)cos(camera.rot.x), (int)sin(camera.rot.x)},
        {0, (int)-sin(camera.rot.x), (int)cos(camera.rot.x)}
    };

    b = {
        {(int)cos(camera.rot.y), 0, (int)-sin(camera.rot.y)},
        {0, 1, 0},
        {(int)sin(camera.rot.y), 0, (int)cos(camera.rot.y)}
    };

    c = {
        {(int)cos(camera.rot.z), (int)sin(camera.rot.z), 0},
        {(int)-sin(camera.rot.z), (int)cos(camera.rot.z), 0}
        {0, 0, 1}
    };

    d = {
        {point.x},
        {point.y},
        {point.z}
    };

    e = {
        {camera.pos.x},
        {camera.pos.y},
        {camera.pos.z},
    };
    Matrix *Ma = new Matrix(a);
    Matrix *Mb = new Matrix(b);
    Matrix *Mc = new Matrix(c);
    Matrix *Md = new Matrix(d);
    Matrix *Me = new Matrix(e);

    Matrix result = *Ma * *Mb * *Mc * (*Md - *Me);
    vector<vector<double>> res = result.getraw();

    Vec2 fin = {(SCREEN_WIDTH/2) * (int)res[0][0] / (int)res[0][2],
                (SCREEN_HEIGHT/2) * (int)res[0][1] / (int)res[0][2]};
    
    return fin;
}

void Render3D::RenderLine(Vec3 p1, Vec3 p2, SDL_Renderer *renderer) {
    Vec2 start;
    Vec2 end;

    start = TransformPoint(p1);
    end = TransformPoint(p2);

    SDL_RenderDrawLine(renderer, start.x, start.y, end.x, end.y);
}