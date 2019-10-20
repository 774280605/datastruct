#ifndef ABSTRACTALGORITHM__H_
#define ABSTRACTALGORITHM__H_

/*
 * ģ�巽����������Ĳ��䲿�֣����໯�㷨�Ŀɱ䲿��
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
