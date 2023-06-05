/*Bạn hãy viết chương trình
nhập vào tên và địa chỉ của một người sau đó hiển thị ra màn hình:
Name: {P1}
Address: {P2}
Với {P1} và {P2} lần lượt là tên và địa chỉ của người đó.*/

#include <iostream>

using namespace std;

int main()
{
    string name, address;
    cin >> name >> address;
    cout << "Name: " << name << endl;
    cout << "Address: " << address;
    return 0;
}
