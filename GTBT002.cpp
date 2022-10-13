#include<bits/stdc++.h>
using namespace std;

long long GT(int k)
{
    if(k==0) return 1;
    else return GT(k-1)*k;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cout << fixed << setprecision(3);
        int n; cin >> n;
        double x; cin >> x;
        float sum=0;
        for(int k=1;k<=n;k++)
        {
            sum+=pow(x,k)/GT(k);
        }
        cout << sum << endl;
    }
}