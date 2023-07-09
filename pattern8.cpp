/*
Pattern
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D
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
    for (int i = 1; i <= row; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= column; j++)
        {
            cout << ch << '\t';
            ch++;
        }
        cout << "\n";
    }
    return 0;
}