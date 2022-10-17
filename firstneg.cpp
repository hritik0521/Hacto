#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;



void hr(){
	
	#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif 
}




void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n),v,ans;
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll k;
    cin>>k;
    ll i=0,j=0;
    while(j<n)
    {
        if(arr[j]<0)
        v.push_back(arr[j]);
        if(j-i+1<k)
        j++;
        else if(j-i+1==k)
        {
            if(v.size()==0){
            ans.push_back(0);i++;j++;}
            else{
            ans.push_back(v[0]);
            i++;j++;
            if(arr[i-1]<0)
            v.erase(v.begin());
            }
        }
    }
    for(ll i:ans)
    cout<<i<<" ";
    cout<<endl;
    return;
}

int main()
{
    //hr();
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t=1;
    //cin>>t;
    for(ll k1=0;k1<t;k1++)
    {
        solve();
    }
}