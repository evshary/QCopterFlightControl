/* #include "QCopterFC_ctrl.h" */

#ifndef __QCOPTER_CTRL_H
#define __QCOPTER_CTRL_H

#include "stm32f4xx.h"
#include "algorithm_pid.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
void CTRL_FlightControl( void );
/*=====================================================================================================*/
/*=====================================================================================================*/
extern vs16 PWM_M1;
extern vs16 PWM_M2;
extern vs16 PWM_M3;
extern vs16 PWM_M4;
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif	
