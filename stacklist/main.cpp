#include <iostream>
#include "stacklist.h"

using namespace std;

int main()
{
  StackList<int> t;
	int j = 0;
	cout << "Push - 1 / Pop - 2 / End - 0 " << endl;
	int elem;
	cin >> j;
	while (j != 0)
	{
		switch (j)
		{
		case 1:
			cout << "Push: " << endl;
			cin >> elem;
			t.Push(elem);
			break;
		case 2:
			cout << "Pop: ";
			if (t.IsEmpty())
				cout << "Stack is empty"<<endl;
			else				
				cout << t.Pop() << endl;
			break;
		default:
			break;
		}

		cout << "Enter your choice: ";
		cin >> j;
		if ((j < 0) || (j > 2))
		{
			cout << "!!! Incorrect value !!!" << endl;
			break;
		}
	}
	if (t.IsEmpty() == true)
		cout << "Stack is empty" << endl;
	system("pause");
	return 0;	
}
