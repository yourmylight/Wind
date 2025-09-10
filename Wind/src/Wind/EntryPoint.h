#pragma once

#ifdef WD_PLATFORM_WINDOWS

extern Wind::Application* Wind::CreateApplication();

int main() {
	auto* app = Wind::CreateApplication();
	app->Run();
	delete app;
}

#endif