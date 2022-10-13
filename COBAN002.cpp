#include<bits/stdc++.h>
using namespace std;

long long Scp(long long n)
{
	long long i=0;
	while(i*i<=n)
	{
		if(i*i==n) return 1;
		i++;
	}
	return 0;
}

long long int check(long long int n)
{
	int k,dem=0;
	while(n>0)
	{
		k=n%10;
		n/=10;
		if(k!=0 && k!=1 && k!=4 && k!=9) dem++;
	}
	if(dem==0) return 1;
	return 0;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int k; cin >> k;
		if(k<1 || k>18) 
		{
			cout << -1 << endl;
			continue;
		}
		if(k==1) 
		{
			cout << 0 << endl;
			continue;
		}
		long long m=pow(10,k)-1;
		long long n=pow(10,k-1);
		long long i=sqrt(n);
		long long j=sqrt(m);
		while(i<=j)
		{
			long long res=i*i;
			if(res>=n && check(res)==1)
			{
				if(Scp(res)==1)
				{
					cout << res << endl;
					break;
				}
			}
			i++;
		}
		
	}
}