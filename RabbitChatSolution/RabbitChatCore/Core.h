#pragma once
#include "stdafx.h"

namespace RabbitChat
{
	public ref class Core
	{
		public:
			Core(void);
			~Core(void);
			static const int VERSION =1;
			int GetVersion(void);
			static const char* VERSIONSTRING;
	};
}
