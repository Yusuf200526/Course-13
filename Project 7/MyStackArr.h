#pragma once
#include<iostream>
#include"clsMyQueueArr.h"
using namespace std;
template <class T>
class MyStackArr: public clsMyQueueArr<T>
{

	void Push(T Value)
	{
		clsMyQueueArr<T>::_MyDynamicArray.InsertAtBeginning(Value);
	}

	T Top()
	{
		return clsMyQueueArr<T>::Front();
	}

	T Bottom()
	{
		return clsMyQueueArr<T>::Back();
	}
};

