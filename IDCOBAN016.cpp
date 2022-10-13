#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
			long long res = 2*n - 2 ;
			int nguyen = res/18;
			int du = res%18;
			for(int i=0;i<nguyen;i++)
			{
				cout << "123456790";
			}
			
//			while(1)
//			{
				switch(du)
				{
					case 2:
						cout << "12";
						break;
					case 4:
						cout << "1232";
						break;
					case 6:
						cout << "123432";	
						break;
					case 8:
						cout << "12345432";
						break;
					case 10:
						cout << "1234565432";
						break;
					case 12:
						cout << "123456765432";
						break;
					case 14:
						cout << "12345678765432";
						break;
					case 16:
						cout << "1234567898765432";	
						break;											
				}
//			}
			
			for(int i=0;i<nguyen;i++)
			{
				cout << "098765432";
			}
			cout << "1";
			
			cout << endl;
	}
}