#include"Cards.h"
#include"Deck.h"
#include"Game_Table.h"
#include"Player.h"
#include<iostream>

Game_Table::~Game_Table()
{

}

void Game_Table::function()
{
	cout << "text2";
}

void Game_Table::show_table(Cards card_Name, Cards colour, Player name1, Player name2)
{
	Cards Ca, Cd;
	Ca.set_Cards_Colour(6);
	string name = name1.get_name();
	string name3 = name2.get_name();
	cout << "\n\n\t\t" << name << "        " << endl;
	cout << "\t_____________________________________________________" << endl;
	cout << "\tI\t";
	for (int i = 0; i < 43; i++)
	{
		if ((i >= 0 && i <= 2) || (i >= 4 && i <= 5) || (i >= 7 && i <= 8) || (i >= 10 && i <= 11) || (i >= 13 && i <= 14) ||
			(i >= 16 && i <= 17) || (i >= 19 && i <= 20) || (i >= 23 && i <= 24) || (i >= 26 && i <= 27) ||
			(i >= 29 && i <= 30) || (i >= 32 && i <= 33) || (i >= 35 && i <= 36) || (i >= 38 && i <= 39) || (i >= 41 && i <= 42))
		{
			cout << Ca.get_Cards_Colour();
		}
		if (i == 3 || i == 15 || i == 31 || i == 37)
		{
			Ca.set_Cards_Colour(5);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 6 || i == 40)
		{
			Ca.set_Cards_Colour(6);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 9 || i == 18 || i == 25 || i == 34)
		{
			cout << "\t\t\t\t    I" << endl; Ca.set_Cards_Colour(5);
			if (i == 18)
			{
				Ca.set_Cards_Colour(4);
			}
			if (i == 34)
			{
				Ca.set_Cards_Colour(6);
			}
			cout << "\tI\t" << Ca.get_Cards_Colour();
		}
		if (i == 12 || i == 28)
		{
			Ca.set_Cards_Colour(4);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 21)
		{
			Ca.set_Cards_Colour(3);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 22)
		{
			if (name1.get_cards_volume() > 9)
			{
				cout << name1.get_cards_volume(); Ca.set_Cards_Colour(4);
			}
			else
				if (name1.get_cards_volume() < 10)
				{
					cout << name1.get_cards_volume(); Ca.set_Cards_Colour(3);
					cout << Ca.get_Cards_Colour();
					Ca.set_Cards_Colour(4);
				}
			cout << Ca.get_Cards_Colour();
		}

	}
	cout << "\t\t\t\t    I" << endl;
	Ca = card_Name;
	Cd = colour;
	if (Ca.get_Card_Name() != ""&&Cd.get_Card_Name() != "")
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "\tI\t\t\t\t\t\t    I" << endl;
		}
		for (int i = 0; i < 80; i++)
		{
			if (i == 0 || i == 18 || i == 36 || i == 42 || i == 60)
			{
				cout << "\tI\t  " << Ca.get_Cards_Colour();
			}
			if ((i >= 1 && i <= 8) || (i >= 19 && i <= 26) || (i == 37) || (i >= 43 && i <= 50) || (i >= 61 && i <= 68))
			{
				cout << Ca.get_Cards_Colour();
			}
			if (i == 9 || i == 27 || i == 51 || i == 69)
			{
				cout << "\t\t" << Cd.get_Cards_Colour();
			}
			if (i >= 10 && i <= 16 || (i >= 28 && i <= 34) || (i == 40) || (i >= 52 && i <= 58) || (i >= 70 && i <= 76))
			{
				cout << Cd.get_Cards_Colour();
			}
			if (i == 17 || i == 35 || i == 41 || i == 59 || i == 77)
			{
				cout << Cd.get_Cards_Colour() << "\t    I" << endl;
			}
			if (i == 38)
			{
				cout << Ca.get_Card_Name() << "-" << ">" << "\tV.S\t" << "<" << "-";
			}
			if (i == 39)
			{
				cout << Cd.get_Card_Name();
			}
		}
		for (int i = 0; i < 5; i++)
		{
			cout << "\tI\t\t\t\t\t\t    I" << endl;
		}
	}
	if (Ca.get_Card_Name() == ""&&Cd.get_Card_Name() == "")
	{
		for (int i = 0; i < 15; i++)
		{
			cout << "\tI\t\t\t\t\t\t    I" << endl;
		}
	}
	if (Ca.get_Card_Name() != ""&&Cd.get_Card_Name() == "")
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "\tI\t\t\t\t\t\t    I" << endl;
		}
		for (int i = 0; i < 82; i++)
		{
			if (i == 0 || i == 18 || i == 36 || i == 46 || i == 64)
			{
				cout << "\tI\t  " << Ca.get_Cards_Colour();
			}
			if (i >= 1 && i <= 8 || (i >= 19 && i <= 26) || (i == 37) || (i >= 47 && i <= 54) || (i >= 65 && i <= 72))
			{
				cout << Ca.get_Cards_Colour();
			}
			if (i == 9)
			{
				cout << "\t\t"; Cd.set_Cards_Colour(6); cout << Cd.get_Cards_Colour();
			}
			if (i == 38)
			{
				cout << Ca.get_Card_Name() << "-" << ">" << "\tV.S\t";
			}
			if (i == 42)
			{
				cout << "???";
			}
			if ((i >= 10 && i <= 17) || (i >= 27 && i <= 35) || (i >= 39 && i <= 41) || (i >= 43 && i <= 45) || (i >= 55 && i <= 63) || (i >= 73 && i <= 81))
			{
				if (i == 73)
				{
					cout << "\t\t"; Cd.set_Cards_Colour(6);
				}
				if (i == 27 || i == 55)
				{
					cout << "\t\t"; Cd.set_Cards_Colour(5); cout << Cd.get_Cards_Colour();
				}
				else
				{
					if (i == 12 || i == 33 || i == 61 || i == 76)
					{
						Cd.set_Cards_Colour(5);
					}
					if (i == 15 || i == 79)
					{
						Cd.set_Cards_Colour(6);
					}
					if (i == 30 || i == 39 || i == 58)
					{
						Cd.set_Cards_Colour(4);
					}
					cout << Cd.get_Cards_Colour();
				}
				if (i == 17 || i == 35 || i == 45 || i == 63 || i == 81)
				{
					cout << "\t    I" << endl;
				}
			}
		}
		for (int i = 0; i < 5; i++)
		{
			cout << "\tI\t\t\t\t\t\t    I" << endl;
		}

	}
	if (Ca.get_Card_Name() == ""&&Cd.get_Card_Name() != "")
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "\tI\t\t\t\t\t\t    I" << endl;
		}
		for (int i = 0; i < 82; i++)
		{
			if ((i >= 0 && i <= 8) || (i >= 17 && i <= 25) || (i >= 34 && i <= 39) || (i >= 43 && i <= 51) || (i >= 60 && i <= 68)/*||(i>=27&&i<=35)||(i>=39&&i<=41)||(i>=43&&i<=45)||(i>=55&&i<=63)||(i>=73&&i<=81)*/)
			{
				if (i == 37)
				{
					cout << "???";
				}
				if (i == 3 || i == 17 || i == 23 || i == 43 || i == 49 || i == 63)
				{
					Ca.set_Cards_Colour(5);
				}
				if (i == 6 || i == 60 || i == 66)
				{
					Ca.set_Cards_Colour(6);
				}
				if (i == 20 || i == 34 || i == 46)
				{
					Ca.set_Cards_Colour(4);
				}
				if (i == 0)
				{
					Ca.set_Cards_Colour(6);
					cout << "\tI\t  ";
				}
				cout << Ca.get_Cards_Colour();
				if (i == 8 || i == 25 || i == 51 || i == 68)
				{
					cout << "\t\t" << Cd.get_Cards_Colour();
				}

			}
			if (i == 40)
			{
				cout << "\tV.S\t" << "<" << "-";
			}
			if ((i >= 9 && i <= 16) || (i >= 26 && i <= 33) || (i >= 41 && i <= 42) || (i >= 52 && i <= 59) || (i >= 70 && i <= 77))
			{
				if (i == 41)
				{
					cout << Cd.get_Card_Name();
				}
				cout << Cd.get_Cards_Colour();
				if (i == 16 || i == 33 || i == 42 || i == 59)
				{
					cout << "\t    I\n\tI\t  ";
				}
				if (i == 77)
				{
					cout << "\t    I";
				}
			}
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "\tI\t\t\t\t\t\t    I" << endl;
		}
	}
	Ca.set_Cards_Colour(6);
	cout << "\tI\t\t\t\t   ";
	for (int i = 0; i < 43; i++)
	{
		if ((i >= 0 && i <= 2) || (i >= 4 && i <= 5) || (i >= 7 && i <= 8) || (i >= 10 && i <= 11) || (i >= 13 && i <= 14) ||
			(i >= 16 && i <= 17) || (i >= 19 && i <= 20) || (i >= 23 && i <= 24) || (i >= 26 && i <= 27) ||
			(i >= 29 && i <= 30) || (i >= 32 && i <= 33) || (i >= 35 && i <= 36) || (i >= 38 && i <= 39) || (i >= 41 && i <= 42))
		{
			cout << Ca.get_Cards_Colour();
		}
		if (i == 3 || i == 15 || i == 31 || i == 37)
		{
			Ca.set_Cards_Colour(5);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 6 || i == 40)
		{
			Ca.set_Cards_Colour(6);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 9 || i == 18 || i == 25 || i == 34)
		{
			cout << "\t    I" << endl; Ca.set_Cards_Colour(5);
			if (i == 18)
			{
				Ca.set_Cards_Colour(4);
			}
			if (i == 34)
			{
				Ca.set_Cards_Colour(6);
			}
			cout << "\tI\t\t\t\t   " << Ca.get_Cards_Colour();
		}
		if (i == 12 || i == 28)
		{
			Ca.set_Cards_Colour(4);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 21)
		{
			Ca.set_Cards_Colour(3);
			cout << Ca.get_Cards_Colour();
		}
		if (i == 22)
		{
			if (name2.get_cards_volume() < 10)
			{
				cout << name2.get_cards_volume(); Ca.set_Cards_Colour(3);
				cout << Ca.get_Cards_Colour();
				Ca.set_Cards_Colour(4);
			}
			else if (name2.get_cards_volume() > 9)
			{
				cout << name2.get_cards_volume(); Ca.set_Cards_Colour(4);
			}
			cout << Ca.get_Cards_Colour();
		}

	}
	cout << "\t    I" << endl;
	cout << "\tI___________________________________________________I";
	cout << "\n\n\t\t\t\t\t" << name3 << "        " << endl;
}