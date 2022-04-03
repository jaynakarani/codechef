#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl '\n'
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vb vector<bool>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vp vector<pi>
#define vpll vector<pll>
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define fors() for (int i = 0; i < s.length(); i++)
#define forni(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mint map<int, int>
#define mall map<ll, ll>
#define gu(a, s) get<a>(s)
#define tin tuple<ll, ll, ll>
#define ter(x, y, z) ((x) ? y : z)
//<------------------------------------------------------------------------------------------------------------------------------------------>
const ll maxn = 3e5 + 5;
const ll max_val = 2e5 + 10;
ll mod = 1e9 + 7;
//<------------------------------------------------------------------------------------------------------------------------------------------>
int diff1(ll a, ll b)
{
    ll p, q;
    p = a - 1;
    q = a + 1;
    if (b == p || b == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int diff2(ll a, ll b)
{
    ll p, q;
    p = a - 2;
    q = a + 2;
    if (b == p || b == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, d, t = 1;
        
        cin >> d >> a >> b;
        if (a == 1 || b == 1 || a == d || b == d)
        {
            if (t == diff1(a, b) || t == diff2(a, b))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            
            if (diff1(a,b))
            {
              cout<<2<<endl;   
            }
            else if (diff2(a, b))
            {
                cout<<1<<endl;
            }
            else if (diff1(a,b) == 0 && diff2(a, b) == 0)
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}