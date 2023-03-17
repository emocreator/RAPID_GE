#pragma once

#ifdef RD_PLATFORM_WINDOWS
extern Rapid::Application* Rapid::CreateApplication();

int main(int argc, char** argv) {
	printf("wagwan");
	auto app = Rapid::CreateApplication();
	app->Run();
	delete app;
}
#endif // RD_PLATFORM_WINDOWS
