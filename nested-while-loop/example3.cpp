#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        int j = 1;
        while (j <= i) {
            cout << char(64 + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
