/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GRAPHIC_2_VIEWBASE_HPP
#define GRAPHIC_2_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/graphic_2__screen/Graphic_2_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>

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
    touchgfx::Box __background;

private:

};

#endif // GRAPHIC_2_VIEWBASE_HPP
