//
// Created by demon on 2019/11/2.
//

#include <cstdio>
#include "Decorator.h"

void ConcreteComponent::draw() {
    printf("ConcreteComponent::draw()\n");
}

Decorator::Decorator(Component *component):component_(component) {

}

void Decorator::draw() {
    component_->draw();
}

ConcreteDecorator::ConcreteDecorator(Component *component) : Decorator(component) {

}

void ConcreteDecorator::draw() {
    printf("ConcreteDecorator::draw()\n");
    Decorator::draw();
}
