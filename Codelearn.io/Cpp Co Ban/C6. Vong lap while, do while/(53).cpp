/*Bạn hãy viết chương trình nhập từ bàn phím hai số nguyên dương a và b.
Sau đó hiển thị ra màn hình kết quả của ab.

Ví dụ nếu nhập a = 2, b = 3 thì chương trình sẽ hiển thị ra màn hình:

8
Giải thích: 2 * 2 * 2 = 8.*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    // answer là biến lưu trữ kết quả của a mũ b
    // Lưu ý: bạn phải khởi tạo giá trị cho answer = 1
    int answer = 1;
    while (b > 0)
    {
        // answer *= a tương đương với answer = answer * a
        answer *= a;
        b--;
    }
    cout << answer;
    return 0;
}
