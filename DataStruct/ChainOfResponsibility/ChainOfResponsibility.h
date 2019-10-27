//
// Created by zxf on 2019/10/27.
//

#ifndef DATASTRUCT_CHAINOFRESPONSIBILITY_H
#define DATASTRUCT_CHAINOFRESPONSIBILITY_H


class ChainOfResponsibility {
public:
    ChainOfResponsibility(ChainOfResponsibility*chainOfResponsibility);

    virtual ~ChainOfResponsibility() = default;

    virtual void handle(int event)=0;

private:
    ChainOfResponsibility*chainOfResponsibility_;
};


#endif //DATASTRUCT_CHAINOFRESPONSIBILITY_H
