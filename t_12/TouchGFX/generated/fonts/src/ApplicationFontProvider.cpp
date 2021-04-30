/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <fonts/ApplicationFontProvider.hpp>
#include <fonts/GeneratedFont.hpp>
#include <texts/TypedTextDatabase.hpp>

touchgfx::Font* ApplicationFontProvider::getFont(touchgfx::FontId typography)
{
    switch (typography)
    {
    case Typography::DEFAULT:
        // Asap_Regular_80_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
    case Typography::TYPOGRAPHY_00:
        // angsai_15_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[1]);
    case Typography::TYPOGRAPHY_01:
        // angsai_20_4bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[2]);
    default:
        return 0;
    }
}
