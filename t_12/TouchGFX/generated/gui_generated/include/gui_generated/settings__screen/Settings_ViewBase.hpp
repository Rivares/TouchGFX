/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SETTINGS_VIEWBASE_HPP
#define SETTINGS_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/settings__screen/Settings_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/SlideMenu.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/containers/scrollers/ScrollWheel.hpp>
#include <gui/containers/cc_units.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <gui/containers/cc_typeAI.hpp>

class Settings_ViewBase : public touchgfx::View<Settings_Presenter>
{
public:
    Settings_ViewBase();
    virtual ~Settings_ViewBase() {}
    virtual void setupScreen();

    virtual void sw_unit_AI_1UpdateItem(cc_units& item, int16_t itemIndex)
    {
        // Override and implement this function in Settings_
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
    touchgfx::DigitalClock digitalClock;
    touchgfx::ScalableImage logo;
    touchgfx::ButtonWithIcon b_toControlScreen;
    touchgfx::ButtonWithIcon b_toLoginScreen;
    touchgfx::ButtonWithIcon b_toGraphicScreen;
    touchgfx::ButtonWithIcon b_toAnalyticScreen;
    touchgfx::ButtonWithIcon b_toArchiveScreen;
    touchgfx::ScrollWheel sw_unit_AI_1;
    touchgfx::DrawableListItems<cc_units, 2> sw_unit_AI_1ListItems;
    touchgfx::ScalableImage si_AI_1;
    touchgfx::ScalableImage si_AI_2;
    touchgfx::ScalableImage si_AI_3;
    touchgfx::ScalableImage si_AI_4;
    touchgfx::ToggleButton b_DI_1;
    touchgfx::ToggleButton b_DI_2;
    touchgfx::ToggleButton b_DI_3;
    touchgfx::ToggleButton b_DI_4;
    touchgfx::ToggleButton b_DO_1;
    touchgfx::ToggleButton b_DO_2;
    touchgfx::ToggleButton b_DO_3;
    touchgfx::ToggleButton b_DO_4;
    touchgfx::TextAreaWithOneWildcard lb_date;
    cc_typeAI cc_typeAI1;

    /*
     * Wildcard Buffers
     */
    static const uint16_t LB_DATE_SIZE = 20;
    touchgfx::Unicode::UnicodeChar lb_dateBuffer[LB_DATE_SIZE];

private:
    touchgfx::Callback<Settings_ViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);

};

#endif // SETTINGS_VIEWBASE_HPP