#pragma once


#include "Globals.h"

//************************************
// Method:    ServiceWorkerThread
// FullName:  ServiceWorkerThread
// Access:    public 
// Returns:   DWORD WINAPI
// Qualifier:
// Parameter: LPVOID lpParam
// Description: This function is defining what the service should be doing
//************************************
DWORD WINAPI ServiceWorkerThread(LPVOID lpParam);