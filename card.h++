/**
* @file card.cpp
* @author Miroslav Karpíšek
* @date 24 April 2017
* @brief Soubor obsahuje asserttesty pro jednotlive třídy.
*/

#ifndef CARD_H
#define CARD_H

#define SPADE   "\033[7;11m\u2660\033[0m"
#define CLUB    "\033[7;11m\u2663\033[0m"
#define HEART   "\033[7;31m\u2665\033[0m"
#define DIAMOND "\033[7;31m\u2666\033[0m"


#include "enums.h++"

#include <string>

using namespace std;

class Card;

class Card
{
protected:
    int _number;
    color _color;
    bool _up;

public:
    Card(int number, color color);
    string toString();
    string toSave();
    bool equals(Card);
    int hashCode();
    int value();
    int compareVal(Card card);
    bool sameColor(Card card);
    bool faceUp();
    void turn();
    color myColor();

};




#endif
