#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
vector<int> sortt(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    return arr;
}
vector<int> revv(vector<int> &arr)
{
    reverse(arr.begin(),arr.end());
    return arr;
}
#define PB push_back
#define F first
#define S second
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int times;
    cin>>times;
    while(times--)
    {
        ll x;
        cin>>x;
        ll c=x;
        for(int i=0;i<31;i++)
        {
            if(!(c&((ll)1<<i)))
            {
                c=c|((ll)1<<i);
                break;
            }
        }
        cout<<x<<" 0 "<<c<<endl;
    }
        
    return 0;
        
}


