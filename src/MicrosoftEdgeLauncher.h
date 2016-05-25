#include "stdafx.h"
#include <Shobjidl.h>
#include <Mshtml.h>

struct EdgeTargetInfo 
{
    HWND hwnd;
    PCWSTR title;
    PCWSTR url;
    PCWSTR processName;
    DWORD pid;
    IHTMLDocument2 *pDoc;
};

HRESULT LaunchEdge(_In_ PCWSTR pszUrl, _In_ BOOL bKeepAlive);
EdgeTargetInfo WatchForEdgeTab(_In_ PCWSTR pszUrl);
HRESULT EnumerateTargets(_Out_  std::vector<EdgeTargetInfo>& vTargets);
HRESULT WaitForProcessToExit(_In_ DWORD dwPid);
void ShowHelp();
HRESULT ShowLastError(_In_ PCWSTR pszErrorIntro);
int LifetimeTimeoutMs = INFINITE; 
