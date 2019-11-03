//
// Created by demon on 2019/11/3.
//

#include <cstdio>
#include "Proxy.h"

void RealSubject::request() {
    printf("RealSubject::request()\n");
}

void Proxy::request() {
    subject_->request();

}

Proxy::Proxy() {
    subject_ = new RealSubject();
}
