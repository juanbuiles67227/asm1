// asm1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	_asm
	{
		mov eax, 5
		mov ebx, 2
		add ebx, eax
	}
	return 0;
}