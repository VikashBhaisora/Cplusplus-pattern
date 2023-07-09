/*
     pattern 1:
     4            3            2            1
     4            3            2            1
     4            3            2            1
     4            3            2            1
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
        for (int j = 1; j <= column; j++)
        {
            cout << row - j + 1 << '\t';
        }
        cout << "\n";
    }
    return 0;
}