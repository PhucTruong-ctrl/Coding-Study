/*Cho xâu s và ký tự c được nhập từ bàn phím,
bạn hãy viết chương trình in ra vị trí đầu tiên mà ký tự c xuất hiện trong xâu s,
nếu ký tự c không xuất hiện trong s thì in ra -1.
Ví dụ nếu bạn nhập s = "codelearn" và c = 'o' như bên dưới:
codelearn o
thì màn hình sẽ hiển thị ra:
1
Giải thích: ký tự s[1] chính là ký tự 'o'*/

#include <iostream>

using namespace std;

int main()
{
    string s;
    char c;
    cin >> s >> c;
    int index = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            index = i;
            /*
            Gọi lệnh break để dừng vòng lặp do
            đã tìm thấy vị trí đầu tiên mà ký tự c xuất hiện.
            Nếu không có lệnh break thì kết quả của chương trình
            sẽ là vị trí cuối cùng mà ký tự c xuất hiện.
            */
            break;
        }
    }
    cout << index;
    return 0;
}
