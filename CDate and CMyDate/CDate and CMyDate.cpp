// CDate and CMyDate.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CDate
{
protected:
	int year;
	int month;
	int day;
public:

	CDate();
	CDate(int ty, int tm, int td);
	void display();
	~CDate();
};

CDate::CDate()
{
	year = 2017;
	month = 12;
	day = 1;
	cout << "����Ĭ�Ϲ��캯��" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::CDate(int ty, int tm, int td)
{
	year = ty;
	month = tm;
	day = td;
	cout << "���๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
}
void CDate::display()
{
	cout << "����dispaly" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::~CDate(void)
{
	cout << "������������" << year << "��" << month << "��" << day << "��" << endl;
}
class CMyDate :public CDate
{
public:
	CMyDate(int ty, int tm, int td)
	{
		year = ty;
		month = tm;
		day = td;
		cout << "�����๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
	}
	~CMyDate()
	{
		cout << "��������������" << year << "��" << month << "��" << day << "��" << endl;
	}
};


int main()
{
	//CMyDate orect1;
	//orect1.display();
	CMyDate orect(2018,6,4);
	orect.display();
	CDate orect2(2035, 1, 1);
	orect2.display();
    return 0;
}

