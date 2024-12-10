#include <iostream>
using namespace std;
int main()
{
    int left = 5, right = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (!(j <= left || j >= right))
            {
                cout << " ";
                continue;
            }
            cout << "*";
        }
        cout << endl;

        left--;
        right++;
    }
    return 0;
}