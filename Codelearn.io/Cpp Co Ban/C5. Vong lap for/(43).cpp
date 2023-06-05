/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và hiển thị ra các số từ 1 tới n.

Ví dụ nếu nhập n = 10 thì chương trình sẽ hiển thị ra màn hình:

1 2 3 4 5 6 7 8 9 10 */

#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}
