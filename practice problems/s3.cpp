#include <bits/stdc++.h>
using namespace std;

stack <int> sort(stack <int> &input)
{

	stack <int> temp;
	while(!input.empty())
	{	
	 int tem=input.top();
	 input.pop();

	 while(!temp.empty() && temp.top()>tem)
	 {
	 	input.push(temp.top());
	 	temp.pop();

	 }

	 temp.push(tem);

}	
	return temp; 

}

int main()
{


	stack <int> input;

	

		input.push(4);
		input.push(5);
		input.push(2);
		input.push(25);
	

	stack <int> temp;
	temp=sort(input);
	cout<<"Sorting element are:\n";
	while(!temp.empty())
	{

		cout<<temp.top()<<endl;
		temp.pop();
	}
}
