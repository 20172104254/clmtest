// clmtest.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include"iostream"
using namespace std;
class CChangemeter
{
private:
	int  feet;
	double inch;

public:
	void change(double meter)
	{
		feet = meter*3.2808;
		inch = (meter*3.2808 - feet) * 12;
	}
	void display()
	{
		cout << feet << "  " << inch << endl;
	}
	void add(int feet1, double inch1)
	{
		feet += feet1;
		inch += inch1;
		if (inch >12 || inch == 12)//����double���ͻ�һ��double ��һ�� float�����жϵȲ����ڣ�ֻ�жϼ�ȥ��Ĳ��С�ڻ������㼸��
		{
			feet += 1;
			inch = inch - 12;
		}
	}
};

int main()
{
	CChangemeter orect;
	orect.change(1.88);
	orect.display();
	orect.add(5, 10.1234);
	orect.display();
	orect.add(5, 2);
	orect.display();
	return 0;
}
