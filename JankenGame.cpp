#include "JankenGame.h"
#include <iostream>
using namespace std;
JankenGame::JankenGame()
{
	playerWins = 0;
	computerWins = 0;
	draws = 0;
}
void JankenGame::PlayGame()
{
	std::cout << "じゃんけんを始めますか？(はい(y)/いいえ(n)): ";
	std::string input;
	std::cin >> input;
	if (input == "はい" || input == "y") {
		for (int i = 0; i < 3; ++i) {
			PlayRound();
		}
		displayResult();
	}
	else {
		std::cout << "ゲームを終了します。" << std::endl;
	}
}

void JankenGame::PlayRound()
{
	std::cout << "じゃんけんの手を選んでください。(グー/チョキ/パーどれかを入力): ";
	std::string playerChoice;
	std::cin >> playerChoice;
	// コンピュータの手をランダムに決定
	std::string computerChoice = GetRandomChose();
	// プレイヤーとコンピュータの手を比較して勝敗を判定
	if (playerChoice == computerChoice) {
			std::cout << "引き分けです！" << std::endl;
			++draws;
	}
	else {
		// 勝者にポイントを加算
		if (isPlayerWin(playerChoice, computerChoice)) {
			std::cout << "プレイヤー1の勝ちです！" << std::endl;
			++playerWins;
		}
		else {
			std::cout << "プレイヤー2の勝ちです！" << std::endl;
			++computerWins;
		}
	}
}

string JankenGame::GetRandomChose()
{
	srand(time(0));
	int choice = rand() % 3;
	switch (choice) {
	case 0:
		return "グー";
	case 1:
		return "チョキ";
	case 2:
		return "パー";
	}
}
bool JankenGame::isPlayerWin(const std::string& playerChoice, const std::string& computerChoice) {
	// ここでの判定ロジックを実装
	//下で数えて＋判定してるからいらない
	return 0;
}
void JankenGame::displayResult() {
	std::cout << "【自分の勝った数 対 相手の勝った数】: " << playerWins << " 対 " << computerWins << std::endl;
	std::cout << "引き分け回数: " << draws << std::endl;
}