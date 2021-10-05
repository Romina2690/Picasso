using namespace std;

#include <iostream>
#include <string.h>
#include "Log.h"

void Log(string msg)
{
	cout << msg << endl;
}

void InitializeLog()
{
	Log("initialize");
}