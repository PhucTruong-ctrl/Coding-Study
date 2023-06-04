/*Cho 2 biến kiểu số nguyên a và b được nhập từ bàn phím,
bạn hãy viết chương trình hoán đổi giá trị của biến a và biến b. Sau đó hiển thị ra màn hình:
after swapping, a = {P1}, b = {P2}
Với {P1} và {P2} lần lượt là giá trị của a và b sau khi đã hoán đổi.
Ví dụ nếu bạn nhập a = 3, b = 4 như bên dưới:
3 4
Thì chương trình sẽ hiển thị ra:
after swapping, a = 4, b = 3*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int c = a;
    a = b;
    b = c;
    printf("after swapping, a = %d, b = %d", a, b);
    return 0;
}