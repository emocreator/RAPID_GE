#pragma once
#include "Core.h"

namespace Rapid {

	class RAPID_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}

