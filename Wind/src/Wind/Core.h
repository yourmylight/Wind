#pragma once

#ifdef WD_PLATFORM_WINDOWS
	#ifdef WD_BUILD_DLL
		#define WIND_API __declspec(dllexport)
	#else
		#define WIND_API __declspec(dllimport)
	#endif
#else
	#error Wind only supports Windows!
#endif

#define BIT(x) (1 << x)