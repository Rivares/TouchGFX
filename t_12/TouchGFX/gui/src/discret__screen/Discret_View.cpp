#include <gui/discret__screen/Discret_View.hpp>
#include "BitmapDatabase.hpp"

Discret_View::Discret_View()
{
  // Support of larger displays for this example
  // is handled by showing a black box in the
  // unused part of the display.
  // if (HAL::DISPLAY_WIDTH > backgroundImage.getWidth() ||
  //         HAL::DISPLAY_HEIGHT > backgroundImage.getHeight())
  // {
  //     backgroundBox.setVisible(true);
  // }

  tickCounter = 0;
}

void Discret_View::setupScreen()
{
    // Default values
    m_AI.fill(0.0);
    m_U_AI.fill(0);

    m_DI.fill(0);
    m_DO.fill(0);

    // Analog values
    Unicode::snprintfFloat(t_AI_1Buffer, 100, "%3.3f", m_AI.at(0));
    Unicode::snprintfFloat(t_AI_2Buffer, 100, "%3.3f", m_AI.at(1));
    Unicode::snprintfFloat(t_AI_3Buffer, 100, "%3.3f", m_AI.at(2));
    Unicode::snprintfFloat(t_AI_4Buffer, 100, "%3.3f", m_AI.at(3));



    // Indicators . State
    b_DI_1.forceState(m_DI.at(0));
    b_DI_2.forceState(m_DI.at(1));
    b_DI_3.forceState(m_DI.at(2));
    b_DI_4.forceState(m_DI.at(3));

    b_DO_1.forceState(m_DO.at(0));
    b_DO_2.forceState(m_DO.at(1));
    b_DO_3.forceState(m_DO.at(2));
    b_DO_4.forceState(m_DO.at(3));

    b_DI_1.setTouchable(false);
    b_DI_2.setTouchable(false);
    b_DI_3.setTouchable(false);
    b_DI_4.setTouchable(false);

    b_DO_1.setTouchable(false);
    b_DO_2.setTouchable(false);
    b_DO_3.setTouchable(false);
    b_DO_4.setTouchable(false);



    // Date
    m_date.insert(std::pair<std::string, uint16_t>("DD", 0));
    m_date.insert(std::pair<std::string, uint16_t>("MM", 0));
    m_date.insert(std::pair<std::string, uint16_t>("YYYY", 0));
    // m_date[0] = 0; // "DD"
    // m_date[1] = 0; // "MM"
    // m_date[2] = 0; // "YYYY"

    // Time
    m_time.insert(std::pair<std::string, uint8_t>("hh", 0));
    m_time.insert(std::pair<std::string, uint8_t>("mm", 0));
    m_time.insert(std::pair<std::string, uint8_t>("ss", 0));
    // m_time[0] = 0; // "hh"
    // m_time[1] = 0; // "mm"
    // m_time[2] = 0; // "ss"


    // Execution ----->
    t_AI_1.invalidate();
    t_AI_2.invalidate();
    t_AI_3.invalidate();
    t_AI_4.invalidate();

    b_DI_1.invalidate();
    b_DI_2.invalidate();
    b_DI_3.invalidate();
    b_DI_4.invalidate();

    b_DO_1.invalidate();
    b_DO_2.invalidate();
    b_DO_3.invalidate();
    b_DO_4.invalidate();
}

void Discret_View::tearDownScreen()
{
}

void Discret_View::handleTickEvent()
{
  tickCounter++;

  // Analog values
  Unicode::snprintfFloat(t_AI_1Buffer, 100, "%3.3f", m_AI.at(0));
  Unicode::snprintfFloat(t_AI_2Buffer, 100, "%3.3f", m_AI.at(1));
  Unicode::snprintfFloat(t_AI_3Buffer, 100, "%3.3f", m_AI.at(2));
  Unicode::snprintfFloat(t_AI_4Buffer, 100, "%3.3f", m_AI.at(3));

  // Indicators . State
  b_DI_1.forceState(m_DI.at(0));
  b_DI_2.forceState(m_DI.at(1));
  b_DI_3.forceState(m_DI.at(2));
  b_DI_4.forceState(m_DI.at(3));

  b_DO_1.forceState(m_DO.at(0));
  b_DO_2.forceState(m_DO.at(1));
  b_DO_3.forceState(m_DO.at(2));
  b_DO_4.forceState(m_DO.at(3));


  // Date
  std::string date = std::to_string(static_cast<unsigned>(m_date.at("DD"))) + "/" +
                     std::to_string(static_cast<unsigned>(m_date.at("MM"))) + "/" +
                     std::to_string(static_cast<unsigned>(m_date.at("YYYY")));


  Unicode::UnicodeChar buffer[20];
  Unicode::strncpy(buffer, date.c_str(), 20);
  Unicode::snprintf(lb_dateBuffer, 20, "%s", buffer);

  // Time
  // m_date.at("hh") = m_time_h;
  // m_date.at("mm") = m_time_m;
  // m_date.at("ss") = m_time_s;
  // m_time[0] = m_time_h;
  // m_time[1] = m_time_m;
  // m_time[2] = m_time_s;

  ip_AI_1.setValue(10);//((int)m_AI.at(0)) + 0);
  ip_AI_2.setValue(20);//((int)m_AI.at(1)) + 0);
  tp_AI_3.setValue(30);//((int)m_AI.at(2)) + 0);
  tp_AI_3.setValue(40);//((int)m_AI.at(3)) + 0);

  // Execution ----->
  t_AI_1.invalidate();
  t_AI_2.invalidate();
  t_AI_3.invalidate();
  t_AI_4.invalidate();

  b_DI_1.invalidate();
  b_DI_2.invalidate();
  b_DI_3.invalidate();
  b_DI_4.invalidate();

  b_DO_1.invalidate();
  b_DO_2.invalidate();
  b_DO_3.invalidate();
  b_DO_4.invalidate();

  lb_date.invalidate();
}

void Discret_View::modelToView()
{
  presenter->modelToView();
}

// But for this screen control function is not exist
void Discret_View::userToModel()
{
  presenter->userToModel(m_AI, m_U_AI, m_DI, m_DO, m_date, m_time);
}





// __________________________________________________
// ______________ Additional functions ______________

void Discret_View::setCurrentAI(std::array<float, COUNT_AI> values)
{
    m_AI = values;
}

void Discret_View::setCurrentUnitsAI(std::array<uint8_t, COUNT_AI> values)
{
    m_U_AI = values;
}

void Discret_View::setCurrentDI(std::array<uint8_t, COUNT_DI> values)
{
    m_DI = values;
}

void Discret_View::setCurrentDO(std::array<uint8_t, COUNT_DO> values)
{
    m_DO = values;
}



// void Discret_View::setCurrentDate(std::array<std::uint16_t, 3> values)
// {
//     m_date = values;
// }
//
// void Discret_View::setCurrentTime(std::array<std::uint8_t, 3> values)
// {
//     m_time = values;
// }
void Discret_View::setCurrentDate(std::map <std::string, uint16_t> values)
{
    m_date = values;
}

void Discret_View::setCurrentTime(std::map <std::string, uint8_t> values)
{
    m_time = values;
}




std::array<float, COUNT_AI> Discret_View::getCurrentAI()
{

}

std::array<uint8_t, COUNT_AI> Discret_View::getCurrentUnitsAI()
{

}

//std::array<float, COUNT_AO> getCurrentAO();

std::array<uint8_t, COUNT_DI> Discret_View::getCurrentDI()
{

}

std::array<uint8_t, COUNT_DO> Discret_View::getCurrentDO()
{

}



// std::array<std::uint16_t, 3> Discret_View::getCurrentDate()
// {
//
// }
//
// std::array<std::uint8_t, 3> Discret_View::getCurrentTime()
// {
//
// }
std::map <std::string, uint16_t> Discret_View::getCurrentDate()
{

}

std::map <std::string, uint8_t> Discret_View::getCurrentTime()
{

}
