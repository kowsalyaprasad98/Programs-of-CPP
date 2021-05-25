#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;//length of array
	cin>>k;//read the length of array
	int s[k];//declare the array of length
	for(int i=0;i<k;i++)// by index values
	{
		cin>>s[i];//input values
	}
	//logic to find  max element
	int max=INT_MIN;
	for(int i=0;i<k;i++)
	{
		if(max<s[i])
		{
			max=s[i];
		}
	}
	cout<<max;
}
