/*Cho 2 biến kiểu số nguyên a, b và 1 biến kiểu ký tự c. Cả 3 biến này đều được được nhập từ bàn phím.
Biết biến c là 1 trong 4 ký tự '+', '-', '*', '/'.
Bạn hãy viết chương trình hiển thị giá trị của biểu thức khi áp dụng phép toán c lên a và b.
Ví dụ nếu bạn nhập a = 7, c = '+', b = 9 như bên dưới:
7 + 9
Thì màn hình sẽ hiển thị ra:
16*/

#include <stdio.h>

int main()
{
    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    switch (c)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    }
    return 0;
}