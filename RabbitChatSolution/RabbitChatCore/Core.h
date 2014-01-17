#pragma once
#include "stdafx.h"
/*
#include "unicode/utypes.h"
#include "unicode/uchar.h"
#include "unicode/locid.h"
#include "unicode/ustring.h"
#include "unicode/ucnv.h"
#include "unicode/unistr.h"
*/

#define U_NO_DEFAULT_INCLUDE_UTF_HEADERS 1;

namespace RabbitChatCore
{
	class Core
	{
		private:
		public:
			Core(void);
			~Core(void);
			static const char* VERSIONSTRING;
			static void GetVersionString(char*);
	};
}