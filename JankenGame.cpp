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
	std::cout << "����񂯂���n�߂܂����H(�͂�(y)/������(n)): ";
	std::string input;
	std::cin >> input;
	if (input == "�͂�" || input == "y") {
		for (int i = 0; i < 3; ++i) {
			PlayRound();
		}
		displayResult();
	}
	else {
		std::cout << "�Q�[�����I�����܂��B" << std::endl;
	}
}

void JankenGame::PlayRound()
{
	std::cout << "����񂯂�̎��I��ł��������B(�O�[/�`���L/�p�[�ǂꂩ�����): ";
	std::string playerChoice;
	std::cin >> playerChoice;
	// �R���s���[�^�̎�������_���Ɍ���
	std::string computerChoice = GetRandomChose();
	// �v���C���[�ƃR���s���[�^�̎���r���ď��s�𔻒�
	if (playerChoice == computerChoice) {
			std::cout << "���������ł��I" << std::endl;
			++draws;
	}
	else {
		// ���҂Ƀ|�C���g�����Z
		if (isPlayerWin(playerChoice, computerChoice)) {
			std::cout << "�v���C���[1�̏����ł��I" << std::endl;
			++playerWins;
		}
		else {
			std::cout << "�v���C���[2�̏����ł��I" << std::endl;
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
		return "�O�[";
	case 1:
		return "�`���L";
	case 2:
		return "�p�[";
	}
}
bool JankenGame::isPlayerWin(const std::string& playerChoice, const std::string& computerChoice) {
	// �����ł̔��胍�W�b�N������
	//���Ő����ā{���肵�Ă邩�炢��Ȃ�
	return 0;
}
void JankenGame::displayResult() {
	std::cout << "�y�����̏������� �� ����̏��������z: " << playerWins << " �� " << computerWins << std::endl;
	std::cout << "����������: " << draws << std::endl;
}