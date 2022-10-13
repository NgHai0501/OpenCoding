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

string addBigNumbers(string number1, string number2) {
   if (number1.length() > number2.length())
    swap(number1, number2);
   string sum = "";
   int len1 = number1.length();
   int len2 = number2.length();
   int digitDiff = len2 - len1;
   int carry = 0;
   int intSum;
   for (int i=len1-1; i>=0; i--) {
      intSum = ((number1[i]-'0') + (number2[i+digitDiff]- '0') + carry);
      sum.push_back(intSum%10 + '0');
      carry = intSum/10;
   }
   for (int i=digitDiff-1; i>=0; i--) {
      intSum = ((number2[i]-'0')+carry);
      sum.push_back(intSum%10 + '0');
      carry = intSum/10;
   }
   if (carry)
    sum.push_back(carry+'0');
   reverse(sum.begin(), sum.end());
   return sum;
}

string multiplyTwoNumbers(string num1, string num2) {
   if (num1 == "0" || num2 == "0") {
      return "0";
   }
   string product(num1.size() + num2.size(), 0);
   for (int i = num1.size() - 1; i >= 0; i--) {
      for (int j = num2.size() - 1; j >= 0; j--) {
            int n = (num1[i] - '0') * (num2[j] - '0') + product[i + j + 1];
            product[i + j + 1] = n % 10;
            product[i + j] += n / 10;
      }
   }
   for (int i = 0; i < product.size(); i++) {
      product[i] += '0';
   }
   if (product[0] == '0') {
      return product.substr(1);
   }
   return product;
}

int main()
{
    freopen("bignumber.in","r",stdin);
    freopen("bignumber.out","w",stdout);
    
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        int k;
        string s; getline(cin,s);
        string s1="",s2="",s3="",s4="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+')
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
                cout << addBigNumbers(ChuanHoa(s1,s3),ChuanHoa(s2,s4)) << endl;
            }    

            if(s[i]=='*')
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
                cout << multiplyTwoNumbers(ChuanHoa(s1,s3),ChuanHoa(s2,s4)) << endl;
            }    
        }
    }
}