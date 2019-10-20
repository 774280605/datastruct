//
// Created by demon on 2019/10/20.
//

#ifndef DATASTRUCT_OBSERVER_H
#define DATASTRUCT_OBSERVER_H

#include <vector>

namespace observer{
    class Observer {
    public:
        Observer();
        virtual ~Observer();

        virtual void update() = 0;
    };


    class ConcreteObserver:public Observer{
    public:
        ConcreteObserver();

        virtual ~ConcreteObserver();

        void update() override;

    };

    class Subject{
    public:
        Subject()= default;
        virtual ~Subject()= default;
        void add(Observer*obs);
        void remove(Observer*obs);
        void update();

    private:
        std::vector<observer::Observer*> list_;
    };


}






#endif //DATASTRUCT_OBSERVER_H
