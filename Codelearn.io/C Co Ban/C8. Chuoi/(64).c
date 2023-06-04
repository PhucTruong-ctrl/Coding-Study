/*Cho xâu s và số nguyên k được nhập từ bàn phím.
Bạn hãy viết chương trình in ra màn hình ký tự thứ k trong xâu s.
Ví dụ nếu bạn nhập s = "Codelearn", k = 2 như bên dưới:
Codelearn
2
Thì màn hình sẽ hiển thị ra:
o
Giải thích: ký tự thứ 2 trong xâu Codelearn là ký tự o*/

#include <stdio.h>

int main()
{
    char str[100];
    int k;
    scanf("%s", str);
    scanf("%d", &k);
    printf("%c", str[k - 1]);
    return 0;
}