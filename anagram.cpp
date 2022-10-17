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
    string s;
    cin>>s;
    ll n=s.length();
    string s2;
    cin>>s2;
    ll k=s2.length();
    vector<ll> v(26,0),v1(26,0);
    for(ll i=0;i<s2.length();i++)
    v1[s2[i]-'a']++;
    ll i=0,j=0,l,ans=0;
   
    while(j<n)
    {
        v[s[j]-'a']++;
        if(j-i+1<k)
        j++;
        else if(j-i+1==k)
        {
            for( l=0;l<26;l++)
            if(v[l]!=v1[l])
            break;
            if(l==26)
            ans++;
            v[s[i]-'a']--;
            i++;j++;
        }
    }
    cout<<ans<<endl;
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