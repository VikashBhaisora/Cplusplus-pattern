/*
Pattern
A       B       C       D
B       C       D       E
C       D       E       F
D       E       F       G
*/
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "enter the number of rows u want: ";
    cin >> row;
    cout << "enter the number of column u want: ";
    cin >> column;
    char ch = 'A';
    for (int i = 1; i <= row; i++)
    {

        char ch2 = ch;
        for (int j = 1; j <= column; j++)
        {
            cout << ch2 << '\t';
            ch2++;
        }
        ch++;
        cout << "\n";
    }
    return 0;
}