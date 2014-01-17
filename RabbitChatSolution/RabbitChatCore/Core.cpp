#include "StdAfx.h"
#include "Core.h"

using namespace RabbitChatCore;

const char* Core::VERSIONSTRING = "0.1";

Core::Core(void)
{
	
}

Core::~Core(void)
{
}

void Core::GetVersionString(char* buffer)
{
	buffer = strcpy(buffer, VERSIONSTRING);
}