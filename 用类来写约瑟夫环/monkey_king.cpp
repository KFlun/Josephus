#include"monkey_king.h"
Chain chain;
void Monkey_king::creat()
{
	cout << "��ֱ������ӵĸ����������ڼ�������ʱ���ú�����̭��" << endl;
	cin >> n >> N;

	//������������
	Monkey* kingdom = new Monkey[n];
	for (int j = 0; j < n; j++)
		kingdom[j].number = j + 1;
	chain.initialise_Monkey(n, kingdom);
}

void Monkey_king::king()
{
	chain.count(N);
}