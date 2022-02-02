/**************************************************************************************************************************************
* LOG:                                                                   							   								  *
* VERSION					AUTHOR           					DATE 						DESCRIPTION 		   					  *
* 1.0.0 					Kareem Hassaan						14 DEC,2021					- Initial Creation						  *
**************************************************************************************************************************************/
/**************************************************************************************************************************************
* ! Title      	: KEYPAD Driver                                                        							                      *                     
* ! File Name	: KEYPAD_intrface.h                                                     							                  *
* ! Description : This file has the Definitions needed		         		        							                      *
* ! Compiler  	: GNU AVR cross Compiler                                            							                      *
* ! Target 	  	: Atmega32 Micro-Controller                                         							                      *
* ! Layer 	  	: HAL                   						                                         							  *
**************************************************************************************************************************************/
#ifndef KEYPAD_INTERFACE_H
#define KEYPAD_INTERFACE_H
/*************************************************************************************************************************************/
/***************************************************** Functions Prototypes **********************************************************/
/*************************************************************************************************************************************/
/**************************************************************************************************************************************
* Function Name		: HKPD_VoidInit																			                      *
* Parameters (in)	: None																						                      *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to initialize the Keypad matrix		    					 					                      *
**************************************************************************************************************************************/
void HKPD_VoidInit();
/**************************************************************************************************************************************
* Function Name		: HKPD_uint8GetPressedKey															    	                      *
* Parameters (in)	: None																						                      *
* Parameters (out)	: None																						                      *
* Return value		: uint8																						                      *
* Description		: Function to get the pressed Key from the Keypad matrix		    		    			                      *
**************************************************************************************************************************************/
uint8 HKPD_uint8GetPressedKey();



#endif /*KEYPAD_INTERFACE_H*/