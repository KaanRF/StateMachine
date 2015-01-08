/*
 * StateMachine.c
 *
 *  Created on: 12 Ara 2014
 *      Author: KandemirK
 */
#include <windows.h>
#include "stdio.h"
#include "StateMachine.h"



typedef enum
{
	State_A ,
	State_B ,
	State_C ,
	State_D ,
	NUMBER_OF_STATES
}t_StateTypes;

typedef enum
{
	changeState,
	stayState,
	exitState,
	timeOut
}t_InputsTypes;

void SmA_State_A(void);
void SmA_State_B(void);
void SmA_State_C(void);
void SmA_State_D(void);

typedef struct
{
	t_StateTypes State;
	void (*state)(void);
	void (*input)(void);
}t_StateMachineTypes;

t_StateMachineTypes StateMachineArray[NUMBER_OF_STATES] =
{
	{State_A, SmA_State_A},
	{State_B, SmA_State_B},
	{State_C, SmA_State_C},
	{State_D, SmA_State_D}
};

t_StateMachineTypes *currentState = &StateMachineArray[State_A];
void setState(t_StateTypes state)
{
	if (state < NUMBER_OF_STATES)
	{
		currentState = &StateMachineArray[state];
	}
}

t_StateMachineTypes* getState(void)
{
	return currentState;
}

//void setInput(t_InputsTypes input)
//{
//	currentInput =
//}

void SmA_State_A(void)
{
	setState(State_B);
	Log("State_A dan, State_B ye ");
}

void SmA_State_B(void)
{
	setState(State_D);
	Log("State_B dan, State_D ye ");
}

void SmA_State_C(void)
{
	setState(State_A);
	Log("State_C dan, State_A ye ");
}

void SmA_State_D(void)
{
	setState(State_C);
	Log("State_A dan, State_C ye ");
}
// todo : Handle fonksiyonu input da alıcak ve SmA_State_x fonksiyonları inputları chechk edip stat kontrolü yapıcak.
void vHandleStateMachine(void)
{

	LogInteger("StateTypes ", currentState->State);
	if (currentState->state != 0x00)
	{
		(currentState->state)();
	}

}
