/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoMainScreenScreenNoTransition();
    }

    // MainScreen
    void gotoMainScreenScreenNoTransition();

    void gotoMainScreenScreenSlideTransitionWest();

    // ClockScreen
    void gotoClockScreenScreenSlideTransitionEast();

    // TemperatureScreen
    void gotoTemperatureScreenScreenSlideTransitionEast();

    // PressureScreen
    void gotoPressureScreenScreenSlideTransitionEast();

    // COScreen
    void gotoCOScreenScreenSlideTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // MainScreen
    void gotoMainScreenScreenNoTransitionImpl();

    void gotoMainScreenScreenSlideTransitionWestImpl();

    // ClockScreen
    void gotoClockScreenScreenSlideTransitionEastImpl();

    // TemperatureScreen
    void gotoTemperatureScreenScreenSlideTransitionEastImpl();

    // PressureScreen
    void gotoPressureScreenScreenSlideTransitionEastImpl();

    // COScreen
    void gotoCOScreenScreenSlideTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP