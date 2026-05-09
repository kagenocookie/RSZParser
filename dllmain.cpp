#include <thread>

#if WINDOWS
#include <windows.h>
#include "RSZStructConstructor.hpp"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  reason, LPVOID lpReserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

#else

#include "RSZStructConstructor.hpp"

__attribute__((constructor))
int	main()
{
	return 0;
}
#endif