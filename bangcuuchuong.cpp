#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    while (1)
    {
        char select;
        cout << "MENU" << endl;
        cout << "t) Tao ra bang cuu chuong" << endl;
        cout << "d) Thoat chuong trinh" << endl;
        cout << "Moi ban lua chon: ";
        cin >> select;
        if (select == 'd')
        {
            cout << "Ban da chon thoat khoi chuong trinh. Cam on ban da su dung!";
            break;
        }
        else if ((select != 'd') && (select != 't'))
        {
            cout << "Lua chon khong hop le" << endl;
            continue;
        }
        else
        {
            cout << "Moi ban nhap 1 so:" << endl;
            cout << "BANG CUU CHUONG: ";
            int n;
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= 10; j++)
                {
                    cout << setw(3) << i * j;
                }
                cout << endl;
            }
        }
    }
    return 0;
}
