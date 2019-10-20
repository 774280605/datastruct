// DataStruct.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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

int main()
{
	printf(u8"测试状态模式\n");
	testState();
	printf(u8"测试模板方法");
	testTemplateMethod();
	printf(u8"测试策略模式\n");
	testStrategy();
    printf(u8"测试观察者\n");
    testObserver();
    printf(u8"测试访问者模式\n");
    testVisitor();
	return 0;
}

