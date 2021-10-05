using namespace std;

#include <iostream>
#include <string.h>
#include "Log.h"

void Log(string msg)
{
	cout << "-----------------------------------------------" << endl;
	cout << msg << endl;
	cout << "-----------------------------------------------" << endl;
}

void InitializeLog()
{
	Log("initialize");
}