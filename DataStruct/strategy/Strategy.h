#ifndef STRATEGY__H__
#define STRATEGY__H__

namespace strategy{
	class AbstractStrategy {
	public:
		AbstractStrategy() = default;
		virtual ~AbstractStrategy() = default;

		virtual void compose() = 0;

	};

	class NormalStrategy :public AbstractStrategy {
	public:
		NormalStrategy() = default;
		virtual ~NormalStrategy() = default;


		void compose() override;
	};

	class TextStrategy:public AbstractStrategy{
	public:
		TextStrategy()=default;
		virtual ~TextStrategy()=default;


		void compose() override;
	};

	class Context{
	public:
		Context(AbstractStrategy*strategy);
		virtual ~Context()=default;

		void run();
		void setStrategy(AbstractStrategy* strategy);

	private:
		AbstractStrategy* strategy_;
	};


}




#endif
