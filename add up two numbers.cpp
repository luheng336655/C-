#include <iostream>
using namespace std;
//���õ�����������Ϊ�ͣ��������������
/*int main()
{
	int a, b, sum;
	cout << "input two numbers:\n";
	cin >> a >> b;
	sum = a + b;
	cout << "a+b=" << sum << endl;
	return 0;
}

//ֱ�����������ӵĽ��
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << "a+b=" << a + b;
}
*/
//���ú��������
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