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
	void initialise_Monkey(int n, Monkey kingdom[]);//创建猴子环链
	void count(int N, int n);//数猴王
private:
	Monkey* pMonkey;
	Monkey* pCurrent;
	Monkey* guard;
};