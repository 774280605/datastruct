﻿// DataStruct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "state/Context.h"
#include "templatemethod/AbstractAlgorithm.h"
#include "strategy/Strategy.h"
#include "observer/Observer.h"
/*
 * 测试：状态模式
 */
void testState(){
	auto dayLightState = new State_Pattern::DayLightState;
	auto nightState = new State_Pattern::NightState;

	auto context = new State_Pattern::Context(dayLightState);
	context->mustBeDoWork();
	context->setState(nightState);
	context->mustBeDoWork();
}
/*
 * 测试：模板方法
 */
void testTemplateMethod(){
	TemplateMethod::ConcreteMethod* concreteMethod =
		new TemplateMethod::ConcreteMethod;
	concreteMethod->run();
}

/*
 * 测试：策略模式
 */
void testStrategy(){
	strategy::Context* context = 
		new strategy::Context(new strategy::NormalStrategy);
	context->run();
	context->setStrategy(new strategy::TextStrategy);
	context->run();
}
/*
 * 测试：观察者模式
 */

void testObserver(){
    observer::Subject *subject = new observer::Subject();
    subject->add(new observer::ConcreteObserver());
    subject->add(new observer::ConcreteObserverB());
    subject->update();
}

/*
 * 测试：访问者模式
 */
#include "visitor/Visitor.h"
void testVisitor(){
    visitor::ConcreteVisitorA*concreteVisitorA=new visitor::ConcreteVisitorA();
    visitor::ConcreteElementA*concreteElementA=new visitor::ConcreteElementA();
    concreteElementA->accept(concreteVisitorA);
}

#include "ChainOfResponsibility/ChainOfResponsibility.h"
void testChainOfResponsibility(){
    int event=EVENT_WRITE|EVENT_READ;
    ReadEvent* readEvent=new ReadEvent(nullptr);
    WriteEvent *writeEvent = new WriteEvent(readEvent);
    writeEvent->handle(event);
};

#include "command/Command.h"

void testCommand(){
    auto receiver= new Receiver;
    auto command = new CopyCommand(receiver);
    auto invoker = new Invoke(command);
    invoker->operation();
}

#include "adapter/Adapter.h"
void testAdapter(){
    auto target=new Adapter;
    target->request();
}

#include "mediator/Mediator.h"

void testMediator(){
    auto mediator = new ConcreteMediator;
    auto a = new ConcreteColleagueA(mediator);
    auto b = new ConcreteColleagueB(mediator);
    mediator->setColleagueA(a);
    mediator->setColleagueB(b);
    printf(b->getAName());
    printf(a->getBName());
}

#include "bridge/Bridge.h"
void testBridge(){

    ReflectionAbstraction*abstraction= new ReflectionAbstraction(new Ximplmentor());
    abstraction->operation();
}

#include "decorator/Decorator.h"

void testDecorator(){
    auto decorator = new ConcreteDecorator(new ConcreteComponent);
    decorator->draw();
}

#include "composite/Composite.h"
void testComposite(){
    auto root = new composite::Composite();
    auto leaf= new composite::Composite();
    root->Add(leaf);
    root->operation();
};

#include "proxy/Proxy.h"

void testProxy(){
    auto proxy= new Proxy;
    proxy->request();
}


int main()
{
	printf("测试状态模式\n");
	testState();
	printf("测试模板方法");
	testTemplateMethod();
	printf("测试策略模式\n");
	testStrategy();
    printf("测试观察者\n");
    testObserver();
    printf("测试访问者模式\n");
    testVisitor();
    printf("测试职责链模式\n");
    testChainOfResponsibility();
    printf("测试命令模式\n");
    testCommand();
    printf("测试适配模式\n");
    testAdapter();
    printf("测试中介者模式\n");
    testMediator();
    printf("测试桥接模式\n");
    testBridge();
    printf("测试装饰者模式\n");
    testDecorator();
    printf("测试组合模式\n");
    testComposite();
    printf("测试代理模式\n");
    testProxy();
	return 0;
}

