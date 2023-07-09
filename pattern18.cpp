/*
Pattern
                        1
                2       3
        4       5       6
7       8       9       10
*/
#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "enter the number of row u want: ";
    cin >> row;
    cout << "enter the number of column u want: ";
    cin >> column;
    int i, j, count = 1;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= column; j++)
        {
            if (j < row - i + 1)
            {
                cout << '\t';
            }
            else
            {
                cout << count << '\t';
                count++;
            }
        }
        cout << endl;
    }
    return 0;
}