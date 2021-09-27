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
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>

class Graphic_1_ViewBase : public touchgfx::View<Graphic_1_Presenter>
{
public:
    Graphic_1_ViewBase();
    virtual ~Graphic_1_ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage background;
    touchgfx::TextAreaWithOneWildcard loggerSPI_1;
    touchgfx::GraphWrapAndClear<250> dg_AI_1;
    touchgfx::GraphElementLine dg_AI_1Line1;
    touchgfx::PainterRGB565 dg_AI_1Line1Painter;
    touchgfx::GraphElementGridX dg_AI_1MajorXAxisGrid;
    touchgfx::GraphElementGridY dg_AI_1MajorYAxisGrid;
    touchgfx::GraphLabelsX dg_AI_1MajorXAxisLabel;
    touchgfx::GraphLabelsY dg_AI_1MajorYAxisLabel;
    touchgfx::ButtonWithIcon b_toGraphic_2_Screen;
    touchgfx::ButtonWithIcon b_toGraphic_4_Screen;
    touchgfx::DigitalClock digitalClock;
    touchgfx::ButtonWithIcon b_Settings;
    touchgfx::TextAreaWithOneWildcard lb_date;
    touchgfx::ButtonWithIcon b_DI_1;
    touchgfx::ButtonWithIcon b_DI_2;
    touchgfx::ButtonWithIcon b_DI_3;
    touchgfx::ButtonWithIcon b_DI_4;
    touchgfx::ButtonWithIcon b_DO_1;
    touchgfx::ButtonWithIcon b_DO_2;
    touchgfx::ButtonWithIcon b_DO_3;
    touchgfx::ButtonWithIcon b_DO_4;
    touchgfx::TextAreaWithOneWildcard lb_AI_1;
    touchgfx::ScalableImage logo;
    touchgfx::TextAreaWithOneWildcard lb_unit_AI_1;
    touchgfx::GraphWrapAndClear<250> dg_setPoint_1;
    touchgfx::GraphElementLine dg_setPoint_1Line1;
    touchgfx::PainterRGB565 dg_setPoint_1Line1Painter;
    touchgfx::GraphElementGridX dg_setPoint_1MajorXAxisGrid;
    touchgfx::GraphElementGridY dg_setPoint_1MajorYAxisGrid;
    touchgfx::GraphLabelsX dg_setPoint_1MajorXAxisLabel;
    touchgfx::GraphLabelsY dg_setPoint_1MajorYAxisLabel;
    touchgfx::ButtonWithIcon b_toControlScreen;
    touchgfx::ButtonWithIcon b_toLoginScreen;
    touchgfx::ButtonWithIcon b_toDiscretScreen;
    touchgfx::ButtonWithIcon b_toAnalyticScreen;
    touchgfx::ButtonWithIcon b_toArchiveScreen;

    /*
     * Wildcard Buffers
     */
    static const uint16_t LOGGERSPI_1_SIZE = 300;
    touchgfx::Unicode::UnicodeChar loggerSPI_1Buffer[LOGGERSPI_1_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Graphic_1_ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // GRAPHIC_1_VIEWBASE_HPP
