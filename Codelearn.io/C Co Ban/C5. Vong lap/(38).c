/*Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n (n >= -5)
và thực hiện hiển thị các số từ n về -5.
Ví dụ nếu nhập n = 5 thì chương trình sẽ hiển thị ra màn hình:
5 4 3 2 1 0 -1 -2 -3 -4 -5
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= -5; i--)
    {
        printf("%d ", i);
    }
    return 0;
}