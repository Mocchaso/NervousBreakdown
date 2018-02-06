/*
 * Suit.cpp
 *
 */

#include "Suit.h"
using namespace canvas;
using namespace std;

void Suit::spade(int x, int y, double scale) {
	setColor(0, 0, 0);
	fillCircle(x - 50 * scale, y + 10 * scale, 50 * scale); // 左
	fillCircle(x + 50 * scale, y + 10 * scale, 50 * scale); // 右
	fillTriangle(x - 90 * scale, y - 20 * scale, x + 90 * scale, y - 20 * scale,
			x, y - 100 * scale); // 上の三角形
	fillTriangle(x - 40 * scale, y + 100 * scale, x + 40 * scale,
			y + 100 * scale, x, y - 60 * scale); // 下の三角形
}

void Suit::heart(int x, int y, double scale) {
	setColor(255, 0, 0);
	fillCircle(x - 40 * scale, y - 35 * scale, 50 * scale); // 左
	fillCircle(x + 40 * scale, y - 35 * scale, 50 * scale); // 右
	fillTriangle(x - 80 * scale, y - 5 * scale, x + 80 * scale, y - 5 * scale,
			x, y + 85 * scale); // 三角形
}

void Suit::diamond(int x, int y, double scale) {
	setColor(255, 0, 0);
	fillTriangle(x, y - 100 * scale, x - 80 * scale, y, x + 80 * scale, y); // 上の三角形
	fillTriangle(x, y + 100 * scale, x - 80 * scale, y, x + 80 * scale, y); // 下の三角形

}

void Suit::club(int x, int y, double scale) {
	setColor(0, 0, 0);
	fillTriangle(x - 40 * scale, y + 100 * scale, x + 40 * scale,
			y + 100 * scale, x, y - 10 * scale); // 根元の三角形
	fillCircle(x - 50 * scale, y + 10 * scale, 50 * scale); // 左
	fillCircle(x, y - 50 * scale, 50 * scale); // 上
	fillCircle(x + 50 * scale, y + 10 * scale, 50 * scale); // 右
}

void Suit::drawSuit(int suit, int x, int y, double scale) {
	switch (suit) {
	case 0:
		spade(x, y, scale);
		break;
	case 1:
		heart(x, y, scale);
		break;
	case 2:
		diamond(x, y, scale);
		break;
	case 3:
		club(x, y, scale);
		break;
	default:
		cout << "suit番号" << suit << "は範囲外です" << endl;
		break;
	}
}

void Suit::drawMiniSuit(int suit, int x, int y) {
	if (suit == 1 || suit == 2) {
		setColor(255, 0, 0);
	} else {
		setColor(0, 0, 0);
	}
	drawSuit(suit, x + 8, y + 25, 0.07);
	drawSuit(suit, x + 72, y + 95, -0.07);
}
