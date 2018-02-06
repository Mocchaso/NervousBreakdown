/*
 * Card.cpp
 *
 */

#include "CardManager.h"
using namespace canvas;
using namespace std;

void CardManager::drawNumber(int suit, int x, int y, string rank) {
	if (suit == 1 || suit == 2) {
		setTextColor(255, 0, 0);
	} else {
		setTextColor(0, 0, 0);
	}
	setTextSize(16);
	drawString(x + 3, y + 3, rank);
	setTextSize(-16);
	drawString(x + 77, y + 117, rank);
}

void CardManager::drawA(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);
	s.drawSuit(suit, x + 40, y + 60, 0.1);

	drawNumber(suit, x, y, "A");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw2(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 40, y + 24, 0.1);
	s.drawSuit(suit, x + 40, y + 96, 0.1);

	drawNumber(suit, x, y, "2");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw3(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 40, y + 24, 0.1);
	s.drawSuit(suit, x + 40, y + 60, 0.1); // 真ん中
	s.drawSuit(suit, x + 40, y + 96, 0.1);

	drawNumber(suit, x, y, "3");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw4(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 25, y + 24, 0.1);
	s.drawSuit(suit, x + 25, y + 96, 0.1);
	s.drawSuit(suit, x + 55, y + 24, 0.1);
	s.drawSuit(suit, x + 55, y + 96, 0.1);

	drawNumber(suit, x, y, "4");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw5(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 25, y + 24, 0.1);
	s.drawSuit(suit, x + 25, y + 96, 0.1);
	s.drawSuit(suit, x + 40, y + 60, 0.1); // 真ん中
	s.drawSuit(suit, x + 55, y + 24, 0.1);
	s.drawSuit(suit, x + 55, y + 96, 0.1);

	drawNumber(suit, x, y, "5");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw6(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 25, y + 24, 0.1);
	s.drawSuit(suit, x + 25, y + 60, 0.1);
	s.drawSuit(suit, x + 25, y + 96, 0.1);
	s.drawSuit(suit, x + 55, y + 24, 0.1);
	s.drawSuit(suit, x + 55, y + 60, 0.1);
	s.drawSuit(suit, x + 55, y + 96, 0.1);

	drawNumber(suit, x, y, "6");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw7(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 25, y + 24, 0.1);
	s.drawSuit(suit, x + 25, y + 60, 0.1);
	s.drawSuit(suit, x + 25, y + 96, 0.1);
	s.drawSuit(suit, x + 40, y + 36, 0.1); // 真ん中
	s.drawSuit(suit, x + 55, y + 24, 0.1);
	s.drawSuit(suit, x + 55, y + 60, 0.1);
	s.drawSuit(suit, x + 55, y + 96, 0.1);

	drawNumber(suit, x, y, "7");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw8(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 25, y + 24, 0.1);
	s.drawSuit(suit, x + 25, y + 60, 0.1);
	s.drawSuit(suit, x + 25, y + 96, 0.1);
	s.drawSuit(suit, x + 40, y + 36, 0.1); // 真ん中
	s.drawSuit(suit, x + 40, y + 84, 0.1); // 真ん中
	s.drawSuit(suit, x + 55, y + 24, 0.1);
	s.drawSuit(suit, x + 55, y + 60, 0.1);
	s.drawSuit(suit, x + 55, y + 96, 0.1);

	drawNumber(suit, x, y, "8");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw9(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 25, y + 24, 0.1);
	s.drawSuit(suit, x + 25, y + 48, 0.1);
	s.drawSuit(suit, x + 25, y + 72, 0.1);
	s.drawSuit(suit, x + 25, y + 96, 0.1);
	s.drawSuit(suit, x + 40, y + 60, 0.1); // 真ん中
	s.drawSuit(suit, x + 55, y + 24, 0.1);
	s.drawSuit(suit, x + 55, y + 48, 0.1);
	s.drawSuit(suit, x + 55, y + 72, 0.1);
	s.drawSuit(suit, x + 55, y + 96, 0.1);

	drawNumber(suit, x, y, "9");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::draw10(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	s.drawSuit(suit, x + 25, y + 24, 0.1);
	s.drawSuit(suit, x + 25, y + 48, 0.1);
	s.drawSuit(suit, x + 25, y + 72, 0.1);
	s.drawSuit(suit, x + 25, y + 96, 0.1);
	s.drawSuit(suit, x + 40, y + 36, 0.1); // 真ん中(上)
	s.drawSuit(suit, x + 40, y + 84, 0.1); // 真ん中(下)
	s.drawSuit(suit, x + 55, y + 24, 0.1);
	s.drawSuit(suit, x + 55, y + 48, 0.1);
	s.drawSuit(suit, x + 55, y + 72, 0.1);
	s.drawSuit(suit, x + 55, y + 96, 0.1);

	drawNumber(suit, x, y, "10");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::drawJ(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	if (suit == 1 || suit == 2) {
		setColor(255, 0, 0);
	} else {
		setColor(0, 0, 0);
	}
	drawRectangle(x + 25, y + 24, 30, 72);

	drawNumber(suit, x, y, "J");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::drawQ(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	if (suit == 1 || suit == 2) {
		setColor(255, 0, 0);
	} else {
		setColor(0, 0, 0);
	}
	drawRectangle(x + 25, y + 24, 30, 72);

	drawNumber(suit, x, y, "Q");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::drawK(int suit, int x, int y) {
	setColor(255, 255, 255);
	fillRectangle(x, y, 80, 120);

	if (suit == 1 || suit == 2) {
		setColor(255, 0, 0);
	} else {
		setColor(0, 0, 0);
	}
	drawRectangle(x + 25, y + 24, 30, 72);

	drawNumber(suit, x, y, "K");
	s.drawMiniSuit(suit, x, y);
}

void CardManager::drawCard(int suit, int rank, int x, int y) {
	switch (rank) {
	case 1:
		drawA(suit, x, y);
		break;
	case 2:
		draw2(suit, x, y);
		break;
	case 3:
		draw3(suit, x, y);
		break;
	case 4:
		draw4(suit, x, y);
		break;
	case 5:
		draw5(suit, x, y);
		break;
	case 6:
		draw6(suit, x, y);
		break;
	case 7:
		draw7(suit, x, y);
		break;
	case 8:
		draw8(suit, x, y);
		break;
	case 9:
		draw9(suit, x, y);
		break;
	case 10:
		draw10(suit, x, y);
		break;
	case 11:
		drawJ(suit, x, y);
		break;
	case 12:
		drawQ(suit, x, y);
		break;
	case 13:
		drawK(suit, x, y);
		break;
	default:
		cout << "rank番号" << rank << "は範囲外です" << endl;
		break;
	}
}
