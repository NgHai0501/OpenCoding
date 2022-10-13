#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        string s="";
        while(n>0)
        {
            int k = n%2;
            s.push_back(k+'0');
            n/=2;
        }
        reverse(s.begin(),s.end());
		cout << s << endl;
    }
}