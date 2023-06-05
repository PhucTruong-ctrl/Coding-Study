/*Bạn hãy viết chương trình nhập vào từ bàn phím tên, tuổi của một người.
Sau đó hiển thị ra màn hình:
In 15 years, age of {P1} will be {P2}
Với {P1} là tên của người đó, {P2} là tuổi của người đó sau 15 năm*/

#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    cin >> name >> age;
    cout << "In 15 years, age of " << name << " will be " << age + 15;
}
