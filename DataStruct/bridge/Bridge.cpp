//
// Created by demon on 2019/11/2.
//

#include <cstdio>
#include "Bridge.h"

void Ximplmentor::operation() {
    printf("Ximplmentor::operation()\n");

}

Abstraction::Abstraction(Implmentor *implmentor):implmentor_(implmentor) {


}

void Zimplmentor::operation() {
    printf("Ximplmentor::operation()");

}

void ReflectionAbstraction::operation() {
    printf("ReflectionAbstraction::operation()\n");
    this->implmentor_->operation();
}

ReflectionAbstraction::ReflectionAbstraction(Implmentor *implmentor) : Abstraction(implmentor) {

}
