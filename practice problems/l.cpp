#include <iostream>
#include <iterator>
using namespace std;
int main()
{
	list <int> l;
	list <int>:: iterator ir;
	for(int i=0;i<5;i++)
		l.push_back(i);


		for(ir=l.begin();i!=l.end();ir++)
			cout<<*ir;

		cout<<l.size();
		cout<<l.reverse();


		map <int int> m;
		m.insert( pair <int> <int> (100,300));
		map <int int> ::iterator ir1;
		for(ir1=m.begin();ir1!=m.end();ir1++)
			cout<<*ir1;


}
