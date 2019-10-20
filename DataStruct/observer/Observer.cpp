//
// Created by demon on 2019/10/20.
//

#include <cstdio>
#include "Observer.h"

observer::Observer::Observer() {

}

observer::Observer::~Observer() {


}

observer::ConcreteObserver::ConcreteObserver() {
}

observer::ConcreteObserver::~ConcreteObserver() {

}

void observer::ConcreteObserver::update() {
    printf("observer::ConcreteObserver::update()");
}

void observer::Subject::add(observer::Observer *obs) {
    list_.push_back(obs);
}

void observer::Subject::remove(observer::Observer *obs) {

}

void observer::Subject::update() {

    for (auto&observer:list_){
        observer->update();
    }
}
