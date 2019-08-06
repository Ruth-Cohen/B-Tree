
//Rut Goldshtain - 315556951
//Rut Spanier - 316213164
//teacher: Adina Milston
#include <iostream>
#include <string>
#include <list>
#include "BTree.h"
#include "busLine.h"
using namespace std;


int main()
{
	BTree<busLine> t;
	BNode<busLine>* busNode;
	busLine tmp, *aBus;
	int choice;
	do
	{
		cout << "Choose one of the following" << endl;
		cout << "1: add a busline" << endl;
		cout << "2: delete a busline" << endl;
		cout << "3: print a list of buslines" << endl;
		cout << "4: print a duration of a busline" << endl;
		cout << "10: exit" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:cout << "Please enter number and duration "; cin >> tmp; t.insert(tmp); break;
		case 2:cout << "please enter number "; cin >> tmp.line; t.deleteVal(tmp); break;
		case 3:t.printTree();  break;
		case 4:cout << "please enter number "; cin >> tmp.line; busNode = t.search(tmp);
			if (busNode)
			{
				cout << "duration: ";
				aBus = busNode->searchInNode(tmp);
				if (aBus) cout << aBus->minutes << endl;
				else cout << "not found " << endl; break;
			}
			else cout << "not found " << endl; break;
		case 10: cout << "byebye"; break;
		}

	} while (choice != 10);
	
	
	system("pause");
	return 0;
}