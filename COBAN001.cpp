#include<bits/stdc++.h>
using namespace std;

int check(long long n)
{
	int i=0;
	while(n>0)
	{
		n/=10;
		i++;
	}
	return i;
}

void KiemTra(long long n)
{
	long long sum=0;
	long long h=n;
	int k=check(n);
	while(n>0)
	{
		int x=n%10;
		sum+=pow(x,k);
		n/=10;
		x=0;
	}
	if(sum==h) cout << 1 << endl;
	else cout << 0 << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        KiemTra(n);
    }
}