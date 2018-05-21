#ifndef _Deck
#define _Deck
#include"Cards.h"
#include"Game.h"
class Deck
{
private:

	int how_many_cards;
	int how_many_the_same_cards;
	Cards *cards;

public:
	virtual  void function();

	void sset_Cardsa(int number, string card_Name);
	void sset_Cardsb(int number, char colour);
	void sset_Cards_value(int number, int value);
	string gget_Cardsa(int number);
	char gget_Cardsb(int number);
	int gget_Cards_value(int number);
	void set_how_many_cards(int value);
	int get_how_many_cards();
	void set_how_many_the_same_cards(int value);
	int get_how_many_the_same_cards();
	Deck();
	void show_deck();
	void shuffling_of_deck();
	void draw_a_cards();
	void delete_card(int number);
	void delete_last_card();
	void add_card_if_you_can_on_the_last_place(Cards new_cards);
	void add_card_if_you_can_on_the_selected_place(int number, Cards new_cards);
	void repair_a_deck();
	void join_a_deck_to_deck(Deck *deck2);
	void partition_a_deck(int tab[], Deck tab1[], int value);
	void shift_a_deck(int number, int number1);
    ~Deck();
};
#endif