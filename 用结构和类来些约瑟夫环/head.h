#include<iostream>
using namespace std;

//�������ӽṹ��
struct Monkey
{
	int number;
	Monkey* next;
};

void initialise_Monkey(int n, Monkey kingdom[]);//�������ӻ���
void count(int N);//������
