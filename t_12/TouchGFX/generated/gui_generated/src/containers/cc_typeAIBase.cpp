/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/cc_typeAIBase.hpp>
#include "BitmapDatabase.hpp"

cc_typeAIBase::cc_typeAIBase()
{
    setWidth(240);
    setHeight(35);
    b_unitTemperature_1.setXY(60, 0);
    b_unitTemperature_1.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_1_ID), touchgfx::Bitmap(BITMAP_T_UNIT_TEMPERATURE_1_0_ID), touchgfx::Bitmap(BITMAP_T_UNIT_TEMPERATURE_1_1_ID));
    b_unitTemperature_1.setIconXY(7, 11);

    b_unitTemperature_0.setXY(0, 0);
    b_unitTemperature_0.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_1_ID), touchgfx::Bitmap(BITMAP_T_UNIT_TEMPERATURE_0_0_ID), touchgfx::Bitmap(BITMAP_T_UNIT_TEMPERATURE_0_1_ID));
    b_unitTemperature_0.setIconXY(7, 11);

    b_unitPressure_0.setXY(120, 0);
    b_unitPressure_0.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_1_ID), touchgfx::Bitmap(BITMAP_T_UNIT_PRESSURE_0_0_ID), touchgfx::Bitmap(BITMAP_T_UNIT_PRESSURE_0_1_ID));
    b_unitPressure_0.setIconXY(5, 11);

    b_unitHumidity_0.setXY(180, 0);
    b_unitHumidity_0.setBitmaps(touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_ID), touchgfx::Bitmap(BITMAP_B_BACKGROUND_GREEN_1_ID), touchgfx::Bitmap(BITMAP_T_UNIT_HUMIDITY_0_0_ID), touchgfx::Bitmap(BITMAP_T_UNIT_HUMIDITY_0_1_ID));
    b_unitHumidity_0.setIconXY(5, 11);

    add(b_unitTemperature_1);
    add(b_unitTemperature_0);
    add(b_unitPressure_0);
    add(b_unitHumidity_0);
}

void cc_typeAIBase::initialize()
{

}

