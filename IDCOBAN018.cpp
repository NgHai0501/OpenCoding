#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		long long res=0;
		while(n>=2)
		{
			res+=n/2;
			n/=2;
		}
		cout << res << endl;
	}
}
