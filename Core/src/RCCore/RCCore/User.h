#pragma once
#define DllExport   __declspec( dllexport )
class DllExport User
{
public:
	static const int TEST=1;
	User(void);
	~User(void);
};

