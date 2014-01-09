#include "Core.h"

using namespace RabbitChat;

Core::Core(void)
{
	VERSIONSTRING = "v0.1";
}

Core::~Core(void)
{
}

int Core::GetVersion()
{
	return VERSION;
}
