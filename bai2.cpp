#include <iostream>
using namespace std;

void printPrime ( int n )
{
    bool check [100];
    for (int i = 0; i < 100; i++)
        check[i] = true;
    for (int i = 2; i <= n/2; i++)
        for (int j=2; j <= n/2; j++)
            if (i * j <= n) check[i * j] = false;
    for (int i = 2; i <= n; i++)
        if (check[i] == true)
            cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    printPrime(n);
    return 0;
}