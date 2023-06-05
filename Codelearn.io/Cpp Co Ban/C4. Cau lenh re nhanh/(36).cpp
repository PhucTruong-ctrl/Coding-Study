/*Viết chương trình nhập vào tên của 2 người, bạn hãy kiểm tra xem tên của 2 người này có giống nhau hay không. Nếu có thì hiển thị ra:

two people have the same name
Ngược lại nếu tên của 2 người này không giống nhau thì hiển thị ra:

two people don't have the same name*/

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "two people have the same name ";
    }
    else
    {
        cout << " two people don't have the same name";
    }
    return 0;
}
