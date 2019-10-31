//
// Created by demon on 2019/10/30.
//

#include <cstdio>
#include "Adapter.h"

void Adaptee::specifyRequest() {
    printf("Adaptee::specifyRequest()\n");
}

void Target::request() {
    printf("Target::request()\n");
}

void Adapter::request() {
    specifyRequest();
}

void Adapter::specifyRequest() {
   printf("Adapter::specifyRequest()\n");
}
