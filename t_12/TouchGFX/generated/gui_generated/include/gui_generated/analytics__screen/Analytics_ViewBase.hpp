/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef ANALYTICS_VIEWBASE_HPP
#define ANALYTICS_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/analytics__screen/Analytics_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class Analytics_ViewBase : public touchgfx::View<Analytics_Presenter>
{
public:
    Analytics_ViewBase();
    virtual ~Analytics_ViewBase() {}
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
    touchgfx::ButtonWithIcon b_toNextScreen;
    touchgfx::ButtonWithIcon b_toPrevScreen;

private:

};

#endif // ANALYTICS_VIEWBASE_HPP
