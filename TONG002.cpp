#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long l,r; cin >> l >> r;
        long long count = r-l+1;
        cout << (long long) (r+l)*count/2 << endl;
    }
}