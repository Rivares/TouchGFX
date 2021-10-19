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

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

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

    bwb_AI_2.setPosition(66, 100, 348, 31);
    bwb_AI_2.setColor(touchgfx::Color::getColorFrom24BitRGB(211, 211, 211));
    bwb_AI_2.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    bwb_AI_2.setBorderSize(1);

    t_AI_2.setPosition(75, 106, 60, 22);
    t_AI_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_AI_2.setLinespacing(0);
    Unicode::snprintf(t_AI_2Buffer, T_AI_2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID54).getText());
    t_AI_2.setWildcard(t_AI_2Buffer);
    t_AI_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID53));

    bwb_AI_3.setPosition(66, 140, 348, 31);
    bwb_AI_3.setColor(touchgfx::Color::getColorFrom24BitRGB(211, 211, 211));
    bwb_AI_3.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    bwb_AI_3.setBorderSize(1);

    bwb_AI_4.setPosition(66, 180, 348, 31);
    bwb_AI_4.setColor(touchgfx::Color::getColorFrom24BitRGB(211, 211, 211));
    bwb_AI_4.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    bwb_AI_4.setBorderSize(1);

    t_AI_3.setPosition(74, 146, 60, 22);
    t_AI_3.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_AI_3.setLinespacing(0);
    Unicode::snprintf(t_AI_3Buffer, T_AI_3_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID56).getText());
    t_AI_3.setWildcard(t_AI_3Buffer);
    t_AI_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID55));

    t_AI_4.setPosition(74, 186, 60, 22);
    t_AI_4.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_AI_4.setLinespacing(0);
    Unicode::snprintf(t_AI_4Buffer, T_AI_4_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID58).getText());
    t_AI_4.setWildcard(t_AI_4Buffer);
    t_AI_4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID57));

    b_Settings.setXY(414, 8);
    b_Settings.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_52_35_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_52_35_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_0_ID), touchgfx::Bitmap(BITMAP_SETTINGS_ICON_1_ID));
    b_Settings.setIconXY(5, 5);

    logo.setBitmap(touchgfx::Bitmap(BITMAP_DIR4069_BRAND6_ID));
    logo.setPosition(170, 8, 141, 15);
    logo.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

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

    b_DI_1.setXY(6, 59);
    b_DI_1.setBitmaps(touchgfx::Bitmap(BITMAP_DI1_0_ID), touchgfx::Bitmap(BITMAP_DI1_1_ID));

    b_DI_2.setXY(6, 98);
    b_DI_2.setBitmaps(touchgfx::Bitmap(BITMAP_DI2_0_ID), touchgfx::Bitmap(BITMAP_DI2_1_ID));

    b_DI_3.setXY(6, 138);
    b_DI_3.setBitmaps(touchgfx::Bitmap(BITMAP_DI3_0_ID), touchgfx::Bitmap(BITMAP_DI3_1_ID));

    b_DI_4.setXY(6, 178);
    b_DI_4.setBitmaps(touchgfx::Bitmap(BITMAP_DI4_0_ID), touchgfx::Bitmap(BITMAP_DI4_1_ID));

    b_DO_1.setXY(414, 59);
    b_DO_1.setBitmaps(touchgfx::Bitmap(BITMAP_DO1_0_ID), touchgfx::Bitmap(BITMAP_DO1_1_ID));

    b_DO_2.setXY(414, 98);
    b_DO_2.setBitmaps(touchgfx::Bitmap(BITMAP_DO2_0_ID), touchgfx::Bitmap(BITMAP_DO2_1_ID));

    b_DO_3.setXY(414, 138);
    b_DO_3.setBitmaps(touchgfx::Bitmap(BITMAP_DO3_0_ID), touchgfx::Bitmap(BITMAP_DO3_1_ID));

    b_DO_4.setXY(414, 178);
    b_DO_4.setBitmaps(touchgfx::Bitmap(BITMAP_DO4_0_ID), touchgfx::Bitmap(BITMAP_DO4_1_ID));

    lb_date.setPosition(78, 1, 75, 24);
    lb_date.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    lb_date.setLinespacing(0);
    Unicode::snprintf(lb_dateBuffer, LB_DATE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID84).getText());
    lb_date.setWildcard(lb_dateBuffer);
    lb_date.setTypedText(touchgfx::TypedText(T_SINGLEUSEID83));

    si_SP_AIs.setBitmap(touchgfx::Bitmap(BITMAP_T_SP_AI_ID));
    si_SP_AIs.setPosition(288, 35, 70, 24);
    si_SP_AIs.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    t_SP_AI_2.setPosition(250, 106, 60, 22);
    t_SP_AI_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_SP_AI_2.setLinespacing(0);
    Unicode::snprintf(t_SP_AI_2Buffer, T_SP_AI_2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID101).getText());
    t_SP_AI_2.setWildcard(t_SP_AI_2Buffer);
    t_SP_AI_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID100));

    t_SP_AI_3.setPosition(250, 146, 60, 22);
    t_SP_AI_3.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_SP_AI_3.setLinespacing(0);
    Unicode::snprintf(t_SP_AI_3Buffer, T_SP_AI_3_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID103).getText());
    t_SP_AI_3.setWildcard(t_SP_AI_3Buffer);
    t_SP_AI_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID102));

    t_SP_AI_4.setPosition(250, 185, 60, 22);
    t_SP_AI_4.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_SP_AI_4.setLinespacing(0);
    Unicode::snprintf(t_SP_AI_4Buffer, T_SP_AI_4_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID105).getText());
    t_SP_AI_4.setWildcard(t_SP_AI_4Buffer);
    t_SP_AI_4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID104));

    lb_time.setPosition(8, 1, 70, 24);
    lb_time.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    lb_time.setLinespacing(0);
    Unicode::snprintf(lb_timeBuffer, LB_TIME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID107).getText());
    lb_time.setWildcard(lb_timeBuffer);
    lb_time.setTypedText(touchgfx::TypedText(T_SINGLEUSEID106));

    bwb_AI_1.setPosition(66, 61, 348, 31);
    bwb_AI_1.setColor(touchgfx::Color::getColorFrom24BitRGB(211, 211, 211));
    bwb_AI_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    bwb_AI_1.setBorderSize(1);

    t_SP_AI_1.setPosition(250, 66, 60, 22);
    t_SP_AI_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_SP_AI_1.setLinespacing(0);
    Unicode::snprintf(t_SP_AI_1Buffer, T_SP_AI_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID99).getText());
    t_SP_AI_1.setWildcard(t_SP_AI_1Buffer);
    t_SP_AI_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID98));

    sw_unitsAI_1.setPosition(140, 65, 78, 26);
    sw_unitsAI_1.setHorizontal(false);
    sw_unitsAI_1.setCircular(false);
    sw_unitsAI_1.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsAI_1.setSwipeAcceleration(10);
    sw_unitsAI_1.setDragAcceleration(10);
    sw_unitsAI_1.setNumberOfItems(3);
    sw_unitsAI_1.setSelectedItemOffset(0);
    sw_unitsAI_1.setSelectedItemExtraSize(0, 0);
    sw_unitsAI_1.setSelectedItemMargin(0, 0);
    sw_unitsAI_1.setDrawableSize(96, 0);
    sw_unitsAI_1.setDrawables(sw_unitsAI_1ListItems, updateItemCallback,
                              sw_unitsAI_1SelectedListItems, updateItemCallback);
    sw_unitsAI_1.animateToItem(1, 0);

    si_AIs.setBitmap(touchgfx::Bitmap(BITMAP_T_AI_1_ID));
    si_AIs.setPosition(73, 35, 160, 24);
    si_AIs.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    t_AI_1.setPosition(74, 66, 60, 22);
    t_AI_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    t_AI_1.setLinespacing(0);
    Unicode::snprintf(t_AI_1Buffer, T_AI_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID36).getText());
    t_AI_1.setWildcard(t_AI_1Buffer);
    t_AI_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID35));

    sw_unitsSP_AI_1.setPosition(318, 66, 78, 26);
    sw_unitsSP_AI_1.setHorizontal(false);
    sw_unitsSP_AI_1.setCircular(false);
    sw_unitsSP_AI_1.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsSP_AI_1.setSwipeAcceleration(10);
    sw_unitsSP_AI_1.setDragAcceleration(10);
    sw_unitsSP_AI_1.setNumberOfItems(3);
    sw_unitsSP_AI_1.setSelectedItemOffset(0);
    sw_unitsSP_AI_1.setDrawableSize(96, 0);
    sw_unitsSP_AI_1.setDrawables(sw_unitsSP_AI_1ListItems, updateItemCallback);
    sw_unitsSP_AI_1.animateToItem(2, 0);

    line1.setPosition(240, 61, 40, 30);
    line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(0, 1);
    line1.setEnd(0, 50);
    line1.setLineWidth(1);
    line1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    sw_unitsAI_2.setPosition(140, 105, 78, 26);
    sw_unitsAI_2.setHorizontal(false);
    sw_unitsAI_2.setCircular(false);
    sw_unitsAI_2.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsAI_2.setSwipeAcceleration(10);
    sw_unitsAI_2.setDragAcceleration(10);
    sw_unitsAI_2.setNumberOfItems(3);
    sw_unitsAI_2.setSelectedItemOffset(0);
    sw_unitsAI_2.setSelectedItemExtraSize(0, 0);
    sw_unitsAI_2.setSelectedItemMargin(0, 0);
    sw_unitsAI_2.setDrawableSize(96, 0);
    sw_unitsAI_2.setDrawables(sw_unitsAI_2ListItems, updateItemCallback,
                              sw_unitsAI_2SelectedListItems, updateItemCallback);
    sw_unitsAI_2.animateToItem(1, 0);

    sw_unitsAI_3.setPosition(140, 145, 78, 26);
    sw_unitsAI_3.setHorizontal(false);
    sw_unitsAI_3.setCircular(false);
    sw_unitsAI_3.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsAI_3.setSwipeAcceleration(10);
    sw_unitsAI_3.setDragAcceleration(10);
    sw_unitsAI_3.setNumberOfItems(3);
    sw_unitsAI_3.setSelectedItemOffset(0);
    sw_unitsAI_3.setSelectedItemExtraSize(0, 0);
    sw_unitsAI_3.setSelectedItemMargin(0, 0);
    sw_unitsAI_3.setDrawableSize(96, 0);
    sw_unitsAI_3.setDrawables(sw_unitsAI_3ListItems, updateItemCallback,
                              sw_unitsAI_3SelectedListItems, updateItemCallback);
    sw_unitsAI_3.animateToItem(1, 0);

    sw_unitsAI_4.setPosition(140, 185, 78, 26);
    sw_unitsAI_4.setHorizontal(false);
    sw_unitsAI_4.setCircular(false);
    sw_unitsAI_4.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsAI_4.setSwipeAcceleration(10);
    sw_unitsAI_4.setDragAcceleration(10);
    sw_unitsAI_4.setNumberOfItems(3);
    sw_unitsAI_4.setSelectedItemOffset(0);
    sw_unitsAI_4.setSelectedItemExtraSize(0, 0);
    sw_unitsAI_4.setSelectedItemMargin(0, 0);
    sw_unitsAI_4.setDrawableSize(96, 0);
    sw_unitsAI_4.setDrawables(sw_unitsAI_4ListItems, updateItemCallback,
                              sw_unitsAI_4SelectedListItems, updateItemCallback);
    sw_unitsAI_4.animateToItem(1, 0);

    sw_unitsSP_AI_2.setPosition(318, 105, 78, 26);
    sw_unitsSP_AI_2.setHorizontal(false);
    sw_unitsSP_AI_2.setCircular(false);
    sw_unitsSP_AI_2.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsSP_AI_2.setSwipeAcceleration(10);
    sw_unitsSP_AI_2.setDragAcceleration(10);
    sw_unitsSP_AI_2.setNumberOfItems(3);
    sw_unitsSP_AI_2.setSelectedItemOffset(0);
    sw_unitsSP_AI_2.setDrawableSize(96, 0);
    sw_unitsSP_AI_2.setDrawables(sw_unitsSP_AI_2ListItems, updateItemCallback);
    sw_unitsSP_AI_2.animateToItem(2, 0);

    sw_unitsSP_AI_3.setPosition(316, 145, 78, 26);
    sw_unitsSP_AI_3.setHorizontal(false);
    sw_unitsSP_AI_3.setCircular(false);
    sw_unitsSP_AI_3.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsSP_AI_3.setSwipeAcceleration(10);
    sw_unitsSP_AI_3.setDragAcceleration(10);
    sw_unitsSP_AI_3.setNumberOfItems(3);
    sw_unitsSP_AI_3.setSelectedItemOffset(0);
    sw_unitsSP_AI_3.setSelectedItemExtraSize(0, 0);
    sw_unitsSP_AI_3.setSelectedItemMargin(0, 0);
    sw_unitsSP_AI_3.setDrawableSize(96, 0);
    sw_unitsSP_AI_3.setDrawables(sw_unitsSP_AI_3ListItems, updateItemCallback,
                              sw_unitsSP_AI_3SelectedListItems, updateItemCallback);
    sw_unitsSP_AI_3.animateToItem(1, 0);

    sw_unitsSP_AI_4.setPosition(316, 185, 78, 26);
    sw_unitsSP_AI_4.setHorizontal(false);
    sw_unitsSP_AI_4.setCircular(false);
    sw_unitsSP_AI_4.setEasingEquation(touchgfx::EasingEquations::backEaseOut);
    sw_unitsSP_AI_4.setSwipeAcceleration(10);
    sw_unitsSP_AI_4.setDragAcceleration(10);
    sw_unitsSP_AI_4.setNumberOfItems(3);
    sw_unitsSP_AI_4.setSelectedItemOffset(0);
    sw_unitsSP_AI_4.setSelectedItemExtraSize(0, 0);
    sw_unitsSP_AI_4.setSelectedItemMargin(0, 0);
    sw_unitsSP_AI_4.setDrawableSize(96, 0);
    sw_unitsSP_AI_4.setDrawables(sw_unitsSP_AI_4ListItems, updateItemCallback,
                              sw_unitsSP_AI_4SelectedListItems, updateItemCallback);
    sw_unitsSP_AI_4.animateToItem(1, 0);

    line1_1.setPosition(240, 100, 40, 30);
    line1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_1.setPainter(line1_1Painter);
    line1_1.setStart(0, 1);
    line1_1.setEnd(0, 50);
    line1_1.setLineWidth(1);
    line1_1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    line1_1_1.setPosition(240, 140, 40, 30);
    line1_1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_1_1.setPainter(line1_1_1Painter);
    line1_1_1.setStart(0, 1);
    line1_1_1.setEnd(0, 50);
    line1_1_1.setLineWidth(1);
    line1_1_1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    line1_1_1_1.setPosition(240, 180, 40, 30);
    line1_1_1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_1_1_1.setPainter(line1_1_1_1Painter);
    line1_1_1_1.setStart(0, 1);
    line1_1_1_1.setEnd(0, 50);
    line1_1_1_1.setLineWidth(1);
    line1_1_1_1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    add(__background);
    add(slideMenu1);
    add(background);
    add(bwb_AI_2);
    add(t_AI_2);
    add(bwb_AI_3);
    add(bwb_AI_4);
    add(t_AI_3);
    add(t_AI_4);
    add(b_Settings);
    add(logo);
    add(b_toControlScreen);
    add(b_toLoginScreen);
    add(b_toGraphicScreen);
    add(b_toAnalyticScreen);
    add(b_toArchiveScreen);
    add(b_DI_1);
    add(b_DI_2);
    add(b_DI_3);
    add(b_DI_4);
    add(b_DO_1);
    add(b_DO_2);
    add(b_DO_3);
    add(b_DO_4);
    add(lb_date);
    add(si_SP_AIs);
    add(t_SP_AI_2);
    add(t_SP_AI_3);
    add(t_SP_AI_4);
    add(lb_time);
    add(bwb_AI_1);
    add(t_SP_AI_1);
    add(sw_unitsAI_1);
    add(si_AIs);
    add(t_AI_1);
    add(sw_unitsSP_AI_1);
    add(line1);
    add(sw_unitsAI_2);
    add(sw_unitsAI_3);
    add(sw_unitsAI_4);
    add(sw_unitsSP_AI_2);
    add(sw_unitsSP_AI_3);
    add(sw_unitsSP_AI_4);
    add(line1_1);
    add(line1_1_1);
    add(line1_1_1_1);
}

void Discret_ViewBase::setupScreen()
{
    sw_unitsAI_1.initialize();
    for (int i = 0; i < sw_unitsAI_1ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_1ListItems[i].initialize();
    }
    for (int i = 0; i < sw_unitsAI_1SelectedListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_1SelectedListItems[i].initialize();
    }
    sw_unitsSP_AI_1.initialize();
    for (int i = 0; i < sw_unitsSP_AI_1ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsSP_AI_1ListItems[i].initialize();
    }
    sw_unitsAI_2.initialize();
    for (int i = 0; i < sw_unitsAI_2ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_2ListItems[i].initialize();
    }
    for (int i = 0; i < sw_unitsAI_2SelectedListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_2SelectedListItems[i].initialize();
    }
    sw_unitsAI_3.initialize();
    for (int i = 0; i < sw_unitsAI_3ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_3ListItems[i].initialize();
    }
    for (int i = 0; i < sw_unitsAI_3SelectedListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_3SelectedListItems[i].initialize();
    }
    sw_unitsAI_4.initialize();
    for (int i = 0; i < sw_unitsAI_4ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_4ListItems[i].initialize();
    }
    for (int i = 0; i < sw_unitsAI_4SelectedListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsAI_4SelectedListItems[i].initialize();
    }
    sw_unitsSP_AI_2.initialize();
    for (int i = 0; i < sw_unitsSP_AI_2ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsSP_AI_2ListItems[i].initialize();
    }
    sw_unitsSP_AI_3.initialize();
    for (int i = 0; i < sw_unitsSP_AI_3ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsSP_AI_3ListItems[i].initialize();
    }
    for (int i = 0; i < sw_unitsSP_AI_3SelectedListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsSP_AI_3SelectedListItems[i].initialize();
    }
    sw_unitsSP_AI_4.initialize();
    for (int i = 0; i < sw_unitsSP_AI_4ListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsSP_AI_4ListItems[i].initialize();
    }
    for (int i = 0; i < sw_unitsSP_AI_4SelectedListItems.getNumberOfDrawables(); i++)
    {
        sw_unitsSP_AI_4SelectedListItems[i].initialize();
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
        //When b_toArchiveScreen clicked change screen to Archive_
        //Go to Archive_ with no screen transition
        application().gotoArchive_ScreenNoTransition();
    }
}

void Discret_ViewBase::updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex)
{
    if (items == &sw_unitsAI_1ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_1UpdateItem(*cc, itemIndex);
    }
    else if (items == &sw_unitsAI_1SelectedListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_1UpdateCenterItem(*cc, itemIndex);
    }
    if (items == &sw_unitsSP_AI_1ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsSP_AI_1UpdateItem(*cc, itemIndex);
    }
    if (items == &sw_unitsAI_2ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_2UpdateItem(*cc, itemIndex);
    }
    else if (items == &sw_unitsAI_2SelectedListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_2UpdateCenterItem(*cc, itemIndex);
    }
    if (items == &sw_unitsAI_3ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_3UpdateItem(*cc, itemIndex);
    }
    else if (items == &sw_unitsAI_3SelectedListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_3UpdateCenterItem(*cc, itemIndex);
    }
    if (items == &sw_unitsAI_4ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_4UpdateItem(*cc, itemIndex);
    }
    else if (items == &sw_unitsAI_4SelectedListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsAI_4UpdateCenterItem(*cc, itemIndex);
    }
    if (items == &sw_unitsSP_AI_2ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsSP_AI_2UpdateItem(*cc, itemIndex);
    }
    if (items == &sw_unitsSP_AI_3ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsSP_AI_3UpdateItem(*cc, itemIndex);
    }
    else if (items == &sw_unitsSP_AI_3SelectedListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsSP_AI_3UpdateCenterItem(*cc, itemIndex);
    }
    if (items == &sw_unitsSP_AI_4ListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsSP_AI_4UpdateItem(*cc, itemIndex);
    }
    else if (items == &sw_unitsSP_AI_4SelectedListItems)
    {
        touchgfx::Drawable* d = items->getDrawable(containerIndex);
        cc_unitsPure* cc = (cc_unitsPure*)d;
        sw_unitsSP_AI_4UpdateCenterItem(*cc, itemIndex);
    }
}
