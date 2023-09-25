#ifndef RAYLIBSTARTER_SPRITE_H
#define RAYLIBSTARTER_SPRITE_H
#include "raylib.h"

namespace game {
    class Sprite {
    public:
        int pos_x_;
        int pos_y_;
        Texture2D texture_;

        Sprite(int pos_x, int pos_y, Texture2D texture) : pos_x_(pos_x), pos_y_(pos_y), texture_(texture){}
        Sprite(int pos_x, int pos_y, const char* texture_path) : Sprite(pos_x, pos_y, LoadTexture(texture_path)){}
        ~Sprite() { UnloadTexture(texture_);}
    };
}

#endif //RAYLIBSTARTER_SPRITE_H
