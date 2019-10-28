//
// Created by zxf on 2019/10/27.
//

#ifndef DATASTRUCT_CHAINOFRESPONSIBILITY_H
#define DATASTRUCT_CHAINOFRESPONSIBILITY_H
enum {
    EVENT_READ=0x00000001,
    EVENT_WRITE=0x00000002,
};



class ChainOfResponsibility {
public:
    ChainOfResponsibility(ChainOfResponsibility*chainOfResponsibility);

    virtual ~ChainOfResponsibility() = default;

    virtual void handle(int event);

protected:
    ChainOfResponsibility*chainOfResponsibility_;
};

class ReadEvent:public ChainOfResponsibility{
public:
    ReadEvent(ChainOfResponsibility *chainOfResponsibility);
    virtual ~ReadEvent()= default;

public:
    void handle(int event) override;
};

class WriteEvent:public ChainOfResponsibility{
public:
    WriteEvent(ChainOfResponsibility*chainOfResponsibility);
    virtual ~WriteEvent()=default;

    void handle(int event) override;
};


#endif //DATASTRUCT_CHAINOFRESPONSIBILITY_H
