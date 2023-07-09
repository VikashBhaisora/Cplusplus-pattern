/*
Pattern
A
B       B
C       C       C
D       D       D       D
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
        for (int j = 1; j <= column; j++)
        {
            if (j <= i)
            {
                cout << ch << '\t';
            }
        }
        ch++;
        cout << "\n";
    }
    return 0;
}