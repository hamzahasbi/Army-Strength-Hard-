/*
	Author: Hamza Hasbi
	Date: 08-Jun-16 4:23:54 PM
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 int c=0;
	 int k=1, i=0;
     int special[19]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
	while(i<19)
	{
		cout<<special[i++]<<endl;cout << flush;
		string s;
		cin>>s;
		if(s=="yes")
		{
			c++;
		}
		if(c==2) break;
	}
    if(c<=1) cout<<"prime"<<endl;
    else cout<<"composite"<<endl;
    fflush(stdout);
	
  return 0;
}
