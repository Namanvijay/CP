#include <bits/stdc++.h>
using namespace std;
int main()
{
	multimap<int,int> m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	multimap <int,int> :: iterator it;

	
	
	
	m.erase(m.begin(),m.find(3));

	for(it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}

		
		
		
		
	
	return 0;

}