#include<iostream>
using namespace std;

//创建猴子结构体
struct Monkey
{
	int number;
	Monkey* next;
};

void initialise_Monkey(int n, Monkey kingdom[]);//创建猴子环链
void count(int N);//数猴王
