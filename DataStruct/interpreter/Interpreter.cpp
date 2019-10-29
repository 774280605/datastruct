//
// Created by demon on 2019/10/29.
//

#include "Interpreter.h"

bool TerminalExpression::interpret(std::string context) {
    return context.find(data_) > 0;
}

TerminalExpression::TerminalExpression(std::string terminal):
data_(terminal){


}
