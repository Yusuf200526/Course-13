#pragma once
#include<iostream>
#include"clsDynamicArray.h"
using namespace std;
template <class T>
class clsMyQueueArr
{
protected:

	clsDynamicArray<T> _MyDynamicArray;

public:

	void Push(T Item)
	{
		_MyDynamicArray.InsertAtEnd(Item);
	}

	void Pop()
	{
		_MyDynamicArray.DeleteFirstItem();
	}

	void Print()
	{
		_MyDynamicArray.PrintList();
	}

	int Size()
	{
		return _MyDynamicArray.Size();
	}

	bool IsEmpty()
	{
		return _MyDynamicArray.IsEmpty();
	}

	T Front()
	{
		return _MyDynamicArray.GetItem(0);
	}

	T Back()
	{
		return _MyDynamicArray.GetItem((Size() - 1));
	}

	////-------------------

	// Extension 1 :
	T GetItem(int Index)
	{
		return _MyDynamicArray.GetItem(Index);
	}

	// Extension 2 :
	void Reverse()
	{
		_MyDynamicArray.Reverse();
	}

	// Extension 3 :
	void UpdateItem(int Index, T NewValue)
	{
		_MyDynamicArray.SetItem(Index, NewValue);
	}

	// Extension 4 :
	bool InsertAfter(int Index, T Item)
	{
		return _MyDynamicArray.InsertAfter(Index, Item);
	}

	// Extension 5 : 
	void InsertAtFront(T Value)
	{
		_MyDynamicArray.InsertAtBeginning(Value);
	}

	// Extension 6 : 
	void InsertAtBack(T Value)
	{
		_MyDynamicArray.InsertAtEnd(Value);
	}

	// Extension 7 : 
	void Clear()
	{
		_MyDynamicArray.Clear();
	}
	

};

