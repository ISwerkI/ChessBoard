#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "Введите размер шахматной доски: "; cin >> size;
	bool counter = 1;
	for (int i = 0; i < size; i++)
	{
		for (int b = 0; b < size; b++)
		{
			counter == 1 ? cout << "+ " : cout << "- ";
			counter == 1 ? counter = 0 : counter = 1;
		}
		cout << endl;
		if (size % 2 == 0 and i%2==0)
		{

			counter = 0;
		}
		else if (size % 2 == 0)
		{
			counter = 1;
		}
	}
}