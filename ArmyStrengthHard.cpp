/*
	Author: Hamza Hasbi
	Date: 22-May-16 12:35:13 AM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		ll x;
		priority_queue<ll> a;
		priority_queue<ll> b;
		for(int i=0;i<n;i++) 
		{
			cin>>x;
			a.push(x);
		}
			for(int i=0;i<m;i++) 
		{
			cin>>x;
			b.push(x);
		}
		while(!a.empty() && !b.empty())
		{
			if(a.top()>b.top()) b.pop();
			else if(a.top()<b.top()) a.pop();
			else if(a.top()==b.top()) b.pop();
		}
		if(a.size()>b.size()) puts("Godzilla");
		else if (a.size()<b.size()) puts("MechaGodzilla");
		else puts("uncertain");
	}

  return 0;
}

