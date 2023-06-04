/*Viết chương trình nhập từ bàn phím số nguyên a.
Bạn hãy kiểm tra xem a có nằm trong đoạn [10, 100] không, nếu có thì hiển thị ra màn hình:
{P} is in range (10, 100)
Ngược lại hiển thị ra màn hình:
{P} is not in range (10, 100)
Với {P} là giá trị của biến a.
Lưu ý: nếu bạn đã quên khái niệm về đoạn thì [10, 100]
chính là đoạn bao gồm các số lớn hơn hoặc bằng 10 và nhỏ hơn hoặc bằng 100.
Ví dụ nếu bạn nhập:
55
Thì màn hình sẽ hiển thị ra:
55 is in range (10, 100)*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a >= 10 && a <= 100)
    {
        printf("%d is in range (10, 100)", a);
    }
    else
    {
        printf("%d is not in range (10, 100)", a);
    }
    return 0;
}