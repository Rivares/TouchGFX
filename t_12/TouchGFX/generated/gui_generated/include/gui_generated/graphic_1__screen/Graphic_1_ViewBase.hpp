/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GRAPHIC_1_VIEWBASE_HPP
#define GRAPHIC_1_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/graphic_1__screen/Graphic_1_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/graph/GraphScroll.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/containers/scrollers/ScrollWheel.hpp>
#include <gui/containers/cc_units.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class Graphic_1_ViewBase : public touchgfx::View<Graphic_1_Presenter>
{
public:
    Graphic_1_ViewBase();
    virtual ~Graphic_1_ViewBase() {}
    virtual void setupScreen();

    virtual void sw_unitsAI_1UpdateItem(cc_units& item, int16_t itemIndex)
    {
        // Override and implement this function in Graphic_1_
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage background;
    touchgfx::TextAreaWithOneWildcard t_AI_1;
    touchgfx::ButtonWithIcon b_toGraphic_2_Screen;
    touchgfx::ButtonWithIcon b_toGraphic_4_Screen;
    touchgfx::GraphScroll<6> dg_AI_1;
    touchgfx::GraphElementLine dg_AI_1Line1;
    touchgfx::PainterRGB565 dg_AI_1Line1Painter;
    touchgfx::GraphElementGridX dg_AI_1MajorXAxisGrid;
    touchgfx::GraphElementGridY dg_AI_1MajorYAxisGrid;
    touchgfx::GraphLabelsX dg_AI_1MajorXAxisLabel;
    touchgfx::GraphLabelsY dg_AI_1MajorYAxisLabel;
    touchgfx::ButtonWithIcon b_toControlScreen;
    touchgfx::ButtonWithIcon b_toLoginScreen;
    touchgfx::ButtonWithIcon b_toDiscretScreen;
    touchgfx::ButtonWithIcon b_toAnalyticScreen;
    touchgfx::ButtonWithIcon b_toArchiveScreen;
    touchgfx::ScalableImage si_title_AI_1;
    touchgfx::ScrollWheel sw_unitsAI_1;
    touchgfx::DrawableListItems<cc_units, 2> sw_unitsAI_1ListItems;
    touchgfx::ButtonWithIcon b_Settings;
    touchgfx::ToggleButton b_DI_1;
    touchgfx::ToggleButton b_DI_2;
    touchgfx::ToggleButton b_DI_3;
    touchgfx::ToggleButton b_DI_4;
    touchgfx::ToggleButton b_DO_1;
    touchgfx::ToggleButton b_DO_2;
    touchgfx::ToggleButton b_DO_3;
    touchgfx::ToggleButton b_DO_4;
    touchgfx::ScalableImage logo;
    touchgfx::TextAreaWithOneWildcard lb_date;
    touchgfx::TextAreaWithOneWildcard lb_time;
    touchgfx::Line l_SP_AI_1;
    touchgfx::PainterRGB565 l_SP_AI_1Painter;
    touchgfx::ScalableImage si_SP_AIs;
    touchgfx::TextAreaWithOneWildcard t_SP_AI_1;
    touchgfx::RadioButton rb_SD;
    touchgfx::RadioButton rb_RS;
    touchgfx::RadioButton rb_PRG;
    touchgfx::TextAreaWithOneWildcard lb_RS;
    touchgfx::TextAreaWithOneWildcard lb_SD;
    touchgfx::TextAreaWithOneWildcard lb_PRG;
    touchgfx::RadioButtonGroup<3> radioButtonGroup1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t T_AI_1_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_AI_1Buffer[T_AI_1_SIZE];
    static const uint16_t LB_DATE_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_dateBuffer[LB_DATE_SIZE];
    static const uint16_t LB_TIME_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_timeBuffer[LB_TIME_SIZE];
    static const uint16_t T_SP_AI_1_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_SP_AI_1Buffer[T_SP_AI_1_SIZE];
    static const uint16_t LB_RS_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_RSBuffer[LB_RS_SIZE];
    static const uint16_t LB_SD_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_SDBuffer[LB_SD_SIZE];
    static const uint16_t LB_PRG_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_PRGBuffer[LB_PRG_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Graphic_1_ViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Graphic_1_ViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;

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

#endif // GRAPHIC_1_VIEWBASE_HPP
