// Cards.cpp : Defines the entry point for the console application.
//
#include<time.h>
#include<stdlib.h>
#include<iostream>
#include <windows.h>
#include <cstdlib>
#include<conio.h>
using namespace std;
#include"Cards.h"
#include"Deck.h"
#include"Game_Table.h"
#include"WARGAME.h"
int main()
{

	srand(time(0));
	Cards cards[52];
	Cards player1[52];
	Deck deck;
	/*deck.shuffling_of_deck();
	deck.show_deck();*/
	WARGAME wargame;
	wargame.choose_language();
	/*Deck *deck1=new Deck,*deck2=new Deck;
	deck1->cards[4].operator<(deck1->cards[17]);*/
	/*int i=0;
	do
	{
		deck1->delete_last_card();
		i++;
	}
	while(i<52);

	deck1->repair_a_deck();
	deck1->delete_last_card();
	deck1->delete_last_card();
		deck1->delete_last_card();
	deck1->show_deck();
	Game_Table game_table;*/
	//game_table.show_table(/*deck1->*/cards[15],/*deck1->*/cards[23]);
	//game_table.show_table(deck1->cards[15],/*deck1->*/cards[23]);
	//game_table.show_table(/*deck1->*/cards[15],deck1->cards[23]);
	//game_table.show_table(deck1->cards[15],deck1->cards[23]);
	//deck1->delete_last_card();
	//deck1->delete_last_card();
	//deck1->delete_last_card();
	//deck1->delete_last_card();
	//deck1->delete_last_card();
	//deck1->delete_last_card();
	//game_table.show_deck();
	///*deck1->draw_a_cards();*/
	//deck1->shuffling_of_deck();
	//deck1->shuffling_of_deck();
	//deck1->shuffling_of_deck();
	//deck1->shuffling_of_deck();
	//deck1->shuffling_of_deck();
	//deck1->show_deck();
	//Cards add;
	//add.set_Cardsa(" A S ");
	//add.set_Cardsb(3);
	//add.set_Cards_value(13);
	//deck1->add_card_if_you_can_on_the_last_place(add);
	//deck1->repair_a_deck();
	//deck1->join_a_deck_to_deck(deck2);
	//delete deck2;
	//deck1->show_deck();
	//deck1->delete_last_card();
	///*deck1->add_card_if_you_can_on_the_last_place(add);*/
	//deck1->add_card_if_you_can_on_the_selected_place(5,add);
	//deck1->add_card_if_you_can_on_the_selected_place(5,add);
	//deck1->show_deck();
	//int number_of_parts=0;
	//cout<<"On the how many part do you wont partition this deck?";
	//cin>>number_of_parts;
	//int *tab=new int[number_of_parts];
	//for(int i=0;i<number_of_parts;i++)
	//{
	//cout<<"Enter the in sequence number of a place in this  deck which make a partition.[Number and enter.....]";
	//cin>>tab[i];
	//}
	//Deck *tab1=new Deck[number_of_parts];
	//deck1->partition_a_deck(tab,tab1,number_of_parts);
	//for(int i=0;i<number_of_parts;i++)
	//{
	//tab1[i].show_deck();
	//}
	//deck1->show_deck();
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	getch();
	system("pause");
	return 0;
}

