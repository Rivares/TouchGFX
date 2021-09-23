/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/control_window_screen/Control_WindowViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

Control_WindowViewBase::Control_WindowViewBase()
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    background.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));
    background.setPosition(0, 0, 480, 272);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    b_toNextScreen.setXY(234, 187);
    b_toNextScreen.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_NEXT_ARROW_32_ID));
    b_toNextScreen.setIconXY(22, 15);

    b_toPrevScreen.setXY(180, 187);
    b_toPrevScreen.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    b_toPrevScreen.setIconXY(22, 15);

    add(__background);
    add(background);
    add(b_toNextScreen);
    add(b_toPrevScreen);
}

void Control_WindowViewBase::setupScreen()
{

}
