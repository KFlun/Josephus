#include"chain.h"

void Chain::initialise_Monkey(int n, Monkey kingdom[])
{
	pMonkey = &kingdom[0];
	pCurrent = pMonkey;
	for (int i = 1; i <= n; i++)
	{
		pCurrent->next = &kingdom[i%n];
		pCurrent = pCurrent->next;
	}
}

void Chain::count(int N)
{
	for (int i = 1; i < N; i++)
	{
		guard = pCurrent;
		pCurrent = guard->next;
	}
	guard->next = pCurrent->next;
	pCurrent = guard->next;
	cout << "ºïÍõµÄÐòºÅÎª£º" << pCurrent->number << endl;
}