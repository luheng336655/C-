//student.cpp
#include <iostream>
#include "student.h"
using namespace std;
void Student::set_value()
{
	cout << "����ѧ�š����֡��Ա�:" << endl;
	cin >> num;
	cin >> name;
	cin >> sex;
	cout << endl;
}
void Student::display()
{
	cout << "ѧ��:"<<num << endl;
	cout << "����:"<<name << endl;
	cout << "�Ա�:"<<sex << endl;
}