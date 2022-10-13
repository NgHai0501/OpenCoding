#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
    	int dem=0;
        long long l,r; cin >> l >> r;
       	if(l<r)
       	{
       		for(long long i=sqrt(l);i<=sqrt(r);i++)
       		{
       			if(i*i>=l && i*i<=r) dem++;
			}
		}
		else 
		{
			for(long long i=sqrt(r);i<=sqrt(l);i++)
       		{
       			if(i*i>=r && i*i<=l) dem++;
			}
		}
		cout << dem << endl;
    }
}