#include"head.h"

int n, N;
Monkey* pMonkey;//�����ĳ�ʼ��
Monkey* pCurrent;//�����ĵ�ǰ��
Monkey* guard;//������ɾ�������������㣩

int main()
{
	cout << "��ֱ������ӵĸ����������ڼ�������ʱ���ú�����̭��" << endl;
	cin >> n >> N;

	//������������
	Monkey* kingdom = new Monkey[n];
	for (int j = 0; j < n; j++)
		kingdom[j].number = j + 1;

	initialise_Monkey(n, kingdom);//�������ӻ���

	//�ж��Ƿ�Ϊ��һ������̭һ�����������
	if (N > 1)
		while (pCurrent != pCurrent->next)
			count(N);//������
	else
		for (int i = 1; i < n; i++)
			pCurrent = pCurrent->next;

	cout << "���������Ϊ��" << pCurrent->number << endl;
	system("pause");
	return 0;
}