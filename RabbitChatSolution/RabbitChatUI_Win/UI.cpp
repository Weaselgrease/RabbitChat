#include "stdafx.h"
#include "UI.h"

using namespace RabbitChatCore;

UI::UI(void)
{
	core = new Core();
	printf("Version: %s\n", Core::VERSIONSTRING);


	system("pause");
}


UI::~UI(void)
{
}
