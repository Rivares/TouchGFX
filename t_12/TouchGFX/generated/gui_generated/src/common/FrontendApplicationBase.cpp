/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/login__screen/Login_View.hpp>
#include <gui/login__screen/Login_Presenter.hpp>
#include <gui/discret__screen/Discret_View.hpp>
#include <gui/discret__screen/Discret_Presenter.hpp>
#include <gui/graphic_1__screen/Graphic_1_View.hpp>
#include <gui/graphic_1__screen/Graphic_1_Presenter.hpp>
#include <gui/graphic_2__screen/Graphic_2_View.hpp>
#include <gui/graphic_2__screen/Graphic_2_Presenter.hpp>
#include <gui/graphic_3__screen/Graphic_3_View.hpp>
#include <gui/graphic_3__screen/Graphic_3_Presenter.hpp>
#include <gui/graphic_4__screen/Graphic_4_View.hpp>
#include <gui/graphic_4__screen/Graphic_4_Presenter.hpp>
#include <gui/control__screen/Control_View.hpp>
#include <gui/control__screen/Control_Presenter.hpp>
#include <gui/analytics__screen/Analytics_View.hpp>
#include <gui/analytics__screen/Analytics_Presenter.hpp>
#include <gui/archive__screen/Archive_View.hpp>
#include <gui/archive__screen/Archive_Presenter.hpp>
#include <gui/settings__screen/Settings_View.hpp>
#include <gui/settings__screen/Settings_Presenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// Login_

void FrontendApplicationBase::gotoLogin_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoLogin_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoLogin_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Login_View, Login_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Discret_

void FrontendApplicationBase::gotoDiscret_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoDiscret_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoDiscret_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Discret_View, Discret_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Graphic_1_

void FrontendApplicationBase::gotoGraphic_1_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoGraphic_1_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoGraphic_1_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Graphic_1_View, Graphic_1_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Graphic_2_

void FrontendApplicationBase::gotoGraphic_2_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoGraphic_2_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoGraphic_2_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Graphic_2_View, Graphic_2_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Graphic_4_

void FrontendApplicationBase::gotoGraphic_4_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoGraphic_4_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoGraphic_4_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Graphic_4_View, Graphic_4_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Control_

void FrontendApplicationBase::gotoControl_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoControl_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoControl_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Control_View, Control_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Analytics_

void FrontendApplicationBase::gotoAnalytics_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoAnalytics_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoAnalytics_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Analytics_View, Analytics_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Archive_

void FrontendApplicationBase::gotoArchive_ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoArchive_ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoArchive_ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<Archive_View, Archive_Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
