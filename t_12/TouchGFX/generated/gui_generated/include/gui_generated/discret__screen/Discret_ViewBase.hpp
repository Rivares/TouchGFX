/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DISCRET_VIEWBASE_HPP
#define DISCRET_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/discret__screen/Discret_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/SlideMenu.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/containers/scrollers/ScrollWheelWithSelectionStyle.hpp>
#include <gui/containers/cc_unitsPure.hpp>
#include <touchgfx/containers/scrollers/ScrollWheel.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>

class Discret_ViewBase : public touchgfx::View<Discret_Presenter>
{
public:
    Discret_ViewBase();
    virtual ~Discret_ViewBase() {}
    virtual void setupScreen();

    virtual void sw_unitsAI_1UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsAI_1UpdateCenterItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsSP_AI_1UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsAI_2UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsAI_2UpdateCenterItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsAI_3UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsAI_3UpdateCenterItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsAI_4UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsAI_4UpdateCenterItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsSP_AI_2UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsSP_AI_3UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsSP_AI_3UpdateCenterItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsSP_AI_4UpdateItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

    virtual void sw_unitsSP_AI_4UpdateCenterItem(cc_unitsPure& item, int16_t itemIndex)
    {
        // Override and implement this function in Discret_
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::SlideMenu slideMenu1;
    touchgfx::ScalableImage background;
    touchgfx::BoxWithBorder bwb_AI_2;
    touchgfx::TextAreaWithOneWildcard t_AI_2;
    touchgfx::BoxWithBorder bwb_AI_3;
    touchgfx::BoxWithBorder bwb_AI_4;
    touchgfx::TextAreaWithOneWildcard t_AI_3;
    touchgfx::TextAreaWithOneWildcard t_AI_4;
    touchgfx::ButtonWithIcon b_Settings;
    touchgfx::ScalableImage logo;
    touchgfx::ButtonWithIcon b_toControlScreen;
    touchgfx::ButtonWithIcon b_toLoginScreen;
    touchgfx::ButtonWithIcon b_toGraphicScreen;
    touchgfx::ButtonWithIcon b_toAnalyticScreen;
    touchgfx::ButtonWithIcon b_toArchiveScreen;
    touchgfx::ToggleButton b_DI_1;
    touchgfx::ToggleButton b_DI_2;
    touchgfx::ToggleButton b_DI_3;
    touchgfx::ToggleButton b_DI_4;
    touchgfx::ToggleButton b_DO_1;
    touchgfx::ToggleButton b_DO_2;
    touchgfx::ToggleButton b_DO_3;
    touchgfx::ToggleButton b_DO_4;
    touchgfx::TextAreaWithOneWildcard lb_date;
    touchgfx::ScalableImage si_SP_AIs;
    touchgfx::TextAreaWithOneWildcard t_SP_AI_2;
    touchgfx::TextAreaWithOneWildcard t_SP_AI_3;
    touchgfx::TextAreaWithOneWildcard t_SP_AI_4;
    touchgfx::TextAreaWithOneWildcard lb_time;
    touchgfx::BoxWithBorder bwb_AI_1;
    touchgfx::TextAreaWithOneWildcard t_SP_AI_1;
    touchgfx::ScrollWheelWithSelectionStyle sw_unitsAI_1;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_1ListItems;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_1SelectedListItems;
    touchgfx::ScalableImage si_AIs;
    touchgfx::TextAreaWithOneWildcard t_AI_1;
    touchgfx::ScrollWheel sw_unitsSP_AI_1;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsSP_AI_1ListItems;
    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::ScrollWheelWithSelectionStyle sw_unitsAI_2;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_2ListItems;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_2SelectedListItems;
    touchgfx::ScrollWheelWithSelectionStyle sw_unitsAI_3;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_3ListItems;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_3SelectedListItems;
    touchgfx::ScrollWheelWithSelectionStyle sw_unitsAI_4;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_4ListItems;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsAI_4SelectedListItems;
    touchgfx::ScrollWheel sw_unitsSP_AI_2;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsSP_AI_2ListItems;
    touchgfx::ScrollWheelWithSelectionStyle sw_unitsSP_AI_3;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsSP_AI_3ListItems;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsSP_AI_3SelectedListItems;
    touchgfx::ScrollWheelWithSelectionStyle sw_unitsSP_AI_4;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsSP_AI_4ListItems;
    touchgfx::DrawableListItems<cc_unitsPure, 2> sw_unitsSP_AI_4SelectedListItems;
    touchgfx::Line line2;
    touchgfx::PainterRGB565 line2Painter;
    touchgfx::Line line3;
    touchgfx::PainterRGB565 line3Painter;
    touchgfx::Line line4;
    touchgfx::PainterRGB565 line4Painter;

    /*
     * Wildcard Buffers
     */
    static const uint16_t T_AI_2_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_AI_2Buffer[T_AI_2_SIZE];
    static const uint16_t T_AI_3_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_AI_3Buffer[T_AI_3_SIZE];
    static const uint16_t T_AI_4_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_AI_4Buffer[T_AI_4_SIZE];
    static const uint16_t LB_DATE_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_dateBuffer[LB_DATE_SIZE];
    static const uint16_t T_SP_AI_2_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_SP_AI_2Buffer[T_SP_AI_2_SIZE];
    static const uint16_t T_SP_AI_3_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_SP_AI_3Buffer[T_SP_AI_3_SIZE];
    static const uint16_t T_SP_AI_4_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_SP_AI_4Buffer[T_SP_AI_4_SIZE];
    static const uint16_t LB_TIME_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_timeBuffer[LB_TIME_SIZE];
    static const uint16_t T_SP_AI_1_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_SP_AI_1Buffer[T_SP_AI_1_SIZE];
    static const uint16_t T_AI_1_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_AI_1Buffer[T_AI_1_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Discret_ViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Discret_ViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // DISCRET_VIEWBASE_HPP
