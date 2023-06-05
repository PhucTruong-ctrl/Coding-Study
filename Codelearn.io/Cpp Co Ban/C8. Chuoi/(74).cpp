/*Cho xâu s được nhập từ bàn phím.
Bạn hãy viết chương trình hiển thị ra màn hình số các ký tự in hoa trong xâu s.
Ví dụ nếu bạn nhập s = "CodeWar" như bên dưới:
CodeWar
Thì màn hình sẽ hiển thị ra:
2
Giải thích: trong xâu s có 2 ký tự in hoa là 'C' và 'W'*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
