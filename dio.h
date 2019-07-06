/*
 * dio.h
 *
 *  Created on: Jul 21, 2018
 *      Author: Khaled
 */

#ifndef DIO_H_
#define DIO_H_
void DIO_Setport_Dir(u8 Port_name,u8 Value);
void DIO_Setpin_Dir(u8 Port_name,u8 Pin_No ,u8 Value);
void DIO_Setport_Value(u8 Port_name,u8 Value);
void DIO_Setpin_Value(u8 Port_name,u8 Pin_No ,u8 Value);
u8 DIO_GetPort_Value(u8 Port_name);
u8 DIO_GetPin_Value(u8 Port_name,u8 Pin_No);

#endif /* DIO_H_ */
