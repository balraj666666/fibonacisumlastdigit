#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n<=1)
     {
/*adding changes*/
      return n;
      return 0;
     }
    long long i;
    long long a[n+3];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n+2;i++)
    {
        a[i]=(a[i-1]+a[i-2])%10;
        //cout<<a[i]<<endl;
    }
    cout<<(a[n+2]-1)%10<<endl;
    
    return 0;
}