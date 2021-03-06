/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef APPLICATIONFONTPROVIDER_HPP
#define APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

namespace touchgfx
{
    class FlashDataReader;
}

struct Typography
{
    static const touchgfx::FontId DEFAULT = 0;
    static const touchgfx::FontId TYPOGRAPHY_00 = 1;
    static const touchgfx::FontId TYPOGRAPHY_01 = 2;
    static const touchgfx::FontId TYPOGRAPHY_02 = 3;
    static const touchgfx::FontId T_AI = 4;
    static const touchgfx::FontId DATE_TIME = 5;
};

struct TypographyFontIndex
{
    static const touchgfx::FontId DEFAULT = 0;       // Asap_Regular_80_4bpp
    static const touchgfx::FontId TYPOGRAPHY_00 = 1; // angsai_15_4bpp
    static const touchgfx::FontId TYPOGRAPHY_01 = 2; // angsai_20_4bpp
    static const touchgfx::FontId TYPOGRAPHY_02 = 3; // angsai_30_4bpp
    static const touchgfx::FontId T_AI = 4;          // arial_19_8bpp
    static const touchgfx::FontId DATE_TIME = 5;     // arial_16_4bpp
    static const uint16_t NUMBER_OF_FONTS = 6;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
    virtual touchgfx::Font* getFont(touchgfx::FontId typography);

    static void setFlashReader(touchgfx::FlashDataReader* /* flashReader */) { }
    static touchgfx::FlashDataReader* getFlashReader() { return 0; }
};

#endif // APPLICATIONFONTPROVIDER_HPP
