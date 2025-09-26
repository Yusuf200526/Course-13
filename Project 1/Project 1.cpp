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

	clsDblLinkedList<int>::Node* N1 = MyDblLinkedList.Find(4);

	if (N1 != NULL)
	{
		cout << "Node with value 4 Is found :-)\n";
	}
	else
	{
		cout << "Node with value 4 is not found :-(\n";
	}


	MyDblLinkedList.InsertAfter(N1, 700);

	cout << "\n\n";

	


	MyDblLinkedList.InsertAtEnd(800);

	MyDblLinkedList.PrintList();

	cout << "\n\n";

	MyDblLinkedList.DeleteNode(N1);

	MyDblLinkedList.PrintList();

	cout << "\n\n";

	MyDblLinkedList.DeleteFirstNode();

	MyDblLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N2=MyDblLinkedList.Find(3);

	MyDblLinkedList.DeleteLastNode();

	cout << "\n\n";

	MyDblLinkedList.PrintList();

	

	system("pause>0");

	return 0;

}