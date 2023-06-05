/*Bạn hãy viết chương trình nhập vào tên của mình từ bàn phím và
thực hiện hiển thị ra màn hình dòng chữ:
Hello {P}
Với {P} là tên bạn vừa nhập từ bàn phím.
Ví dụ nếu bạn nhập tên là Trung thì màn hình sẽ hiển thị lên dòng chữ:
Hello Trung*/

#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;
    cout << "Hello " << name;
    return 0;
}
