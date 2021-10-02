/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/login__screen/Login_ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Login_ViewBase::Login_ViewBase() :
    buttonCallback(this, &Login_ViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    background.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));
    background.setPosition(0, 0, 480, 272);
    background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_COUNTER_BOX_ID));
    scalableImage1.setPosition(143, 78, 194, 157);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    b_toCancel.setXY(247, 192);
    b_toCancel.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REMOVE_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REMOVE_32_ID));
    b_toCancel.setIconXY(16, 3);
    b_toCancel.setAction(buttonCallback);

    b_toLogin.setXY(174, 192);
    b_toLogin.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_WHITE_ID), touchgfx::Bitmap(BITMAP_I_ENTRANCE_0_ID), touchgfx::Bitmap(BITMAP_I_ENTRANCE_1_ID));
    b_toLogin.setIconXY(20, 7);
    b_toLogin.setAction(buttonCallback);

    logo.setBitmap(touchgfx::Bitmap(BITMAP_LOGO_ELHART_ID));
    logo.setPosition(165, 37, 151, 28);
    logo.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    t_login.setPosition(249, 106, 82, 21);
    t_login.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    t_login.setLinespacing(0);
    Unicode::snprintf(t_loginBuffer, T_LOGIN_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID33).getText());
    t_login.setWildcard(t_loginBuffer);
    t_login.setTypedText(touchgfx::TypedText(T_SINGLEUSEID27));

    t_password.setPosition(249, 146, 82, 21);
    t_password.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    t_password.setLinespacing(0);
    Unicode::snprintf(t_passwordBuffer, T_PASSWORD_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID31).getText());
    t_password.setWildcard(t_passwordBuffer);
    t_password.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));

    si_Login.setBitmap(touchgfx::Bitmap(BITMAP_T_LOGIN_ID));
    si_Login.setPosition(154, 106, 75, 21);
    si_Login.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    si_Password.setBitmap(touchgfx::Bitmap(BITMAP_T_PASSWORD_ID));
    si_Password.setPosition(154, 146, 86, 27);
    si_Password.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);

    add(__background);
    add(background);
    add(scalableImage1);
    add(b_toCancel);
    add(b_toLogin);
    add(logo);
    add(t_login);
    add(t_password);
    add(si_Login);
    add(si_Password);
}

void Login_ViewBase::setupScreen()
{

}

void Login_ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &b_toCancel)
    {
        //toCancel
        //When b_toCancel clicked change screen to Discret_
        //Go to Discret_ with no screen transition
        application().gotoDiscret_ScreenNoTransition();
    }
    else if (&src == &b_toLogin)
    {
        //toLogin
        //When b_toLogin clicked change screen to Graphic_1_
        //Go to Graphic_1_ with no screen transition
        application().gotoGraphic_1_ScreenNoTransition();
    }
}
