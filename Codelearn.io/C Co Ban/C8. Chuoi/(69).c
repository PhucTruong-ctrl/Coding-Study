/*Cho xâu s được nhập từ bàn phím.
Bạn hãy viết chương trình chuyển các ký tự in thường trong xâu s thành in hoa và hiển thị xâu s ra màn hình:
Ví dụ nếu bạn nhập s = "Codelearn" như bên dưới:
Codelearn
Thì màn hình sẽ hiển thị ra:
CODELEARN*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32; // giá trị của các ký tự in thường luôn bằng giá trị của các ký tự in hoa cộng với 32
        }
    }
    printf("%s", s);
    return 0;
}