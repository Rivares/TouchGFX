#include <gui/main_screen/MainView.hpp>
#include "BitmapDatabase.hpp"

#include "interlayer.h"

extern volatile uint8_t m_data_sensor;

MainView::MainView()
{
    // Support of larger displays for this example
    // is handled by showing a black box in the
    // unused part of the display.
    if (HAL::DISPLAY_WIDTH > backgroundImage.getWidth() ||
            HAL::DISPLAY_HEIGHT > backgroundImage.getHeight())
    {
        backgroundBox.setVisible(true);
    }
}

void MainView::setupScreen()
{
    setCount(0);
}

void MainView::tearDownScreen()
{
}

void MainView::increaseValue()
{
    if (count < 42)
    {
        count++;
        setCount(count);

        if (count == 42)
        {
            setLimitEffects(false, true);
        }
        else if (count == 1)
        {
            setLimitEffects(true, true);
        }
    }
}

void MainView::decreaseValue()
{
    if (count > 0)
    {
        count++;
        setCount(count);

        if (0 == count)
        {
            setLimitEffects(true, false);
        }
        else if (41 == count)
        {
            setLimitEffects(true, true);
        }
    }
}

void MainView::setCount(uint8_t countValue)
{
    Unicode::snprintf(countTxtBuffer, 3, "%d", countValue);
    // Invalidate text area, which will result in it being redrawn in next tick.
    countTxt.invalidate();

    setData(m_data_sensor);
}

void MainView::setData(uint16_t data)
{
    Unicode::snprintf(loggerSPIBuffer, 200, "%d", static_cast<int>(data));

    // Invalidate text area, which will result in it being redrawn in next tick.
    loggerSPI.invalidate();
}

void MainView::setLimitEffects(bool belowUpper, bool aboveLower)
{
    buttonUp.setTouchable(belowUpper);
    buttonDown.setTouchable(aboveLower);

    if (belowUpper)
    {
        buttonUp.setBitmaps(Bitmap(BITMAP_UP_BTN_ID), Bitmap(BITMAP_UP_BTN_PRESSED_ID));
    }
    else
    {
        buttonUp.setBitmaps(Bitmap(BITMAP_UP_BTN_DISABLED_ID), Bitmap(BITMAP_UP_BTN_DISABLED_ID));
    }

    if (aboveLower)
    {
        buttonDown.setBitmaps(Bitmap(BITMAP_DOWN_BTN_ID), Bitmap(BITMAP_DOWN_BTN_PRESSED_ID));
    }
    else
    {
        buttonDown.setBitmaps(Bitmap(BITMAP_DOWN_BTN_DISABLED_ID), Bitmap(BITMAP_DOWN_BTN_DISABLED_ID));
    }

    buttonUp.invalidate();
    buttonDown.invalidate();
}


void MainView::userAction(uint16_t value)
{
    //report to presenter
    presenter->userSetTemperature(value);

    setData(value);
}