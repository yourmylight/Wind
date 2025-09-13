#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Wind {
	class WIND_API Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}