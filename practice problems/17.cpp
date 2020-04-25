#include <bits/stdc++.h>
using namespace std;
int pred(char c)
{
	if(c=='^')
		return 3;
	else if(c=='*'|| c=='/')
		return 2;
	else if(c=='+'|| c=='-')
		return 1;
	else return -1;

}
int main()
{
	string s1;
	cin>>s1;
	vector<char> v;
	stack <char> s;
	int n=s1.size();
	
	s1[n]=')';
	int p=s1.size();
	
	
	s.push('(');
	for(int i=0;i<=s1.size();i++)
	{
		if(s1[i]>='a'&& s1[i]<='z')
			
				v.push_back(s1[i]);

			

  			else if(s1[i]=='(')
  				s.push(s1[i]);

  			else if(s1[i]==')')
  			{
  				while(s.top()!='(')
  				{

                   char x=s.top();
                   
                   
                   

                   v.push_back(x);
                   s.pop();
                  
  				}
  				if(s.top()=='(')
  					s.pop();
  			}

  			else 
  			{
  				while(s.top()!='(' && pred(s1[i])<=pred(s.top()))
  				{
  					char x=s.top();
  					
  					v.push_back(x);
  					s.pop();
  					
  				}
  				s.push(s1[i]);

  			}
  			

  			

	}
	for(int i=0;i<v.size();i++)
  				cout<<v[i];

	return 0;


}
