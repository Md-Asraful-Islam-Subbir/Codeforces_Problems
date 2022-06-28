///   ***   ---   |||     In the name of ALLAH    |||   ---   ***   ///
/* Author: Sabbir(Mr.Smurf) */
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define    endl                                   '\n'
#define    ll                                        long long int
#define    pb                                      push_back
#define    all(x)                                 sort( x.begin(), x.end())
#define armin(v)                            *min_element(all(v))
#define armax(v)                           *max_element(all(v))
#define lb                                          lower_bound
#define ub                                        upper_bound
#define    digits(n)                              floor (log10(n)) + 1
#define    binary_string_to_int_decimal(s)        stoi(s,0,2)
#define    string_to_int(s)                    stoi(s)
#define    int_to_string(x)                    to_string(x)
#define    mod                                   1000000007
/***********************************************************************************/
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a,ll b) { return (a/__gcd(a,b))*b;}
ll min(ll a,ll b,ll c) {return min(a,min(b,c));}
ll max(ll a,ll b,ll c) {return max(a,max(b,c));}
ll mod_number(ll a, ll b) {  return (a - b * (a / b)); }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_pow(int a, int b, int m){ ll ans = 1;while(b){ ans *= a; b--;}return ans;}
ll mod_inverse(ll a, ll b){ return 1<a ? b - mod_inverse(b%a,a)*b/a : 1; }

/* Author: Sabbir(Mr.Smurf) */
/***********************************************************************************/
ll fact[1000000];
void factorial(){
    fact[0]=fact[1]=1;
    for(ll i=2;i<1000000;i++){
        fact[i]=((i%mod)*(fact[i-1]%mod))%mod;
    }}

ll bigmod(ll a, ll b, ll m)
{
    if(b == 0) return 1 % m;
    ll x = bigmod(a, b/2, m);
    x = (x*x)%m;
    if(b%2 == 1) x = (x*a)%m;
    return x;
}
/***********************************************************************************/
void solution(){
                int ppp,qqq,pp,qq;
                int n=8;
char arrayy[n][n];
    for(int pp=0;pp<n;pp++){
        for(int qq=0;qq<n;qq++){
            cin>>arrayy[pp][qq];
        }
    }
        for(int ppp=1;ppp<=n;ppp++){
        for(int qqq=1;qqq<=n;qqq++){
            if(arrayy[ppp][qqq]=='#'&&(arrayy[ppp-1][qqq+1]=='#'&&arrayy[ppp-1][qqq-1]=='#')){
                cout<<ppp+1<<" "<<qqq+1<<endl;
                break;
            }
        }
    }
}
int main()
{
  optimize();
ll t;
  cin>>t;
  while(t--){
    solution();
  }
  return 0;
}
/***********************************************************************************/
