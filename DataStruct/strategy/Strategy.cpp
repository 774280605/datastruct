#include "Strategy.h"
#include <cstdio>

void strategy::NormalStrategy::compose(){
	printf("NormalStrategy::compose()\n");
}

void strategy::TextStrategy::compose(){
	printf("TextStrategy::compose()\n");
}

strategy::Context::Context(AbstractStrategy* strategy):
strategy_(strategy){

}

void strategy::Context::run(){
	strategy_->compose();
}

void strategy::Context::setStrategy(AbstractStrategy* strategy){
	this->strategy_ = strategy;
}
