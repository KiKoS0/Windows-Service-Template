#pragma once
#include <Windows.h>

// Macro to check if globals and helper macros got defined
#ifndef GLOBAL_DEF
#define GLOBAL_DEF

#define _T (LPWSTR)
#define SERVICE_NAME _T("TEST___SERVICE")

extern SERVICE_STATUS        g_ServiceStatus ;
extern SERVICE_STATUS_HANDLE g_StatusHandle ;
extern HANDLE                g_ServiceStopEvent ;





#endif // !GLOBAL_DEF