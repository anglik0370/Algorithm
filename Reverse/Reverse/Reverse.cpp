#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char input[3][50] = { ' ', };

    for (int i = 0; i < 3; i++)
    {
        cout << "문자열을 입력하세요 : ";
        cin.getline(input[i], 50);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "변환된" <<i + 1 << "번째 문자열 : ";
        for (int j = strlen(input[i]); j >= 0; j--)
        {
            cout << input[i][j];
        }
        cout << endl;
    }

    return 0;
}
