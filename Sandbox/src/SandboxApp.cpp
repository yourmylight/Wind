#include <Wind.h>

class ExampleLayer : public Wind::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		WD_INFO("ExampleLayer::Update");
	}

	void OnEvent(Wind::Event& event) override
	{
		WD_TRACE("{0}", event.ToString());
	}

};

class Sandbox : public Wind::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Wind::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Wind::Application* Wind::CreateApplication()
{
	return new Sandbox();
}