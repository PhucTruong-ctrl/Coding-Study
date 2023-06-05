/*Cho xâu s được nhập từ bàn phím.
Bạn hãy viết chương trình chuyển các ký tự in thường trong xâu s thành in hoa và hiển thị xâu s ra màn hình:
Ví dụ nếu bạn nhập s = "Codelearn" như bên dưới:
Codelearn
Thì màn hình sẽ hiển thị ra:
CODELEARN*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    cout << s;
    return 0;
}
