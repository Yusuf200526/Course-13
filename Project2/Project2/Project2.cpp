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


	system("pause>0");

	return 0;


}