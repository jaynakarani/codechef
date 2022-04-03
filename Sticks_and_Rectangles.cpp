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
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        ll s, count = 0, ans = 0, f;
        cin >> s;
        ll a[s], b[101];
        for (ll i = 0; i < s; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < 101; i++)
        {
            b[i] = 0;
        }
        for (ll i = 0; i < s; i++)
        {
            int x = a[i];
            b[x]++;
        }
        for (ll i = 0; i < 101; i++)
        {
            if (b[i] % 2)
            {
                b[i]++;
                count++;
                // ans+=b[i];
            }
        }
        for (ll i = 0; i < 101; i++)
        {
            ans = ans + b[i];
        }
        f = ans % 4;
        if (f == 2)
        {
            cout << count + 2 << endl;
        }
        else if (f == 0)
        {
            cout << count << endl;
        }
    }
    return 0;
}