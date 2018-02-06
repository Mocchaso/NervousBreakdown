/*
 * Suit.h
 *
 */

#ifndef SUIT_H_
#define SUIT_H_

#include "canvas/canvas.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

class Suit {
public:
	void spade(int x, int y, double scale);
	void heart(int x, int y, double scale);
	void diamond(int x, int y, double scale);
	void club(int x, int y, double scale);
	void drawSuit(int suit, int x, int y, double scale);
	void drawMiniSuit(int suit, int x, int y);
};

#endif /* SUIT_H_ */
