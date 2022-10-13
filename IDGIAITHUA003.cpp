#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		long long res=0;
		while(n>=5)
		{
			res+=n/5;
			n/=5;
		}
		cout << res << endl;
	}
}