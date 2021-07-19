#pragma once
#include <iostream>

class Array
{
public:
	Array(int ArraySize);
	void showElements();
	void expendArray(int size);
	int getSize();
	int getElemSize();
	void setValue(int val);
	void setArray(int* pArr, int size);
	~Array();
private:
	int* pArray;
	int ArraySize;
	int ArrayStep;
	int ArrayStop;
};
