#pragma once
#include "stdafx.h"
#include "unicode/utypes.h"

#define U_NO_DEFAULT_INCLUDE_UTF_HEADERS 1;

namespace RabbitChat
{
	public ref class Core
	{
		public:
			Core(void);
			~Core(void);
			static const int VERSION =1;
			int GetVersion(void);
			static const UnicodeString VERSIONSTRING = "hi";
	};
}
