//
// Created by demon on 2019/10/30.
//

#ifndef DATASTRUCT_ADAPTER_H
#define DATASTRUCT_ADAPTER_H



class Target{
public:
    Target()= default;
    virtual ~Target()= default;
    virtual void request();

};

class Adaptee{
public:
    Adaptee()= default;
    virtual ~Adaptee()=default;
    virtual void specifyRequest();
};
class Adapter: public Target, public Adaptee {
public:
    Adapter()= default;
    virtual ~Adapter()= default;

    void request() override;

    void specifyRequest() override;

};

#endif //DATASTRUCT_ADAPTER_H
