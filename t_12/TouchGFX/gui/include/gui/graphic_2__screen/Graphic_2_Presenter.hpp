#ifndef GRAPHIC_2_PRESENTER_HPP
#define GRAPHIC_2_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Graphic_2_View;

class Graphic_2_Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Graphic_2_Presenter(Graphic_2_View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Graphic_2_Presenter() {};

private:
    Graphic_2_Presenter();

    Graphic_2_View& view;
};

#endif // GRAPHIC_2_PRESENTER_HPP
