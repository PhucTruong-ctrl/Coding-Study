/*Bạn hãy viết chương trình tạo ra 2 biến kiểu số nguyên a và b.
Sau đó nhập giá trị cho a và b từ bàn phím và hiển thị ra màn hình:
a + b = {P}
Với {P} là tổng của a và b.
Ví dụ nếu bạn nhập
7 9
thì màn hình sẽ hiển thị lên dòng chữ:
a + b = 16*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a + b = %d", a + b);
    return 0;
}