#include"head.h"

int n, N;
Monkey* pMonkey;//环链的初始点
Monkey* pCurrent;//环链的当前点
Monkey* guard;//环链的删除守卫（保护点）

int main()
{
	cout << "请分别出入猴子的个数、数到第几个猴子时，该猴子淘汰：" << endl;
	cin >> n >> N;

	//创建猴子数组
	Monkey* kingdom = new Monkey[n];
	for (int j = 0; j < n; j++)
		kingdom[j].number = j + 1;

	initialise_Monkey(n, kingdom);//创建猴子环链

	//判断是否为数一个就淘汰一个的特殊情况
	if (N > 1)
		while (pCurrent != pCurrent->next)
			count(N);//数猴王
	else
		for (int i = 1; i < n; i++)
			pCurrent = pCurrent->next;

	cout << "猴王的序号为：" << pCurrent->number << endl;
	system("pause");
	return 0;
}