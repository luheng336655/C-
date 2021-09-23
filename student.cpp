//student.cpp
#include <iostream>
#include "student.h"
using namespace std;
void Student::set_value()
{
	cout << "输入学号、名字、性别:" << endl;
	cin >> num;
	cin >> name;
	cin >> sex;
	cout << endl;
}
void Student::display()
{
	cout << "学号:"<<num << endl;
	cout << "名字:"<<name << endl;
	cout << "性别:"<<sex << endl;
}