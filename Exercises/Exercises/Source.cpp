#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int wybor;

	cout << "Wybierz jak�kolwiek cyfr�" << endl;
	cin >> wybor;

	switch (wybor)
	{
		case 1:
			cout << "Jest p�no, id� spa�." << endl;
			break;
		case 2:
			cout << "Jeste� zm�czona, id� spa�." << endl;
			break;
		case 3:
			cout << "Zrozum, ju� najwy�szy czas." << endl;
			break;
		case 4:
			cout << "Prosz� Ci�, to jest �a�osne." << endl;
			break;
		case 5:
			cout << "Ile Ty masz lat, �eby o tej godzinie nie spa�?." << endl;
			break;
		case 6:
			cout << "Zgadnij co. Jest p�no." << endl; 
			break;
		case 7:
			cout << "Spitsja." << endl;
			break;
		case 8:
			cout << "Pathetic, really." << endl;
			break;
		case 9:
			cout << "Kt�ra jest godzina? Do spania." << endl;
			break;
		case 0:
			cout << "�pij..." << endl;
			break;
	}

	system("pause");
	return 0;
}