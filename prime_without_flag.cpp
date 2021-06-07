#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n/2;i++)
    {
            if(n%i==0)
            {
              cout<<n<<"is not prime";
              exit(0);
            }
            
    }
    cout<<n<<"is prime";
    return 0;
}
// another method
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
            if(n%i==0)
            {
              cout<<n<<"is not prime";
              exit(0);
            }
            
    }
    cout<<n<<"is prime";
    return 0;
}
//3rd method
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<sqrt(n);i++)
    {
            if(n%i==0)
            {
              cout<<n<<"is not prime";
              exit(0);
            }
            
    }
    cout<<n<<"is prime";
    return 0;
}
