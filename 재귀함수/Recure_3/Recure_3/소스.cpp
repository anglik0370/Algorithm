//20108 ¹Ú¼±¿ì
#include<stdio.h>
#include<iostream>

using namespace std;

int NineNineDan(int n)
{
    if (n == 10) return 1;

	for (int i = 1; i <= 9; i++)
	{
		cout << n << " X " << i << " = " << n * i << endl;
	}

	return NineNineDan(n + 1);
}
int main() 
{
	NineNineDan(2);
}