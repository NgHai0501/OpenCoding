#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        if(k%2==0)
        {
        	long long res = 9*pow(10,(k/2)-1);
        	cout << res << endl;
		}
		else
		{
			long long res = 9 * pow(10,k/2);
			cout << res << endl;
		}
    }
}