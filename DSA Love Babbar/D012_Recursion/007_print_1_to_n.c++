#include <iostream>
using namespace std;

void print_1_to_n(int n)
{
    // Base case
    if (n == 0)
        return;

    // Recursive case
    print_1_to_n(n - 1);
    cout << n << " ";
}

int main()
{

    print_1_to_n(5);
    return 0;
}