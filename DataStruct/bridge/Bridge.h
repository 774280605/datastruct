//
// Created by demon on 2019/11/2.
//

#ifndef DATASTRUCT_BRIDGE_H
#define DATASTRUCT_BRIDGE_H

class Implmentor{
public:
    Implmentor() = default;
    virtual~Implmentor()= default;
    virtual void operation()=0;
};

class Ximplmentor:public Implmentor{
public:
    Ximplmentor()= default;

    virtual ~Ximplmentor() = default;

    void operation() override;
};

class Zimplmentor:public Implmentor{
public:
    Zimplmentor() = default;
    virtual~Zimplmentor()= default;

    virtual void operation() override;
};

class Abstraction{
public:
    Abstraction(Implmentor*implmentor);
    virtual ~Abstraction()=default;
    virtual void operation()=0;
protected:
    Implmentor *implmentor_{};
};

class ReflectionAbstraction:public Abstraction{
public:
    ReflectionAbstraction(Implmentor*implmentor);
    virtual ~ReflectionAbstraction()= default;

    void operation() override;
};



class Bridge {
public:
    Bridge()=default;
    virtual ~Bridge()= default;
};


#endif //DATASTRUCT_BRIDGE_H
