#include <Wind.h>

class Sandbox : public Wind::Application
{
public:
	Sandbox() {
	
	}
	~Sandbox() {
	
	}
};

Wind::Application* Wind::CreateApplication() {
	return new Sandbox();
}