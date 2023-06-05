/*Cho xâu s được nhập từ bàn phím. 
Bạn hãy viết chương trình chuyển các ký tự '3' trong xâu s sang ký tự 'e' và hiển thị xâu s ra màn hình.
Ví dụ nếu bạn nhập s = "cod3l3arn" như bên dưới:
cod3l3arn
Thì màn hình sẽ hiển thị ra:
codelearn*/

#include<iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '3') {
            s[i] = 'e';
        }
    }
    cout << s;
    return 0;
}
