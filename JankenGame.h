#pragma once
#include <string>
using namespace std;
class JankenGame
{
private:
	int playerWins;//�v���C���̏�����
	int computerWins;//Com�̏�����
	int draws;//����������
public:
	JankenGame();
	void PlayGame();
	void PlayRound();
	string GetRandomChose();
	bool isPlayerWin(const std::string& playerChoice, const std::string& computerChoice);
	void displayResult();

};
