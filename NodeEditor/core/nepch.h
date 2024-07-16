#pragma once

#ifdef NE_PLATFORM_WINDOWS
	#ifndef NOMINMAX
		// See github.com/skypjack/entt/wiki/Frequently-Asked-Questions#warning-c4003-the-min-the-max-and-the-macro
		#define NOMINMAX
	#endif
#endif

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>
#include <stdint.h>

#include <string>
#include <sstream>
#include <array>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include "Core.h"

#include "Log.h"

#include "debug/Instrumentor.h"

#ifdef  NE_PLATFORM_WINDOWS
	#include <Windows.h>
#endif //  NE_PLATFORM_WINDOWS

