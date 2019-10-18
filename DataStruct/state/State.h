#pragma once

namespace State_Pattern{
	class State {
	public:
		State() = default;
		virtual ~State() = default;

		virtual void doWork() = 0;



	};

	class NightState :public State {
	public:
		NightState() = default;
		virtual ~NightState() = default;


		void doWork() override;
	};



	class DayLightState :public State {
	public:
		DayLightState() = default;
		virtual ~DayLightState() = default;


		void doWork() override;
	};
}

