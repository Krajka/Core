#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int wybor;

	cout << "Wybierz jak¹kolwiek cyfrê" << endl;
	cin >> wybor;

	switch (wybor)
	{
		case 1:
			cout << "Jest póŸno, idŸ spaæ." << endl;
			break;
		case 2:
			cout << "Jesteœ zmêczona, idŸ spaæ." << endl;
			break;
		case 3:
			cout << "Zrozum, ju¿ najwy¿szy czas." << endl;
			break;
		case 4:
			cout << "Proszê Ciê, to jest ¿a³osne." << endl;
			break;
		case 5:
			cout << "Ile Ty masz lat, ¿eby o tej godzinie nie spaæ?." << endl;
			break;
		case 6:
			cout << "Zgadnij co. Jest póŸno." << endl; 
			break;
		case 7:
			cout << "Spitsja." << endl;
			break;
		case 8:
			cout << "Pathetic, really." << endl;
			break;
		case 9:
			cout << "Która jest godzina? Do spania." << endl;
			break;
		case 0:
			cout << "Œpij..." << endl;
			break;
	}

	system("pause");
	return 0;
}