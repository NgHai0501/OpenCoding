#include<bits/stdc++.h>
using namespace std;

long long GT(int n)
{
	if(n==1) return 1;
	else return GT(n-1)*n;
}

float Sum(int n)
{
	if(n==1) return 1;
	else return pow(GT(n)+Sum(n-1), (double) 1/(n+1));
}

int main()
{
	cout << fixed << setprecision(3);
    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	cout << (float) Sum(n) << endl;
    }
}