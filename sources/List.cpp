#include <iostream>
#include "List.h"

using namespace std;
using namespace list;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество элементов" << endl;
	int n;
	cin >> n;
	int* mas = new int [n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " значение" << endl;
		cin >> *(mas + i);
	}
	List *list = new List;
	for (int i = 0; i < 5; i++)
	{
		list->add_setter(*(mas + i));
	}

	system("pause");
	return 0;
}
