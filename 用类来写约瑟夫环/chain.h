#pragma once
#include"head.h"
struct Monkey
{
	int number;
	Monkey* next;
};
class Chain
{
public:
	void initialise_Monkey(int n, Monkey kingdom[]);//�������ӻ���
	void count(int N, int n);//������
private:
	Monkey* pMonkey;
	Monkey* pCurrent;
	Monkey* guard;
};