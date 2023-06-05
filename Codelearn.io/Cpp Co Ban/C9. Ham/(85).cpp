/*Cho mảng các xâu ký tự n phần tử arr được nhập từ bàn phím,
bạn hãy viết hàm hiển thị ra những xâu có độ dài lớn hơn hoặc bằng 3 trong mảng arr.
Ví dụ nếu bạn nhập n = 4, arr = ["abcd", "ab", "abc", "a"] như bên dưới
4
abcd ab abc a
thì màn hình sẽ hiển thị ra:
abcd abc
Giải thích: Trong arr có 2 xâu có độ dài lớn hơn hoặc bằng 3 là "abcd" và "abc"*/

#include <iostream>

using namespace std;

void show(string arr[1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i].size() >= 3)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    string arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    show(arr, n);
    return 0;
}
