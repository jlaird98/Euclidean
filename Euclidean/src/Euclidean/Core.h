#pragma once

#ifdef EUCLID_PLATFORM_WINDOWS
	#ifdef EUCLID_BUILD_DLL
		#define EUCLID_API __declspec(dllexport)
	#else
		#define EUCLID_API __declspec(dllimport)
	#endif
#else
	#error Euclidean only supports Windows!
#endif