#include"Cards.h"

Cards::~Cards()
{

}

void Cards::function()
{
	cout << "Text";//funkcja polimorficzna
}

ostream&operator<<(ostream&ex, const Cards &Ca)
{

	return ex << "   " << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << endl << "   " << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << endl
		<< "   " << Ca.colour << Ca.colour << Ca.card_Name << Ca.colour << Ca.colour << endl << "   " << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << endl
		<< "   " << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour << Ca.colour;

}

int Cards::operator<(Cards &cards)
{
	if (this->value < cards.value)
	{
		for (int i = 0; i < 80; i++)
		{
			if ((i >= 0 && i <= 8) || (i >= 18 && i <= 26))
			{
				if (i == 0 || i == 18)
				{
					cout << "\t\t";
				}
				cout << this->get_Cards_Colour();
				if (i == 8 || i == 26)
				{
					cout << "\t\t";
				}
			}
			if ((i >= 9 && i <= 17) || (i >= 27 && i <= 35))
			{

				cout << cards.get_Cards_Colour();
				if (i == 17 || i == 35)
				{
					cout << endl;
				}
			}
		}
		cout << "\t\t";
		for (int i = 0; i < 2; i++)
		{
			cout << this->get_Cards_Colour();
		}
		cout << this->get_Card_Name();
		for (int i = 0; i < 2; i++)
		{
			cout << this->get_Cards_Colour();
		}
		cout << "       <       ";
		for (int i = 0; i < 2; i++)
		{
			cout << cards.get_Cards_Colour();
		}
		cout << cards.get_Card_Name();
		for (int i = 0; i < 2; i++)
		{
			cout << cards.get_Cards_Colour();
		}
		cout << endl;
		for (int i = 0; i < 80; i++)
		{
			if ((i >= 0 && i <= 8) || (i >= 18 && i <= 26))
			{
				if (i == 0 || i == 18)
				{
					cout << "\t\t";
				}
				cout << this->get_Cards_Colour();
				if (i == 8 || i == 26)
				{
					cout << "\t\t";
				}
			}
			if ((i >= 9 && i <= 17) || (i >= 27 && i <= 35))
			{

				cout << cards.get_Cards_Colour();
				if (i == 17 || i == 35)
				{
					cout << endl;
				}
			}
		}
		return 1;
	}

	if (this->value > cards.value)
	{
		for (int i = 0; i < 80; i++)
		{
			if ((i >= 0 && i <= 8) || (i >= 18 && i <= 26))
			{
				if (i == 0 || i == 18)
				{
					cout << "\t\t";
				}
				cout << this->get_Cards_Colour();
				if (i == 8 || i == 26)
				{
					cout << "\t\t";
				}
			}
			if ((i >= 9 && i <= 17) || (i >= 27 && i <= 35))
			{

				cout << cards.get_Cards_Colour();
				if (i == 17 || i == 35)
				{
					cout << endl;
				}
			}
		}
		cout << "\t\t";
		for (int i = 0; i < 2; i++)
		{
			cout << this->get_Cards_Colour();
		}
		cout << this->get_Card_Name();
		for (int i = 0; i < 2; i++)
		{
			cout << this->get_Cards_Colour();
		}
		cout << "       >       ";
		for (int i = 0; i < 2; i++)
		{
			cout << cards.get_Cards_Colour();
		}
		cout << cards.get_Card_Name();
		for (int i = 0; i < 2; i++)
		{
			cout << cards.get_Cards_Colour();
		}
		cout << endl;
		for (int i = 0; i < 80; i++)
		{
			if ((i >= 0 && i <= 8) || (i >= 18 && i <= 26))
			{
				if (i == 0 || i == 18)
				{
					cout << "\t\t";
				}
				cout << this->get_Cards_Colour();
				if (i == 8 || i == 26)
				{
					cout << "\t\t";
				}
			}
			if ((i >= 9 && i <= 17) || (i >= 27 && i <= 35))
			{

				cout << cards.get_Cards_Colour();
				if (i == 17 || i == 35)
				{
					cout << endl;
				}
			}
		}
		return 2;
	}

	if (this->value == cards.value)
	{
		for (int i = 0; i < 80; i++)
		{
			if ((i >= 0 && i <= 8) || (i >= 18 && i <= 26))
			{
				if (i == 0 || i == 18)
				{
					cout << "\t\t";
				}
				cout << this->get_Cards_Colour();
				if (i == 8 || i == 26)
				{
					cout << "\t\t";
				}
			}
			if ((i >= 9 && i <= 17) || (i >= 27 && i <= 35))
			{

				cout << cards.get_Cards_Colour();
				if (i == 17 || i == 35)
				{
					cout << endl;
				}
			}
		}
		cout << "\t\t";
		for (int i = 0; i < 2; i++)
		{
			cout << this->get_Cards_Colour();
		}
		cout << this->get_Card_Name();
		for (int i = 0; i < 2; i++)
		{
			cout << this->get_Cards_Colour();
		}
		cout << "       ==      ";
		for (int i = 0; i < 2; i++)
		{
			cout << cards.get_Cards_Colour();
		}
		cout << cards.get_Card_Name();
		for (int i = 0; i < 2; i++)
		{
			cout << cards.get_Cards_Colour();
		}
		cout << endl;
		for (int i = 0; i < 80; i++)
		{
			if ((i >= 0 && i <= 8) || (i >= 18 && i <= 26))
			{
				if (i == 0 || i == 18)
				{
					cout << "\t\t";
				}
				cout << this->get_Cards_Colour();
				if (i == 8 || i == 26)
				{
					cout << "\t\t";
				}
			}
			if ((i >= 9 && i <= 17) || (i >= 27 && i <= 35))
			{

				cout << cards.get_Cards_Colour();
				if (i == 17 || i == 35)
				{
					cout << endl;
				}
			}
		}
		return 3;
	}
	return 0;
}

void Cards::set_Card_Name(string card_Name)
{
	this->card_Name = card_Name;
}
void Cards::set_Cards_Colour(char colour)
{

	this->colour = colour;

}

void Cards::set_Cards_value(int value)
{
	this->value = value;
}

string Cards::get_Card_Name()
{
	return this->card_Name;
}

char Cards::get_Cards_Colour()
{
	return this->colour;
}

int Cards::get_Cards_value()
{
	return this->value;
}

Cards::Cards() : value(0)
{
	card_Name = "";
	colour = '\0';
}
void Cards::show_card(string card_Name, char colour)
{
	Cards cards;
	cards.card_Name = card_Name;
	cards.colour = colour;
	cout << cards << endl;
}