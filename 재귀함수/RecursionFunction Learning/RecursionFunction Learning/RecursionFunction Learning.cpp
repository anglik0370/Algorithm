#include <iostream>

using namespace std;

int Factorial(int n);

int main()
{
    int n;
    cin >> n;

    cout << endl << "1부터 " << n << "까지의 펙토리얼은" << Factorial(n) << endl;
}

int Factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
