/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINSCREENVIEWBASE_HPP
#define MAINSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class MainScreenViewBase : public touchgfx::View<MainScreenPresenter>
{
public:
    MainScreenViewBase();
    virtual ~MainScreenViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::TextArea CarSystem_text_1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Clock_button;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Pressure_button;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  CO_button;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  Temperature_button;
    touchgfx::TextArea CarSystem_text;
    touchgfx::TextArea Clock_text;
    touchgfx::TextArea Pressure_text;
    touchgfx::TextArea Temperature_text;
    touchgfx::TextArea CO_text;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainScreenViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // MAINSCREENVIEWBASE_HPP
