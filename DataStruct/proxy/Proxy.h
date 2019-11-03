//
// Created by demon on 2019/11/3.
//

#ifndef DATASTRUCT_PROXY_H
#define DATASTRUCT_PROXY_H

class Subject{
public:
    Subject()=default;
    virtual~Subject()=default;

    virtual void request()=0;
};

class RealSubject:public Subject{
public:
    RealSubject()= default;
    virtual ~RealSubject()= default;

    virtual void request() override;
};




class Proxy: public Subject {
public:
    Proxy();
    virtual ~Proxy()= default;

    virtual void request() override;

private:
    Subject *subject_{};
};


#endif //DATASTRUCT_PROXY_H
