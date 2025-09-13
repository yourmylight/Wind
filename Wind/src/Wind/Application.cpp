#include "wdpch.h"
#include "Application.h"

#include "Wind/Events/ApplicationEvent.h"
#include "Wind/Log.h"

namespace Wind {
	Application::Application() {
	}
	Application::~Application() {
	}
	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			WD_TRACE(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			WD_TRACE(e.ToString());
		}

		while (true);
	}
}