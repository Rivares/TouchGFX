/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GRAPHIC_2_VIEWBASE_HPP
#define GRAPHIC_2_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/graphic_2__screen/Graphic_2_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class Graphic_2_ViewBase : public touchgfx::View<Graphic_2_Presenter>
{
public:
    Graphic_2_ViewBase();
    virtual ~Graphic_2_ViewBase() {}
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
    touchgfx::GraphWrapAndClear<250> dynamicGraph2;
    touchgfx::GraphElementLine dynamicGraph2Line1;
    touchgfx::PainterRGB565 dynamicGraph2Line1Painter;
    touchgfx::GraphElementLine dynamicGraph2Line2;
    touchgfx::PainterRGB565 dynamicGraph2Line2Painter;
    touchgfx::GraphElementGridX dynamicGraph2MajorXAxisGrid;
    touchgfx::GraphElementGridY dynamicGraph2MajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph2MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph2MajorYAxisLabel;
    touchgfx::TextAreaWithOneWildcard loggerSPI_2;
    touchgfx::DigitalClock digitalClock;
    touchgfx::ButtonWithIcon b_Settings;
    touchgfx::ScalableImage logo;
    touchgfx::TextAreaWithOneWildcard lb_date;
    touchgfx::ButtonWithIcon b_toNextScreen;
    touchgfx::ButtonWithIcon b_toPrevScreen;
    touchgfx::ButtonWithIcon b_toDiscretScreen;
    touchgfx::ButtonWithIcon b_toLoginScreen;
    touchgfx::ButtonWithIcon b_toGraphicScreen;
    touchgfx::ButtonWithIcon b_toAnalyticScreen;
    touchgfx::ButtonWithIcon b_toArchiveScreen;

    /*
     * Wildcard Buffers
     */
    static const uint16_t LOGGERSPI_2_SIZE = 300;
    touchgfx::Unicode::UnicodeChar loggerSPI_2Buffer[LOGGERSPI_2_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // GRAPHIC_2_VIEWBASE_HPP
