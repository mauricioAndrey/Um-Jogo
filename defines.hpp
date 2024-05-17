#ifndef DEFINES_HPP
#define DEFINES_HPP

#include "raylib.h"

#define square 32

//----------------ENUMS-----------------//


//----------------STRUCTS----------------//


//----------------DESENHANDO---------------//
namespace defines
{
    inline void drawRectangle(int x, int y, int width, int height, Color color) {
        DrawRectangle(x, y, width, height, color);
    }
    inline void drawText(const char *text, int x, int y, int fontSize, Color color) {
        DrawText(text, x, y, fontSize, color);
    }


} // namespace defines


#endif