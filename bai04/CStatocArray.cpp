#include "CStaticArray.h"
bool myGreater(int a, int b)
{
    return a > b;
}
bool myLess(int a, int b)
{
    return a < b;
}
CStaticArray::CStaticArray()
{
	size = 0;
}
CStaticArray::CStaticArray(int n, int value)
{
	if (n > 100)
		throw "Size is too large";
	size = n;
	for (int i = 0; i < size; i++)
	{
		data[i] = value;
	}
}
CStaticArray::~CStaticArray()
{
}
void CStaticArray::input(int n)
{
	if (n > 100)
		throw "Size is too large";
	size = n;
	for (int i = 0; i < size; i++)
	{
		cin >> data[i];
	}
}
void CStaticArray::output()
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
int CStaticArray::getSize()
{
	return size;
}
// void CStaticArray::setSize(int n)
// {
// 	if (n > 100)
// 		throw "Size is too large";
// 	size = n;
// 	// return size;
// }
int CStaticArray::getAt(int index)
{
	if (index < 0 || index >= size)
		throw "Index is out of range";
	return data[index];
}
void CStaticArray::setAt(int index, int value)
{
	if (index < 0 || index >= size)
		throw "Index is out of range";
	data[index] = value;
}
void CStaticArray::sortDescending()
{
	sort(myGreater);
}
void CStaticArray::sortAscending()
{
	sort(myLess);
}
void CStaticArray::sort(bool (*compare)(int, int))
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (compare(data[i], data[j]))
			{
				int temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}
bool CStaticArray::find(int value)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] == value)
			return true;
	}
	return false;
}
int CStaticArray::findIndex(int value)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] == value)
			return i;
	}
	return -1;
}
int CStaticArray::maxValue()
{
	int max = data[0];
	for (int i = 1; i < size; i++)
	{
		if (data[i] > max)
			max = data[i];
	}
	return max;
}
int CStaticArray::minValue()
{
	int min = data[0];
	for (int i = 1; i < size; i++)
	{
		if (data[i] < min)
			min = data[i];
	}
	return min;
}
