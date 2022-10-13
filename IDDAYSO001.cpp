#include<bits/stdc++.h>
using namespace std;

int Check(long long a[], int n)
{
    int k=1;
    long long d = a[1]-a[0];
	for(int i=2;i<n;i++)
	{
		if(a[i]-a[i-1]!=d) 
        {
            k=0;
        }    
        if(k==0)
        {
            break;
        }
	}
	if(k==1) return 1;
    return 0;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		if(Check(a,n)==1)	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}