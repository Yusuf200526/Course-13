#include<iostream>
#include"clsDblLinkedList.h"
using namespace std;
int main()
{
	clsDblLinkedList<int> MyDblLinkedList;

	MyDblLinkedList.InsertAtBeginning(5);
	MyDblLinkedList.InsertAtBeginning(4);
	MyDblLinkedList.InsertAtBeginning(3);
	MyDblLinkedList.InsertAtBeginning(2);
	MyDblLinkedList.InsertAtBeginning(1);

	MyDblLinkedList.PrintList();

	cout << "\n\n\n";

	
    
	cout<<MyDblLinkedList.InsertAfter(3, 5.5);

	MyDblLinkedList.PrintList();

	system("pause>0");

	return 0;

}



