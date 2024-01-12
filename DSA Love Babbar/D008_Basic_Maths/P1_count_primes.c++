#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false; // numbers less than or equal to 1
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
 

    cout << "Count = " << countPrimes(num);;


}