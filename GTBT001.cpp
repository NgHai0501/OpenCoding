#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		double x; cin >> x;
		float res=0;
			
		for(int k=1;k<=n;k++)
		{	
			res+=pow(x,k)/((k*(k+1))/2);
		}
		cout << fixed << showpoint;
		cout << setprecision(3) << res << endl;
	}
	return 0;
}