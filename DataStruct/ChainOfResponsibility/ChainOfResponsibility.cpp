//
// Created by zxf on 2019/10/27.
//

#include <cstdio>
#include "ChainOfResponsibility.h"

ChainOfResponsibility::ChainOfResponsibility(ChainOfResponsibility *chainOfResponsibility)
:chainOfResponsibility_(chainOfResponsibility){


}

void ChainOfResponsibility::handle(int event) {
    printf("ChainOfResponsibility::handle\n");
}

void ReadEvent::handle(int event) {
    if(event&EVENT_READ)
        printf("ReadEvent::handle()\n");

    if(chainOfResponsibility_)
        chainOfResponsibility_->handle(event);

}

ReadEvent::ReadEvent(ChainOfResponsibility *chainOfResponsibility) : ChainOfResponsibility(chainOfResponsibility) {

}

WriteEvent::WriteEvent(ChainOfResponsibility *chainOfResponsibility) : ChainOfResponsibility(chainOfResponsibility) {

}

void WriteEvent::handle(int event) {
    if(event&EVENT_WRITE)
        printf("WriteEvent::handle()\n");

    if(chainOfResponsibility_){
        printf("next instance handle this context\n");
        chainOfResponsibility_->handle(event);
    }


}
