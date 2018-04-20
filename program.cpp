#include <iostream>
#include <string>
#include <fstream>
#include "gej_of_lajf.h"
#include<Windows.h>

using namespace std;

int main()
{

	gej_of_lajf the_game;


bool dalje;
do {
	the_game.iscrtaj();
	the_game.sljedeca_generacija();

	cout << "Dalje (1/0): ";
	cin >> dalje;
}
		while (dalje);

		system("pause");
		return 0;



}
