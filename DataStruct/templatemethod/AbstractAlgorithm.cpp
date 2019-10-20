#include "AbstractAlgorithm.h"
#include <cstdio>

void TemplateMethod::AbstractMethod::run(){
	this->display();
	this->showName();
}

void TemplateMethod::ConcreteMethod::showName(){
	printf("ConcreteMethod::showName()\n");
}

void TemplateMethod::ConcreteMethod::display(){
	printf("ConcreteMethod::display()\n");
}
