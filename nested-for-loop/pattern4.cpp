#include <iostream>
using namespace std;
int main()
{
    int size = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << "*";
        }
        cout << endl;

        if (i < 3)
        {
            size++;
        }
        else
        {
            size--;
        }
    }
    return 0;
}