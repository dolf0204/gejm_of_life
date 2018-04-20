#include "gej_of_lajf.h"
#include<ctime>

bool gej_of_lajf::slucajna_vrijednost()
{
	
	
	int n = rand() % (4 - 1 + 1) + 1;

	if (n == 2)
	{
		return true;
	}

	return false;
}

bool gej_of_lajf::celija_zauzeta(int i, int j)
{
	return _generacija[i][j];
	celija_zauzeta(i + 1, j + 1);
}

gej_of_lajf::gej_of_lajf()
{
	srand(time(nullptr));

	for (unsigned i = 0; i < REDAKA; i++)
	{
		for (unsigned j = 0; j < STUPACA; j++)
		{
			if (slucajna_vrijednost())
			{
				_generacija[i][j] = true;
				
			}
			else
			{
				_generacija[i][j] = false;
			}
			
		}
	}
}

void gej_of_lajf::sljedeca_generacija()
{
	for (unsigned i = 0; i < REDAKA; i++)
	{
		for (unsigned j = 0; j < STUPACA; j++)
		{
			if (celija_zauzeta(i, j))
			{
				if (i == 0 && j == 0)
				{
					int counter = 0;
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					
					else
					{
						_generacija[i][j] = false;
					} 
				}
				else if (i == 0 && j == 39)
				{
					int counter = 0;
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 19 && j == 0)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 19 && j == 39)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 0 && j > 0)
				{
					int counter = 0;
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 19 && j > 0)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i > 0 && j == 0)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i > 0 && j == 39)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}

				else
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if (counter == 2 || counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}
				}
			}
			else
			{
				if (i == 0 && j == 0)
				{
					int counter = 0;
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if (counter == 3)
					{
						_generacija[i][j] = true;
					}

					else
					{
						_generacija[i][j] = false;
					}
				}
				else if (i == 0 && j == 39)
				{
					int counter = 0;
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if ( counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 19 && j == 0)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 19 && j == 39)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if ( counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 0 && j > 0)
				{
					int counter = 0;
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if ( counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i == 19 && j > 0)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if ( counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i > 0 && j == 0)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if (counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}
				else if (i > 0 && j == 39)
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}

				}

				else
				{
					int counter = 0;
					if (celija_zauzeta(i - 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i - 1, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i, j + 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j - 1))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j))
					{
						counter++;
					}
					if (celija_zauzeta(i + 1, j + 1))
					{
						counter++;
					}
					if (counter == 3)
					{
						_generacija[i][j] = true;
					}
					else
					{
						_generacija[i][j] = false;
					}
				}
			}
		}
				
				
	}
}
			



void gej_of_lajf::iscrtaj()
{
	for (unsigned i = 0; i < REDAKA; i++)
	{
		for (unsigned j = 0; j < STUPACA; j++)
		{
			if (_generacija[i][j])
			{
				cout << "*";
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;
	}
}



