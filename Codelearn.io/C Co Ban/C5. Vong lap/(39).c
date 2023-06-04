/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên a và b.
Sau đó hiển thị ra màn hình tổng các số từ a tới b:
Ví dụ nếu nhập a = 5, b = 9 thì chương trình sẽ hiển thị ra màn hình:
35
Giải thích: 5 + 6 + 7 + 8 + 9 = 35*/
#include <stdio.h>

int main()
{
    int a, b;
    // sum là biến lưu trữ tổng các số từ a tới b
    // Lưu ý: bạn gần phải gán giá trị cho sum = 0
    int sum = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}