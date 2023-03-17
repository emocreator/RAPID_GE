#pragma once
#ifdef RD_PLATFORM_WINDOWS
	#ifdef RD_BUILD_DLL
		#define RAPID_API __declspec(dllexport)
	#else
		#define RAPID_API __declspec(dllimport)
	#endif

#else
	#error RAPID ONLY SUPPORTS THE WINDOWS PLATFORM! 
#endif // HZ_PLATFORM_WINDOWS
