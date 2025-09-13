#pragma once

#ifdef WD_PLATFORM_WINDOWS

extern Wind::Application* Wind::CreateApplication();

int main(int argc, char** argv) {
	Wind::Log::Init();
	/*Wind::Log::GetCoreLogger()->warn("Initialized Log!");
	Wind::Log::GetClientLogger()->info("Hello!");*/
	WD_CORE_WARN("Initialed Log!");
	int a = 5;
	WD_INFO("Hello! Var={0}", a);

	auto* app = Wind::CreateApplication();
	app->Run();
	delete app;
}

#endif