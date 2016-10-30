/*
	Author: Hamza Hasbi
	Date: 30-Oct-16 12:40:27 AM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define ui unsigned int
#define ud unsigned double
#define uf unsigned float
#define pi 2*acos(0.0)
#define module cin.ignore()
#define rep(i,l,r) for(auto i=l;i<=r;i++)
#define range(x,y) for(auto x:y)
//inline lcm(int a,int b) {return a*b/__gcd(a,b);}
//inline gcd(ll a,ll b) {return 1LL*b == 0 ? a : gcd(1LL*b, a*1LL % b*1LL);}

using namespace std;


main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a[105],b[105];
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=0;i<m;i++) scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+m);
	int c=0;
	//cout<<n<<" "<<m<<endl;
	if(n<=m)
	{
		map<int,bool>mark;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				//cout<<a[i]<<" "<<b[j]<<endl;
				if(abs(a[i]-b[j])<=1) 
				{
					if(!mark[j] ) 
					{
						//cout<<a[i]<<" "<<b[j]<<endl;
						c++;mark[j]=true;
						break;
					}	
				}
			}
		}
	}
	else
	{
		map<int,bool>mark;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				//cout<<b[i]<<" "<<a[j]<<endl;
				if(abs(b[i]-a[j])<=1) 
				{
					if(!mark[j] ) 
					{
						//cout<<b[i]<<" "<<a[j]<<endl;
						c++;mark[j]=true;
						break;
					}	
				}
			}
		}
	}
	cout<<c<<endl;
  return 0;
}


