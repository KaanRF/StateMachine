/*
 * StateMachine.h
 *
 *  Created on: 12 Ara 2014
 *      Author: KandemirK
 */

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_


typedef unsigned char uchar;
#define TRUE 	 1
#define FALSE 	 0

#define LogInteger(string, integer) do {printf(string); printf(": %d\n", integer);} while(0)
#define Log(string) do {printf(string); printf("\n");} while(0)

extern void vStateMachineInit(void);
extern void vHandleStateMachine(void);


#endif /* STATEMACHINE_H_ */
