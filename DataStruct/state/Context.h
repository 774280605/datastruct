#pragma once
/*
 * 对象行为模式：状态模式
 * 状态不同会有不用的行为
 */
#include "State.h"
namespace State_Pattern{
	class Context {
	public:
		Context(State*state);
		virtual ~Context() = default;

		void mustBeDoWork();
		void setState(State*state);


	private:
		State* state_{ nullptr };
	};

}
