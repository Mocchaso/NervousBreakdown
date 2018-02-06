/*
 * Card.h
 *
 */

#ifndef CARDMANAGER_H_
#define CARDMANAGER_H_

#include "canvas/canvas.h"
#include "Suit.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

class CardManager {
public:
	Suit s;
	void drawNumber(int suit, int x, int y, std::string rank);
	void drawA(int suit, int x, int y);
	void draw2(int suit, int x, int y);
	void draw3(int suit, int x, int y);
	void draw4(int suit, int x, int y);
	void draw5(int suit, int x, int y);
	void draw6(int suit, int x, int y);
	void draw7(int suit, int x, int y);
	void draw8(int suit, int x, int y);
	void draw9(int suit, int x, int y);
	void draw10(int suit, int x, int y);
	void drawJ(int suit, int x, int y);
	void drawQ(int suit, int x, int y);
	void drawK(int suit, int x, int y);
	void drawCard(int suit, int rank, int x, int y);
};

#endif /* CARDMANAGER_H_ */
