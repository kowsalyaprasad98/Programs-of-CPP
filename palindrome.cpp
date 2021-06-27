#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,rev=0;
	cin>>n;
	int temp=n;
	while(n)
	{
	   int R=n%10;
	   rev=(rev*10)+R;
	   n=n/10;
    }
	if(temp==rev)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not palindrome";
	}
	
}
