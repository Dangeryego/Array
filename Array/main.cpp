#include <iostream>

using namespace std;

int main()
{
    int arr [10] {0};
    cout << arr [0] << "\n";
    cout << arr [9] << "\n";
    cout << arr [4] << "\n";

    arr [0] = 100;
    arr [9] = 1000;
    cout << "\n" << arr [0] << endl;
    cout << arr [9] << endl;
    cout << "\n";

    return 0;
}
