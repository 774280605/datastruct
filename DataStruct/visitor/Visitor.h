//
// Created by demon on 2019/10/20.
//

#ifndef DATASTRUCT_VISITOR_H
#define DATASTRUCT_VISITOR_H
namespace visitor{
    class Visitor;
    class Element{
    public:
        Element() = default;
        virtual ~Element()= default;
        virtual void accept(Visitor*vtr)=0;

        virtual void show()=0;
    };

    class ConcreteElementA:public Element{
    public:
        ConcreteElementA() = default;
        virtual ~ConcreteElementA()= default;

        virtual void accept(Visitor *vtr) override;

        virtual void show() override;
    };

    class ConcreteElementB:public Element{
    public:
        ConcreteElementB()=default;
        virtual ~ConcreteElementB()=default;

        virtual void accept(Visitor *vtr) override;

        virtual void show() override;
    };

    class Visitor {
    public:
        Visitor()= default;
        virtual ~Visitor()=default;

        virtual void visitConcreteElementA(ConcreteElementA*elementA)=0;
        virtual void visitConcreteElementB(ConcreteElementB*elementB)=0;
    };

    class ConcreteVisitorA:public Visitor{
    public:
        ConcreteVisitorA() = default;
        virtual ~ConcreteVisitorA()=default;

        virtual void visitConcreteElementA(ConcreteElementA *elementA) override;

        virtual void visitConcreteElementB(ConcreteElementB *elementB) override;
    };

}




#endif //DATASTRUCT_VISITOR_H
