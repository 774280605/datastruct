#include "Context.h"

State_Pattern::Context::Context(State* state):state_(state){
	
}

void State_Pattern::Context::mustBeDoWork(){
	state_->doWork();
}

void State_Pattern::Context::setState(State* state){
	state_ = state;
}
