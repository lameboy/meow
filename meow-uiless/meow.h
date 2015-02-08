#pragma once

#include <windows.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <msctf.h>

#include <Commctrl.h>
#pragma comment(lib,"comctl32.lib")
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#include <gdiplus.h>
#pragma comment(lib,"gdiplus.lib")

#include "resource.h"
#include <vector>
#include <map>

#include <atlstr.h>
#include <strsafe.h>
