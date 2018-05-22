// clmtest.cpp : 定义控制台应用程序的入口点。
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
		if (inch >12 || inch == 12)//两个double类型或一个double 和一个 float不能判断等不等于，只判断减去后的差度小于或大于零点几几
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
