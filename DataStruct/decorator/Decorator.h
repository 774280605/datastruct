//
// Created by demon on 2019/11/2.
//

#ifndef DATASTRUCT_DECORATOR_H
#define DATASTRUCT_DECORATOR_H

class Component{
public:
    Component()= default;

    virtual~Component() = default;

    virtual void draw()= 0;
};

class ConcreteComponent:public Component{
public:
    ConcreteComponent()= default;
    virtual ~ConcreteComponent()= default;

    virtual void draw() override;
};


class Decorator:public Component{
public:
    Decorator(Component*component);
    virtual~Decorator()= default;

    virtual void draw() override;

private:
    Component *component_{};
};

class ConcreteDecorator:public Decorator{
public:
    ConcreteDecorator(Component*component);
    virtual~ConcreteDecorator()= default;

    virtual void draw() override;
};







#endif //DATASTRUCT_DECORATOR_H
