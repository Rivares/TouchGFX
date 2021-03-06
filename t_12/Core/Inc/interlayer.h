#ifndef INTERLAYER_H
#define INTERLAYER_H


// Сигналы внешней связи

// Analog part
volatile float m_data_AI_1; // analog input 1
volatile float m_data_AI_2;
volatile float m_data_AI_3;
volatile float m_data_AI_4;

volatile float m_data_AO_1; // analog output 1
volatile float m_data_AO_2;
volatile float m_data_AO_3;
volatile float m_data_AO_4;


// Discret part
volatile uint8_t m_data_DI_1; // discret input 1
volatile uint8_t m_data_DI_2;
volatile uint8_t m_data_DI_3;
volatile uint8_t m_data_DI_4;

volatile uint8_t m_data_DO_1; // discret output 1
volatile uint8_t m_data_DO_2;
volatile uint8_t m_data_DO_3;
volatile uint8_t m_data_DO_4;



// Step points
volatile float m_data_SP_AI_1; // analog input 1
volatile float m_data_SP_AI_2;
volatile float m_data_SP_AI_3;
volatile float m_data_SP_AI_4;

// Units analog signal --> temperature(Celsius, Kelvin, Faradey), humidity(%, ), ...
volatile uint8_t m_data_U_AI_1;
volatile uint8_t m_data_U_AI_2;
volatile uint8_t m_data_U_AI_3;
volatile uint8_t m_data_U_AI_4;

// Types AI --> 50М, 100P, Pt100, Pt1000, L, K, J, S, B, 0..20mA, 4..20mA, 0..10V
volatile uint8_t m_data_T_AI_1;
volatile uint8_t m_data_T_AI_2;
volatile uint8_t m_data_T_AI_3;
volatile uint8_t m_data_T_AI_4;



// Mode processing AI --> 0:"absolut"; 1:"difference"; 2:"average"
volatile uint8_t m_data_MP_AI_1;
volatile uint8_t m_data_MP_AI_2;
volatile uint8_t m_data_MP_AI_3;
volatile uint8_t m_data_MP_AI_4;

// Function DI --> 0:"STOP"; 1:"START/STOP"; 2:"Reset commit";
volatile uint8_t m_data_F_DI_1;
volatile uint8_t m_data_F_DI_2;
volatile uint8_t m_data_F_DI_3;
volatile uint8_t m_data_F_DI_4;

// Mode control DO --> 0:"ON/OFF"; 1:"Signaling device"; 2:"Manual control";
volatile uint8_t m_data_MC_DO_1;
volatile uint8_t m_data_MC_DO_2;
volatile uint8_t m_data_MC_DO_3;
volatile uint8_t m_data_MC_DO_4;



// Date
volatile uint16_t m_date_D;
volatile uint16_t m_date_M;
volatile uint16_t m_date_Y;

// Time
volatile uint8_t m_time_h;
volatile uint8_t m_time_m;
volatile uint8_t m_time_s;

#endif // INTERLAYER_H