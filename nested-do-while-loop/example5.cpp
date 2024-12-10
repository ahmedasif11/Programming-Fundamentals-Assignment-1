#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            cout << 2 * j - 1 << " "; // Odd number: 1, 3, 5, ...
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= 5);
    return 0;
}
