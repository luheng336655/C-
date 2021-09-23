#include <iostream>
using namespace std;
class Cuboid
{
private:
	int length;
	int width;
	int height;
public:
	int set();
	int t;
};
int Cuboid::set()
{
	cin >> length;
	cin >> width;
	cin >> height;
	t = length * width * height;
	return (t);
}
int main()
{
	int volume;
	Cuboid cu;
	volume = cu.set();
	cout << volume << endl;
	return 0;
}