#pragma once
#include <string>
using namespace std;
class JankenGame
{
private:
	int playerWins;//プレイヤの勝利数
	int computerWins;//Comの勝利数
	int draws;//引き分け回数
public:
	JankenGame();
	void PlayGame();
	void PlayRound();
	string GetRandomChose();
	bool isPlayerWin(const std::string& playerChoice, const std::string& computerChoice);
	void displayResult();

};
