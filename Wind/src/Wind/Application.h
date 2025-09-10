#pragma once

#include "Core.h"

namespace Wind {
	class WIND_API Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}