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
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll k;
    cin>>k;
    vector<ll> ans,v;
    ll i=0,j=0;;
    // while(j<n)
    // {
    //     s.insert(arr[j]);
    //     if(j-i+1<k)
    //     j++;
    //     else if(j-i+1==k)
    //     {
    //         ans.push_back(*s.begin());            // wrong implementation
    //         if(*s.begin()==arr[i])
    //         s.erase(s.begin());
    //         i++;j++;
    //     }
    // }

    while(j<n)
        {
            while(v.size()>0 && v[v.size()-1]<arr[j])
            v.pop_back();
            v.push_back(arr[j]);
            if(j-i+1<k)
            j++;
            else if(j-i+1==k)
            {
                ans.push_back(v[0]);
                if(arr[i]==v[0])
                v.erase(v.begin());
                i++;j++;
            }
        }

    for(ll i:ans)
    cout<<i<<" ";
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