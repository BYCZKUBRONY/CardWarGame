#ifndef _Cards
#define _Cards
#include<iostream>
#include<iomanip>
#include<string>
#include"Game.h"
using namespace std;
class Cards
{
private:
	//card name
	string card_Name;
	// colour of card
	char colour;
	//value od card(1-13)
	int value;

public:
	virtual  void function();
	/*
	*constructor of the Cards method
	*/
	Cards();
	//setter for 'card_Name' field
	void set_Card_Name(string card_Name);
	//setter for 'colour' field
	void set_Cards_Colour(char colour);
	//setter for 'value' field
	void set_Cards_value(int value);
	//getter for 'card_Name' field
	string get_Card_Name();
	//getter for 'colour' field
	char get_Cards_Colour();
	//getter for 'value' field
	int get_Cards_value();
	// method print 'card' on the consol 
	void show_card(string card_Name, char colour);
	// method check who card is  stronger,print simple graphic on the consol,and return: '1'-win cards, '2'-win 'this->', '3'-its a draw 
	int operator<(Cards &cards);
	// method print card in consol if we write cout<<card;
	friend ostream &operator<<(ostream &wy, const Cards &d);
	// destructor of method
	~Cards();
};
#endif