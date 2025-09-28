#include<iostream>
#include"clsMyQueue.h"
using namespace std;

int main()
{
	clsMyQueue<int> MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);

	MyQueue.Print();

	cout << "\n\n";

	cout << MyQueue.Front() << endl;
	cout << MyQueue.Back() << endl;
	cout << MyQueue.Size() << endl;

	MyQueue.Pop();

	cout << "\n\n" << MyQueue.GetItem(2);
	MyQueue.Reverse();
	cout << "\n\n";
	MyQueue.Print();

	cout << "\n\n";
	MyQueue.UpdateItem(2, 1000);
	MyQueue.Print();

	cout << "\n\n";
	MyQueue.InsertAfter(2, 20000);
	MyQueue.Print();

	cout << "\n\n";

	MyQueue.InsertAtFront(0);
	MyQueue.Print();
	cout << "\n\n";

	MyQueue.InsertAtBack(0);
	MyQueue.Print();
	cout << "\n\n";

	MyQueue.Clear();

	MyQueue.Print();




	system("pause>0");

	return 0;


}