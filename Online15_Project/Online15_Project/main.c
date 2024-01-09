
/*********************** Macros *************************************/
#define F_CPU		8000000UL

/************************** Includes *********************************/

#include <util/delay.h>
#include "StdTypes.h"
#include "LED_Int.h"
#include "BUTTON_Int.h"
#include "SEVEN_SEG_Int.h"
#include "STOP_WATCH_Int.h"
#include "MOTOR_Int.h"
#include "CAR_MOVE_Int.h"
#include "Stepper_Int.h"
#include "LCD_Int.h"
#include "KeyPad_Int.h"
#include "Calculator_Int.h"
#include "Number_Converter_Int.h"
#include "StepperAPP_Int.h"
#include "ADC_Int.h"
#include "LCD_Game_Int.h"
#include "SENSORS_Int.h"
#include "EEPROM_Int.h"
#include "Fire_System_Int.h"
#include "TEMP_Filter_Int.h"


int main(void)
{ 
	DIO_Init();
	LCD_Init() ;
	KeyPad_Init();
	ADC_Init(VREF_AVCC,ADC_SCALER_64);
	GLOBAL_INTERRUPT_ENABLE();
	
	Fire_System_Init();
	
	while (1)
	{
		
		
		
		Fire_System_Runnable();
	}



}
