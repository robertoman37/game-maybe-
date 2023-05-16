#include <iostream>
#ifndef _Wall_H_
    #define _Wall_H_
        struct Wall {
            int x1;
            int y1;
            int x2;
            int y2;
            int color[3];

            Wall(int pos[4], int col[3]) {
                x1 = pos[0];
                y1 = pos[1];
                x2 = pos[2];
                y2 = pos[3];
                for (int i = 0; i < 3; i++) {
                    color[i] = col[i];
                }
            }

            /*
            where corresponds to what axis it will place the size.
            true = horizontal
            false = vertical
            the other dimension will just default to 
            */
            Wall(int pos[2], int size, bool where, int col[3]) {
                x1 = pos[0];
                y1 = pos[1];
                if (where) {
                    
                }
            }
        };
#endif