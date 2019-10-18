#include "State.h"
#include <cstdio>

void State_Pattern::NightState::doWork(){
	printf("晚上工作\n");
}


void State_Pattern::DayLightState::doWork(){
	printf("白天工作\n");
}
