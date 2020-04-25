#include <bits/stdc++.h>
using namespace std;




int bin( long long int n)
{

int arr[128];
int i=0;
while(n>0)
{
	arr[i]=n%2;
	n=n/2;
	i++;
}

cout<<i;

}
int main()
{
	 long long int n;
	cin>>n;
	bin(n);
	return 0;
}