#include "Player.h"

Player::Player(string name, int volume)
{
	this->cards_volume = volume;
	this->name = name;
}

Player::Player()
{
	this->name = "";
	this->cards_volume = 0;
}

void  Player::ssset_Cardsall(int number, Cards cards)
{
	this->cards[number] = cards;
}

Cards Player::ggget_Cardsall(int number)
{
	return this->cards[number];
}

void Player::ssset_Cardsa(int number, string a)
{
	this->cards[number].set_Card_Name(a);
}
void Player::ssset_Cardsb(int number, char b)
{
	this->cards[number].set_Cards_Colour(b);
}

void Player::ssset_Cards_value(int number, int value)
{
	this->cards[number].set_Cards_value(value);
}

string Player::ggget_Cardsa(int number)
{
	return this->cards[number].get_Card_Name();
}

char Player::ggget_Cardsb(int number)
{
	return this->cards[number].get_Cards_Colour();
}

int Player::ggget_Cards_value(int number)
{
	return this->cards[number].get_Cards_value();
}

Player::~Player()
{

}

void Player::function()
{
	cout << "text3";
}

void Player::set_name(string name)
{
	this->name = name;
}

string Player::get_name()
{
	return this->name;
}

int Player::get_cards_volume()
{
	return this->cards_volume;
}
void Player::set_cards_volume(int cards_volume)
{
	this->cards_volume = cards_volume;
}