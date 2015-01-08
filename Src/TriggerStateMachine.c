/*
 * TriggerStateMachine.c
 *
 *  Created on: 12 Ara 2014
 *      Author: KandemirK
 */

#include <windows.h>
#include <stdio.h>
#include "StateMachine.h"


int main()
{
	int i = 0;

	//vStateMachineInit();

	while(i <= 10)
	{
		//LogInteger("%d . loop",i);
		vHandleStateMachine();
		i++;
	}
	return(TRUE);
}

