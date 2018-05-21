#ifndef _Player
#define _Player
#include"Deck.h"
#include"cards.h"
class Player
{
	//name of player
	string name;
	//volume of cards exist in cards array
	int cards_volume;
	//array of cards who have a player
	Cards cards[52];
public:
	Player();
	//constructor of the class Player
	Player(string name, int volume);
	//setters and getters of class player needed to play
	// set and get a name,value from Cards,name and cards_volume from Player
	Cards ggget_Cardsall(int number);
	void  ssset_Cardsall(int number, Cards cards);
	void ssset_Cardsa(int number, string a);
	void ssset_Cardsb(int number, char b);
	void ssset_Cards_value(int number, int value);
	string ggget_Cardsa(int number);
	char ggget_Cardsb(int number);
	int ggget_Cards_value(int number);
	void set_name(string name);
	void set_cards_volume(int cards_volume);
	int get_cards_volume();
	string get_name();

    ~Player();
	virtual void function();
	
};

#endif