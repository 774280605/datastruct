//
// Created by demon on 2019/10/20.
//

#include <cstdio>
#include "Visitor.h"

void visitor::ConcreteElementA::accept(visitor::Visitor *vtr) {
    vtr->visitConcreteElementA(this);
}

void visitor::ConcreteElementA::show() {
    printf("visitor::ConcreteElementA::show()\n");
}

void visitor::ConcreteElementB::accept(visitor::Visitor *vtr) {
    vtr->visitConcreteElementB(this);
}

void visitor::ConcreteElementB::show() {
    printf("visitor::ConcreteElementB::show()\n");
}

void visitor::ConcreteVisitorA::visitConcreteElementA(visitor::ConcreteElementA *elementA) {
    elementA->show();
}

void visitor::ConcreteVisitorA::visitConcreteElementB(visitor::ConcreteElementB *elementB) {
    elementB->show();
}
