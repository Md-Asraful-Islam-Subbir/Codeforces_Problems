///   ***   ---   ||     In the name of ALLAH    |||   ---   ***   ///
/* Author: Sabbir(Mr.Smurf) */
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define    endl                                   '\n'
#define    ll                                       long long int
#define    pb                                     push_back
#define    ppb                                   pop_back
#define    pf                                      push_front
#define    ppf                                    pop_front
#define    mem1(a)                            memset(a,-1, sizeof(a))
#define    mem0(a)                            memset(a,0,sizeof(a))
#define    all(x)                                  sort( x.begin(), x.end())
#define    armin(v)                             *min_element(all(v))
#define    armax(v)                            *max_element(all(v))
#define    lb                                      lower_bound
#define    ub                                     upper_bound
#define    digits(n)                             floor (log10(n)) + 1
#define    binary_str_to_int_dec(s)       stoi(s,0,2)
#define    string_to_int(s)                    stoi(s)
#define    int_to_string(x)                    to_string(x)
#define    mod                                   1000000007
#define    ppc                                    __builtin_popcount     //count binary 1
#define    ppcll                                   __builtin_popcountll    //for long long
#define    fctz                                     __builtin_ctz        // count binary 0 from last to first
#define    pt(a,b)                                cout<<a<<" "<<b<<"\n";
#define    REP(i,a,b)                           for (int it = a; it <= b; it++)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
//#else
//#define dbg(args...)

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
void factorial(){ fact[0]=fact[1]=1;  for(ll i=2;i<1000000;i++){  fact[i]=((i%mod)*(fact[i-1]%mod))%mod; }}

// x = array of numbers
// n = length of the array
// k = search key
// returns "true" if the key is found, "false" otherwise
int binarySearch(int x[], int n, int k) {  int l = 0, r = n-1;  while (l <= r) {  int m = (l+r)/2; if (x[m] == k) return 1; if (x[m] < k) l = m+1; else r = m-1; } return -1; }
ll bigmod(ll a, ll b, ll m){ if(b == 0) return 1 % m; ll x = bigmod(a, b/2, m); x = (x*x)%m; if(b%2 == 1) x = (x*a)%m; return x; }

/***********************************************************************************/
//for(auto &x : a){cin >> x;tots += x;}
void solution(){
 int n;
 cin>>n;
 int a[n];
 int minimum=2147483647,index=0;
     for (ll it = 0; it <n; it++){
            cin>>a[it];
            if(a[it]<minimum){
                minimum=a[it];
                index=it;
            }
        }
 int x=  *max_element(a, a+n);
 //cout<<a[0]<<endl;
if( index!=0) cout<<"Alice"<<endl;
else cout<<"Bob"<<endl;
}
int main()
{
  optimize();  //fraction(a);
ll prueba;
  cin>>prueba;
  while(prueba--){
    solution();
  }
  return 0;
}
/***********************************************************************************/
