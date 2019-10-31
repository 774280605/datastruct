//
// Created by demon on 2019/10/31.
//

#ifndef DATASTRUCT_MEDIATOR_H
#define DATASTRUCT_MEDIATOR_H
class Colleague{
public:
    Colleague() = default;
    virtual ~Colleague()=default;

    virtual char *getName()=0;
};


class Mediator {
public:
    Mediator() = default;
    virtual ~Mediator()= default;

    virtual char*getAName()=0;

    virtual char *getBName()=0;
};

class ConcreteColleagueB:public Colleague{
public:
    ConcreteColleagueB(Mediator*mediator);
    virtual ~ConcreteColleagueB()= default;

    virtual char *getName() override;

    char *getAName();
private:
    Mediator*mediator_{};
};

class ConcreteColleagueA :public Colleague{
public:
    ConcreteColleagueA(Mediator*mediator);

    virtual ~ConcreteColleagueA()=default;

    virtual char *getName() override;

    char *getBName();
private:
    Mediator*mediator_{};
};




class ConcreteMediator:public Mediator{
public:
    ConcreteMediator();
    virtual ~ConcreteMediator()= default;

    virtual char *getAName() override;

    virtual char *getBName() override;

    void setColleagueA(Colleague *colleague);

    void setColleagueB(Colleague *colleague);
private:
    Colleague *colleagueA_{};
    Colleague *colleagueB_{};
};


#endif //DATASTRUCT_MEDIATOR_H
