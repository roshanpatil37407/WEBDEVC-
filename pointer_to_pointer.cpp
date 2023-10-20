#include <iostream>
using namespace std;
int main() {
    int x = 42;
    int* ptr1 = &x; 
    int** ptr2 = &ptr1; 
    cout << "Value of x using pointer to pointer: " << **ptr2 << std::endl;
    **ptr2 = 99;

    cout << "Modified value of x: " << **ptr2 << std::endl;

    return 0;
}

