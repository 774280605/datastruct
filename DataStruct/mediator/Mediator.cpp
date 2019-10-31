//
// Created by demon on 2019/10/31.
//

#include "Mediator.h"

char *ConcreteColleagueA::getName() {
    return "my name is A\n";
}

ConcreteColleagueA::ConcreteColleagueA(Mediator *mediator):mediator_(mediator) {

}

char *ConcreteColleagueA::getBName() {
    return mediator_->getBName();
}

char *ConcreteColleagueB::getName() {
    return "my name is B\n";
}

ConcreteColleagueB::ConcreteColleagueB(Mediator *mediator) :mediator_(mediator){

}

char *ConcreteColleagueB::getAName() {
    return mediator_->getAName();
}

char *ConcreteMediator::getAName() {
    return colleagueA_->getName();
}

char *ConcreteMediator::getBName() {
    return colleagueB_->getName();
}

ConcreteMediator::ConcreteMediator()  {


}

void ConcreteMediator::setColleagueA(Colleague *colleague) {
    this->colleagueA_=colleague;

}

void ConcreteMediator::setColleagueB(Colleague *colleague) {
    this->colleagueB_=colleague;

}
