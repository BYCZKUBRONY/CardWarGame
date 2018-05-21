#ifndef _WARGAME
#define _WARGAME
#include"Game_Table.h"
class WARGAME :public Game_Table
{
public:
	~WARGAME();
	virtual void function();
	void add_card_last(Deck &deck, int language);
	void add_card_place(Deck &deck, int language);
	void add_cards_to_the_cards_of_player(int number_of_cards, Cards *my, Cards *my_oponent, Player &player);
	void Compare_Cards(Cards x, Cards y, int language);
	void deal_a_cards(Deck &deck, Player &player, Player &player2);
	void choose_language();
	void deletecard(Deck &deck, int language);
	void deletecardd(Deck &deck, int language);
	void Play_with_opponent(int language);
	void Play_with_computer(int language, int version);
	void repair(Deck &deck, int language);
	void set_parametrs_of_card(Cards first, int language);
	void shift(Deck &deck, int language);
	void show(Cards first, int language);
	void show_a_table(Cards first, Cards second, int language);
	void show_a_table_with_both_fill(Cards first, Cards second, int language);
	void show_a_table_with_first_empty(Cards first, Cards second, int language);
	void show_a_table_with_second_empty(Cards first, Cards second, int language);
	void show_the_deck(Deck &deck, int language);
	void Start_Game(int language);
	void take_card_from_cards_of_player(int number, Player &player);
	void Test_Card_Methods(int language);
	void Test_Deck_Methods(Deck &deck, int language);
	void Test_Game_Table_Methods(int language);
	void Rules_of_game(int language);
	void WAR(Cards *player_temp1, Cards *player_temp2, Player &player1, Player &player2, int language, int *battle_result, int version);
	void END_GAME(int language);
};
#endif