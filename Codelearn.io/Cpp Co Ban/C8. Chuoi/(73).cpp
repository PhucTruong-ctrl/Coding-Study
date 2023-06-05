/*Cho xâu s được nhập từ bàn phím. B
ạn hãy viết chương trình chuyển các ký tự in hoa trong xâu s thành in thường và hiển thị xâu s ra màn hình:
Ví dụ nếu bạn nhập s = "CODELEARN" như bên dưới:
CODELEARN
Thì màn hình sẽ hiển thị ra:
codelearn*/

/*Cho xâu s được nhập từ bàn phím. B
ạn hãy viết chương trình chuyển các ký tự in hoa trong xâu s thành in thường và hiển thị xâu s ra màn hình:
Ví dụ nếu bạn nhập s = "CODELEARN" như bên dưới:
CODELEARN
Thì màn hình sẽ hiển thị ra:
codelearn*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    cout << s;
    return 0;
}
