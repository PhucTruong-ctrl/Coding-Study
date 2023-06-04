/*Cho ký tự c và xâu s được nhập từ bàn phím.
Bạn hãy viết chương trình in ra số lần xuất hiện của ký tự c trong xâu s.
Ví dụ nếu bạn nhập c = 'e', s = "Codelearn" như bên dưới:
e
Codelearn
Thì màn hình sẽ hiển thị ra:
2
Giải thích: ký tự thứ 'e' xuất hiện 2 lần trong xâu "Codelearn*/
#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}