#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(1);
    while(t--)
    {
        string s;
        getline(cin,s);
        int L=s.length();
        for(int i=L-1;i>=0;i--)
        {
            if(s[L-6]=='?')
            {
                if(s[L-5] == '?') 
                {
                    s[L-6]='2';
                    s[L-5]='3';
                }
                
                else 
                    if(s[L-5] == '1' || s[L-5] == '2' || s[L-5] == '3' || s[L-5] == '0') s[L-6]='2';
                    else s[L-6]='1';
            }
            if(s[L-5] == '?')
            {
                if(s[L-6] == '2') s[L-5]='3';
                else s[L-5]='9';
            }

            if(s[L-3]=='?')
            {
                s[L-3]='5';
            }
            if(s[L-2]=='?')
            {
                s[L-2]='9';
            }
        }
            for(int i=L-7;i<=L-1;i++)
            {
            	cout << s[i];
			}
			cout << endl;
        
    }
}