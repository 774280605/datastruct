#ifndef ABSTRACTALGORITHM__H_
#define ABSTRACTALGORITHM__H_

/*
 * 模板方法：定义算的不变部分，子类化算法的可变部分
 */

namespace TemplateMethod{

	class AbstractMethod {
	public:
		AbstractMethod() = default;
		virtual ~AbstractMethod() = default;

		void run();

		virtual void showName() = 0;
		virtual void display() = 0;


	};


	class ConcreteMethod :public AbstractMethod {
	public:
		ConcreteMethod() = default;
		virtual ~ConcreteMethod() = default;

		void showName() override;
		void display() override;
	};
}






#endif
