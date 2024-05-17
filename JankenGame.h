#pragma once
#include <string>
using namespace std;
class JankenGame
{
private:
	int playerWins;//ƒvƒŒƒCƒ„‚ÌŸ—˜”
	int computerWins;//Com‚ÌŸ—˜”
	int draws;//ˆø‚«•ª‚¯‰ñ”
public:
	JankenGame();
	void PlayGame();
	void PlayRound();
	string GetRandomChose();
	bool isPlayerWin(const std::string& playerChoice, const std::string& computerChoice);
	void displayResult();

};
