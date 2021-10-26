/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <touchgfx/TypedText.hpp>
#include <fonts/GeneratedFont.hpp>
#include <texts/TypedTextDatabase.hpp>

extern touchgfx::GeneratedFont& getFont_Asap_Regular_80_4bpp();
extern touchgfx::GeneratedFont& getFont_angsai_15_4bpp();
extern touchgfx::GeneratedFont& getFont_angsai_20_4bpp();
extern touchgfx::GeneratedFont& getFont_angsai_30_4bpp();
extern touchgfx::GeneratedFont& getFont_arial_19_8bpp();
extern touchgfx::GeneratedFont& getFont_arial_16_4bpp();
extern touchgfx::GeneratedFont& getFont_arial_11_4bpp();
extern touchgfx::GeneratedFont& getFont_arial_10_4bpp();

const touchgfx::Font* touchgfx_fonts[] =
{
    &(getFont_Asap_Regular_80_4bpp()),
    &(getFont_angsai_15_4bpp()),
    &(getFont_angsai_20_4bpp()),
    &(getFont_angsai_30_4bpp()),
    &(getFont_arial_19_8bpp()),
    &(getFont_arial_16_4bpp()),
    &(getFont_arial_11_4bpp()),
    &(getFont_arial_10_4bpp())
};

extern const touchgfx::TypedText::TypedTextData typedText_database_DEFAULT[];
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
const touchgfx::TypedText::TypedTextData typedText_database_DEFAULT[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    { 0, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 1, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 3, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 2, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 5, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 4, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 6, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 6, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 6, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 6, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 6, touchgfx::CENTER, touchgfx::TEXT_DIRECTION_LTR },
    { 6, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 7, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR },
    { 7, touchgfx::LEFT, touchgfx::TEXT_DIRECTION_LTR }
};

TEXT_LOCATION_FLASH_PRAGMA
const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[] TEXT_LOCATION_FLASH_ATTRIBUTE =
{
    typedText_database_DEFAULT
};

namespace TypedTextDatabase
{
const touchgfx::TypedText::TypedTextData* getInstance(touchgfx::LanguageId id)
{
    return typedTextDatabaseArray[id];
}

uint16_t getInstanceSize()
{
    return sizeof(typedText_database_DEFAULT) / sizeof(touchgfx::TypedText::TypedTextData);
}

const touchgfx::Font** getFonts()
{
    return touchgfx_fonts;
}

const touchgfx::Font* setFont(touchgfx::FontId fontId, const touchgfx::Font* font)
{
    const touchgfx::Font* old = touchgfx_fonts[fontId];
    touchgfx_fonts[fontId] = font;
    return old;
}

void resetFont(touchgfx::FontId fontId)
{
    switch (fontId)
    {
    case 0:
        touchgfx_fonts[0] = &(getFont_Asap_Regular_80_4bpp());
        break;
    case 1:
        touchgfx_fonts[1] = &(getFont_angsai_15_4bpp());
        break;
    case 2:
        touchgfx_fonts[2] = &(getFont_angsai_20_4bpp());
        break;
    case 3:
        touchgfx_fonts[3] = &(getFont_angsai_30_4bpp());
        break;
    case 4:
        touchgfx_fonts[4] = &(getFont_arial_19_8bpp());
        break;
    case 5:
        touchgfx_fonts[5] = &(getFont_arial_16_4bpp());
        break;
    case 6:
        touchgfx_fonts[6] = &(getFont_arial_11_4bpp());
        break;
    case 7:
        touchgfx_fonts[7] = &(getFont_arial_10_4bpp());
        break;
    }
}
}  // namespace TypedTextDatabase
