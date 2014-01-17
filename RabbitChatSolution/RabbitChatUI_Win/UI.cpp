#include "stdafx.h"
#include "UI.h"

using namespace std;
using namespace RabbitChatCore;
using namespace RabbitChatUI;

UI::UI(void)
{
	core = new Core();
	cout << Core::VERSIONSTRING;
	system("pause");
}


UI::~UI(void)
{
}
