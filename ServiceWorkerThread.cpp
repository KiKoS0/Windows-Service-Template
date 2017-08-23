#include "ServiceWorkerThread.h"

DWORD WINAPI ServiceWorkerThread(LPVOID lpParam)
{
	//  Periodically check if the service has been requested to stop
	while (WaitForSingleObject(g_ServiceStopEvent, 0) != WAIT_OBJECT_0)
	{
		/*
		* Perform main service function here
		*/

		//  Simulate some work by sleeping
		Sleep(3000);
	}

	return ERROR_SUCCESS;
}

