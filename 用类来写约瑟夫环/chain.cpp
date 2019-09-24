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

void Chain::count(int N, int n)
{
	if (N > 1)
	{
		while (pCurrent != pCurrent->next)
		{
			for (int i = 1; i < N; i++)
			{
				guard = pCurrent;
				pCurrent = guard->next;
			}
			guard->next = pCurrent->next;
			pCurrent = guard->next;
		}
	}
	else
		for (int i = 1; i < n; i++)
			pCurrent = pCurrent->next;
	cout << "ºïÍõµÄÐòºÅÎª£º" << pCurrent->number << endl;
}