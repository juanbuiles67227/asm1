// asm1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	_asm
	{
		mov ax, 5
		mov bx, 2
		add ax, bx
	}
	return 0;
}