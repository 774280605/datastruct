#include "State.h"
#include <cstdio>

void State_Pattern::NightState::doWork(){
	printf("���Ϲ���\n");
}


void State_Pattern::DayLightState::doWork(){
	printf("���칤��\n");
}
