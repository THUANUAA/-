#include<iostream>
#include<ctime>
#include<string>
#include"speechManager.h"
using namespace std;

int main()
{
	SpeechManager sm;
	int choice=0;

	srand((unsigned int)time(NULL));

	while (true)
	{
		sm.show_Menu();
		cout << "���������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴���������¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls");

			break;
		}
	}

	system("pause");
	return 0;
}