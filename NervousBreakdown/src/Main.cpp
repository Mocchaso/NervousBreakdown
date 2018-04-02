/*
 * Main.cpp
 *
 */

#include "canvas/canvas.h"
#include "CardManager.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace canvas;
using namespace std;

void TurnBack(int i, int j) { // i行j列目のカードを裏返す
	setColor(255, 255, 255);
	fillRectangle(50 + j * 85, 50 + i * 125, 80, 120);
	setColor(255, 0, 0);
	drawRectangle(55 + j * 85, 55 + i * 125, 70, 110);
	setColor(200, 0, 0);
	fillRectangle(60 + j * 85, 60 + i * 125, 60, 100);
}

string IntToString(int n) { // int->string
	stringstream ss;
	ss << n;
	return ss.str();
}

bool GameSet(int states[]) { // ゲーム終了判定
	for (int i = 0; i < 52; i++) {
		if (states[i] != 2) {
			return false;
		}
	}
	return true;
}

int main() {
	// フィールドの描画
	show(1200, 700);
	setColor(0, 150, 100); // 深緑っぽく
	fillRectangle(0, 0, 1200, 700);

	// 山札の準備とシャッフル
	int yamahuda[52] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
			16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
			33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
			50, 51 };
	srand(time(NULL));
	for (int i = 0; i < 52; i++) { // 山札配列を0~51まで順に見ていく
		int x = rand() % 52; // 交換するカードを乱数で決定
		int t = yamahuda[i];
		yamahuda[i] = yamahuda[x];
		yamahuda[x] = t;
	}

	// 52枚のカード全てを裏返す
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			TurnBack(i, j);
		}
	}

	setTextSize(18);
	drawString(80, 560, "プレイヤー1");
	drawString(80, 600, "プレイヤー2");
	drawString(240, 560, "0枚");
	drawString(240, 600, "0枚");

	CardManager cm;
	int states[52] = { };
	int click_count = 0;
	int prev_i = 0, prev_j = 0, prev_num = 0, prev_rank = 0;
	int score1 = 0, score2 = 0;
	int turn = 1;
	setColor(255, 230, 0);
	fillCircle(62, 570, 10);
	while (true) {
		waitForPoint();
		int click_x = getPointedX();
		int click_y = getPointedY();
		int i = (click_y - 50) / 125;
		int j = (click_x - 50) / 85;

		if (i < 4 && j < 13) {
			int num = yamahuda[(13 * i + (j + 1)) - 1];
			int num_suit = num / 13;
			int num_rank = (num % 13) + 1;

			click_count++;
			if (click_count == 1) {
				if (states[(13 * i + (j + 1)) - 1] == 2) {
					click_count = 0;
					continue;
				}
				prev_i = i;
				prev_j = j;
				prev_num = num;
				prev_rank = num_rank;
				cm.drawCard(num_suit, num_rank, 50 + j * 85, 50 + i * 125);
				states[(13 * i + (j + 1)) - 1] = 1;
			} else if (click_count == 2) {
				if ((prev_i == i && prev_j == j)
						|| states[(13 * i + (j + 1)) - 1] == 2) { // 同じカードor削除された位置をクリックした
					click_count = 1;
					continue;
				}
				cm.drawCard(num_suit, num_rank, 50 + j * 85, 50 + i * 125);
				if (num_rank == prev_rank) { // 当たり
					states[(13 * prev_i + (prev_j + 1)) - 1] = 2;
					states[(13 * i + (j + 1)) - 1] = 2;
					// カードを消す
					Sleep(1000);
					setColor(0, 150, 100);
					fillRectangle(50 + prev_j * 85, 50 + prev_i * 125, 80, 120);
					fillRectangle(50 + j * 85, 50 + i * 125, 80, 120);
					setTextColor(0, 0, 0);
					setTextSize(18);
					if (turn == 1) {
						score1 += 2;
						drawString(240, 560, IntToString(score1) + "枚");
					} else {
						score2 += 2;
						drawString(240, 600, IntToString(score2) + "枚");
					}
					if (GameSet(states)) {
						setTextSize(40);
						if (score1 > score2) {
							drawStringCenter(600, 300, "Player1 won!");
						} else if (score2 > score1) {
							drawStringCenter(600, 300, "Player2 won!");
						} else {
							drawStringCenter(600, 300, "Draw...");
						}
						break;
					}
				} else { // 外れ
					states[(13 * prev_i + (prev_j + 1)) - 1] = 0;
					states[(13 * i + (j + 1)) - 1] = 0;
					// カードを裏にする
					Sleep(1000);
					TurnBack(prev_i, prev_j);
					TurnBack(i, j);
				}
				click_count = 0;
				if (turn == 1) {
					setColor(0, 150, 100);
					fillCircle(62, 570, 10);
					setColor(255, 230, 0);
					fillCircle(62, 610, 10);
					turn = 2;
				} else {
					setColor(0, 150, 100);
					fillCircle(62, 610, 10);
					setColor(255, 230, 0);
					fillCircle(62, 570, 10);
					turn = 1;
				}
			}
		}
	}
	cout << "ゲームセット!" << endl;
	if (score1 > score2) {
		cout << "プレイヤー1の勝ち!" << endl;
	} else if (score2 > score1) {
		cout << "プレイヤー2の勝ち！" << endl;
	} else {
		cout << "引き分け！" << endl;
	}
	waitForKey();
}
