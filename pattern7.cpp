/*
Pattern
A       A       A       A
B       B       B       B
C       C       C       C
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
    int i = 1;
    char ch = 'A';
    for (i; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << ch << '\t';
        }
        ch++;
        cout << "\n";
    }
    return 0;
}