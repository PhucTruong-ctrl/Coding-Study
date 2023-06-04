/*Cho xâu s được nhập từ bàn phím.
Bạn hãy viết chương trình chuyển các
ký tự in hoa trong xâu s thành in thường và hiển thị xâu s ra màn hình:
Ví dụ nếu bạn nhập s = "CODELEARN" như bên dưới:
CODELEARN
Thì màn hình sẽ hiển thị ra:
codelearn*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    printf("%s", str);
    return 0;
}