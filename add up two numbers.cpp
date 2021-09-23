#include <iostream>
using namespace std;
//利用第三个变量作为和，输出第三个变量
/*int main()
{
	int a, b, sum;
	cout << "input two numbers:\n";
	cin >> a >> b;
	sum = a + b;
	cout << "a+b=" << sum << endl;
	return 0;
}

//直接输出两数相加的结果
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << "a+b=" << a + b;
}
*/
//调用函数来相加
int main()
{
	int a, b, c;
	int add(int x, int y);
	cout <<"input two numbers:\n";
	cin >> a >> b;
	c = add(a, b);
	cout << "a+b=" << c << endl;
	return 0;
}
int add(int x, int y)
{
	int z;
	z = x + y;
	return(z);
}