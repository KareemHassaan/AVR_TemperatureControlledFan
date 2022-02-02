/**************************************************************************************************************************************
* LOG:                                                                   							   								  *
* VERSION					AUTHOR           					DATE 						DESCRIPTION 		   					  *
* 1.0.0 					Kareem Hassaan						22 DEC,2021					- Initial Creation						  *
**************************************************************************************************************************************/
/**************************************************************************************************************************************
* ! Title      	: General Interrupt Enable Driver                                                        							  *                     
* ! File Name	: GIE_intrface.h                                                     							                      *
* ! Description : This file has the Definitions needed		         		        							                      *
* ! Compiler  	: GNU AVR cross Compiler                                            							                      *
* ! Target 	  	: Atmega32 Micro-Controller                                         							                      *
* ! Layer 	  	: MCAL                  						                                         							  *
**************************************************************************************************************************************/

#ifndef GIE_INTERFACE_H
#define GIE_INTERFACE_H

/*************************************************************************************************************************************/
/***************************************************** Functions Prototypes **********************************************************/
/*************************************************************************************************************************************/
/**************************************************************************************************************************************
* Function Name		: MGIE_voidGlobalInterruptEnable																	              *
* Parameters (in)	: None					                      																	  *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to Enable the Global interrupt													                      *
**************************************************************************************************************************************/
void MGIE_voidGlobalInterruptEnable();
/**************************************************************************************************************************************
* Function Name		: MGIE_voidGlobalInterruptDisable																	              *
* Parameters (in)	: None					                      																	  *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to Disable the Global interrupt													                      *
**************************************************************************************************************************************/
void MGIE_voidGlobalInterruptDisable();



#endif /*GIE_INTERFACE_H*/