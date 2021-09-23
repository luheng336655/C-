//输入输出时间（类）
#include <iostream>
using namespace std;
class Time      //定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:
	void setdata()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void display()
	{
		cout << "time is ";
		cout << hour << " : " << minute << " : " << sec << endl;
	};
};
Time t1;
int main()
{
	t1.setdata();
	t1.display();
	return 0;
}