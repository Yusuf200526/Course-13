#pragma once
#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;
template <class T>
class clsMyQueue
{
protected:

	clsDblLinkedList<T> _MyList;

public:

	void Push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}

	void Pop()
	{
		_MyList.DeleteFirstNode();
	}

	void Print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T Front()
	{
		return _MyList.GetItem(0);
	}

	T Back()
	{
		return _MyList.GetItem((Size() - 1));
	}

	////-------------------

	// Extension 1 :
	T GetItem(int Index)
	{
		return _MyList.GetItem(Index);
	}

	// Extension 2 :
	void Reverse()
	{
		_MyList.Reverse();
	}

	// Extension 3 :
	void UpdateItem(int Index,T NewValue)
	{
		return 	_MyList.UpdateItem(Index, NewValue);
	}

	// Extension 4 :
	bool InsertAfter(int Index, T Item)
	{
		return _MyList.InsertAfter(Index, Item);
	}

	// Extension 5 : 
	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBeginning(Value);
	}
	
	// Extension 6 : 
	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}

	// Extension 7 : 
	void Clear()
	{
		_MyList.Clear();
	}

};

