#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	int s{k};
	for(int i=0;i<k;i++)
	{
		cin>>s[i];
	}
	map<int,int>dic;
	for(inti=0;i<k;i++)
	{
		dic[s[i]]++;
	}
	for(auto it:dic)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}
}
