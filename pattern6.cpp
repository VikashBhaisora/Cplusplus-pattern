/*
Pattern
1
2       1
3       2       1
4       3       2       1
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
    for (i; i <= row; i++)
    {
        int count = i;
        for (int j = 1; j <= column; j++)
        {
            if (j <= i)
            {
                cout << count << '\t';
                count--;
            }
        }
        cout << "\n";
    }
}