//20108 박선우

#include <iostream>

using namespace std;

int maxReverse(int max, int min)
{
    if (max < min) return 0;

    else if (max % 2 == 1)
    {
        cout << max << endl;
    }

    return maxReverse(max - 1, min);
}

int main()
{
    int a;
    int b;

    cin >> a >> b;

    maxReverse(a, b);
}
