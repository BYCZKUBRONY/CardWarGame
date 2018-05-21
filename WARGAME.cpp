#include"Cards.h"
#include"Deck.h"
#include"Game_Table.h"
#include"WARGAME.h"
#include"Player.h"
#include"Game.h"
#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<stdlib.h>
#include<conio.h>
using namespace std;

WARGAME::~WARGAME()
{

}

void WARGAME::function()
{
	cout << "Text5";
}

void WARGAME::show_a_table(Cards first, Cards second, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
	Player player, player1;
	player.set_cards_volume(25);
	player1.set_cards_volume(25);
	if (language == 50)
	{
		player.set_name("Player1");
		player1.set_name("Player2");

	}
	else
	{

		player.set_name("Gracz1");
		player1.set_name("Gracz2");
	}
	this->show_table(first, second, player, player1);
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Game_table\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Stol do gry\"";
	}
	getch();
	this->Test_Game_Table_Methods(language);
}

void WARGAME::show_a_table_with_first_empty(Cards first, Cards second, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
	Player player, player1;
	player.set_cards_volume(25);
	player1.set_cards_volume(25);
	if (language == 50)
	{
		player.set_name("Player1");
		player1.set_name("Player2");
		second.set_Card_Name("QUEEN");
	}
	else
	{
		player.set_name("Gracz1");
		player1.set_name("Gracz2");
		second.set_Card_Name("DAMA ");
	}
	second.set_Cards_Colour(4);
	this->show_table(first, second, player, player1);
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Game_table\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Stol do gry\"";
	}
	getch();
	this->Test_Game_Table_Methods(language);
}
void WARGAME::show_a_table_with_second_empty(Cards first, Cards second, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	Player player, player1;
	player.set_cards_volume(25);
	player1.set_cards_volume(25);
	if (language == 50)
	{
		player.set_name("Player1");
		player1.set_name("Player2");
		first.set_Card_Name("QUEEN");
	}
	else
	{
		player.set_name("Gracz1");
		player1.set_name("Gracz2");
		first.set_Card_Name("DAMA ");
	}
	first.set_Cards_Colour(4);
	this->show_table(first, second, player, player1);
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Game_table\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Stol do gry\"";
	}
	getch();
	this->Test_Game_Table_Methods(language);

}
void WARGAME::show_a_table_with_both_fill(Cards first, Cards second, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
	Player player, player1;
	player.set_cards_volume(25);
	player1.set_cards_volume(25);
	if (language == 50)
	{
		player.set_name("Player1");
		player1.set_name("Player2");
		first.set_Card_Name("QUEEN");
		first.set_Cards_Colour(4);
		second.set_Card_Name("KING ");
		second.set_Cards_Colour(3);
	}
	else
	{
		player.set_name("Gracz1");
		player1.set_name("Gracz2");
		first.set_Card_Name("DAMA ");
		first.set_Cards_Colour(4);
		second.set_Card_Name("KROL ");
		second.set_Cards_Colour(3);
	}
	this->show_table(first, second, player, player1);
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Game_table\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Stol do gry\"";
	}
	getch();
	this->Test_Game_Table_Methods(language);

}

void WARGAME::shift(Deck &deck, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	int number, number1;
	if (language == 50)
	{
		do
		{
			cin.clear();
			cin.sync();
			cout << "\nHow many cards do you wanna shift?Enter number from 1 to 51.";
			cin >> number;
		} while (number < 0 || number>51);
		do
		{
			cin.clear();
			cin.sync();
			cout << "\nTo the which position of the deck do you wanna get this cards?Number from" << number + 1 << " to " << 52;
			cin >> number1;
		} while (number1 < number + 1 || number1>52);
	}
	else
	{
		do
		{
			cin.clear();
			cin.sync();
			cout << "\nJak wiele kart chcesz przelozyc ?";

			cin >> number;
		} while (number < 0 || number>52);
		do
		{
			cin.clear();
			cin.sync();
			cout << "\nW ktore miejsce w tali chcesz przelozyc te karty?";
			cin >> number1;
		} while (number1 < number + 1 || number1>52 - number);
	}
	deck.shift_a_deck(number, number1);
	deck.show_deck();
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"talia\"";
	}
	getch();
	this->Test_Deck_Methods(deck, language);

}
void WARGAME::show_the_deck(Deck &deck, int language)
{

	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
	deck.show_deck();
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Talia\"";
	}
	getch();
	this->Test_Deck_Methods(deck, language);
}
void WARGAME::deletecard(Deck &deck, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
	deck.delete_last_card();
	deck.show_deck();
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Talia\"";
	}
	getch();
	this->Test_Deck_Methods(deck, language);
}
void WARGAME::deletecardd(Deck &deck, int language)
{

	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	std::cin.clear();
	std::cin.sync();
	int temp;
	do
	{
		cin.clear();
		cin.sync();
		if (language == 50)
		{
			cout << "Choose te position of the card which you wanna delete from the deck.Press number from 1 to:" << deck.get_how_many_cards();
		}
		else
		{
			cout << "Wybierz miejsce z ktorego chcesz usunac karte z tali.wpisz liczbe od 1 do" << deck.get_how_many_cards();
		}
		cin >> temp;
	} while (temp<1 || temp>deck.get_how_many_cards());

	deck.delete_card(temp);
	deck.show_deck();
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Talia\"";
	}
	getch();
	this->Test_Deck_Methods(deck, language);
}
void WARGAME::add_card_place(Deck &deck, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
	std::cin.clear();
	std::cin.sync();
	int number;
	int temp1;
	string figura;
	Cards temp;
	do
	{
		if (language == 50)
		{
			cout << "Enter the number of the deck what you wanna add card ";
			cin >> number;
			std::cin.clear();
			std::cin.sync();
			cout << "Enter the figure of the card";
			getline(cin, figura);
			temp.set_Card_Name(figura);
			cin.clear();
			cin.sync();
			cout << "Enter the symbol of the card.";
			cin >> temp1;
		}
		else
		{
			cout << "Podaj numer miejsca w talii w ktore chcesz dodac karte.";
			cin >> number;
			std::cin.clear();
			std::cin.sync();
			cout << "Podaj nazwe figury.";
			getline(cin, figura);
			temp.set_Card_Name(figura);
			std::cin.clear();
			std::cin.sync();
			cout << "Podaj symbol karty.";
			cin >> temp1;
		}
	} while (number < 1 || number>52);
	temp.set_Cards_Colour(temp1);
	deck.add_card_if_you_can_on_the_selected_place(number - 1, temp);
	deck.show_deck();
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Talia\"";
	}
	getch();
	this->Test_Deck_Methods(deck, language);

}
void WARGAME::add_card_last(Deck &deck, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
	std::cin.clear();
	std::cin.sync();
	int temp1;
	string figura;
	Cards temp;
	do
	{
		if (language == 50)
		{
			cout << "Enter the figure of the card";
			std::cin.clear();
			std::cin.sync();
			getline(cin, figura);
			temp.set_Card_Name(figura);
			std::cin.clear();
			std::cin.sync();
			cout << "Enter the symbol of the card.";
			cin >> temp1;
		}
		else
		{
			std::cin.clear();
			std::cin.sync();
			cout << "Podaj figure karty.";
			getline(cin, figura);
			temp.set_Card_Name(figura);
			std::cin.clear();
			std::cin.sync();
			cout << "Podaj symbol karty.";
			cin >> temp1;
		}
	} while (figura.size() != 5);
	temp.set_Cards_Colour(temp1);
	deck.add_card_if_you_can_on_the_last_place(temp);
	deck.show_deck();
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Talia\"";
	}
	getch();
	this->Test_Deck_Methods(deck, language);

}
void WARGAME::repair(Deck &deck, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	deck.repair_a_deck();
	deck.show_deck();
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Talia\"";
	}
	getch();
	this->Test_Deck_Methods(deck, language);
}
void WARGAME::set_parametrs_of_card(Cards first, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	std::cin.clear();
	std::cin.sync();
	string figura;
	char kolor;
	do
	{
		if (language == 50)
		{
			cout << "Enter the figure of the card(Please 5 characters;if you wont less fill to the 5 characters using key\"space\")";
			getline(cin, figura);
		}
		else
		{
			cout << "Podaj figure karty(Podaj 5 znakow,jesli chcesz mniej,wypelnij do 5 znakow spacjami).";
			getline(cin, figura);
		}
	} while (figura.size() != 5);
	cout << "Podaj symbol karty.";
	cin >> kolor;
	first.set_Card_Name(figura);
	first.set_Cards_Colour(kolor);
	cout << endl << first;
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Deck\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Talia\"";
	}
	getch();
	this->Test_Card_Methods(language);

}
void WARGAME::show(Cards first, int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
	cout << first;
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Cards\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Karta\"";
	}
	getch();
	this->Test_Card_Methods(language);
}
void WARGAME::Compare_Cards(Cards x, Cards y, int language)
{

	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	x.operator<(y);
	std::cin.clear();
	std::cin.sync();
	if (language == 50)
	{
		cout << "\nPress any key to return to the test class \"Cards\"";
	}
	else
	{
		cout << "\nNacisnij dowolny klawisz by powrocic do manu wyboru metod klasy \"Karta\"";
	}
	getch();
	this->Test_Card_Methods(language);
}
void WARGAME::Test_Card_Methods(int language)
{
	system("cls");
	Cards *cards1 = new Cards;
	Cards *cards = new Cards;
	if (language == 50)
	{
		cards->set_Card_Name("QUEEN");
		cards1->set_Card_Name("KING ");
	}
	else
	{
		cards->set_Card_Name("DAMA ");
		cards1->set_Card_Name("KROl ");
	}
	cards->set_Cards_Colour(5);
	cards->set_Cards_value(11);

	cards1->set_Cards_Colour(3);
	cards1->set_Cards_value(12);
	int test;
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	do
	{
		cin.clear();
		cin.sync();
		if (language == 50)
		{
			cout << "You are int the place when you can test all method of class \"card\".\n"
				"Press on the keyboard(number from 1 to 4) the method which you wont to test:\n";
		}
		else
		{
			cout << "Jestes w miejscu w ktorym mozesz przetestowac metody klasy \"karta\".\n"
				"Nacisnij na klawiaturze klawisz od 1 do 4 w zaleznosci od tego ktora metode chcesz przetestowac :\n";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
		if (language == 50)
		{
			cout << "1-Show the card." << endl;
		}
		else
		{
			cout << "1-Pokaz karte." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "2-Set the parametrs of  card." << endl;
		}
		else
		{
			cout << "2-Wstaw parametry karty." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "3-Compare the cards." << endl;
		}
		else
		{
			cout << "3-Porownaj karty." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN);
		if (language == 50)
		{
			cout << "4-Return to the  main menu." << endl;
		}
		else
		{
			cout << "4-Powroc do menu glownego." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		test = _getch();
		/*cin>>test;*/
	}

	while (test < 49 || test>52);
	switch (test)
	{
	case 49:
	{
		show(*cards, language);
		break;
	}
	case 50:
	{
		set_parametrs_of_card(*cards, language);
		break;
	}
	case 51:
	{
		this->Compare_Cards(*cards, *cards1, language);
		break;
	}
	case 52:
	{
		delete cards1;
		delete cards;
		cards1 = 0;
		cards = 0;
		this->Start_Game(language);
		break;
	}
	}
	getch();
}
void WARGAME::Test_Deck_Methods(Deck &deck, int language)
{

	system("cls");
	std::cin.clear();
	std::cin.sync();
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	int press;
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	do
	{
		if (language == 50)
		{
			cout << "Welcome to the test methods of class Deck";
			cout << "Press the numer from 1 to 8";
		}
		else
		{
			cout << "Witaj w testowni metod klasy \"Deck\"";
			cout << "Wybierz opcje o numerze 1 do 8.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
		if (language == 50)
		{
			cout << "\n1-Show a Deck";
		}
		else
		{
			cout << "\n1-Pokaz talie.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
		if (language == 50)
		{
			cout << "\n2-Delete last card from  a Deck";
		}
		else
		{
			cout << "\n2-Usun ostatnia karte z talii.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "\n3-Delete card from the deck from  the place what you wish.";
		}
		else
		{
			cout << "\n3-Usun karte z miejsca w talii jakim chcesz.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
		if (language == 50)
		{
			cout << "\n4-Add card to the deck to  the place what you wish.";
		}
		else
		{
			cout << "\n4-Dodaj karte w miejsce w talii jakie chcesz.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "\n5-Repair a deck";
		}
		else
		{
			cout << "\n5-Napraw talie.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "\n6-Add card to the last position on the deck.";
		}
		else
		{
			cout << "\n6-Dodaj karte na ostatnie miejsce w talii.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "\n7-Shift the deck.";
		}
		else
		{
			cout << "\n7-Przelozenie kart.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "\n8-Go to the main menu.";
		}
		else
		{
			cout << "\n8-Idz do menu glownego.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		/*cin>>press;*/
		press = _getch();
		system("cls");
	} while (press < 49 || press>56);
	switch (press)
	{
	case 49:
	{
		show_the_deck(deck, language);
		break;
	}
	case 50:
	{
		deletecard(deck, language);
		break;
	}
	case 51:
	{
		deletecardd(deck, language);
		break;
	}
	case 52:
	{
		add_card_place(deck, language);
		break;

	}
	case 53:
	{
		repair(deck, language);
		break;
	}
	case 54:
	{
		add_card_last(deck, language);
		break;
	}
	case 55:
	{
		this->shift(deck, language);
		break;
	}
	case 56:
	{
		this->Start_Game(language);
	}
	}
}
void WARGAME::Test_Game_Table_Methods(int language)
{
	Cards *card2 = new Cards;
	Cards *card1 = new Cards;
	system("cls");
	std::cin.clear();
	std::cin.sync();
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	int press;
	do
	{
		if (language == 50)
		{
			cout << "Welcome to the test methods of class Game_Table";
			cout << "Press the numer from 1 to 5";
		}
		else
		{
			cout << "Witam w funkcji pozwalajacej testowanie metod klasy \"Game_Table\"";
			cout << "Wybierz co chcesz zrobic i nacisnij odpowiednij klawisz(od 1 do 5)";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE);
		if (language == 50)
		{
			cout << "\n1-Show a Table";
		}
		else
		{
			cout << "\n1-Pokaz stol do gry.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN);
		if (language == 50)
		{
			cout << "\n2-Show Table with first empty parametr.";
		}
		else
		{
			cout << "\n2-Pokaz stol do gry z pierwszym nieznanym miejscem.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "\n3-Show Table with second empty parametr.";
		}
		else
		{
			cout << "\n3-Pokaz stol do gry z drugim nieznanym miejscem.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED);
		if (language == 50)
		{
			cout << "\n4-Show Table with first and second fill parametr.";
		}
		else
		{
			cout << "\n4-Pokaz stol ze znanymi kartami.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "\n5-Go to the main menu.";
		}
		else
		{
			cout << "\n5-Przejdz do menu glownego.";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		press = _getch();
		system("cls");
	} while (press < 49 || press>53);
	switch (press)
	{
	case 49:
	{
		this->show_a_table(*card1, *card2, language);
		break;
	}
	case 50:
	{
		this->show_a_table_with_first_empty(*card1, *card2, language);
		break;
	}
	case 51:
	{
		show_a_table_with_second_empty(*card1, *card2, language);
		break;
	}
	case 52:
	{
		show_a_table_with_both_fill(*card1, *card2, language);
		break;

	}
	case 53:
	{
		delete  card1;
		delete  card2;
		this->Start_Game(language);
		break;
	}
	}

}

void WARGAME::deal_a_cards(Deck &deck, Player &player, Player &player2)
{
	int j = 0, k = 0;
	for (int i = 0; i < 52; i++)
	{
		if (i % 2 == 0)
		{
			player.ssset_Cardsb(j, deck.gget_Cardsb(i));
			player.ssset_Cardsa(j, deck.gget_Cardsa(i));
			player.ssset_Cards_value(j, deck.gget_Cards_value(i));
			/*player.cards[j].set_Cardsb(deck.cards[i].get_Cardsb());
			player.cards[j].set_Cardsa(deck.cards[i].get_Cardsa());
			player.cards[j].set_Cards_value(deck.cards[i].get_Cards_value());*/
			j++;
		}
		else if (i % 2 == 1)
		{
			player2.ssset_Cardsb(k, deck.gget_Cardsb(i));
			player2.ssset_Cardsa(k, deck.gget_Cardsa(i));
			player2.ssset_Cards_value(k, deck.gget_Cards_value(i));
			/*player2.cards[k].set_Cardsb(deck.cards[i].get_Cardsb());
			player2.cards[k].set_Cardsa(deck.cards[i].get_Cardsa());
			player2.cards[k].set_Cards_value(deck.cards[i].get_Cards_value());*/
			k++;
		}
	}
	player.set_cards_volume(26);
	player2.set_cards_volume(26);
}

void WARGAME::Play_with_opponent(int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	Player *player1 = new Player;
	Player *player2 = new Player;
	Game_Table game_table;
	int color1, color2;
	system("cls");
	string name1, name2, password1, password2;
	if (language == 50)
	{
		cout << "Welcome to cards WARGAME make By BYKUBRONY" << endl;
		cout << "Please enter your new password." << endl;
		cin >> password1;
		system("cls");
		do
		{
			cout << "\nPlease enter your(player 1) nickname: ";
			cin.sync();
			cin.clear();
			cin >> name1;
		} while (name1.size() < 3);
		player1->set_name(name1);
		do
		{
			cout << player1->get_name() << " please tell me what kind of color do you wish see  texts in the game? \n";
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "1-BLUE" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "2-RED" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "3-GREEN" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			cout << "4-No change this color is ok. " << endl;
			color1 = _getch();
		} while (color1 < 49 || color1>52);
		if (color1 == 49)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		if (color1 == 50)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		if (color1 == 51)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		if (color1 == 52)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
		cin.sync();
		cin.clear();
	}
	else
	{
		cout << "Witajcie w karcianej grze w wojne zrobiona przez BYKUBRONY." << endl;
		cout << "Podaj prosze swoje nowe haslo do gry(gracz 1)." << endl;
		cin >> password1;
		system("cls");
		do
		{
			cout << "\nPodaj swoj nick(graczu 1): ";
			cin.sync();
			cin.clear();
			cin >> name1;
		} while (name1.size() < 3);
		player1->set_name(name1);
		do
		{
			cout << player1->get_name() << " powiedz w jakim kolorze chcesz miec wyswietlane napisy w grze. \n";
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "1-NIEBIESKI" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "2-CZERWONY" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "3-ZIELONY" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			cout << "4-Bez zmian ten kolor mi pasuje." << endl;
			color1 = _getch();
		} while (color1 < 49 || color1>52);
		if (color1 == 49)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		if (color1 == 50)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		if (color1 == 51)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		if (color1 == 52)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
	}
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	if (language == 50)
	{
		do
		{
			cout << "Please enter your new password." << endl;
			cin >> password2;
			system("cls");
			cout << "\nPlease enter your(player 2) nickname: ";
			cin.sync();
			cin.clear();
			cin >> name2;
		} while (name2.size() < 3);
		player2->set_name(name2);
		do
		{
			cout << player2->get_name() << " please tell me what kind of color do you wish see  texts in the game? \n";
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "1-BLUE";
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "2-RED";
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "3-GREEN";
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			cout << "4-No change this color is ok.";
			color2 = _getch();
			cin.sync();
			cin.clear();
		} while (color2 < 49 || color2>52);
		if (color2 == 49)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		if (color2 == 50)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		if (color2 == 51)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		if (color2 == 52)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
	}
	else
	{
		cout << "Prosze podaj swoje nowe haslo do gry." << endl;
		cin >> password2;
		system("cls");
		do
		{
			cout << "\nPodaj nick(graczu numer 2): ";
			cin.sync();
			cin.clear();
			cin >> name2;
		} while (name2.size() < 3);
		player2->set_name(name2);
		do
		{
			cout << player2->get_name() << " powiedz w jakim kolorze chcesz miec wyswietlane napisy w grze. \n";
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "1-NIEBIESKI";
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "2-CZERWONY";
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "3-ZIELONY";
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			cout << "4-Bez zmian ten kolor mi pasuje. ";
			color2 = getch();
			cin.sync();
			cin.clear();
		} while (color2 < 49 || color2>52);
		if (color2 == 49)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		if (color2 == 50)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		if (color2 == 51)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		if (color2 == 52)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
	}
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	Deck *deck = new Deck;
	deck->shuffling_of_deck();
	this->deal_a_cards(*deck, *player1, *player2);
	Cards temp, temp1;
	temp.set_Card_Name("");
	temp.set_Cards_Colour(' ');
	temp1.set_Card_Name("");
	temp1.set_Cards_Colour(' ');
	if (language == 50)
	{
		cout << "I mix the cards.\nBoth of you get randomly 26 cards.\nYou can start the game.\nPress any key to start the game.";
	}
	else
	{
		cout << "Karty zostaly wymieszane. Losowo otrzymaliscie po 26 kart.\nMozecie zaczac pojedynek.\nNacisnij dowolny klawisz by zaczac gre.";
	}
	int player1_decision, player2_decision;
	cin.sync();
	cin.clear();
	getch();
	int award = 0;
	int result_of_duel;
	do {
		system("cls");
		cin.sync();
		cin.clear();
		Cards *player1_temp = new Cards[1];
		Cards *player2_temp = new Cards[1];
		if (award == 1)
		{
			if (result_of_duel == 2)
			{

				if (color1 == 49)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				if (color1 == 50)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
				}
				if (color1 == 51)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				if (color1 == 52)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
				}
			}
			if (result_of_duel == 1)
			{
				if (color2 == 49)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				if (color2 == 50)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
				}
				if (color2 == 51)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				if (color2 == 52)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
				}
			}
			game_table.show_table(temp, temp1, *player1, *player2);
		}
		string good_pass;
		if (language == 50)
		{
			do
			{

				cin.clear();
				cin.sync();
				cout << "If you are " << player1->get_name() << " enter your password";
				cin >> good_pass;
				system("cls");

			} while (good_pass != password1);
		}
		else
		{
			do
			{

				cin.clear();
				cin.sync();
				cout << "Jesli " << player1->get_name() << "to ty,podaj haslo dostepu.";
				cin >> good_pass;
				system("cls");
			} while (good_pass != password1);
		}
		do
		{
			cin.clear();
			cin.sync();
			if (language == 50)
			{

				cout << player1->get_name() << "  Please enter a number of yours cards to the duel.Number from 1 to " << player1->get_cards_volume() << ": ";
			}
			else
			{

				cout << player1->get_name() << "  Podaj prosze numer karty ktorej chcesz uzyc w pojedynku.Wpisz numer od 1 do " << player1->get_cards_volume() << ": ";
			}
			cin >> player1_decision;
		} while (player1_decision<1 || player1_decision>player1->get_cards_volume());
		system("cls");
		*player1_temp = player1->ggget_Cardsall(player1_decision - 1);
		this->take_card_from_cards_of_player(player1_decision - 1, *player1);
		game_table.show_table(*player1_temp, temp1, *player1, *player2);
		cin.sync();
		cin.clear();
		if (language == 50)
		{
			do
			{

				cin.clear();
				cin.sync();
				cout << "If you are " << player2->get_name() << " enter your password";
				cin >> good_pass;
				system("cls");
			} while (good_pass != password2);
		}
		else
		{
			do
			{

				cin.clear();
				cin.sync();
				cout << "Jesli " << player2->get_name() << "to ty ,podaj haslo dostepu.";
				cin >> good_pass;
				system("cls");
			} while (good_pass != password2);
		}
		do
		{
			system("cls");
			game_table.show_table(*player1_temp, temp1, *player1, *player2);
			cin.clear();
			cin.sync();
			if (language == 50)
			{


				cout << player2->get_name() << "  Please enter a number of yours cards to the duel.Number from 1 to " << player2->get_cards_volume() << ": ";
			}
			else
			{

				cout << player2->get_name() << "  Podaj prosze numer karty ktorej chcesz uzyc w pojedynku.Wpisz numer od 1 do " << player2->get_cards_volume() << ": ";
			}
			cin >> player2_decision;
		} while (player2_decision<1 || player2_decision>player2->get_cards_volume());
		system("cls");
		*player2_temp = player2->ggget_Cardsall(player2_decision - 1);
		this->take_card_from_cards_of_player(player2_decision - 1, *player2);
		game_table.show_table(*player1_temp, *player2_temp, *player1, *player2);
		result_of_duel = player1_temp->operator<(*player2_temp);
		if (result_of_duel == 2)
		{
			this->add_cards_to_the_cards_of_player(player1->get_cards_volume(), player1_temp, player2_temp, *player1);
			cout << endl << endl;
			if (player1->get_cards_volume() == 0 || player2->get_cards_volume() == 0)
			{
				cout << "\n\t\t\t\t->->->WIN PLAYER1<-<-<-" << endl;
				for (int i = 0; i < player1->get_cards_volume(); i++)
				{
					cout << player1->ggget_Cardsall(i) << endl << endl << endl;
				}
				cout << endl << endl;
				for (int i = 0; i < player2->get_cards_volume(); i++)
				{
					cout << player2->ggget_Cardsall(i) << endl << endl << endl;
				}
				delete player1;
				delete player2;
				delete[] player1_temp;
				delete[] player2_temp;
				delete deck;
				this->END_GAME(language);
			}
		}
		if (result_of_duel == 1)
		{
			this->add_cards_to_the_cards_of_player(player2->get_cards_volume(), player2_temp, player1_temp, *player2);
			cout << endl << endl;
			if (player1->get_cards_volume() == 0 || player2->get_cards_volume() == 0)
			{
				cout << "\n\t\t\t\t->->->WIN PLAYER1<-<-<-" << endl;
				for (int i = 0; i < player1->get_cards_volume(); i++)
				{
					cout << player1->ggget_Cardsall(i) << endl << endl << endl;
				}
				cout << endl << endl;
				for (int i = 0; i < player2->get_cards_volume(); i++)
				{
					cout << player2->ggget_Cardsall(i) << endl << endl << endl;
				}
				delete player1;
				delete player2;
				delete[] player1_temp;
				delete[] player2_temp;
				delete deck;
				this->END_GAME(language);
			}
		}
		if (result_of_duel == 3)
		{
			int *result_of_duel_index = &result_of_duel;
			Cards *player1_temp1 = new Cards[9];
			Cards *player2_temp1 = new Cards[9];
			player1_temp1[0] = *player1_temp;
			player2_temp1[0] = *player2_temp;
			this->WAR(player1_temp1, player2_temp1, *player1, *player2, language, &result_of_duel, 1);
			cout << endl << endl;
			delete[] player1_temp1;
			delete[] player2_temp1;
			if (player1->get_cards_volume() == 0 || player2->get_cards_volume() == 0)
			{
				if (player1->get_cards_volume() == 52)
				{
					if (language == 50)
					{
						cout << "\n\t\t\t\t->->->WIN PLAYER1<-<-<-" << endl;
					}
					else
					{
						cout << "\n\t\t\t\t->->->Wygral GRACZ1<-<-<-" << endl;
					}
				}
				else if (player2->get_cards_volume() == 52)
				{
					if (language == 50)
					{
						cout << "\n\t\t\t\t->->->WIN PLAYER2<-<-<-" << endl;
					}
					else
					{
						cout << "\n\t\t\t\t->->->Wygral GRACZ2<-<-<-" << endl;
					}
				}
				for (int i = 0; i < player1->get_cards_volume(); i++)
				{
					cout << player1->ggget_Cardsall(i) << endl << endl << endl;
				}
				cout << endl << endl;
				for (int i = 0; i < player2->get_cards_volume(); i++)
				{
					cout << player2->ggget_Cardsall(i) << endl << endl << endl;
				}
				delete player1;
				delete player2;
				delete[] player1_temp;
				delete[] player2_temp;
				delete deck;
				this->END_GAME(language);
			}
		}
		award = 1;
		cin.sync();
		cin.clear();
		getchar();
	} while (player1->get_cards_volume() != 52 || player2->get_cards_volume() != 52);
	cin.clear();
	cin.sync();
	getch();
}

void WARGAME::WAR(Cards *player_temp1, Cards *player_temp2, Player &player1, Player &player2, int language, int *battle_result, int version)
{
	int temp1[12], temp2[12];
	Cards temp;
	temp.set_Card_Name("");
	temp.set_Cards_Colour(' ');
	int counter = 0;
	Game_Table game_table;
	do
	{
		if (player1.get_cards_volume() < 2 || player2.get_cards_volume() < 2)
		{
			for (int i = 0; i < 52; i++)
			{
				cout << i << endl;
				cout << player1.ggget_Cardsall(i) << endl << endl;
			}
			for (int i = 0; i < 52; i++)
			{
				cout << i << endl;
				cout << player2.ggget_Cardsall(i) << endl << endl;
			}
			this->END_GAME(language);
		}
		if (version == 1 || version == 2)
		{
			do
			{
				cin.clear();
				cin.sync();
				if (language == 50)
				{
					cout << player1.get_name() << " enter first  place the cards to the battle from 1 to" << player1.get_cards_volume();
				}
				else
				{
					cout << player1.get_name() << " podaj miejsce pierwszej karty ktora chcesz zagrac" << player1.get_cards_volume();
				}
				cin >> temp1[0 + ((counter * 2))];
			} while (temp1[0 + ((counter * 2))]<1 || temp1[0 + ((counter * 2))]>player1.get_cards_volume());

		}
		else if (version == 3)
		{
			temp1[0 + ((counter * 2))] = rand() % (player1.get_cards_volume()) + 1;
		}
		player_temp1[1 + (counter * 2)].set_Card_Name(player1.ggget_Cardsa(temp1[0 + (counter * 2)] - 1));
		player_temp1[1 + (counter * 2)].set_Cards_Colour(player1.ggget_Cardsb(temp1[0 + (counter * 2)] - 1));
		player_temp1[1 + (counter * 2)].set_Cards_value(player1.ggget_Cards_value(temp1[0 + (counter * 2)] - 1));
		this->take_card_from_cards_of_player(temp1[0 + ((counter * 2))] - 1, player1);
		game_table.show_table(player_temp1[1 + (counter * 2)], temp, player1, player2);
		if (version == 1)
		{
			do
			{
				cin.clear();
				cin.sync();
				if (language == 50)
				{
					cout << player2.get_name() << " enter first  place the cards to the battle from 1 to" << player2.get_cards_volume();
				}
				else
				{
					cout << player2.get_name() << " podaj miejsce pierwszej karty ktora chcesz zagrac" << player2.get_cards_volume();
				}
				cin >> temp2[0 + ((counter * 2))];
			} while (temp2[0 + ((counter * 2))]<1 || temp2[0 + ((counter * 2))]>player2.get_cards_volume());

		}
		else if (version == 3 || version == 2)
		{
			temp2[0 + ((counter * 2))] = rand() % (player2.get_cards_volume()) + 1;
		}
		player_temp2[1 + (counter * 2)].set_Card_Name(player2.ggget_Cardsa(temp2[0 + (counter * 2)] - 1));
		player_temp2[1 + (counter * 2)].set_Cards_Colour(player2.ggget_Cardsb(temp2[0 + (counter * 2)] - 1));
		player_temp2[1 + (counter * 2)].set_Cards_value(player2.ggget_Cards_value(temp2[0 + (counter * 2)] - 1));
		this->take_card_from_cards_of_player(temp2[0 + (counter * 2)] - 1, player2);
		game_table.show_table(player_temp1[1 + (counter * 2)], player_temp2[1 + (counter * 2)], player1, player2);

		if (version == 1 || version == 2)
		{
			do
			{
				cin.clear();
				cin.sync();
				if (language == 50)
				{
					cout << player1.get_name() << " enter second of place the cards to the battle from 1 to" << player1.get_cards_volume();
				}
				else
				{
					cout << player1.get_name() << " podaj miejsce drugiej karty ktorej chcesz uzyc." << player1.get_cards_volume();
				}
				cin >> temp1[1 + (counter * 2)];
			} while (temp1[1 + ((counter * 2))]<1 || temp1[1 + ((counter * 2))]>player1.get_cards_volume());

		}
		else if (version == 3)
		{
			temp1[1 + (counter * 2)] = rand() % (player1.get_cards_volume()) + 1;
		}
		player_temp1[2 + (counter * 2)].set_Card_Name(player1.ggget_Cardsa(temp1[1 + (counter * 2)] - 1));
		player_temp1[2 + (counter * 2)].set_Cards_Colour(player1.ggget_Cardsb(temp1[1 + (counter * 2)] - 1));
		player_temp1[2 + (counter * 2)].set_Cards_value(player1.ggget_Cards_value(temp1[1 + (counter * 2)] - 1));
		this->take_card_from_cards_of_player(temp1[1 + (counter * 2)] - 1, player1);
		game_table.show_table(player_temp1[2 + (counter * 2)], temp, player1, player2);
		if (version == 1)
		{
			do
			{
				cin.clear();
				cin.sync();
				if (language == 50)
				{
					cout << player2.get_name() << " enter second  place the cards to the battle from 1 to" << player2.get_cards_volume();
				}
				else
				{
					cout << player2.get_name() << " podaj miejsce drugiej karty ktora chcesz zagrac" << player2.get_cards_volume();
				}
				cin >> temp2[1 + ((counter * 2))];
			} while (temp2[1 + ((counter * 2))]<1 || temp2[1 + ((counter * 2))]>player2.get_cards_volume());

		}
		else if (version == 2 || version == 3)
		{
			temp2[1 + ((counter * 2))] = rand() % (player2.get_cards_volume()) + 1;
		}
		player_temp2[2 + (counter * 2)].set_Card_Name(player2.ggget_Cardsa(temp2[1 + (counter * 2)] - 1));
		player_temp2[2 + (counter * 2)].set_Cards_Colour(player2.ggget_Cardsb(temp2[1 + (counter * 2)] - 1));
		player_temp2[2 + (counter * 2)].set_Cards_value(player2.ggget_Cards_value(temp2[1 + (counter * 2)] - 1));
		this->take_card_from_cards_of_player(temp2[1 + (counter * 2)] - 1, player2);
		game_table.show_table(player_temp1[2 + (counter * 2)], player_temp2[2 + (counter * 2)], player1, player2);
		counter++;
	} while (player_temp1[2 + ((counter - 1) * 2)].get_Cards_value() == player_temp2[2 + ((counter - 1) * 2)].get_Cards_value());
	for (int i = 0; i < counter; i++)
	{
		Cards *temporary = new Cards;
		Cards *temporary1 = new Cards;
		int j = 0;
		if (player_temp1[2 + ((counter - 1) * 2)].get_Cards_value() > player_temp2[2 + ((counter - 1) * 2)].get_Cards_value())
		{
			if (i == 0)
			{
				do
				{
					/*if(player1.get_cards_volume()==50||player2.get_cards_volume()==50)
				{
					this->END_GAME(language);
				}*/
					*battle_result = 2;
					*temporary = player_temp1[j + ((i) * 3)];
					*temporary1 = player_temp2[j + ((i) * 3)];
					this->add_cards_to_the_cards_of_player(player1.get_cards_volume(), temporary, temporary1, player1);
					j++;
				} while (j < 3);
			}
			else if (i > 0)
			{
				do
				{
					/*			if(player1.get_cards_volume()==50||player2.get_cards_volume()==50)
					{
						this->END_GAME(language);
					}*/
					*temporary = player_temp1[j + ((i) * 2) + 1];
					*temporary1 = player_temp2[j + ((i) * 2) + 1];
					this->add_cards_to_the_cards_of_player(player1.get_cards_volume(), temporary, temporary1, player1);
					j++;
				} while (j < 2);
			}
		}
		else
		{
			if (i == 0)
			{
				do
				{
					/*	if(player1.get_cards_volume()==50||player2.get_cards_volume()==50)
				{
					this->END_GAME(language);
				}*/
					*battle_result = 1;
					*temporary = player_temp1[j + ((i) * 3)];
					*temporary1 = player_temp2[j + ((i) * 3)];
					this->add_cards_to_the_cards_of_player(player2.get_cards_volume(), temporary, temporary1, player2);
					j++;
				} while (j < 3);
			}

			else if (i > 0)
			{
				do
				{

					/*if(player1.get_cards_volume()==50||player2.get_cards_volume()==50)
		{
			this->END_GAME(language);
		}*/
					*temporary = player_temp1[j + (((i) * 2) + 1)];
					*temporary1 = player_temp2[j + (((i) * 2) + 1)];
					this->add_cards_to_the_cards_of_player(player2.get_cards_volume(), temporary, temporary1, player2);
					j++;
				} while (j < 2);
			}

		}
		delete temporary;
		delete temporary1;
	}
	if (version == 3 || version == 2)
	{
		/*getch();*/
	}
}

void WARGAME::Play_with_computer(int language, int version)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	Player *player1 = new Player;
	Player *computer = new Player;
	Game_Table game_table;
	int color1, color2;
	string name1, name2;
	if (language == 50)
	{
		cout << "Welcome to cards WARGAME make By BYKUBRONY" << endl;
		do
		{
			cout << "\nPlease enter your(player 1) nickname:";
			cin >> name1;
		} while (name1.size() < 3);
		player1->set_name(name1);
		cin.sync();
		cin.clear();
		do
		{
			cout << player1->get_name() << " please tell me what kind of color do you wish see  texts in the game? \n";
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "1-BLUE" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "2-RED" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "3-GREEN" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			cout << "4-No change this color is ok. " << endl;
			color1 = _getch();
		} while (color1 < 49 || color1>52);
		if (color1 == 49)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		if (color1 == 50)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		if (color1 == 51)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		if (color1 == 52)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}
	}
	else
	{
		cout << "Witajcie w karcianej grze w wojne zrobiona przez BYKUBRONY." << endl;
		do
		{
			cout << "\nPodaj nick(graczu numer 1):";
			cin >> name1;
		} while (name1.size() < 3);
		player1->set_name(name1);
		cin.sync();
		cin.clear();
		do
		{
			cout << player1->get_name() << " Powiedz w jakim kolorze chcesz miec wyswietlane napisy w grze. \n";
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "1-NIEBIESKI" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "2-CZERWONY" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "3-ZIELONY" << endl;
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
			cout << "4-Bez zmian ten kolor mi pasuje." << endl;
			color1 = getch();
		} while (color1 < 49 || color1>52);
		if (color1 == 49)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		if (color1 == 50)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		if (color1 == 51)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		if (color1 == 52)
		{
			SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		}

	}
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cin.sync();
	cin.clear();
	name2 = "BYKUBRONY";
	computer->set_name(name2);
	cin.sync();
	cin.clear();
	do
	{
		color2 = rand() % 4 + 49;
	} while (color1 == color2);
	if (color2 == 49)
	{
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	}
	if (color2 == 50)
	{
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
	}
	if (color2 == 51)
	{
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	}
	if (color2 == 52)
	{
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	}
	cin.sync();
	cin.clear();
	SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	Deck *deck = new Deck;
	deck->shuffling_of_deck();
	this->deal_a_cards(*deck, *player1, *computer);
	Cards temp, temp1;
	temp.set_Card_Name("");
	temp.set_Cards_Colour(' ');
	temp1.set_Card_Name("");
	temp1.set_Cards_Colour(' ');
	if (language == 50)
	{
		cout << "I mix the cards.\nYou and computer get randomly 26 cards.\nYou can start the game.\nPress any key to start the game.";
	}
	else
	{
		cout << "Karty zostaly wymieszane. Losowo ty i komputer otrzymaliscie po 26 kart.\nMozecie zaczac pojedynek.\nNacisnij dowolny klawisz by zaczac gre.";
	}
	int player1_decision, computer_decision;
	cin.sync();
	cin.clear();
	getch();
	int award = 0;
	int result_of_duel;
	do {
		system("cls");
		cin.sync();
		cin.clear();
		Cards *player1_temp = new Cards[1];
		Cards *computer_temp = new Cards[1];

		if (award == 1)
		{
			if (result_of_duel == 2)
			{

				if (color1 == 49)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				if (color1 == 50)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
				}
				if (color1 == 51)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				if (color1 == 52)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
				}

			}
			if (result_of_duel == 1)
			{

				if (color2 == 49)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				}
				if (color2 == 50)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
				}
				if (color2 == 51)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				}
				if (color2 == 52)
				{
					SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
				}

			}
			game_table.show_table(temp, temp1, *player1, *computer);
		}
		if (version == 2)
		{
			do
			{
				if (language == 50)
				{
					cout << player1->get_name() << "  please enter a number of yours cards to the duel.Number from 1 to " << player1->get_cards_volume() << ": ";
				}
				else
				{
					cout << player1->get_name() << "  podaj prosze numer karty ktorej chcesz uzyc w pojedynku.Wpisz numer od 1 do " << player1->get_cards_volume() << ": ";
				}
				cin >> player1_decision;
			} while (player1_decision<1 || player1_decision>player1->get_cards_volume());

		}
		else if (version == 3)
		{
			player1_decision = rand() % (player1->get_cards_volume()) + 1;
		}
		system("cls");
		*player1_temp = player1->ggget_Cardsall(player1_decision - 1);
		this->take_card_from_cards_of_player(player1_decision - 1, *player1);
		game_table.show_table(*player1_temp, temp1, *player1, *computer);
		cin.sync();
		cin.clear();
		system("cls");
		computer_decision = rand() % (computer->get_cards_volume()) + 1;
		*computer_temp = computer->ggget_Cardsall(computer_decision - 1);
		this->take_card_from_cards_of_player(computer_decision - 1, *computer);
		game_table.show_table(*player1_temp, *computer_temp, *player1, *computer);
		result_of_duel = player1_temp->operator<(*computer_temp);
		if (result_of_duel == 2)
		{
			this->add_cards_to_the_cards_of_player(player1->get_cards_volume(), player1_temp, computer_temp, *player1);
			cout << endl << endl;
			if (player1->get_cards_volume() == 0 || computer->get_cards_volume() == 0)
			{
				if (language == 50)
				{
					cout << "\n\t\t\t\t->->->WIN PLAYER1<-<-<-" << endl;
				}
				else
				{
					cout << "\n\t\t\t\t->->->Wygral GRACZ1<-<-<-" << endl;
				}
				for (int i = 0; i < player1->get_cards_volume(); i++)
				{
					cout << i << endl;
					cout << player1->ggget_Cardsall(i) << endl << endl << endl;
				}
				cout << endl << endl;
				for (int i = 0; i < computer->get_cards_volume(); i++)
				{
					cout << i << endl;
					cout << computer->ggget_Cardsall(i) << endl << endl << endl;
				}
				delete  player1;
				delete  computer;
				delete deck;
				delete[] player1_temp;
				delete[]computer_temp;
				this->END_GAME(language);
			}
		}
		if (result_of_duel == 1)
		{

			this->add_cards_to_the_cards_of_player(computer->get_cards_volume(), computer_temp, player1_temp, *computer);
			if (computer->get_cards_volume() == 0 || player1->get_cards_volume() == 0)
			{
				if (language == 50)
				{
					cout << "\n\t\t\t\t->->->WIN Computer<-<-<-" << endl;
				}
				else
				{
					cout << "\n\t\t\t\t->->->Wygral Komputer<-<-<-" << endl;
				}
				for (int i = 0; i < player1->get_cards_volume(); i++)
				{
					cout << i << endl;
					cout << player1->ggget_Cardsall(i) << endl << endl << endl;
				}
				cout << endl << endl;
				for (int i = 0; i < computer->get_cards_volume(); i++)
				{
					cout << i << endl;
					cout << computer->ggget_Cardsall(i) << endl << endl << endl;
				}
				delete  player1;
				delete  computer;
				delete deck;
				this->END_GAME(language);
			}
		}
		if (result_of_duel == 3)
		{

			int *result_of_duel_index = &result_of_duel;
			Cards *player1_temp1 = new Cards[9];
			Cards *player2_temp1 = new Cards[9];
			player1_temp1[0] = *player1_temp;
			player2_temp1[0] = *computer_temp;
			this->WAR(player1_temp1, player2_temp1, *player1, *computer, language, &result_of_duel, version);
			cout << endl << endl;
			delete[] player1_temp1;
			delete[] player2_temp1;
			if (player1->get_cards_volume() == 0 || computer->get_cards_volume() == 0)
			{
				if (player1->get_cards_volume() == 52)
				{

					if (language == 50)
					{
						cout << "\n\t\t\t\t->->->WIN PLAYER1<-<-<-" << endl;
					}
					else
					{
						cout << "\n\t\t\t\t->->->Wygral GRACZ1<-<-<-" << endl;
					}
				}
				else if (computer->get_cards_volume() == 52)
				{
					if (language == 50)
					{
						cout << "\n\t\t\t\t->->->WIN Computer<-<-<-" << endl;
					}
					else
					{
						cout << "\n\t\t\t\t->->->Wygral Komputer<-<-<-" << endl;
					}
				}
				for (int i = 0; i < player1->get_cards_volume(); i++)
				{
					cout << i << endl;
					cout << player1->ggget_Cardsall(i) << endl << endl << endl;
				}
				cout << endl << endl;
				for (int i = 0; i < computer->get_cards_volume(); i++)
				{
					cout << i << endl;
					cout << computer->ggget_Cardsall(i) << endl << endl << endl;
				}
				delete  player1;
				delete  computer;
				delete deck;
				delete[] player1_temp;
				delete[]computer_temp;
				this->END_GAME(language);
			}
		}
		if (version == 2 || version == 1)
		{
			cin.clear();
			cin.sync();
			getchar();

		}
		else if (version == 3)
		{

		}
		award = 1;
		cin.sync();
		cin.clear();
	} while (player1->get_cards_volume() != 0 || computer->get_cards_volume() != 0);

	if (version == 2 || version == 1)
	{
		cin.clear();
		cin.sync();
		getchar();

	}
	else if (version == 3)
	{

	}
	//getch();
}
void WARGAME::choose_language()
{
	system("cls");
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	int language;
	do
	{
		cin.clear();
		cin.sync();
		cout << "Choose language version\n1-Polish version\n2-English version.";
		language = _getch();
	} while (language < 49 || language>50);
	this->Start_Game(language);
}
void WARGAME::Start_Game(int language)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Deck *deck = new Deck;
	Game_Table *game_table = new Game_Table;
	int test_value;

	do
	{
		system("cls");
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		std::cin.clear();
		std::cin.sync();
		if (language == 50)
		{

			cout << "Welcome to Cards War game.Find the opponent to game together or play with computer."
				<< "\nBefore game you can test all function of this project.Soooo lets go!" << flush << endl;
			cout << "Choose(on the keyboard press number 1-9 what you wont to do: \n";
		}
		else
		{
			cout << "Witaj w grze wojna.Znajdz sobie przeciwnika,albo zagraj przeciwko komputerowi."
				<< "\nPrzed zagraniem przetestuj prosze funkcje ktore sa dostepne w tym projekcie.A wiecccccc zaczynamy!" << flush << endl;
			cout << "Wybierz z klawiatury klawisze od 1 do 9 w zaleznosci od tego co chcesz zrobic: \n";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "1-Test Card methods\n";
		}
		else
		{
			cout << "1-Przetestuj funkcje klasy \"Karta\"\n";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "2-Test Deck methods\n";
		}
		else
		{
			cout << "2-Przetestuj funkcje klasy \"Talia.\"\n";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "3-Test Game Table methods\n";
		}
		else
		{
			cout << "3-Przetestuj funkcje klasy \"Stol do gry\"\n";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "4-Play the game with opponent\n";
		}
		else
		{
			cout << "4-Zagraj w gre z przeciwnikiem.\n";
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "5-Play the game with computer" << endl;
		}
		else
		{
			cout << "5-Zagraj w gre z komputerem." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "6-Simulation." << endl;
		}
		else
		{
			cout << "6-Symulacja." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_BLUE);
		if (language == 50)
		{
			cout << "7-Chenge language." << endl;
		}
		else
		{
			cout << "7-Zmien jezyk." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
		if (language == 50)
		{
			cout << "8-Read the game rules." << endl;
		}
		else
		{
			cout << "8-Przeczytaj zasady gry." << endl;
		}
		if (language == 50)
		{
			cout << "9-EXIT program." << endl;
		}
		else
		{
			cout << "9-Zamknij program." << endl;
		}
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_BLUE);
		SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		test_value = _getch();
	} while (test_value < 49 || test_value>57);

	switch (test_value)
	{
	case 49:
	{
		this->Test_Card_Methods(language);
	}
	case 50:
	{
		this->Test_Deck_Methods(*deck, language);
	}
	case 51:
	{
		this->Test_Game_Table_Methods(language);
	}
	case 52:
	{
		delete deck;
		this->Play_with_opponent(language);
	}
	case 53:
	{
		delete deck;
		this->Play_with_computer(language, 2);
	}
	case 54:
	{
		delete deck;
		this->Play_with_computer(language, 3);
	}
	case 57:
	{
		delete deck;
		exit(0);
	}
	case 55:
	{
		this->choose_language();
	}
	case 56:
	{
		this->Rules_of_game(language);
	}
	}

}
void WARGAME::take_card_from_cards_of_player(int number, Player &player)
{
	Cards *temp = new Cards[player.get_cards_volume() + 1];
	for (int i = 0; i < player.get_cards_volume(); i++)
	{
		temp[i] = player.ggget_Cardsall(i);
	}
	for (int i = 0; i < number; i++)
	{
		Cards card = temp[i];
		player.ssset_Cardsall(i, card);
	}
	for (int i = number; i < player.get_cards_volume(); i++)
	{
		Cards card = temp[i + 1];
		player.ssset_Cardsall(i, card);
	}
	delete[]temp;
	player.set_cards_volume(player.get_cards_volume() - 1);
}

void WARGAME::add_cards_to_the_cards_of_player(int number_of_cards, Cards *my, Cards *my_oponent, Player &player)
{

	int first_place;
	int second_place;
	if (number_of_cards == 0)
	{

		player.ssset_Cardsall(0, *my);
		player.ssset_Cardsall(1, *my_oponent);
	}
	else if (number_of_cards == 1)
	{
		first_place = 1;
		second_place = 2;
		player.ssset_Cardsall(1, *my);
		player.ssset_Cardsall(2, *my_oponent);
	}
	else if (number_of_cards > 1)
	{
		first_place = rand() % (number_of_cards)+1;

		do
		{
			second_place = rand() % (number_of_cards)+1;
		} while (second_place == first_place);
		Cards *temp = new Cards[number_of_cards];
		/*swap(first_place,second_place);*/
		if (first_place > second_place)
		{
			swap(first_place, second_place);
			//int temp=first_place;
			//first_place=second_place;//znajdü b≥πd
			//second_place=temp;
		}
		for (int i = 0; i < number_of_cards; i++)
		{
			temp[i] = player.ggget_Cardsall(i);
		}
		for (int i = 0; i < first_place; i++)
		{
			player.ssset_Cardsall(i, temp[i]);
		}

		player.ssset_Cardsall(first_place, *my);
		for (int i = first_place + 1; i < second_place + 1; i++)
		{
			player.ssset_Cardsall(i, temp[i - 1]);
		}
		player.ssset_Cardsall(second_place + 1, *my_oponent);
		for (int i = second_place + 2; i < number_of_cards + 2; i++)//by≥o:for(int i=second_place+1;i<number_of_cards+2;i++)
		{
			player.ssset_Cardsall(i, temp[i - 2]);//by≥o:player.cards[i+1]=temp[i-1];
		}

	}
	player.set_cards_volume(player.get_cards_volume() + 2);
}

void WARGAME::Rules_of_game(int language)
{
	system("cls");
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
	int agree = 0;
	do
	{
		cin.clear();
		cin.sync();
		if (language == 50)
		{
			cout << "\t\t\t\tRULES OF THE WAR_GAME\n\tI change some of original Rules,to make funier the game:" << endl;
			cout << "1.)You can choose, what cards used to the dual" << endl;
			cout << "2.)After every win i add (duel)cards to your cards to the randomly place\n";
			cout << "3.)Every player choose yours color.After every win duel,"
				"\n   the table and text will be in the color of the win player\n   (this is the Aword and the motivation).";
			cout << "\n\tNo change rules:";
			cout << "\n1.)At the start you have 26 cards.";
			cout << "\n2.)The WAR option";
			cout << "\n3.)You need have 52 cards to win." << endl;
			cout << "If you not agree with this change,press 1 to exit.If you agree press 2.";
		}
		else
		{
			cout << "\t\t\t\tZASADY GRY W WOJNE\n\tZmienilem kilka regul w stosunku do oryginalnych,by zapewnic wiecej zabawy:\n";
			cout << "1.)Mozesz wybrac ktorej karty chesz uzyc do pojedynku.\n";
			cout << "2.)Po kazdej wygranej dodam karty ktore walczyly do twoich kart w sposob losowy.\n";
			cout << "3.)Kazdy gracz wybierze sowj kolor.Po kazdym zwycieskim pojedynku,"
				<< "\n   stol i tekst beda wyswietlane w kolorze gracza ktory wygral pojedynek\n   (jest to nagroda a zarazem motywacja do lepszej walki).";
			cout << "\n\tNie zmienione reguly:";
			cout << "\n1.)Na poczatku otrzymujesz po 26 kart.";
			cout << "\n2.)Istieje opcja wojna.";
			cout << "\n3.)Potrzebujesz 52 kart do wygrania gry." << endl;
			cout << "Jesli sie nie zgadzasz ze zmianami,nacisnij 1 by zakonczyc gre.Nacisnij 2 jesli sie zgadzasz.";
		}
		agree = _getch();
	} while (agree < 49 && agree < 50);
	if (agree == 49)
	{
		exit(0);
	}
	if (agree >= 50)
	{
		this->Start_Game(language);
	}
}
void WARGAME::END_GAME(int language)
{
	if (language == 50)
	{
		cout << "End game\nPress enter to go to the main menu." << endl << endl;
	}
	else
	{
		cout << "Koniec gry\nNacisnij przycisk by przejsc do menu glownego." << endl << endl;
	}
	getch();
	this->Start_Game(language);
}/* second_place=temp;*/