#include <iostream>
using namespace std;
int main()
{
    int size = 3, spaces = 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (j <= spaces)
            {
                cout << " ";
                continue;
            }
            cout << "*";
        }
        cout << endl;

        if (i < 3)
        {
            spaces--;
            size++;
        }
        else{
            spaces++;
            size--;
        }
        
    }
    return 0;
}