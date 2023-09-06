#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<functional>
#include<numeric>
#include<fstream>
#include"speaker.h"

using namespace std;

class SpeechManager
{
public:
	SpeechManager();

	void show_Menu();

	void exitSystem();

	~SpeechManager();

	//初始化容器和属性
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//流程控制函数
	void startSpeech();

	//抽签函数
	void speechDraw();

	//比赛
	void speechContext();

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示往届记录
	void showRecord();

	//清空文件
	void clearRecord();

	bool fileisEmpty;

	//存放往届记录的容器
	map<int, vector<string>>m_Record;

	//成员属性
	//保存第一轮比赛选手的容器
	vector<int>v1;

	//第一轮晋级选手编号容器
	vector<int>v2;

	//胜出前三名选手编号容器
	vector<int>vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker>m_Speaker;

	//存放比赛轮数
	int m_Index;

};