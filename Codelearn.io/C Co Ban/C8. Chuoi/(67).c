/*Cho xâu s được nhập từ bàn phím.
Bạn hãy viết chương trình chuyển các ký tự '3' trong xâu s sang ký tự 'e'.
Ví dụ nếu bạn nhập s = "cod3l3arn" như bên dưới:
cod3l3arn
Thì màn hình sẽ hiển thị ra:
codelearn*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '3')
        {
            s[i] = 'e';
        }
    }
    printf("%s", s);
    return 0;
}