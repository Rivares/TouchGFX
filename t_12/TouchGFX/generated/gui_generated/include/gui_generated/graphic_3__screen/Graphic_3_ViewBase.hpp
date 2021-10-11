/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GRAPHIC_3_VIEWBASE_HPP
#define GRAPHIC_3_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/graphic_3__screen/Graphic_3_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>

class Graphic_3_ViewBase : public touchgfx::View<Graphic_3_Presenter>
{
public:
    Graphic_3_ViewBase();
    virtual ~Graphic_3_ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }
    touchgfx::Box __background;

private:

};

#endif // GRAPHIC_3_VIEWBASE_HPP