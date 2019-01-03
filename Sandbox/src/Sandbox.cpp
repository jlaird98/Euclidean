#include <Euclidean.h>

class Sandbox : public Euclidean::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{
		
	}
};

Euclidean::Application* Euclidean::CreateApplication()
{
	return new Sandbox();
}