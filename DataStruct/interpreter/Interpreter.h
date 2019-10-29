//
// Created by demon on 2019/10/29.
//

#ifndef DATASTRUCT_INTERPRETER_H
#define DATASTRUCT_INTERPRETER_H

#include <string>

class Expression{
public:
    Expression()= default;
    virtual ~Expression()=default;

    virtual bool interpret(std::string context)=0;

};

class TerminalExpression:public Expression{
public:
    TerminalExpression(std::string terminal);
    virtual~TerminalExpression()= default;

    bool interpret(std::string context) override;

private:
    std::string data_;
};


class OrExpression:public Expression{
public:
    OrExpression(Expression*lhs,Expression*rhs);
    virtual ~OrExpression()= default;

private:
    Expression *lsh_{};
    Expression *rsh_{};
};

class Interpreter {

};


#endif //DATASTRUCT_INTERPRETER_H
