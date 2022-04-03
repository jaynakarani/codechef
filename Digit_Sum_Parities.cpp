#include <bits/stdc++.h>
using namespace std;
int sum(long long t){
    long long ans =0;
    while (t > 0)
    {
        ans = ans + t % 10;
        t /= 10;
    } 
    return ans;
}
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long t=sum(n);
        bool l=sum(n)%2;
        while(l==t%2){
            n=n+1;
            t=sum(n);
        }
        cout<<n<<endl;
    }
        return 0;
}