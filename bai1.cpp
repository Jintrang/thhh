#include <iostream>
#include <cmath>
using namespace std;
string printAnswer (int x[], int y[], int n)
{
    for (int i = 1; i < n ; i++)
        for (int j = i+1; j<= n; j++)
        {
            if (x[i]==x[j] || y[i]==y[j])
                return "yes";
            if (abs(x[i] - x[j]) == abs(y[j] - y[i]))
                return "yes";
        }
        return "no";
}
int main()
{
    int n;
    cin >> n;
    int x[10000];
    int y[10000];
    for (int i=1; i<= n; i++)
    {
        cin >> x[i] >> y[i];
    }
     cout << printAnswer(x,y,n);
    return 0;
}