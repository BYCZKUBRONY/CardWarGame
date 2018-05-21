#include"Cards.h"
#include"Deck.h"

void Deck::sset_Cardsa(int number, string card_Name)
{
	this->cards[number].set_Card_Name(card_Name);
}
void Deck::sset_Cardsb(int number, char colour)
{

	this->cards[number].set_Cards_Colour(colour);

}

void Deck::sset_Cards_value(int number, int value)
{
	this->cards[number].set_Cards_value(value);
}

string Deck::gget_Cardsa(int number)
{
	return this->cards[number].get_Card_Name();
}

char Deck::gget_Cardsb(int number)
{
	return this->cards[number].get_Cards_Colour();
}

int Deck::gget_Cards_value(int number)
{
	return this->cards[number].get_Cards_value();
}
Deck::~Deck()
{
	delete[]cards;
	cards = 0;
	this->how_many_cards = 0;
}

void Deck::function()
{
	cout << "text1";
}

void Deck::shift_a_deck(int number, int number1)
{
	Cards *temp = new Cards[this->how_many_cards];
	for (int i = 0; i < this->how_many_cards; i++)
	{
		temp[i] = this->cards[i];
	}

	for (int i = 0, j = number; j < number1; j++, i++)
	{
		this->cards[i] = temp[i + number];
	}
	for (int i = number1 - number, j = 0; j < number; j++, i++)
	{
		this->cards[i] = temp[j];
	}
	delete[]temp;
}
void Deck::partition_a_deck(int tab[], Deck tab1[], int value)
{
	for (int i = 0; i < value; i++)
	{
		delete[] tab1[i].cards;
		if (i == 0)
		{
			tab1[i].how_many_cards = (tab[i]);
			tab1[i].cards = new Cards[tab[i]];
			cout << tab1[i].how_many_cards << endl;
		}
		else
		{
			tab1[i].how_many_cards = (tab[i] - tab[i - 1]);
			tab1[i].cards = new Cards[tab[i] - tab[i - 1]];
			cout << tab1[i].how_many_cards << endl;
		}

	}
	cout << tab1[0].how_many_cards << endl;
	int y = 0;
	for (int i = 0; i < value; i++)
	{
		if (i == 0)
		{
			y = tab[i];
		}
		else
		{
			y = tab[i] - tab[i - 1];
		}
		for (int j = 0; j < y; j++)
		{
			if (i == 0)
			{
				tab1[i].cards[j] = this->cards[j];
			}
			else
			{
				tab1[i].cards[j] = this->cards[j + tab[i] - (tab[i] - tab[i - 1])];
			}
		}
	}
	Cards *temp = new Cards[this->how_many_cards - tab[value - 1]];
	for (int i = 0; i < this->how_many_cards - tab[value - 1]; i++)
	{
		temp[i] = this->cards[i + tab[value - 1]];
	}
	delete[]this->cards;
	cards = new Cards[this->how_many_cards - tab[value - 1]];

	for (int i = 0; i < this->how_many_cards - tab[value - 1]; i++)
	{

		cards[i] = temp[i];
	}
	delete[]temp;
	this->how_many_cards -= tab[value - 1];
}

void Deck::join_a_deck_to_deck(Deck *deck2)
{
	this->how_many_the_same_cards = this->how_many_the_same_cards + deck2->how_many_the_same_cards;
	Cards *temp;
	int temp_cards_value = this->how_many_cards;
	temp = new Cards[temp_cards_value];
	for (int i = 0; i < this->how_many_cards; i++)
	{
		temp[i] = this->cards[i];
	}
	this->how_many_cards = this->how_many_cards + deck2->how_many_cards;
	delete[]this->cards;
	cards = new Cards[this->how_many_cards];
	for (int i = 0; i < temp_cards_value; i++)
	{
		cards[i] = temp[i];
	}
	for (int i = temp_cards_value, w = 0; i < this->how_many_cards; i++, w++)
	{
		cards[i] = deck2->cards[w];
	}
}

void Deck::repair_a_deck()
{
	this->how_many_the_same_cards = 1;
	how_many_cards = 52;
	delete[]cards;
	cards = new Cards[how_many_cards];
	for (int j = 0; j < how_many_cards; j++)
	{
		switch (j / 13)
		{
		case 0:
			cards[j].set_Cards_Colour(6);
			break;
		case 1:
			cards[j].set_Cards_Colour(5);
			break;
		case 2:
			cards[j].set_Cards_Colour(4);
			break;
		case 3:
			cards[j].set_Cards_Colour(3);
			break;
		}
		switch (j % 13)
		{
		case 0:
			cards[j].set_Card_Name("||2||");
			cards[j].set_Cards_value(1);
			break;
		case 1:
			cards[j].set_Card_Name("||3||");
			cards[j].set_Cards_value(2);
			break;
		case 2:
			cards[j].set_Card_Name("||4||");
			cards[j].set_Cards_value(3);
			break;
		case 3:
			cards[j].set_Card_Name("||5||");
			cards[j].set_Cards_value(4);
			break;
		case 4:
			cards[j].set_Card_Name("||6||");
			cards[j].set_Cards_value(5);
			break;
		case 5:
			cards[j].set_Card_Name("||7||");
			cards[j].set_Cards_value(6);
			break;
		case 6:
			cards[j].set_Card_Name("||8||");
			cards[j].set_Cards_value(7);
			break;
		case 7:
			cards[j].set_Card_Name("||9||");
			cards[j].set_Cards_value(8);
			break;
		case 8:
			cards[j].set_Card_Name("|1 0|");
			cards[j].set_Cards_value(9);
			break;
		case 9:
			cards[j].set_Card_Name("JACK ");
			cards[j].set_Cards_value(10);
			break;
		case 10:
			cards[j].set_Card_Name("QUEEN");
			cards[j].set_Cards_value(11);
			break;
		case 11:
			cards[j].set_Card_Name("KING ");
			cards[j].set_Cards_value(12);
			break;
		case 12:
			cards[j].set_Card_Name(" A S ");
			cards[j].set_Cards_value(13);
			break;
		}
	}

}

Deck::Deck()
{
	this->how_many_the_same_cards = 1;
	how_many_cards = 52;
	cards = new Cards[how_many_cards];
	for (int j = 0; j < how_many_cards; j++)
	{
		switch (j / 13)
		{
		case 0:
			cards[j].set_Cards_Colour(6);
			break;
		case 1:
			cards[j].set_Cards_Colour(5);
			break;
		case 2:
			cards[j].set_Cards_Colour(4);
			break;
		case 3:
			cards[j].set_Cards_Colour(3);
			break;
		}
		switch (j % 13)
		{
		case 0:
			cards[j].set_Card_Name("||2||");
			cards[j].set_Cards_value(1);
			break;
		case 1:
			cards[j].set_Card_Name("||3||");
			cards[j].set_Cards_value(2);
			break;
		case 2:
			cards[j].set_Card_Name("||4||");
			cards[j].set_Cards_value(3);
			break;
		case 3:
			cards[j].set_Card_Name("||5||");
			cards[j].set_Cards_value(4);
			break;
		case 4:
			cards[j].set_Card_Name("||6||");
			cards[j].set_Cards_value(5);
			break;
		case 5:
			cards[j].set_Card_Name("||7||");
			cards[j].set_Cards_value(6);
			break;
		case 6:
			cards[j].set_Card_Name("||8||");
			cards[j].set_Cards_value(7);
			break;
		case 7:
			cards[j].set_Card_Name("||9||");
			cards[j].set_Cards_value(8);
			break;
		case 8:
			cards[j].set_Card_Name("|1 0|");
			cards[j].set_Cards_value(9);
			break;
		case 9:
			cards[j].set_Card_Name("JACK ");
			cards[j].set_Cards_value(10);
			break;
		case 10:
			cards[j].set_Card_Name("QUEEN");
			cards[j].set_Cards_value(11);
			break;
		case 11:
			cards[j].set_Card_Name("KING ");
			cards[j].set_Cards_value(12);
			break;
		case 12:
			cards[j].set_Card_Name(" A S ");
			cards[j].set_Cards_value(13);
			break;
		}
	}
}

void Deck::add_card_if_you_can_on_the_selected_place(int number, Cards new_card)
{
	int if_there_is = 0;
	string temp;
	temp = new_card.get_Card_Name();
	char temp1;
	temp1 = new_card.get_Cards_Colour();
	if ((this->how_many_cards < this->how_many_the_same_cards * 52) && (new_card.get_Card_Name() != ""&&new_card.get_Cards_Colour() != '\0'))
	{
		for (int i = 0; i < this->how_many_cards; i++)
		{
			if ((this->cards[i].get_Card_Name() == new_card.get_Card_Name()) && (cards[i].get_Cards_Colour() == new_card.get_Cards_Colour()))
			{
				if_there_is++;
			}
			if (if_there_is == this->how_many_the_same_cards)
			{
				break;
			}
		}
		if (if_there_is < this->how_many_the_same_cards)
		{
			Cards *temp;
			temp = new Cards[this->how_many_cards];
			for (int i = 0; i < this->how_many_cards; i++)
			{
				temp[i] = cards[i];

			}
			delete[]cards;
			cards = new Cards[how_many_cards + 1];
			int i = 0;
			for (i; i < number; i++)
			{
				cards[i] = temp[i];
			}
			cards[i] = new_card;
			i++;
			for (i = i; i < how_many_cards + 1; i++)
			{
				cards[i] = temp[i - 1];
			}
			this->how_many_cards++;
		}
		else
		{
			cout << "Sorry i cant add this card becouse this deck have max number of this card." << endl;
		}
	}
	else if (this->how_many_cards == this->how_many_the_same_cards * 52)
	{
		cout << "Sorry i cant add this card, becouse in this deck exist all allowed cards." << endl;
	}
	else if (new_card.get_Card_Name() == ""&&new_card.get_Cards_Colour() == '\0')
	{
		cout << "Sorry i cant add this card,becous this card is empty." << endl;
	}
	else if (!(new_card.get_Card_Name() == "||2||" || new_card.get_Card_Name() == "||3||" || new_card.get_Card_Name() == "||4||"
		|| new_card.get_Card_Name() == "||5||" || new_card.get_Card_Name() == "||6||" || new_card.get_Card_Name() == "||7||"
		|| new_card.get_Card_Name() == "||8||" || new_card.get_Card_Name() == "||9||" || new_card.get_Card_Name() == "|1 0|"
		|| new_card.get_Card_Name() == "JACK " || new_card.get_Card_Name() == "QUEEN" || new_card.get_Card_Name() == "KING " || new_card.get_Card_Name() == " A S ") &&
		(new_card.get_Cards_Colour() == 3 || new_card.get_Cards_Colour() == 4 || new_card.get_Cards_Colour() == 5 || new_card.get_Cards_Colour() == 6))
	{
		cout << "Sorry you set wrong card." << endl;
	}



}

void Deck::add_card_if_you_can_on_the_last_place(Cards new_card)
{
	int if_there_is = 0;
	if (this->how_many_cards < 52 * this->how_many_the_same_cards&&new_card.get_Card_Name() != ""&&new_card.get_Cards_Colour() != '\0')
	{
		for (int i = 0; i < this->how_many_cards; i++)
		{
			if (cards[i].get_Card_Name() == new_card.get_Card_Name() && cards[i].get_Cards_Colour() == new_card.get_Cards_Colour())
			{
				if_there_is++;
				if (if_there_is == this->how_many_the_same_cards)
				{
					break;
				}
			}
		}
		if (if_there_is == this->how_many_the_same_cards)
		{
			cout << "Sorry you cant add this card to te deck,\nbecouse this card exist in this deck." << endl;
		}
		else
		{
			Cards *temp = new Cards[this->how_many_cards];
			for (int i = 0; i < this->how_many_cards; i++)
			{
				temp[i] = cards[i];
			}
			delete[]this->cards;
			cards = new Cards[this->how_many_cards + 1];
			for (int i = 0; i < this->how_many_cards; i++)
			{
				cards[i] = temp[i];
			}
			cards[this->how_many_cards] = new_card;
			delete[]temp;
			++this->how_many_cards;
		}
	}
	else
	{
		cout << "Sorry you cant add this card,\n becouse this deck have max number of cards,\nor this card is empty";
	}

}

void Deck::delete_last_card()
{

	this->how_many_cards = this->how_many_cards - 1;
	Cards *temp = new Cards[this->how_many_cards];

	for (int i = 0; i < this->how_many_cards; i++)
	{
		temp[i] = cards[i];
	}

	delete[]this->cards;
	cards = new Cards[this->how_many_cards];
	for (int i = 0; i < this->how_many_cards; i++)
	{
		cards[i] = temp[i];
	}
	delete[]temp;
}

void Deck::delete_card(int number)
{
	Cards *temp = new Cards[this->how_many_cards];
	this->how_many_cards = this->how_many_cards - 1;
	for (int i = 0; i < number - 1; i++)
	{
		temp[i] = cards[i];
	}
	for (int i = number - 1; i < this->how_many_cards; i++)
	{
		temp[i] = cards[i + 1];
	}

	delete[]cards;
	cards = new Cards[this->how_many_cards];
	for (int i = 0; i < this->how_many_cards; i++)
	{
		cards[i] = temp[i];
	}
	delete[]temp;
}


void Deck::draw_a_cards()
{
	int i = 0;

	cerr << "How many cards do you wanna draw?";
	cin >> i;
	int *tab = new int[i];
	for (int j = 0; j < i; j++)
	{
		do
		{
			tab[j] = rand() % this->how_many_cards;
		} while (tab[j] == tab[j - 1] || tab[j] == tab[j - 2] || tab[j] == tab[j - 3] || tab[j] == tab[j - 4] || tab[j] == tab[j - 5] || tab[j] == tab[j - 6] ||
			tab[j] == tab[j - 7] || tab[j] == tab[j - 8] || tab[j] == tab[j - 9] || tab[j] == tab[j - 10] || tab[j] == tab[j - 11] || tab[j] == tab[j - 12] || tab[j] == tab[j - 13] ||
			tab[j] == tab[j - 14] || tab[j] == tab[j - 15] || tab[j] == tab[j - 16] || tab[j] == tab[j - 17] || tab[j] == tab[j - 18] || tab[j] == tab[j - 19] || tab[j] == tab[j - 20] ||
			tab[j] == tab[j - 21] || tab[j] == tab[j - 22] || tab[j] == tab[j - 23] || tab[j] == tab[j - 24] || tab[j] == tab[j - 25] || tab[j] == tab[j - 26] || tab[j] == tab[j - 27] ||
			tab[j] == tab[j - 28] || tab[j] == tab[j - 29] || tab[j] == tab[j - 30] || tab[j] == tab[j - 31] || tab[j] == tab[j - 32] || tab[j] == tab[j - 33] || tab[j] == tab[j - 34] ||
			tab[j] == tab[j - 35] || tab[j] == tab[j - 36] || tab[j] == tab[j - 37] || tab[j] == tab[j - 38] || tab[j] == tab[j - 39] || tab[j] == tab[j - 40] || tab[j] == tab[j - 41] ||
			tab[j] == tab[j - 42] || tab[j] == tab[j - 43] || tab[j] == tab[j - 44] || tab[j] == tab[j - 45] || tab[j] == tab[j - 46] || tab[j] == tab[j - 47] || tab[j] == tab[j - 48] ||
			tab[j] == tab[j - 49] || tab[j] == tab[j - 50] || tab[j] == tab[j - 51]);
		cout << endl << tab[j] << endl;
	}
	cout << endl;
	for (int j = 0; j < i; j++)
	{
		cout << cards[tab[j]] << endl;
	}
}

void Deck::shuffling_of_deck()
{
	Cards *temp = new Cards[52];
	for (int i = 0; i < 52; i++)
	{
		temp[i] = this->cards[i];
	}
	int *tab = new int[52];
	for (int j = 0; j < 52; j++)
	{
		do
		{
			tab[j] = rand() % this->how_many_cards;
		} while (tab[j] == tab[j - 1] || tab[j] == tab[j - 2] || tab[j] == tab[j - 3] || tab[j] == tab[j - 4] || tab[j] == tab[j - 5] || tab[j] == tab[j - 6] ||
			tab[j] == tab[j - 7] || tab[j] == tab[j - 8] || tab[j] == tab[j - 9] || tab[j] == tab[j - 10] || tab[j] == tab[j - 11] || tab[j] == tab[j - 12] || tab[j] == tab[j - 13] ||
			tab[j] == tab[j - 14] || tab[j] == tab[j - 15] || tab[j] == tab[j - 16] || tab[j] == tab[j - 17] || tab[j] == tab[j - 18] || tab[j] == tab[j - 19] || tab[j] == tab[j - 20] ||
			tab[j] == tab[j - 21] || tab[j] == tab[j - 22] || tab[j] == tab[j - 23] || tab[j] == tab[j - 24] || tab[j] == tab[j - 25] || tab[j] == tab[j - 26] || tab[j] == tab[j - 27] ||
			tab[j] == tab[j - 28] || tab[j] == tab[j - 29] || tab[j] == tab[j - 30] || tab[j] == tab[j - 31] || tab[j] == tab[j - 32] || tab[j] == tab[j - 33] || tab[j] == tab[j - 34] ||
			tab[j] == tab[j - 35] || tab[j] == tab[j - 36] || tab[j] == tab[j - 37] || tab[j] == tab[j - 38] || tab[j] == tab[j - 39] || tab[j] == tab[j - 40] || tab[j] == tab[j - 41] ||
			tab[j] == tab[j - 42] || tab[j] == tab[j - 43] || tab[j] == tab[j - 44] || tab[j] == tab[j - 45] || tab[j] == tab[j - 46] || tab[j] == tab[j - 47] || tab[j] == tab[j - 48] ||
			tab[j] == tab[j - 49] || tab[j] == tab[j - 50] || tab[j] == tab[j - 51]);
	}
	cout << endl;
	for (int i = 0; i < 52; i++)
	{
		cards[i] = temp[tab[i]];
	}
	delete[]temp;
}

int Deck::get_how_many_cards()
{
	return this->how_many_cards;
}
void Deck::set_how_many_cards(int value)
{
	this->how_many_cards = value;
}
void Deck::set_how_many_the_same_cards(int value)
{
	this->how_many_the_same_cards = value;
}
int Deck::get_how_many_the_same_cards()
{
	return this->how_many_the_same_cards;
}

void Deck::show_deck()
{
	cout << "Show the deck of cards:\n\n";
	for (int i = 0; i < this->how_many_cards;)
	{
		if (((i + 3) >= this->how_many_cards) && ((i + 2) < this->how_many_cards))
		{

			for (int j = 0; j < 54; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 27 && j <= 35))
				{
					if (j == 0 || j == 27)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if ((j >= 9 && j <= 17) || (j >= 36 && j <= 44))
				{
					if (j == 9 || j == 36)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
				}
				if ((j >= 18 && j <= 26) || (j >= 45 && j <= 53))
				{
					if (j == 18 || j == 45)
					{
						cout << "      ";
					}
					cout << cards[i + 2].get_Cards_Colour();
					if (j == 26 || j == 53)
					{
						cout << endl;
					}
				}
			}
			for (int j = 0; j < 15; j++)
			{
				if (j == 0 || j == 1 || j == 3 || j == 4)
				{
					if (j == 0)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if (j == 2)
				{
					cout << cards[i].get_Card_Name();
				}
				if (j == 5 || j == 6 || j == 8 || j == 9)
				{
					if (j == 5)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
				}
				if (j == 7)
				{
					cout << cards[i + 1].get_Card_Name();
				}
				if (j == 10 || j == 11 || j == 13 || j == 14)
				{
					if (j == 10)
					{
						cout << "      ";
					}
					cout << cards[i + 2].get_Cards_Colour();
					if (j == 14)
					{
						cout << endl;
					}
				}
				if (j == 12)
				{
					cout << cards[i + 2].get_Card_Name();
				}
			}
			for (int j = 0; j < 54; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 27 && j <= 35))
				{
					if (j == 0 || j == 27)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if ((j >= 9 && j <= 17) || (j >= 36 && j <= 44))
				{
					if (j == 9 || j == 36)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
				}
				if ((j >= 18 && j <= 26) || (j >= 45 && j <= 53))
				{
					if (j == 18 || j == 45)
					{
						cout << "      ";
					}
					cout << cards[i + 2].get_Cards_Colour();
					if (j == 26 || j == 53)
					{
						cout << endl;
					}
				}
			}
			cout << endl << endl;
			i += 3;
		}

		else if (((i + 3) >= this->how_many_cards) && ((i + 2) >= this->how_many_cards) && ((i + 1) < this->how_many_cards))
		{

			for (int j = 0; j < 37; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 18 && j <= 26))
				{
					if (j == 0 || j == 18)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if ((j >= 9 && j <= 17) || (j >= 27 && j <= 35))
				{
					if (j == 9 || j == 27)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
					if (j == 17 || j == 35)
					{
						cout << endl;
					}
				}
			}
			for (int j = 0; j < 10; j++)
			{
				if (j == 0 || j == 1 || j == 3 || j == 4)
				{
					if (j == 0)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if (j == 2)
				{
					cout << cards[i].get_Card_Name();
				}
				if (j == 5 || j == 6 || j == 8 || j == 9)
				{
					if (j == 5)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
				}
				if (j == 7)
				{
					cout << cards[i + 1].get_Card_Name();
				}
				if (j == 9)
				{
					cout << endl;
				}

			}
			for (int j = 0; j < 37; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 18 && j <= 26))
				{
					if (j == 0 || j == 18)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if ((j >= 9 && j <= 17) || (j >= 27 && j <= 35))
				{
					if (j == 9 || j == 27)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
					if (j == 17 || j == 35)
					{
						cout << endl;
					}
				}
			}
			cout << endl << endl;


			i += 2;
		}

		else if (((i + 3) >= this->how_many_cards) && ((i + 2) >= this->how_many_cards) && ((i + 1) >= this->how_many_cards) && ((i) < this->how_many_cards))
		{

			for (int j = 0; j < 18; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 9 && j <= 17))
				{
					if (j == 0 || j == 9)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
					if (j == 8 || j == 17)
					{
						cout << endl;
					}
				}
			}
			for (int j = 0; j < 10; j++)
			{
				if (j == 0 || j == 1 || j == 3 || j == 4)
				{
					if (j == 0)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if (j == 2)
				{
					cout << cards[i].get_Card_Name();
				}
				if (j == 4)
				{
					cout << endl;
				}
			}
			for (int j = 0; j < 18; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 9 && j <= 17))
				{
					if (j == 0 || j == 9)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
					if (j == 8 || j == 17)
					{
						cout << endl;
					}
				}
			}
			cout << endl << endl;
			i += 1;
		}
		else if (((i + 3) < this->how_many_cards) && ((i + 2) < this->how_many_cards) && ((i + 1) < this->how_many_cards) && ((i) < this->how_many_cards))
		{
			for (int j = 0; j < 72; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 36 && j <= 44))
				{
					if (j == 0 || j == 36)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if ((j >= 9 && j <= 17) || (j >= 45 && j <= 53))
				{
					if (j == 9 || j == 45)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
				}
				if ((j >= 18 && j <= 26) || (j >= 54 && j <= 62))
				{
					if (j == 18 || j == 54)
					{
						cout << "      ";
					}
					cout << cards[i + 2].get_Cards_Colour();
				}
				if ((j >= 27 && j <= 35) || (j >= 63 && j <= 71))
				{
					if (j == 27 || j == 63)
					{
						cout << "      ";
					}
					cout << cards[i + 3].get_Cards_Colour();
					if (j == 35 || j == 71)
					{
						cout << endl;
					}
				}

			}
			for (int j = 0; j < 50; j++)
			{
				if (j == 0 || j == 1 || j == 3 || j == 4)
				{
					if (j == 0)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if (j == 2)
				{
					cout << cards[i].get_Card_Name();
				}
				if (j == 5 || j == 6 || j == 8 || j == 9)
				{
					if (j == 5)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
				}
				if (j == 7)
				{
					cout << cards[i + 1].get_Card_Name();
				}
				if (j == 10 || j == 11 || j == 13 || j == 14)
				{
					if (j == 10)
					{
						cout << "      ";
					}
					cout << cards[i + 2].get_Cards_Colour();
				}
				if (j == 12)
				{
					cout << cards[i + 2].get_Card_Name();
				}
				if (j == 15 || j == 16 || j == 18 || j == 19)
				{
					if (j == 15)
					{
						cout << "      ";
					}
					cout << cards[i + 3].get_Cards_Colour();
				}
				if (j == 17)
				{
					cout << cards[i + 3].get_Card_Name();
				}
				if (j == 19)
				{
					cout << endl;
				}
			}
			for (int j = 0; j < 72; j++)
			{
				if ((j >= 0 && j <= 8) || (j >= 36 && j <= 44))
				{
					if (j == 0 || j == 36)
					{
						cout << "      ";
					}
					cout << cards[i].get_Cards_Colour();
				}
				if ((j >= 9 && j <= 17) || (j >= 45 && j <= 53))
				{
					if (j == 9 || j == 45)
					{
						cout << "      ";
					}
					cout << cards[i + 1].get_Cards_Colour();
				}
				if ((j >= 18 && j <= 26) || (j >= 54 && j <= 62))
				{
					if (j == 18 || j == 54)
					{
						cout << "      ";
					}
					cout << cards[i + 2].get_Cards_Colour();
				}
				if ((j >= 27 && j <= 35) || (j >= 63 && j <= 71))
				{
					if (j == 27 || j == 63)
					{
						cout << "      ";
					}
					cout << cards[i + 3].get_Cards_Colour();
					if (j == 35 || j == 71)
					{
						cout << endl;
					}
				}
			}
			cout << endl << endl;
			i += 4;
		}
	}
}