#ifndef _Game_Table
#define _Game_Table
#include"Cards.h"
#include"Deck.h"
#include"Player.h"
class Game_Table
{
public:
	virtual~Game_Table();
	virtual  void function();
	void show_table(Cards card_Name, Cards colour, Player name1, Player name2);
};

#endif