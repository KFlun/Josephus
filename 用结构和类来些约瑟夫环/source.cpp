#include"head.h"
extern Monkey* pMonkey;
extern Monkey* pCurrent;
extern Monkey* guard;

//创建猴子环链
void initialise_Monkey(int n, Monkey kingdom[])
{
	pMonkey = &kingdom[0];
	pCurrent = pMonkey;
	for (int i = 1; i <= n; i++)
	{
		pCurrent->next = &kingdom[i%n];
		pCurrent = pCurrent->next;
	}
}

//数猴王
void count(int N)
{
	for (int i = 1; i < N; i++)
	{
		guard = pCurrent;
		pCurrent = guard->next;
	}
	guard->next = pCurrent->next;
	pCurrent = guard->next;
}