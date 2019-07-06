/*
 * dio.c
 *
 *  Created on: Jul 21, 2018
 *      Author: Khaled
 */
#include "LIB\STD_TYPES.h"
#include"LIB\bit_math.h"
#include "MCAL\register.h"
#include "dio.h"
void DIO_Setport_Dir(u8 Port_name,u8 Value)
{
	switch(Port_name)
	{

	case 'A' : DDRA=Value; break;
	case 'B' : DDRB=Value; break;
	case 'C' : DDRC=Value;break;
	case 'D' : DDRD=Value;break;

	}

}

void DIO_Setpin_Dir(u8 Port_name,u8 Pin_No ,u8 Value)
{
	switch(Port_name)
	{

	case 'A' :
		if(Value==1)
		{
			set_bit(DDRA,Pin_No);
		}
		else
		{
			clr_bit(DDRA,Pin_No);

		}
		break;

	case 'B' :
		if(Value==1)
		{
			set_bit(DDRB,Pin_No);
		}
		else
		{
			clr_bit(DDRB,Pin_No);

		}
		break;

	case 'C' :
		if(Value==1)
		{
			set_bit(DDRC,Pin_No);
		}
		else
		{
			clr_bit(DDRC,Pin_No);

		}
		break;

	case 'D' :
		if(Value==1)
		{
			set_bit(DDRD,Pin_No);
		}
		else
		{
			clr_bit(DDRD,Pin_No);

		}

		break;

	}

}

void DIO_Setport_Value(u8 Port_name,u8 Value)
{
	switch(Port_name)
	{

	case 'A' : PORTA=Value; break;
	case 'B' : PORTB=Value; break;
	case 'C' : PORTC=Value;break;
	case 'D' : PORTD=Value;break;

	}

}


void DIO_Setpin_Value(u8 Port_name,u8 Pin_No ,u8 Value)
{
	switch(Port_name)
	{

	case 'A' :
		if(Value==1)
		{
			set_bit(PORTA,Pin_No);
		}
		else
		{
			clr_bit(PORTA,Pin_No);

		}
		break;

	case 'B' :
		if(Value==1)
		{
			set_bit(PORTB,Pin_No);
		}
		else
		{
			clr_bit(PORTB,Pin_No);

		}
		break;

	case 'C' :
		if(Value==1)
		{
			set_bit(PORTC,Pin_No);
		}
		else
		{
			clr_bit(PORTC,Pin_No);

		}
		break;

	case 'D' :
		if(Value==1)
		{
			set_bit(PORTD,Pin_No);
		}
		else
		{
			clr_bit(PORTD,Pin_No);

		}

		break;

	}

}



u8 DIO_GetPort_Value(u8 Port_name)
{

	u8 x;
	switch(Port_name)
	{

	case 'A': x=PINA;break;
	case 'B': x=PINB;break;
	case 'C': x=PINC;break;
	case 'D': x=PIND;break;
	}
	return x;

}



u8 DIO_GetPin_Value(u8 Port_name,u8 Pin_No)
{

	u8 x;
	switch(Port_name)
	{
	case 'A': x=get_bit(PINA,Pin_No);break;
	case 'B': x=get_bit(PINA,Pin_No);break;
	case 'C': x=get_bit(PINA,Pin_No);break;
	case 'D': x=get_bit(PINA,Pin_No);break;
	}
	return x;

}



