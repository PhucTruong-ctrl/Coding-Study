/*Cho xâu s và ký tự c được nhập từ bàn phím,
bạn hãy viết chương trình in ra vị trí đầu tiên mà ký tự c xuất hiện trong xâu s, nếu ký tự c không xuất hiện trong s thì in ra -1.
Ví dụ nếu bạn nhập s = "codelearn" và c = 'o' như bên dưới:
codelearn o
thì màn hình sẽ hiển thị ra:
1
Giải thích: ký tự s[1] chính là ký tự 'o'
Ví dụ khác nếu bạn nhập:
codewar z
Thì màn hình sẽ hiển thị ra:
-1
Giải thích: ký tự 'z' không xuất hiện trong xâu "codewar".*/

#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int len = strlen(s);
    int index = -1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == c)
        {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}
