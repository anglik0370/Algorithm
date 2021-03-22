#include <iostream>

using namespace std;

int CtoI(char a)
{
    return (a - '0');
}

char ItoC(int a)
{
    return (a + '0');
}

int main()
{
    char inform[14];

    int localNum[10] = { 8, 12, 15, 25, 34, 39, 47, 54, 66, 90 };
    string local[10] = { "서울", "부산", "인천", "경기", "강원", "충북", "충남", "전북", "전남", "경상" };

    int year[4] = { 1900, 2000 , 1900, 2000};
    string gender[4] = {"남자", "여자", "남자" , "여자"};

    cout << "주민등록번호를 - 없이 입력하세요 : ";
    cin >> inform;
    cout << endl;

    for (int i = 0; i <= 4; i++)
    {
        if (inform[6] == ItoC(i))
        {
            cout << "성별 : " << gender[i - 1] << endl;
            cout << "나이 : " << 2021 - (year[i] + (CtoI(inform[0]) * 10) + CtoI(inform[1])) + 1 << endl;
            cout << "출생연도 : " << (year[i] + (CtoI(inform[0]) * 10) + CtoI(inform[1])) << endl;
        }
    }

    for (int i = 0; i <= 10; i++)
    {
        if ((CtoI(inform[7]) * 10) + CtoI(inform[8]) <= localNum[i])
        {
            cout << "출생지역 : " << local[i] << endl;
            break;
        }
    }

    if (inform[12] - 48 == (11 - ((CtoI(inform[0]) * 2 + CtoI(inform[1]) * 3 + CtoI(inform[2]) * 4 + CtoI(inform[3]) * 5 + CtoI(inform[4]) * 6 + CtoI(inform[5]) * 7 + CtoI(inform[6]) * 8 + CtoI(inform[7]) * 9 + CtoI(inform[8]) * 2 + CtoI(inform[9]) * 3 + CtoI(inform[10]) * 4 + CtoI(inform[11]) * 5) % 11)) % 10)
    {
        cout << "주민등록번호 유효 여부 : 유효";
    }
    else
    {
        cout << "주민등록번호 유효 여부 : 무효";
    }
}