#pragma once

#include "..\InternalHelpers.hpp"
#include <metahost.h>
#include "NetHostControl.hpp"
#pragma comment(lib, "mscoree.lib")

class CLRHost
{
private:
	static bool clrRunning;

	static ICLRMetaHost* clrInstance;
	static ICLRRuntimeInfo* runtimeInfo;
	static ICLRRuntimeHost* runtimeHost;
	static ICLRControl* clrControl;
	static INetDomain* netDomain;

public:
	static bool HostCLR();
	static void ReleaseCLR();

	static bool Initialize();
	static bool OnApplicationStart();
};