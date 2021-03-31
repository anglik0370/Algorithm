//20108 박선우
#include <iostream>

using namespace std;

int rad = 1;
int Rev(int n) 
{
	if (n == 0) return 0;
	int result = Rev(n / 10) + (n % 10) * rad;
	rad *= 10;
	return result;
}

int main()
{
	int num;
	cin >> num;

	cout << Rev(num) << endl;
}
