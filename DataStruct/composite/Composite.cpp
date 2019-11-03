//
// Created by demon on 2019/11/3.
//

#include <cstdio>
#include "Composite.h"

void composite::Component::Add(composite::Component *component) {
    this->vector_.push_back(component);
}

void composite::Component::operation() {
    printf("composite::Component::operation()\n");
    for (auto&item:vector_) {
        item->operation();
    }
}
