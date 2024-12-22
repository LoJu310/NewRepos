#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

void printText(int h, int r)
{
    for (int i = 0; i < h; i++)
        cout << '\n';
    for (int i = 0; i < r; i++)
        cout << "  ";
    cout << "Merry Cristmas and a Happy New Year!!!" << endl;
}
void printSnowflake(int h, int r, int size = 9)
{
    for (int i = 0; i < h; i++)
        cout << '\n';
    for (int i = 0; i < size; i++) {
        cout << "\t";
        for (int j = 0; j < r; j++)
            cout << "  ";
        for (int j = 0; j < size; j++)
            if (i == size / 2 || j == size / 2 || 
                i == j || i + j == size - 1)
                cout << " *";
            else
                cout << "  ";
        cout << endl;
    }
    for (int j = 0; j < r; j++)
        cout << "  ";
    cout << "Merry Cristmas and a Happy New Year!!!" << endl;
}

int main()
{
	setlocale(0, "");
	system("color 02");
    int h = 0, r = 0;
    printSnowflake(h, r);
    while (true)
    {
        if (_kbhit())
        {
            system("cls");//очистка консоли

            int a = _getch();//получение введенного символа
            if (a == 'a')
                r--;
            if (a == 'd')
                r++;
            if (a == 'w')
                h--;
            if (a == 's')
                h++;
            if (a == 'r')
                cout << "\033[31m";
            if (a == 'b')
                cout << "\033[34m";
            if (a == 'y')
                cout << "\033[33m";
            if (a == 'g')
                cout << "\033[32m";
            if (a == 'v')
                cout << "\033[35m";
            if (a == 'q')
                break;
            printSnowflake(h, r);
        }
    }
}
