#pragma once
#include<iostream>
using namespace std;
template <class T>
class clsDynamicArray
{
protected:
	int _Size = 0;
	T* TempArray;
public:

	T* OriginalArray;

	clsDynamicArray(int Size = 0)
	{
		if (Size < 0)
			_Size = 0;

		_Size = Size;
		OriginalArray = new T[_Size];
	}

	bool SetItem(int Index, T Item)
	{
		if (Index < 0 || Index >= _Size)
		{
			return false;
		}

		OriginalArray[Index] = Item;
		return true;
	}

	bool IsEmpty()
	{
		return (_Size == 0 ? true : false);
	}

	int Size()
	{
		return _Size;
	}

	void PrintList()
	{
		for (int j = 0; j < _Size; j++)
		{
			cout<<"[" << OriginalArray[j] << "] ";
		}
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
		{
			NewSize = 0;
		}

		TempArray = new T[NewSize];

		if (NewSize < _Size)
		{
			_Size = NewSize;
		}


		for (int i = 0; i < _Size; i++)
		{
			TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[]OriginalArray;

		OriginalArray = TempArray;

	}
	
	
};

