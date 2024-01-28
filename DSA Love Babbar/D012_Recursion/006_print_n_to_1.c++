#include <iostream>
using namespace std;

void print_n_to_1(int n)
{

    // Base case
    if (n == 0)
        return;

    // Recursive case
    cout << n << " ";
    print_n_to_1(n - 1);
}

int main()
{
    print_n_to_1(5);
    return 0;
}