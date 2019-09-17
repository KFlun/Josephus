#include"monkey_king.h"
Chain chain;
void Monkey_king::creat()
{
	cout << "请分别出入猴子的个数、数到第几个猴子时，该猴子淘汰：" << endl;
	cin >> n >> N;

	//创建猴子数组
	Monkey* kingdom = new Monkey[n];
	for (int j = 0; j < n; j++)
		kingdom[j].number = j + 1;
	chain.initialise_Monkey(n, kingdom);
}

void Monkey_king::king()
{
	chain.count(N);
}