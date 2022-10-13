#include<bits/stdc++.h>
using namespace std;

int prime(long long n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

void KiemTra(long long n)
{
    if(prime(n)==1) cout << "NO" << endl;
    else 
    {
    	long long res=1;
        vector<long long> a;
        for(long long i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) a.push_back(i);
        }
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]*a[i]!=n)
            {
                a.push_back(n/a[i]);
            }
        }
		
        for(int i=0;i<a.size();i++)
        {
            if(prime(a[i])==1)
            {
    			res *= a[i];
                if(res>=n) 
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if(res<n) cout << "YES" << endl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        KiemTra(n);
    }
}