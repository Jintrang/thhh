#include <iostream>
using namespace std;

int printSurplus(int a, int n, int m)
{
    int t = 1;
    int f = a % m;
    for (int i = 0; i < n; i++)
    {
        t *= f;
        t = t % m;
    }
    return t;
}

int main()
{
    int a, n, m;
    cin >> a >> n >> m;
    cout << printSurplus(a, n, m);
    
    return 0;
}