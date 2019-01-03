#pragma once

#ifdef EUCLID_PLATFORM_WINDOWS

extern Euclidean::Application* Euclidean::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Euclidean::CreateApplication();
	app->Run();

	delete app;
}

#endif