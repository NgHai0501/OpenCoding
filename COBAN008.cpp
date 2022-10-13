#include<bits/stdc++.h>
using namespace std;

string ChuanHoa(string s, string s1)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ') s1.push_back(s[i]);
    }
    return s1;
}

string Add(string str1, string str2)
{
    if(str1.length() > str2.length())
        swap(str1,str2);
    string str="";
    int n1=str1.length();
    int n2=str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry=0;
    for(int i=0;i<n1;i++)
    {
        int sum = (str1[i]-'0') + (str2[i]-'0') + carry;
        str.push_back(sum%10 +'0');
        carry=sum/10;
    }
    for(int i = n1;i<n2;i++)
    {
        int sum=(str2[i]-'0') + carry;
        str.push_back(sum%10 +'0');
        carry=sum/10;
    }
    if(carry)
    {
        str.push_back(carry + '0');
    }
    reverse(str.begin(),str.end());
    return str;

}

int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		int k;
	    string s;
	    getline(cin,s);
	    string s1="",s2="",s3="",s4="";
	    for(int i=0;i<s.length();i++)
	    {
	    	if(s[i]==' ')
	            {
	                k=i;
	                for(int i=0;i<k;i++)
	                {
	                    s1.push_back(s[i]);
	                }
	                for(int i=k+1;i<s.length();i++)
	                {
	                    s2.push_back(s[i]);
	                }
	                cout << Add(ChuanHoa(s1,s3),ChuanHoa(s2,s4)) << endl;
	            }    
		}
	}
}