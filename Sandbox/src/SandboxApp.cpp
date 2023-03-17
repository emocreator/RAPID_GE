#include <Rapid.h>

class Sandbox : public Rapid::Application {
public:
	Sandbox() {

	}
	~Sandbox(){

	}
};

Rapid::Application* Rapid::CreateApplication() {
	return new Sandbox();
}