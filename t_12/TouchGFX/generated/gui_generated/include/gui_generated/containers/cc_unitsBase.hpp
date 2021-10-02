/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CC_UNITSBASE_HPP
#define CC_UNITSBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>

class cc_unitsBase : public touchgfx::Container
{
public:
    cc_unitsBase();
    virtual ~cc_unitsBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::ButtonWithIcon b_unitTemperature_1;
    touchgfx::ButtonWithIcon b_unitTemperature_0;
    touchgfx::ButtonWithIcon b_unitPressure_0;
    touchgfx::ButtonWithIcon b_unitHumidity_0;

private:

};

#endif // CC_UNITSBASE_HPP
