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
    cout << "enter the number of rows u want: ";
    cin >> row;
    cout << "enter the number of column u want: ";
    cin >> column;
    int count = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (j <= i)
            {
                cout << count << '\t';
                count++;
            }
        }
        cout << "\n";
    }
    return 0;
}