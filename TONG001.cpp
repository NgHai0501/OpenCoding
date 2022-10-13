#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	if(t<1) return 0;
	while(t--)
	{
		long long l; cin >> l;
		long long r; cin >> r;
		if(l%2==0) l=l+1;
		if(r%2==0) r=r-1;
		long long n =((r-l)/2)+1;
		cout << ((l+r)*n)/2 << endl;
	}
}