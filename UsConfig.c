﻿/*
 * UsConfig.c
 *
 * Created: 19/02/2020 01:36:27 ص
 *  Author: mo
 */ 
#include "registers.h"
#include "DIO.h"
 DIO_Cfg_s US_Configuration= {
	 GPIOC,
	 BIT4,
	 OUTPUT/*triger*/
 };
