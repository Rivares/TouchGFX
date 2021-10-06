/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/discret__screen/Discret_ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Discret_ViewBase::Discret_ViewBase() :
    buttonCallback(this, &Discret_ViewBase::buttonCallbackHandler),
    updateItemCallback(this, &Discret_ViewBase::updateItemCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    slideMenu1.setState(touchgfx::SlideMenu::EXPANDED);
    slideMenu1.setVisiblePixelsWhenCollapsed(0);
    slideMenu1.setHiddenPixelsWhenExpanded(0);
    slideMenu1.setAnimationEasingEquation(touchgfx::EasingEquations::cubicEaseInOut);
    slideMenu1.setAnimationDuration(18);
    slideMenu1.setExpandedStateTimeout(180);
    slideMenu1.setXY(0, 0);

    background.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));
    background.setPosition(0, 0, 480, 272);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    digitalClock.setPosition(9, 12, 60, 27);
    digitalClock.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    digitalClock.setTypedText(touchgfx::TypedText(T_SINGLEUSEID25));
    digitalClock.displayLeadingZeroForHourIndicator(true);
    digitalClock.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock.setTime24Hour(10, 10, 0);

    t_AI_1.setPosition(160, 65, 68, 23);
    t_AI_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    t_AI_1.setLinespacing(0);
    Unicode::snprintf(t_AI_1Buffer, T_AI_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID36).getText());
    t_AI_1.setWildcard(t_AI_1Buffer);
    t_AI_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID35));

    t_AI_2.setPosition(160, 104, 68, 23);
    t_AI_2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    t_AI_2.setLinespacing(0);
    Unicode::snprintf(t_AI_2Buffer, T_AI_2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID54).getText());
    t_AI_2.setWildcard(t_AI_2Buffer);
    t_AI_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID53));

    t_AI_3.setPosition(160, 144, 68, 24);
    t_AI_3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    t_AI_3.setLinespacing(0);
    Unicode::snprintf(t_AI_3Buffer, T_AI_3_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID56).getText());
    t_AI_3.setWildcard(t_AI_3Buffer);
    t_AI_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID55));

    t_AI_4.setPosition(160, 184, 68, 23);
    t_AI_4.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    t_AI_4.setLinespacing(0);
    Unicode::snprintf(t_AI_4Buffer, T_AI_4_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID58).getText());
    t_AI_4.setWildcard(t_AI_4Buffer);
    t_AI_4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID57));

    b_Settings.setXY(414, 8);
    b_Settings.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_52_35_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_52_35_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_0_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_1_ID));
    b_Settings.setIconXY(5, 5);

    logo.setBitmap(touchgfx::Bitmap(BITMAP_DIR4069_BRAND6_ID));
    logo.setPosition(170, 15, 147, 20);
    logo.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    b_DI_1.setXY(9, 59);
    b_DI_1.setBitmaps(touchgfx::Bitmap(BITMAP_DI1_0_ID), touchgfx::Bitmap(BITMAP_DI1_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID));
    b_DI_1.setIconXY(0, 0);

    b_DI_2.setXY(9, 98);
    b_DI_2.setBitmaps(touchgfx::Bitmap(BITMAP_DI2_0_ID), touchgfx::Bitmap(BITMAP_DI2_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_DI_2.setIconXY(0, 0);

    b_DI_3.setXY(9, 138);
    b_DI_3.setBitmaps(touchgfx::Bitmap(BITMAP_DI3_0_ID), touchgfx::Bitmap(BITMAP_DI3_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_DI_3.setIconXY(0, 0);

    b_DI_4.setXY(9, 178);
    b_DI_4.setBitmaps(touchgfx::Bitmap(BITMAP_DI4_0_ID), touchgfx::Bitmap(BITMAP_DI4_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_DI_4.setIconXY(0, 0);

    b_DO_1.setXY(410, 59);
    b_DO_1.setBitmaps(touchgfx::Bitmap(BITMAP_DO1_0_ID), touchgfx::Bitmap(BITMAP_DO1_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_DO_1.setIconXY(0, 0);

    b_DO_2.setXY(410, 98);
    b_DO_2.setBitmaps(touchgfx::Bitmap(BITMAP_DO2_0_ID), touchgfx::Bitmap(BITMAP_DO2_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_DO_2.setIconXY(0, 0);

    b_DO_3.setXY(410, 138);
    b_DO_3.setBitmaps(touchgfx::Bitmap(BITMAP_DO3_0_ID), touchgfx::Bitmap(BITMAP_DO3_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_DO_3.setIconXY(0, 0);

    b_DO_4.setXY(410, 178);
    b_DO_4.setBitmaps(touchgfx::Bitmap(BITMAP_DO4_0_ID), touchgfx::Bitmap(BITMAP_DO4_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_DO_4.setIconXY(0, 0);

    ip_AI_1.setXY(296, 69);
    ip_AI_1.setProgressIndicatorPosition(2, 2, 100, 10);
    ip_AI_1.setRange(0, 100);
    ip_AI_1.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    ip_AI_1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    ip_AI_1.setBitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_TILING_PROGRESS_INDICATOR_FILL_STRIPED_THIN_HORIZONTAL_ID);
    ip_AI_1.setValue(60);
    ip_AI_1.setAnchorAtZero(false);

    tp_AI_3.setXY(296, 148);
    tp_AI_3.setProgressIndicatorPosition(0, 0, 54, 20);
    tp_AI_3.setRange(0, 100);
    tp_AI_3.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    tp_AI_3.setNumberOfDecimals(1);
    tp_AI_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID70));
    tp_AI_3.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_TEXT_PROGRESS_BG_SQUARE_ID));
    tp_AI_3.setValue(70);

    ip_AI_2.setXY(296, 108);
    ip_AI_2.setProgressIndicatorPosition(2, 2, 100, 10);
    ip_AI_2.setRange(0, 100);
    ip_AI_2.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    ip_AI_2.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID));
    ip_AI_2.setBitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_TILING_PROGRESS_INDICATOR_FILL_STRIPED_THIN_HORIZONTAL_ID);
    ip_AI_2.setValue(60);
    ip_AI_2.setAnchorAtZero(false);

    tp_AI_4.setXY(294, 188);
    tp_AI_4.setProgressIndicatorPosition(0, 0, 54, 20);
    tp_AI_4.setRange(0, 100);
    tp_AI_4.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    tp_AI_4.setNumberOfDecimals(1);
    tp_AI_4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID71));
    tp_AI_4.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_TEXT_PROGRESS_BG_SQUARE_ID));
    tp_AI_4.setValue(70);

    lb_date.setXY(69, 12);
    lb_date.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    lb_date.setLinespacing(0);
    lb_date.setWildcard(touchgfx::TypedText(T_SINGLEUSEID72).getText());
    lb_date.resizeToCurrentText();
    lb_date.setTypedText(touchgfx::TypedText(T_TEXTID3));

    b_toControlScreen.setXY(137, 225);
    b_toControlScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_CONTROL_0_ID), touchgfx::Bitmap(BITMAP_B_CONTROL_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toControlScreen.setIconXY(0, 0);
    b_toControlScreen.setAction(buttonCallback);

    b_toLoginScreen.setXY(66, 225);
    b_toLoginScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_LOGIN_0_ID), touchgfx::Bitmap(BITMAP_B_LOGIN_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toLoginScreen.setIconXY(0, 0);
    b_toLoginScreen.setAction(buttonCallback);

    b_toGraphicScreen.setXY(213, 225);
    b_toGraphicScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_GRAPHICS_0_ID), touchgfx::Bitmap(BITMAP_B_GRAPHICS_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toGraphicScreen.setIconXY(0, 0);
    b_toGraphicScreen.setAction(buttonCallback);

    b_toAnalyticScreen.setXY(288, 225);
    b_toAnalyticScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_ANALYTICS_0_ID), touchgfx::Bitmap(BITMAP_B_ANALYTICS_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toAnalyticScreen.setIconXY(0, 0);
    b_toAnalyticScreen.setAction(buttonCallback);

    b_toArchiveScreen.setXY(358, 225);
    b_toArchiveScreen.setBitmaps(touchgfx::Bitmap(BITMAP_B_ARHIVE_0_ID), touchgfx::Bitmap(BITMAP_B_ARHIVE_1_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_0_ID), touchgfx::Bitmap(BITMAP_EMPTY_ICON_BUTTON_1_ID));
    b_toArchiveScreen.setIconXY(0, 0);
    b_toArchiveScreen.setAction(buttonCallback);

    sw_unit_AI_1.setPosition(228, 59, 60, 35);
    sw_unit_AI_1.setHorizontal(false);
    sw_unit_AI_1.setCircular(false);
    sw_unit_AI_1.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unit_AI_1.setSwipeAcceleration(10);
    sw_unit_AI_1.setDragAcceleration(10);
    sw_unit_AI_1.setNumberOfItems(10);
    sw_unit_AI_1.setSelectedItemOffset(0);
    sw_unit_AI_1.setDrawableSize(140, 0);
    sw_unit_AI_1.setDrawables(sw_unit_AI_1ListItems, updateItemCallback);
    sw_unit_AI_1.animateToItem(0, 0);

    si_AI_1.setBitmap(touchgfx::Bitmap(BITMAP_T_AI_1_ID));
    si_AI_1.setPosition(79, 65, 81, 23);
    si_AI_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    si_AI_2.setBitmap(touchgfx::Bitmap(BITMAP_T_AI_2_ID));
    si_AI_2.setPosition(79, 104, 81, 23);
    si_AI_2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    si_AI_3.setBitmap(touchgfx::Bitmap(BITMAP_T_AI_3_ID));
    si_AI_3.setPosition(79, 144, 81, 23);
    si_AI_3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    si_AI_4.setBitmap(touchgfx::Bitmap(BITMAP_T_AI_4_ID));
    si_AI_4.setPosition(79, 184, 81, 23);
    si_AI_4.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    sw_unit_AI_2.setPosition(228, 99, 60, 34);
    sw_unit_AI_2.setHorizontal(false);
    sw_unit_AI_2.setCircular(false);
    sw_unit_AI_2.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unit_AI_2.setSwipeAcceleration(10);
    sw_unit_AI_2.setDragAcceleration(10);
    sw_unit_AI_2.setNumberOfItems(10);
    sw_unit_AI_2.setSelectedItemOffset(0);
    sw_unit_AI_2.setDrawableSize(140, 0);
    sw_unit_AI_2.setDrawables(sw_unit_AI_2ListItems, updateItemCallback);
    sw_unit_AI_2.animateToItem(0, 0);

    sw_unit_AI_3.setPosition(228, 139, 60, 34);
    sw_unit_AI_3.setHorizontal(false);
    sw_unit_AI_3.setCircular(false);
    sw_unit_AI_3.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unit_AI_3.setSwipeAcceleration(10);
    sw_unit_AI_3.setDragAcceleration(10);
    sw_unit_AI_3.setNumberOfItems(10);
    sw_unit_AI_3.setSelectedItemOffset(0);
    sw_unit_AI_3.setDrawableSize(140, 0);
    sw_unit_AI_3.setDrawables(sw_unit_AI_3ListItems, updateItemCallback);
    sw_unit_AI_3.animateToItem(0, 0);

    sw_unit_AI_4.setPosition(228, 179, 60, 34);
    sw_unit_AI_4.setHorizontal(false);
    sw_unit_AI_4.setCircular(false);
    sw_unit_AI_4.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unit_AI_4.setSwipeAcceleration(10);
    sw_unit_AI_4.setDragAcceleration(10);
    sw_unit_AI_4.setNumberOfItems(10);
    sw_unit_AI_4.setSelectedItemOffset(0);
    sw_unit_AI_4.setDrawableSize(140, 0);
    sw_unit_AI_4.setDrawables(sw_unit_AI_4ListItems, updateItemCallback);
    sw_unit_AI_4.animateToItem(0, 0);

    loggerSPI_1.setPosition(160, 38, 47, 27);
    loggerSPI_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    loggerSPI_1.setLinespacing(0);
    Unicode::snprintf(loggerSPI_1Buffer, LOGGERSPI_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID82).getText());
    loggerSPI_1.setWildcard(loggerSPI_1Buffer);
    loggerSPI_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID81));

    add(__background);
    add(slideMenu1);
    add(background);
    add(digitalClock);
    add(t_AI_1);
    add(t_AI_2);
    add(t_AI_3);
    add(t_AI_4);
    add(b_Settings);
    add(logo);
    add(b_DI_1);
    add(b_DI_2);
    add(b_DI_3);
    add(b_DI_4);
    add(b_DO_1);
    add(b_DO_2);
    add(b_DO_3);
    add(b_DO_4);
    add(ip_AI_1);
    add(tp_AI_3);
    add(ip_AI_2);
    add(tp_AI_4);
    add(lb_date);
    add(b_toControlScreen);
    add(b_toLoginScreen);
    add(b_toGraphicScreen);
    add(b_toAnalyticScreen);
    add(b_toArchiveScreen);
    add(sw_unit_AI_1);
    add(si_AI_1);
    add(si_AI_2);
    add(si_AI_3);
    add(si_AI_4);
    add(sw_unit_AI_2);
    add(sw_unit_AI_3);
    add(sw_unit_AI_4);
    add(loggerSPI_1);
}

void Discret_ViewBase::setupScreen()
{
    sw_unit_AI_1.initialize();
    for (int i = 0; i < sw_unit_AI_1ListItems.getNumberOfDrawables(); i++)
    {
        sw_unit_AI_1ListItems[i].initialize();
    }
    sw_unit_AI_2.initialize();
    for (int i = 0; i < sw_unit_AI_2ListItems.getNumberOfDrawables(); i++)
    {
        sw_unit_AI_2ListItems[i].initialize();
    }
    sw_unit_AI_3.initialize();
    for (int i = 0; i < sw_unit_AI_3ListItems.getNumberOfDrawables(); i++)
    {
        sw_unit_AI_3ListItems[i].initialize();
    }
    sw_unit_AI_4.initialize();
    for (int i = 0; i < sw_unit_AI_4ListItems.getNumberOfDrawables(); i++)
    {
        sw_unit_AI_4ListItems[i].initialize();
    }
}

void Discret_ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &b_toControlScreen)
    {
        //toControl
        //When b_toControlScreen clicked change screen to Control_
        //Go to Control_ with no screen transition
        application().gotoControl_ScreenNoTransition();
    }
    else if (&src == &b_toLoginScreen)
    {
        //toLogin
        //When b_toLoginScreen clicked change screen to Login_
        //Go to Login_ with no screen transition
        application().gotoLogin_ScreenNoTransition();
    }
    else if (&src == &b_toGraphicScreen)
    {
        //toGraphic
        //When b_toGraphicScreen clicked change screen to Graphic_1_
        //Go to Graphic_1_ with no screen transition
        application().gotoGraphic_1_ScreenNoTransition();
    }
    else if (&src == &b_toAnalyticScreen)
    {
        //toAnalytic
        //When b_toAnalyticScreen clicked change screen to Analytics_
        //Go to Analytics_ with no screen transition
        application().gotoAnalytics_ScreenNoTransition();
    }
    else if (&src == &b_toArchiveScreen)
    {
        //toArchive
        //When b_toArchiveScreen clicked change screen to Graphic_4_
        //Go to Graphic_4_ with no screen transition
        application().gotoGraphic_4_ScreenNoTransition();
    }
}

void Discret_ViewBase::updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &sw_unit_AI_1ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_units* cc = (cc_units*)d;
        sw_unit_AI_1UpdateItem(*cc, itemIndex);
    }
    if (items == &sw_unit_AI_2ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_units* cc = (cc_units*)d;
        sw_unit_AI_2UpdateItem(*cc, itemIndex);
    }
    if (items == &sw_unit_AI_3ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_units* cc = (cc_units*)d;
        sw_unit_AI_3UpdateItem(*cc, itemIndex);
    }
    if (items == &sw_unit_AI_4ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_units* cc = (cc_units*)d;
        sw_unit_AI_4UpdateItem(*cc, itemIndex);
    }
}
