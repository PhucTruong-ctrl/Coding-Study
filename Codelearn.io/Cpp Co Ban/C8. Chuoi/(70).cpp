/*Cho xâu s và ký tự c được nhập từ bàn phím.
Bạn hãy viết chương trình in ra số lần xuất hiện của ký tự c trong xâu s.
Ví dụ nếu bạn nhập s = "Codelearn", c = 'e' như bên dưới:
Codelearn
e
Thì màn hình sẽ hiển thị ra:
2
Giải thích: ký tự thứ 'e' xuất hiện 2 lần trong xâu "Codelearn"*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    char c;
    cin >> s >> c;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
