//
// Created by demon on 2019/10/28.
//

#include <cstdio>
#include "Command.h"

void Receiver::action() {
    printf("Receiver::action()\n");

}

CopyCommand::CopyCommand(Receiver *receiver):
receiver_(receiver){


}

void CopyCommand::execute() {
    receiver_->action();
}

Invoke::Invoke(Command *command):
command_(command){


}

void Invoke::operation() {
    command_->execute();

}
