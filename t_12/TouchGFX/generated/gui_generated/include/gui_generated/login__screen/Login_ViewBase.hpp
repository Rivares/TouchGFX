/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef LOGIN_VIEWBASE_HPP
#define LOGIN_VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/login__screen/Login_Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Login_ViewBase : public touchgfx::View<Login_Presenter>
{
public:
    Login_ViewBase();
    virtual ~Login_ViewBase() {}
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
    touchgfx::ScalableImage scalableImage1;
    touchgfx::ButtonWithIcon b_toCancel;
    touchgfx::ButtonWithIcon b_toLogin;
    touchgfx::ScalableImage logo;
    touchgfx::TextAreaWithOneWildcard t_login;
    touchgfx::TextAreaWithOneWildcard t_password;
    touchgfx::ScalableImage si_Login;
    touchgfx::ScalableImage si_Password;

    /*
     * Wildcard Buffers
     */
    static const uint16_t T_LOGIN_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_loginBuffer[T_LOGIN_SIZE];
    static const uint16_t T_PASSWORD_SIZE = 300;
    touchgfx::Unicode::UnicodeChar t_passwordBuffer[T_PASSWORD_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Login_ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // LOGIN_VIEWBASE_HPP
