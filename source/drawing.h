#pragma once

#include "pp2d/pp2d.h"

enum Colors {
    COLOR_BACKGROUND = ABGR8(255, 0xAC, 0xD5, 0xFF),

    COLOR_FOREGROUD = RGBA8(0xCC, 0xCC, 0xCC, 255),
    COLOR_UNSELECTABLE = RGBA8(0x80, 0x80, 0x80, 255),
    COLOR_CURSOR = RGBA8(0xFF, 0xD0, 0x6D, 255),
    COLOR_OLD_CURSOR = RGBA8(0xFF, 0xBB, 0x91, 255),

    COLOR_BLACK = RGBA8(0, 0, 0, 255),
    COLOR_WHITE = RGBA8(255, 255, 255, 255),
};

enum Textures {
    TEXTURE_FONT_RESERVED = 1,
    TEXTURE_SAVE,
    TEXTURE_WRITE,
    TEXTURE_ARROW_UP,
    TEXTURE_HIDE,
    TEXTURE_DELETE,
    TEXTURE_ARROW_DOWN,
};
