#include <iostream>
using namespace std;

bool check (int a[],int n, int x)
{
    int left = 0, right = n-1, mid;
    do
    {
        mid = (left + right)/ 2;
        if (x == a[mid]) 
            return true;
        else 
            if (x < a[mid]) right = mid - 1;
            else left = mid +1;
    }
    while ( left <= right);
    return false;
}

void printAnswer (int a[], int n, int x)
{
    if (check (a, n, x) == false) cout << "NO";
    else cout << "YES";
}

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    printAnswer (a, n, x);
    return 0;
}