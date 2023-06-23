




/*
।। जय श्री राम ।।
।। जय हनुमान ।।
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> osetint;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef vector<long long> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvi;
typedef vector<string> vs;
typedef pair<long long, long long> pii;
typedef pair<long long, string> pic;
typedef pair<string, long long > pci;
typedef vector<pair<long long, long long>> vpii;
typedef long long ll;
typedef unsigned long long ull;
typedef long double        lld;
#define db(x) debug(x);
#define check1 cout<<"YES"<<endl;
#define check2 cout<<"NO"<<endl;
#define check3 cout<<-1<<endl;
#define int long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pob pop_back
#define findorder find_by_order
#define orderkey order_of_key
#define um unordered_map
#define CHK 1e-9
#define endl '\n'
#define all(x) x.begin(), x.end()
#define reverse(v) reverse(all(v));
#define sorted(v) sort(v.begin(), v.end())
#define reversesort(v) sort(v.begin(), v.end(),greater<int>())
#define zerobefore(x) __builtin_clz(x)
#define zeroafter(x) __builtin_ctz(x)
#define ones(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define sz(x) x.size()
#define len(x) x.length()
#define prDouble(x)     cout << fixed << setprecision(9) << x
#define goog(tno)       cout << "Case #" << tno <<": "
#define fast_io         ios_base::sync_with_stdio(false);cin.tie(NULL)
#define elasped_time   1.0 * clock() / CLOCKS_PER_SEC
#define dfor(i,a,b) for(long long  i=a;i<b;i++)
#define dforr(i,a,b) for(long long  i=a;i>=b;i--)
#define rep(i,a,b)      for(int (i) = (a); (i) <= (b); (i)++)
#define rev(i,a,b)      for(int (i) = (a); (i) >= (b); (i)--)
int mod = 1e9 + 7;
#define gcd(a,b)       __gcd(a,b)
#define mem1(a)        memset(a,-1,sizeof(a))
#define mem0(a)        memset(a,0,sizeof(a))
//NEXT PERMUTATION next_permutation(all(v))
// MAX ELEMENT
#define maxele(v) *max_element(all(v))
// MIN ELEMENT
#define minele(v) *min_element(all(v))
int sumarr(vi v) {int sum = 0; for (auto x : v) sum += x; return sum ;}
int maxarr(vi v) {int mx = INT_MIN; for (auto x : v) mx = max(x, mx); return mx;}
int minarr(vi v) {int mn = INT_MAX; for (auto x : v) mn = min(x, mn); return mn;}
#define fauto(arr,x) for(auto x:arr)
//UNIQUE ELEMENTS IN A ARRAY/VECTOR
//v.erase(unique(all(v)), v.end());
//NO OF CONTINUES UNIQUE ELEMENTS IN ARRAYex-11001101,op/-10101
//int m = unique(s.begin(), s.end()) - s.begin();
#define sc ' '
#define input(arr, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        ll x;                   \
        cin >> x;               \
        arr.pb(x);              \
    }

#define sumall(arr,sum)                                      \
    for (auto x:arr)                                    \
    {                                                   \
        sum+=x;                                           \
    }                                                   \


#define print(arr)                                      \
    for (auto x:arr)                                    \
    {                                                   \
        cout << x << ' ' ;                              \
    }                                                   \
    cout << endl;
// printf("%.6llf\n", ans);


#define inputpair(arr, n)                   \
    for(int i=0;i<n;i++){                   \
        int a;                              \
        int b;                              \
        cin >> a >> b;                      \
        arr.push_back(make_pair(a, b));       \
        }                                   \


#define printpair(arr)                                  \
    for (auto x:arr)                                    \
    {                                                   \
        cout << x.first << ' '<< x.second<< endl ;      \
    }                                                   \
    cout << endl;

// const int N = 1e7 + 10;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void init_code() {
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("error.txt", "w", stderr);
#endif
}

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*-------------------------------------------------------------------------------------------------------------------------------*/
// Sieve of Eratosthenes Alogrithm
int N = 1000000; //90000000;
vector<bool>is_prime(N + 1, true); // use bool because it consumes less memory than integer so their will be no memory issues
void sieve() { is_prime[0] = is_prime[1] = false; for (int i = 2; i <= N; i++) { if (is_prime[i] && (long long)i * i <= N) { for (int j = i * i; j <= N; j += i) is_prime[j] = false;} } }
// It will generate all possible lucky numbers(digits containing only 4 and 7)
vector<int> luckynumber;
void bruteluckynumber(long long num) { luckynumber.pb(num); if (num > 1000000000) return; bruteluckynumber(num * 10 + 4); bruteluckynumber(num * 10 + 7);}
// Calculating a^b for large number in O(logn) using binary exponentiation
int modular_expo(int a, int b) { a = a % mod; int res = 1; while (b > 0) { if (b % 2) { res = res * a % mod; b--;} else { a = a * a % mod; b /= 2;}} return res;}
// This is also called as Matrix exponentiation using it we can find matrix A^n in just O(logn) time
#define Num 101// depend on the value of dim we have to just take slightly greater than dim
int A[Num][Num], Res[Num][Num], A2[Num][Num]; // Now don't declare matrix A and Res again in void solve()
void matrix_multiplication(int a[][Num], int b[][Num], int dim) {int c[dim][dim]; rep(i, 0, dim - 1) {rep(j, 0, dim - 1) { c[i][j] = 0; rep(k, 0, dim - 1) { c[i][j] += (a[i][k] % mod * b[k][j] % mod) % mod;}}} rep(i, 0, dim - 1) rep(j, 0, dim - 1) a[i][j] = c[i][j] % mod;}
void Matrix_expo(int a[][Num], int dim, int n) {rep(i, 0, dim - 1) rep(j, 0, dim - 1) {if (i == j) Res[i][j] = 1; else Res[i][j] = 0;} while (n > 0) {if (n % 2) {matrix_multiplication(Res, a, dim); n--;} else {matrix_multiplication(a, a, dim); n /= 2;}} rep(i, 0, dim - 1) rep(j, 0, dim - 1) a[i][j] = Res[i][j] % mod;}
// For getting index of any element in O(logn)
int binarySearch(vector<int> &arr, int low, int high, int key) { if (low <= high) { int mid = low + (high - low) / 2; if (arr[mid] == key) return mid; if (arr[mid] > key) return binarySearch(arr, low, mid - 1, key); else return binarySearch(arr, mid + 1, high, key);} else return -1;}
// For getting index of element such that the key value is not greater than that element value present in that array i.e {1 2 3 6} and key=4 so it will return the index of last element that is i=3(zero indexing)
int binarySearchLargestElementsindex(vector<int> &arr, int low, int high, int key) { int mid = low + (high - low) / 2; if (low <= high) { if (arr[mid] == key) { return mid;} else if (arr[mid] > key) { return binarySearchLargestElementsindex(arr, low, mid - 1, key);} else { return binarySearchLargestElementsindex(arr, mid + 1, high, key); }} return mid;}
// Returns number of elements smaller than or equal to key value
int binarySearchnumberofSmallestequalElements(vector<int>&arr, int l, int h, int key) { int mid = l + (h - l) / 2; if (l <= h) { if (arr[mid] > key) {h = mid - 1; return binarySearchnumberofSmallestequalElements(arr, l, h, key);} else {l = mid + 1; return binarySearchnumberofSmallestequalElements(arr, l, h, key);}} else {mid -= 1;/* this is to decrease the increased value of l that when condition get false we haven't adjusted l before itself*/} return mid;}
// This will check if n is power of 2 or not in O(1)
bool is_powerof2(int n) { if (n < 0 || n == 1) return false; if ((n & (n - 1)) == 0) return true; else return false; }
// This function will return a set consisting of all the distinct possible factors of a number n in O(sqrt(n))
void factors(set<int>&st, int n) { rep(i, 2, sqrt(n)) { if (n % i == 0) { st.insert(i); st.insert(n / i);} } return ; }
// Returns set of prime factor of a number
void primefactors(set<int>&st, int n) { rep(i, 2, sqrt(n)) { int cnt = 0; while (n % i == 0) { cnt++; n = n / i; st.insert(i);} } if (n > 1) { st.insert(n);} return ;}
// It is only applicable for array like 1 2 3 4 5.... where arr[i]=i.So this array would help us in reodering of array such that arr[i]!=i for any i
void unorder_array(int arr[], int n) { rep(i, 0, n - 2) { swap(arr[i], arr[i + 1]); i++; } if (n % 2) { swap(arr[n - 2], arr[n - 1]); } return ;}
// To calculate factorial
int factorial(int n) {if (n == 1) return 1; return n % mod * factorial(n - 1) % mod;}
// To take the array input
void read(int arr[], int n) {rep(i, 0, n - 1) { cin >> arr[i];}}
void readvec(vector<int> &arr) {for (auto &it : arr) {cin >> it;}}
// void print(vector<int> &arr) {for (auto it : arr) {cout << it << " ";}}
// To take modulo of a number
int modulo(int num) {int ans; if (num >= 0) {ans = num % mod;} else {ans = ((num % mod) == 0 ? 0 : num % mod + mod);} return ans;}
// Returns lcm of more then two number or lcm of whole array
int LcmOfArray(vector<int> &arr, int index) {if (index == arr.size() - 1) {return arr[index];} int a = arr[index]; int b = LcmOfArray(arr, index + 1); return (a * b / __gcd(a, b)); }
// Returns whether the permutation vector is completely in sorted order or not
bool is_permutationsorted(vector<int> &arr, int n) { rep(i, 0, n - 1) {if (i + 1 != arr[i]) {return false;}} return true; }
// Sorting the vector of pairs in in ascending order with respect to second element
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {if (a.second == b.second) return (a.first < b.first); else return (a.second < b.second);}
// Checks whether a character is present or not in the string
bool is_char_present(string str, char ch) {size_t found = str.find_first_of(ch); if (found != string::npos) return true; else return false;}
// upper_bound(all(arr),key)-arr.begin() : when we require no. of elements smaller or equal to key are asked
// lower_bound(all(arr),key)-arr.begin() : when we require no. of elements strictly smaller than key are asked
/*-------------------------------------------------------------------------------------------------------------------------------*/

int n, m, x, y, z, k, l, a, b;
const int NMAX = 200005;

void solve() {
    int one = 0, zer = 0, sum = 0, ans = 0;;
    string s;


    cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";

}




int32_t main()
{
    init_code();
    sieve();
    bruteluckynumber(0); sort(all(luckynumber)); luckynumber.resize(unique(all(luckynumber)) - luckynumber.begin());

    int testcase = 1;
    cin >> testcase;
    while (testcase--) {
        solve();
    }
    return 0;
}

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> osetint;
// typedef map<long long, long long> mll;
// typedef unordered_map<long long, long long> umll;
// typedef vector<long long> vi;
// typedef vector<char> vc;
// typedef vector<long long> vll;
// typedef vector<vector<long long>> vvi;
// typedef vector<string> vs;
// typedef pair<long long, long long> pii;
// typedef pair<long long, string> pic;
// typedef pair<string, long long > pci;
// typedef vector<pair<long long, long long>> vpii;
// typedef long long ll;
// #define check1 cout<<"YES"<<endl;
// #define check2 cout<<"NO"<<endl;
// #define check3 cout<<"yes3"<<endl;
// #define int long long
// #define ff first
// #define ss second
// #define pb push_back
// #define mp make_pair
// #define pob pop_back
// #define findorder find_by_order
// #define orderkey order_of_key
// #define um unordered_map
// #define CHK 1e-9
// #define endl '\n'
// #define all(x) x.begin(), x.end()
// #define reverse(v) reverse(all(v));
// #define sorted(v) sort(v.begin(), v.end())
// #define reversesort(v) sort(v.begin(), v.end(),greater<int>())
// #define zerobefore(x) __builtin_clz(x)
// #define zeroafter(x) __builtin_ctz(x)
// #define ones(x) __builtin_popcount(x)
// #define parity(x) __builtin_parity(x)
// #define elasped_time   1.0 * clock() / CLOCKS_PER_SEC
// #define dfor(i,a,b) for(long long  i=a;i<b;i++)
// #define dforr(i,a,b) for(long long  i=a;i>=b;i--)
// int mod = 1e9 + 7;
// #define gcd(a,b)       __gcd(a,b)
// #define mem1(a)        memset(a,-1,sizeof(a))
// #define mem0(a)        memset(a,0,sizeof(a))
// //NEXT PERMUTATION next_permutation(all(v))
// //MAX ELEMENT int maxi=*max_element(all(v))
// //MIN ELEMENT int mini=*min_element(all(v))
// #define input(arr, n)            \
//     for (int i = 0; i < n; i++) \
//     {                           \
//         ll x;                   \
//         cin >> x;               \
//         arr.pb(x);              \
//     }

// #define print(arr)                                      \
//     for (auto x:arr)                                    \
//     {                                                   \
//         cout << x << ' ' ;                              \
//     }                                                   \
//     cout << endl;


// #define inputpair(arr, n)                   \
//     for(int i=0;i<n;i++){                   \
//         int a;                              \
//         int b;                              \
//         cin >> a >> b;                      \
//         arr.push_back(make_pair(a, b));       \
//         }                                   \


// #define printpair(arr)                                  \
//     for (auto x:arr)                                    \
//     {                                                   \
//         cout << x.first << ' '<< x.second<< endl ;      \
//     }                                                   \
//     cout << endl;

// const int N = 1e7 + 10;
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
// #else
// #define debug(x);
// #endif
// void _print(int x) {cerr << x;}
// void _print(char x) {cerr << x;}
// void _print(string x) {cerr << x;}
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// template<class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
// template<class T>void _print(vector<T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template<class T>void _print(set<T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template<class T>void _print(multiset<T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template<class T, class V>void _print(map<T, V> v) {cerr << " [ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
// typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> ordered_pset;

// int MOD = 1e9 + 7;

// vector<bool> primesieve(N, 1);
// //NEXT PERMUTATION next_permutation(all(v))
// //MAX ELEMENT int maxi=*max_element(all(v))
// //MIN ELEMENT int mini=*min_element(all(v))


// ll binpow(ll a, ll b, ll MOD) {
//  ll ans = 1;
//  a %= MOD;
//  while (b) {
//      if (b & 1)
//          ans = (ans * a) % MOD;
//      b /= 2;
//      a = (a * a) % MOD;
//  }
//  return ans;
// }
// ll inverse(ll a, ll MOD) {
//  return binpow(a, MOD - 2, MOD);
// }



// template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template<class T> using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// long long nCr(int n, int r)
// {
//  if (n == r)    return 1;
//  else if (r == 0)  return 1;
//  else return ((nCr(n - 1, r - 1) + nCr(n - 1, r)) % MOD);
// }
// ll sdigit(ll x)
// {
//  ll ans = 0;
//  while (x)
//  {
//      ans += x % 10;
//      x /= 10;
//  }
//  return ans;
// }
// //sortbyboth the cases
// bool sorter(const pair<ll, ll> &a, const pair<ll, ll> &b) {
//  if (a.first < b.first) {
//      return a.first < b.first;
//  } else if (a.first == b.first) {
//      return a.second < b.second;
//  } else {
//      return a.first < b.first;
//  }
// }
// long long lcm(int a, int b)
// {
//  return ((long long)a * (long long)b) / __gcd(a, b);
// }


// bool sortbysec(const pair<int, int> &a,
//                const pair<int, int> &b)
// {
//  return (a.second < b.second);
// }
// // ll modd(ll a, ll b){if(a<0)return(a%b)+b; else return a%b;}

// bool static compare(vector<int> a, vector<int> b) {
//  if (a[1] == b[1]) {
//      return a[0] < b[0];
//  }
//  return a[1] > b[1];
// }

// bool sortbysecdec(const pii &v1, const pii &v2)
// {
//  if (v1.second != v2.second)
//      return v1.second > v2.second;
//  return v1.first < v2.first;
// }

// bool sortbyff(const pii &v1, const pii &v2)
// {
//  return (v1.first < v2.first);
// }



// int gcd( int a, int b) {
//  if (b == 0) return a;
//  return gcd(b, a % b);
// }




// int bsearch(vector<int> &arr, int target) {
//  //ELEMENT INDEXING (FROM 1), ELSE 0 CAN USE AS BOOL ALSO
//  int low = 0;
//  int hi = arr.size() - 1;
//  while (hi - low > 1) {
//      int mid = (low + hi) / 2;
//      if (arr[mid] < target) {
//          low = mid + 1;
//      }
//      else {
//          hi = mid;
//      }

//  }
//  if (arr[low] == target) {
//      return low + 1;
//  }
//  else if (arr[hi] == target) {
//      return hi + 1;
//  }
//  else {
//      return 0;
//  }
// }

// ll abs(ll a, ll b)
// {
//  if (a > b)
//      return a - b;
//  else
//      return b - a;
// }


// int zerofact(int n) {
//  int ans = 0;
//  for (int i = 5; i <= n; i = i * 5) {
//      ans = ans + (n / i);
//  }
//  return ans;
// }

// bool isprime(ll n)
// {
//
//  for (ll j = 2; j * j <= n; j++)
//  {
//      if (n % j == 0)
//      {
//          return false;
//      }
//  }
//  return true;
// }
// vi sieve(int n) {
//  vi ans(n + 1, 1);
//  ans[0] = 0;
//  ans[1] = 0;
//  for (int i = 2; i * i <= n; i++) {
//      for (int j = 2 * i; j <= n; j += i) {
//          ans[j] = 0;
//      }
//  }
//  return ans;
// }

// int pow(int a, int b) {
//  int ans = 1;
//  while (b > 0) {
//      if (b & 1) {
//          ans = ans * a;
//      }
//      a = a * a;
//      b = b >> 1;

//  }
//  return ans;

// }
// int powmod(int a, int b) {
//  a = a % mod;
//  int ans = 1;
//  while (b > 0) {
//      if (b & 1) {
//          ans = (ans * a) % mod;
//      }
//      a = (a * a) % mod;
//      b = b >> 1;

//  }
//  return ans;

// }

// void solve() {
//  int n, k, x, y, z;
//  int a, b, c, p, q, r;
//  int sum = 0, sum1 = 0, sum2 = 0;
//  int count = 0, c1 = 0, c2 = 0;
//  int mul = 1, mul1 = 1, div = 1, div1 = 1;
//  vi v, vv, vvv;
//  string s, ss;
//  char ch, ch1;
//  umll m;
//  set<int> set;




//  cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";




// }


// void fastc() {
//  ios_base::sync_with_stdio(0);
//  cin.tie(0);
//  cout.tie(0);
// #ifndef ONLINE_JUDGE

//  // For getting input from input.txt fileb
//  freopen("input.txt", "r", stdin);

//  // Printing the Output to output.txt file
//  freopen("output.txt", "w", stdout);
//  freopen("error.txt", "w", stderr);


// #endif
// }
// int32_t main()
// {
//  fastc();
//  primesieve[0] = false;
//  primesieve[1] = false;
//  for (int i = 2; i < N; ++i) {
//      if (primesieve[i] == true) {
//          for (int j = 2 * i; j < N; j = j + i) {
//              primesieve[j] = false;

//          }
//      }
//  }


//  int testcase = 1;
//  cin >> testcase;
//  while (testcase--) {
//      solve();
//  }



//  return 0;
// }


//SLECTION SORT


// int x;
// cin >> x;
// vi a;
// input(a, x);
// for (int i = 0; i < x; i++)
// {
//  int mini = i;
//  for (int j = i + 1; j < x; j++) {
//      if ((a[j]) < a[mini]) {
//          mini = j;
//      }
//  }
//  swap(a[i], a[mini]);

// }
// print(a);





// BINARY SEARCH

// int binarysearch(int arr[], int n, int k) {
//  int hi ;
// int low;
//  int mid;
//  low=0;
//  hi=n-1;
//  while(low<=hi){
//      mid=(low+hi)/2;
//      if(arr[mid]==k) return mid;
//      if(k>arr[mid]) low=mid+1;
//      else if(k<arr[mid]) hi=mid-1;

//  }
//  return -1;
// }



//SEARCH ELEMENT K BINARY SEARCH


//  int searchInsertK(vector<int>arr, int n, int k)
// {
//     // code here
//             int hi ;
//     int low;
//      int mid;
//      low=0;
//      hi=n-1;
//      int ans=0;
//      if(k>arr[n-1]) return n;
//      if(k<arr[0]) return 0;
//      while(low<=hi){
//          mid=(low+hi)/2;
//          if(arr[mid]==k) return mid;
//          if(k>arr[mid]){ low=mid+1;
//             //  ans=mid;
//             if(arr[mid]>k){
//                 ans=mid;
//             }
//             else{
//                 ans=mid+1;
//             }
//          }
//          else if(k<arr[mid]){

//           hi=mid-1;

//             if(arr[mid]>k){
//                 ans=mid;
//             }
//             else{
//                 ans=mid+1;
//             }
//          }

//      }
//      return ans;
// }

// int n;
// cin >> n;
// vpii v;
// inputpair(v, n);
// printpair(v);








////            SORT BY DESENDING MULTIPELE

/*



#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> osetint;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef vector<long long> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvi;
typedef vector<string> vs;
typedef pair<long long, long long> pii;
typedef pair<long long, string> pic;
typedef pair<string, long long > pci;
typedef vector<pair<long long, long long>> vpii;
typedef long long ll;
#define check1 cout<<"yes1"<<endl;
#define check2 cout<<"yes2"<<endl;
#define check3 cout<<"yes3"<<endl;
#define int long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pob pop_back()
#define findorder find_by_order
#define orderkey order_of_key
#define um unordered_map
#define CHK 1e-9
#define endl '\n'
#define all(x) x.begin(), x.end()
#define reverse(v) reverse(all(v));
#define sorted(v) sort(v.begin(), v.end())
#define reversesort(v) sort(v.begin(), v.end(),greater<int>())
#define zerobefore(x) __builtin_clz(x)
#define zeroafter(x) __builtin_ctz(x)
#define ones(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define dfor(i,a,b) for(long long  i=a;i<b;i++)
int mod = 1e9 + 7;
//NEXT PERMUTATION next_permutation(all(v))
//MAX ELEMENT int maxi=*max_element(all(v))
//MIN ELEMENT int mini=*min_element(all(v))
#define input(arr, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        ll x;                   \
        cin >> x;               \
        arr.pb(x);              \
    }

#define print(arr)                                      \
    for (auto x:arr)                                    \
    {                                                   \
        cout << x << ' ' ;                              \
    }                                                   \
    cout << endl;


#define inputpair(arr, n)                   \
    for(int i=0;i<n;i++){                   \
        int a;                              \
        int b;                              \
        cin >> a >> b;                      \
        v.push_back(make_pair(a, b));       \
        }                                   \


#define printpair(arr)                                  \
    for (auto x:arr)                                    \
    {                                                   \
        cout << x.first << ' '<< x.second<< endl ;      \
    }                                                   \
    cout << endl;

//UNIQUE ELEMENTS IN A ARRAY/VECTOR
v.erase(unique(all(v)), v.end());



const int N = 1e7 + 10;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T> using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


bool sortbysecdec(const pii &v1, const pii &v2)
{
    if (v1.second != v2.second)
        return v1.second > v2.second;
    return v1.first < v2.first;
}



void solve() {
    int  a, b, c, d, n, k, l, x, y, z;
    vi v, vvv;
    vpii vv;
    cin >> n;
    input(v, n);
    umll m;
    set<int> s;
    dfor(i, 0, n) {
        m[v[i]]++;
        // s.insert(m[v[i]);
    }
    for (auto v : m) {
        vv.pb(mp(v.ff, v.ss));
    }
    sort(vv.begin(), vv.end(), sortbysecdec);
    dfor(i, 0, vv.size()) {
        dfor(p, 0, vv[i].ss) {
            cout << vv[i].ff << " ";
        }
    }
    // sorted(vvv);
    // print(vvv);
    cout << endl;





}





int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE

    // For getting input from input.txt fileb
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    int testcase = 1;
    cin >> testcase;
    while (testcase--) {
        solve();
    }



    return 0;
}






































/////           STRING INT
string numtostring(ll n)
{
    return bitset<31>(n).to_string();
}

unsigned long stringtonum(string s)
{
    return bitset<31>(s).to_ulong();
}


*/
//****************************Template Begins****************************//

// Header Files
// #include<bits/stdc++.h>
// #include<iostream>
// #include<iomanip>
// #include<algorithm>
// #include<vector>
// #include<utility>
// #include<set>
// #include<unordered_set>
// #include<list>
// #include<iterator>
// #include<deque>
// #include<queue>
// #include<stack>
// #include<set>
// #include<bitset>
// #include<random>
// #include<map>
// #include<unordered_map>
// #include<stdio.h>
// #include<complex>
// #include<math.h>
// #include<cstring>
// #include<chrono>
// #include<string>
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// // Header Files End

// using namespace std;
// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// // find_by_order(k)  returns iterator to kth element starting from 0;
// // order_of_key(k) returns count of elements strictly smaller than k;
// template <class T>
// using ordered_set =
//     tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// template <class T>
// istream &operator>>(istream &stream, vector<T> &v) {
//  for (int i = 0; i < (int)v.size(); i++) stream >> v[i];
//  return stream;
// }
// template <class T1, class T2>
// istream &operator>>(istream &stream, pair<T1, T2> &p) {
//  return stream >> p.first >> p.second;
// }
// template <class T>
// ostream &operator<<(ostream &stream, const vector<T> &v) {
//  for (int i = 0; i < (int)v.size(); i++) stream << v[i] << ' ';
//  stream << '\n';
//  return stream;
// }
// template <class T1, class T2>
// ostream &operator<<(ostream &stream, const pair<T1, T2> &pair) {
//  return stream << pair.first << ' ' << pair.second;
// }

// #define sn ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define ll long long
// #define umap unordered_map
// #define uset unordered_set
// #define lb lower_bound
// #define ub upper_bound
// #define all(v) (v).begin(),(v).end()
// #define all1(v) (v).begin()+1,(v).end()
// #define allr(v) (v).rbegin(),(v).rend()
// #define allr1(v) (v).rbegin()+1,(v).rend()
// #define sortall(v) sort(all(v))
// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef pair<ll, ll> pll;
// #define sz(x) (ll)x.size()
// #define pb push_back
// #define ppb pop_back
// #define mkp make_pair
// #define inf 1000000000000000005
// #define f first
// #define s second
// #define py cout<<"YES"<<endl
// #define pn cout<<"NO"<<endl
// #define mod 1000000007
// template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
// template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

// ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

// ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

// ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

// ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

// ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

// ll binpow(ll a, ll b) {if (b == 0) {return 1;} ll res = binpow(a, b / 2); if (b % 2) {return res * res * a;} else {return res * res;}}

// //---Check---//
// ll highestPowerof2(ll n) { ll p = (ll)log2(n);   return (ll)pow(2, p);}
// bool isPowerOfTwo(int n) { if (n == 0)   return false;   return (ceil(log2(n)) == floor(log2(n)));}
// bool isPerfectSquare(ll x) {if (x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
// bool isPrime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (int i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false; return true;}

// //---Compare---//
// bool comparator(const pair<ll, ll> &a, const pair<ll, ll> &b) {if (a.first != b.first) {return a.first < b.first;} return a.second > b.second;}

// //---Bits---//
// string decToBinary(int n) {string s = ""; int i = 0; while (n > 0) {s = to_string(n % 2) + s; n = n / 2; i++;} return s;}
// ll binaryToDecimal(string n) {string num = n; ll dec_value = 0; int base = 1; int len = num.length(); for (int i = len - 1; i >= 0; i--) {if (num[i] == '1')dec_value += base; base = base * 2;} return dec_value;}
// ll countSetBits(ll n) { ll count = 0;  while (n) { count += n & 1; n >>= 1;  }  return count;}


// //Do not use unordered_map in cp use map

// //---Miscellaneous---//
// string removeLeadingZeros(string str) {const regex pattern("^0+(?!$)"); str = regex_replace(str, pattern, ""); return str;}
// int countodd(vector<int>v) {int o = 0; for (int i = 0; i < v.size(); i++) {if (v[i] % 2) o++;} return o;}
// //****************************************************Template Ends*************************************************************************************************************************************************//
// void solve() {
//  int n; cin >> n;
//  vector<int>a(n);
//  cin >> a;
//  map<int, int>freq;
//  for (int i = 0; i < n; ++i) {
//      freq[a[i]]++;
//  }
//  int mx = *max_element(all(a));
//  int cnt = 0, mxcnt = 0;
//  for (auto x : freq) {
//      if (x.s == 1) cnt++;
//      mxcnt = max(mxcnt, x.s);
//  }
//  if (cnt & 1) {
//      if (mxcnt == 2 && freq[mx] == 1)cnt++;
//      cout << cnt / 2 + 1 << endl;
//  }
//  else cout << cnt / 2 << endl;
// }

// int main() {
//  sn;
// #ifndef ONLINE_JUDGE
//  // for getting input from input.txt
//  freopen("inputf.txt", "r", stdin);
//  // for writing output to output.txt
//  freopen("outputf.txt", "w", stdout);
// #endif
//  int t = 1; cin >> t;
//  while (t--) {
//      solve();
//  }
// }



















// #include<bits/stdc++.h>
// #include <sstream>
// #include <string>
// #include <cstdio>
// #include <iomanip>
// #include <math.h>
// #include <cmath>
// #include<list>
// using namespace std;
// int mod = 1e9 + 7;

// // typedef long long int ll;

// // // todo defines
// #define ll long long int
// #define nl "\n"
// #define all(v) v.begin(),v.end()
// #define MAX 100000
// #define rep(i,l,r) for(ll i=l;i<=r;i++)
// #define int                 long long
// // #define ld                  long double
// // #define f(i,n)              for(ll i=0;i<(n);i++)
// // #define f1(i,n)             for(ll i=1;i<=n;i++)
// // #define el                  "\n"
// // #define sq(a)               (a)*(a)
// // #define pb                  push_back
// // #define asort(a,n)          sort(a,a+n)
// // #define dsort(a,n)          sort(a,a+n,greater<>())
// // #define vasort(v)           sort(v.begin(), v.end());
// // #define vdsort(v)           sort(v.begin(), v.end(),greater<>());
// // #define cina(arr)           f(i,n) cin >> arr[i];
// // #define YES                 cout << "YES\n"
// // #define Yes                 cout << "Yes"<<el
// // #define yes                 cout << "yes"<<el
// // #define NO                  cout << "NO\n"
// // #define No                  cout << "No"<<el
// // #define no                  cout << "no"<<el
// // #define covid19             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// // #define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// // #define TC                  int t; cin >> t; while(t--)


// // // todo typedefs
// // typedef pair<int,int> pii;
// // typedef map<int,int>mii;
// // typedef vector<int>vi;
// // typedef vector<pii>vii;
// // typedef set<int> si;
// // typedef set<char> sc;


// // bool as_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {return (a.second < b.second); }//sort the vector pair in assending order according to second element
// // bool ds_first(const pair<ll,ll> &a, const pair<ll,ll> &b){ return (a.first > b.first);}//sort the vector pair in decending order according to first element
// // bool ds_second(const pair<string,int> &a, const pair<string,int> &b) {return a.second>b.second;}//sort the vector pair in decending order according to second element
// class Node
// {

// public:
//  string name;
//  list<string>nbrs;
//  Node(string n) {
//      name = n;
//  }

// };
// class GraphString
// {
//  unordered_map<string, Node*>mp;
// public:
//  GraphString(vector<string>arr) {
//      for (auto i : arr) {
//          mp[i] = new Node(i);
//      }
//  }
//  void addEdge(string x, string y, bool undir = false) {
//      mp[x]->nbrs.push_back(y);
//      if (undir) {
//          mp[y]->nbrs.push_back(x);
//      }
//  }
//  void printAdjList() {
//      for (auto it : mp) {
//          auto city = it.first;
//          cout << city << "-->";
//          Node *node = it.second;
//          for (auto nbr : node->nbrs) {
//              cout << nbr << ",";
//          }
//          cout << nl;
//      }
//  }

// };
// class GraphInt
// {
//  int V;
//  list<int>*l;
// public:
//  GraphInt(int v) {
//      this->V = v;
//      l = new list<int>[V];
//  }
//  void addEdge(int i, int j, bool undir = true) {
//      l[i].push_back(j);
//      if (undir) {
//          l[j].push_back(i);
//      }
//  }
//  void printAdjList() {
//      for (int i = 0; i < V; i++) {
//          cout << i << "-->";
//          for (auto node : l[i]) {
//              cout << node << ",";
//          }
//          cout << nl;
//      }
//  }
//  void bfs(int source) {
//      queue<int>q;
//      bool *visited = new bool[V] {0};
//      q.push(source);
//      visited[source] = true;
//      while (!q.empty()) {
//          int f = q.front();
//          cout << f << " ";
//          q.pop();
//          for (auto node : l[f]) {
//              if (!visited[node]) {
//                  q.push(node);
//                  visited[node] = true;
//              }
//          }
//      }

//  }

//  vector<int>ans;
//  void dfsHelper(int node, bool *visited) {
//      ans.push_back(node);
//      visited[node] = true;
//      for (int nbr : l[node]) {
//          if (!visited[nbr]) {
//              dfsHelper(nbr, visited);
//          }
//      }
//      return;
//  }
//  vector<int> dfs(int source) {
//      bool *visited = new bool[V] {0};
//      dfsHelper(source, visited);
//  }

// };


// string factorial(int n)
// {
//     int res[MAX];

//     res[0] = 1;
//     int res_size = 1;

//     for (int x = 2; x <= n; x++)
//     {
//         res_size = multiply(x, res, res_size);
//     }

//     // cout << "Factorial of given number is \n";
//     string finalRes = "";
//     for (int i = res_size - 1; i >= 0; i--) {
//         finalRes += to_string(res[i]);
//     }
//     return finalRes;
// }


// bool primeFactors(int n, int l, int r, bool notFound)
// {
//  for (int i = l; i <= r; i++)
//  {
//      if (i == 1)
//          i++;
//      if (n % i == 0)
//      {
//          cout << i << " ";
//          notFound = false;
//      }
//      while (n % i == 0)
//      {
//          n = n / i;
//      }
//  }
//  return notFound;
// }
// bool IsInBinarySequence(ll number) {
//  ll numberToCheck = 1;
//  do {
//      if (number == numberToCheck) return true;
//      numberToCheck *= 2;
//  } while (numberToCheck <= number);
//  return false;
// }
// ll nextPowerOf2(ll n)
// {
//  if (n && !(n & (n - 1)))
//      return n;
//  ll cnt = 0;
//  while (n != 0)
//  {
//      n >>= 1;
//      cnt++;
//  }
//  ll x = 1;
//  x = x << cnt;
//  return x;
// }
// ll highestPowerof2(ll n)
// {
//  ll res = 0;
//  for (ll i = n; i >= 1; i--)
//  {
//      // If i is a power of 2
//      if ((i & (i - 1)) == 0)
//      {
//          res = i;
//          break;
//      }
//  }
//  return res;
// }

// vector<ll> first50fib1_1_2()
// {
//  vector<ll>v = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141 , 267914296 , 433494437 , 701408733 , 1134903170 , 1836311903 , 2971215073 , 4807526976 , 7778742049, 12586269025, 20365011074 };
//  return v;
// }
// void first50fib0_0_1()
// {
//  ll arr[51] = {0, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049};
// }
// ll fib(ll n) {
//  if (n == 1)
//      return 0;
//  if (n == 2)
//      return 1;
//  return fib(n - 1) + fib(n - 2);
// }
// ll binets_formula(ll n) {
//  double sqrt5 = sqrt(5);

//  int F_n = (pow((1 + sqrt5), n) - pow((1 - sqrt5), n)) / (pow(2, n) * sqrt5);

//  return F_n;
// }

// const int N = 1e7;
// bool prime[N + 3];
// vector<bool> checkPrime(10000, true);
// void Sieve() {

//     for (int p = 2; p * p <= 10000; p++) {
//         if (checkPrime[p]) {
//             for (int i = p * p; i <= 10000; i += p)
//                 checkPrime[i] = false;
//         }
//     }
// }

/*
// // void Sieve(int n) {
// //     memset(prime, true, sizeof(prime));
// //     prime[0] = prime[1] = false;
// //     for (int i = 2; i <= n; i++) {
// //         if (prime[i]) {
// //             for (int j = 2 * i; j <= n; j += i) {
// //                 prime[j] = false;
// //             }
// //         }
// //     }
// // }
// //  */

// // void firstLuckyto1e9()
// // {
// //     vector<ll>v = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447
// //                     , 7474, 7477, 7744, 7747, 7774, 7777, 44444, 44447, 44474, 44477, 44744, 44747, 44774, 44777, 47444, 47447, 47474, 47477
// //                     , 47744, 47747, 47774, 47777, 74444, 74447, 74474, 74477, 74744, 74747, 74774, 74777, 77444, 77447, 77474, 77477, 77744,
// //                     77747, 77774, 77777, 444444, 444447, 444474, 444477, 444744, 444747, 444774, 444777, 447444, 447447, 447474, 447477, 447744, 447747, 447774, 447777, 474444, 474447, 474474, 474477, 474744, 474747, 474774, 474777, 477444, 477447, 477474, 477477, 477744, 477747, 477774, 477777, 744444, 744447, 744474, 744477, 744744, 744747, 744774, 744777, 747444, 747447, 747474, 747477, 747744, 747747, 747774, 747777, 774444, 774447, 774474, 774477, 774744, 774747, 774774, 774777, 777444, 777447, 777474, 777477, 777744, 777747, 777774, 777777, 4444444, 4444447, 4444474, 4444477, 4444744, 4444747, 4444774, 4444777, 4447444, 4447447, 4447474, 4447477, 4447744, 4447747, 4447774, 4447777, 4474444, 4474447, 4474474, 4474477, 4474744, 4474747, 4474774, 4474777, 4477444, 4477447, 4477474, 4477477, 4477744, 4477747, 4477774, 4477777, 4744444, 4744447,
// //                     4744474, 4744477, 4744744, 4744747, 4744774, 4744777, 4747444, 4747447, 4747474, 4747477, 4747744, 4747747, 4747774, 4747777, 4774444, 4774447, 4774474, 4774477, 4774744, 4774747, 4774774, 4774777, 4777444, 4777447, 4777474, 4777477, 4777744, 4777747, 4777774, 4777777, 7444444, 7444447, 7444474, 7444477, 7444744, 7444747, 7444774, 7444777, 7447444, 7447447,
// //                     7447474, 7447477, 7447744, 7447747, 7447774, 7447777, 7474444, 7474447, 7474474, 7474477, 7474744, 7474747, 7474774, 7474777, 7477444, 7477447, 7477474, 7477477, 7477744, 7477747, 7477774, 7477777, 7744444, 7744447, 7744474, 7744477, 7744744, 7744747, 7744774, 7744777, 7747444, 7747447, 7747474, 7747477, 7747744, 7747747, 7747774, 7747777, 7774444, 7774447,
// //                     7774474, 7774477, 7774744, 7774747, 7774774, 7774777, 7777444, 7777447, 7777474, 7777477, 7777744, 7777747, 7777774, 7777777, 44444444, 44444447, 44444474, 44444477, 44444744, 44444747, 44444774, 44444777, 44447444, 44447447, 44447474, 44447477, 44447744, 44447747, 44447774, 44447777, 44474444, 44474447, 44474474, 44474477, 44474744, 44474747, 44474774, 44474777, 44477444, 44477447, 44477474, 44477477, 44477744, 44477747, 44477774, 44477777, 44744444, 44744447, 44744474, 44744477, 44744744, 44744747, 44744774, 44744777, 44747444, 44747447, 44747474, 44747477, 44747744, 44747747, 44747774, 44747777, 44774444, 44774447, 44774474, 44774477, 44774744, 44774747, 44774774, 44774777, 44777444, 44777447, 44777474, 44777477, 44777744, 44777747, 44777774, 44777777, 47444444, 47444447, 47444474, 47444477, 47444744, 47444747, 47444774, 47444777, 47447444, 47447447, 47447474, 47447477, 47447744, 47447747, 47447774, 47447777, 47474444, 47474447, 47474474, 47474477, 47474744, 47474747, 47474774, 47474777, 47477444, 47477447, 47477474, 47477477, 47477744, 47477747, 47477774, 47477777, 47744444, 47744447, 47744474, 47744477, 47744744, 47744747, 47744774, 47744777, 47747444, 47747447, 47747474, 47747477, 47747744, 47747747, 47747774, 47747777, 47774444, 47774447, 47774474, 47774477, 47774744, 47774747, 47774774, 47774777, 47777444, 47777447, 47777474, 47777477, 47777744, 47777747, 47777774, 47777777, 74444444, 74444447, 74444474, 74444477, 74444744, 74444747, 74444774, 74444777, 74447444, 74447447, 74447474, 74447477, 74447744, 74447747, 74447774, 74447777, 74474444, 74474447, 74474474, 74474477, 74474744, 74474747, 74474774, 74474777, 74477444, 74477447, 74477474, 74477477, 74477744, 74477747, 74477774, 74477777, 74744444, 74744447, 74744474, 74744477, 74744744, 74744747, 74744774, 74744777, 74747444, 74747447, 74747474, 74747477, 74747744, 74747747, 74747774, 74747777, 74774444, 74774447, 74774474, 74774477, 74774744, 74774747, 74774774, 74774777, 74777444, 74777447, 74777474, 74777477, 74777744, 74777747, 74777774, 74777777, 77444444, 77444447, 77444474, 77444477, 77444744, 77444747, 77444774, 77444777, 77447444, 77447447, 77447474, 77447477, 77447744, 77447747, 77447774, 77447777, 77474444, 77474447, 77474474, 77474477, 77474744, 77474747, 77474774, 77474777, 77477444, 77477447, 77477474, 77477477, 77477744, 77477747, 77477774, 77477777, 77744444, 77744447, 77744474, 77744477, 77744744, 77744747, 77744774, 77744777, 77747444, 77747447, 77747474, 77747477, 77747744, 77747747, 77747774, 77747777, 77774444, 77774447, 77774474, 77774477, 77774744, 77774747, 77774774, 77774777, 77777444, 77777447, 77777474, 77777477, 77777744, 77777747, 77777774, 77777777, 444444444, 444444447, 444444474, 444444477, 444444744, 444444747, 444444774, 444444777, 444447444, 444447447, 444447474, 444447477, 444447744, 444447747, 444447774, 444447777, 444474444, 444474447, 444474474, 444474477, 444474744, 444474747, 444474774, 444474777, 444477444, 444477447, 444477474, 444477477, 444477744, 444477747, 444477774, 444477777, 444744444, 444744447, 444744474, 444744477, 444744744, 444744747, 444744774, 444744777, 444747444, 444747447, 444747474, 444747477, 444747744, 444747747, 444747774, 444747777, 444774444, 444774447, 444774474, 444774477, 444774744, 444774747, 444774774, 444774777, 444777444, 444777447, 444777474, 444777477, 444777744, 444777747, 444777774, 444777777, 447444444, 447444447, 447444474, 447444477, 447444744, 447444747, 447444774, 447444777, 447447444, 447447447, 447447474, 447447477, 447447744, 447447747, 447447774, 447447777, 447474444, 447474447, 447474474, 447474477, 447474744, 447474747, 447474774, 447474777, 447477444, 447477447, 447477474, 447477477, 447477744, 447477747,447477774, 447477777, 447744444, 447744447, 447744474, 447744477, 447744744, 447744747, 447744774, 447744777, 447747444,447747447, 447747474, 447747477, 447747744, 447747747, 447747774, 447747777, 447774444, 447774447, 447774474, 447774477
// //                     , 447774744, 447774747, 447774774, 447774777, 447777444, 447777447, 447777474, 447777477, 447777744, 447777747, 447777774, 447777777, 474444444, 474444447, 474444474, 474444477, 474444744, 474444747, 474444774, 474444777, 474447444, 474447447, 474447474, 474447477, 474447744, 474447747, 474447774, 474447777, 474474444, 474474447, 474474474, 474474477, 474474744, 474474747, 474474774, 474474777, 474477444, 474477447, 474477474, 474477477, 474477744, 474477747, 474477774, 474477777, 474744444, 474744447, 474744474, 474744477, 474744744, 474744747, 474744774, 474744777, 474747444, 474747447, 474747474, 474747477, 474747744, 474747747, 474747774, 474747777, 474774444, 474774447, 474774474, 474774477, 474774744, 474774747, 474774774, 474774777, 474777444, 474777447, 474777474, 474777477, 474777744, 474777747, 474777774, 474777777, 477444444, 477444447, 477444474, 477444477, 477444744, 477444747, 477444774, 477444777, 477447444, 477447447, 477447474, 477447477, 477447744, 477447747, 477447774, 477447777, 477474444, 477474447, 477474474, 477474477, 477474744, 477474747,477474774, 477474777, 477477444, 477477447, 477477474, 477477477, 477477744, 477477747, 477477774, 477477777, 477744444,477744447, 477744474, 477744477, 477744744, 477744747, 477744774, 477744777, 477747444, 477747447, 477747474, 477747477
// //                     , 477747744, 477747747, 477747774, 477747777, 477774444, 477774447, 477774474, 477774477, 477774744, 477774747, 477774774, 477774777, 477777444, 477777447, 477777474, 477777477, 477777744, 477777747, 477777774, 477777777, 744444444, 744444447, 744444474, 744444477, 744444744, 744444747, 744444774, 744444777, 744447444, 744447447, 744447474, 744447477, 744447744, 744447747, 744447774, 744447777, 744474444, 744474447, 744474474, 744474477, 744474744, 744474747, 744474774, 744474777, 744477444, 744477447, 744477474, 744477477, 744477744, 744477747, 744477774, 744477777, 744744444, 744744447, 744744474, 744744477, 744744744, 744744747, 744744774, 744744777, 744747444, 744747447, 744747474, 744747477, 744747744, 744747747, 744747774, 744747777, 744774444, 744774447, 744774474, 744774477, 744774744, 744774747, 744774774, 744774777, 744777444, 744777447, 744777474, 744777477, 744777744, 744777747, 744777774, 744777777, 747444444, 747444447, 747444474, 747444477, 747444744, 747444747, 747444774, 747444777, 747447444, 747447447, 747447474, 747447477, 747447744, 747447747,747447774, 747447777, 747474444, 747474447, 747474474, 747474477, 747474744, 747474747, 747474774, 747474777, 747477444,747477447, 747477474, 747477477, 747477744, 747477747, 747477774, 747477777, 747744444, 747744447, 747744474, 747744477
// //                     , 747744744, 747744747, 747744774, 747744777, 747747444, 747747447, 747747474, 747747477, 747747744, 747747747, 747747774, 747747777, 747774444, 747774447, 747774474, 747774477, 747774744, 747774747, 747774774, 747774777, 747777444, 747777447, 747777474, 747777477, 747777744, 747777747, 747777774, 747777777, 774444444, 774444447, 774444474, 774444477, 774444744, 774444747, 774444774, 774444777, 774447444, 774447447, 774447474, 774447477, 774447744, 774447747, 774447774, 774447777, 774474444, 774474447, 774474474, 774474477, 774474744, 774474747, 774474774, 774474777, 774477444, 774477447, 774477474, 774477477, 774477744, 774477747, 774477774, 774477777, 774744444, 774744447, 774744474, 774744477, 774744744, 774744747, 774744774, 774744777, 774747444, 774747447, 774747474, 774747477, 774747744, 774747747, 774747774, 774747777, 774774444, 774774447, 774774474, 774774477, 774774744, 774774747, 774774774, 774774777, 774777444, 774777447, 774777474, 774777477, 774777744, 774777747, 774777774, 774777777, 777444444, 777444447, 777444474, 777444477, 777444744, 777444747,
// //                     777444774, 777444777, 777447444, 777447447, 777447474, 777447477, 777447744, 777447747, 777447774, 777447777, 777474444,
// //                     777474447, 777474474, 777474477, 777474744, 777474747, 777474774, 777474777, 777477444, 777477447, 777477474, 777477477
// //                     , 777477744, 777477747, 777477774, 777477777, 777744444, 777744447, 777744474, 777744477, 777744744, 777744747, 777744774, 777744777, 777747444, 777747447, 777747474, 777747477, 777747744, 777747747, 777747774, 777747777, 777774444, 777774447, 777774474, 777774477, 777774744, 777774747, 777774774, 777774777, 777777444, 777777447, 777777474, 777777477, 777777744, 777777747, 777777774, 777777777, 4444444444
// //                   };

// // }
// // void  luckyGenerator() {
// //     vector<ll> lucky;
// //     lucky.pb(0);
// //     int idx = 0;
// //     while (lucky.back() < 1e10) {
// //         lucky.push_back(((lucky[idx] * 10) + 4));
// //         lucky.push_back((lucky[idx] * 10) + 7);
// //         idx++;
// //     }
// // }
// // int binarySearch(int a[], int first, int last, int search_num) {
// //     int middle;
// //     if (last >= first) {
// //         middle = (first + last) / 2;
// //         //Checking if the element is present at middle loc
// //         if (a[middle] == search_num)
// //             return middle + 1;

// //             //Checking if the search element is present in greater half
// //         else if (a[middle] < search_num)
// //             return binarySearch(a, middle + 1, last, search_num);

// //             //Checking if the search element is present in lower half
// //         else
// //             return binarySearch(a, first, middle - 1, search_num);
// //     }
// //     return -1;
// // }
// // void factorize(long long n) {
// //     int count = 0;
// //     while (!(n % 2)) {
// //         n /= 2;
// //         count++;
// //     }
// //     if (count)
// //         cout << 2 << "^" << count << endl;
// //     for (long long i = 3; i <= sqrt(n); i += 2) {
// //         count = 0;
// //         while (n % i == 0) {
// //             count++;
// //             n = n / i;
// //         }
// //         if (count)
// //             cout << i << "^" << count << endl;
// //     }
// //     if (n > 2)
// //         cout << n << "^" << 1 << endl;
// // }
// // void primeFactors(ll num) {
// //     ll fac = 2;
// //     while (num > 1) {
// //         if (num % fac == 0) {
// //             cout << fac << " ";
// //             num /= fac;
// //             ll pow = 1;
// //             while (num % fac == 0) {
// //                 num /= fac;
// //                 pow++;
// //             }
// //             cout << pow << el;
// //         }
// //         else {
// //             fac++;
// //         }
// //     }
// // }
// // bool onePrimeFactor(ll num) {
// //     ll fac = 2;
// //     int cnt = 0;
// //     while (num > 1) {
// //         if (num % fac == 0) {
// //             cnt++;
// //             while (num % fac == 0)
// //                 num /= fac;
// //         } else
// //             fac++;
// //         if (cnt >= 2)
// //             return false;
// //     }
// //     return true;
// // }
// // bool isPerfect(ll d)
// // {
// //     double temp = d;
// //     d = sqrt(d);
// //     temp = sqrt(temp);
// //     if (temp == d)
// //         return true;
// //     return false;
// // }
// // void sort(string s[], int n)//sort string according to length
// // {
// //     for (int i = 1; i < n; i++)
// //     {
// //         string temp = s[i];
// //         int j = i - 1;
// //         while (j >= 0 && temp.length() < s[j].length())
// //         {
// //             s[j + 1] = s[j];
// //             j--;
// //         }
// //         s[j + 1] = temp;
// //     }
// // }
// // bool IsPowerOfTwo(ll x)
// // {
// //     return (x & (x - 1)) == 0;
// // }
// // int binarySearchCount(ll arr[], int n, ll key)
// // {
// //     int left = 0, right = n;

// //     int mid;
// //     while (left < right) {
// //         mid = (right + left) >> 1;

// //         if (arr[mid] == key) {
// //             while (mid + 1 < n && arr[mid + 1] == key)
// //                 mid++;
// //             break;
// //         }

// //         else if (arr[mid] > key)
// //             right = mid;

// //         else
// //             left = mid + 1;
// //     }

// //     while (mid > -1 && arr[mid] > key)
// //         mid--;

// //     return mid + 1;
// // }
// // int countOnesInBin(ll n) {
// //     int cnt = 0;
// //     while (n) {
// //         cnt += n & 1;
// //         n >>= 1;
// //     }
// //     return cnt;
// // }
// // string convertToBinary(ll x) {
// //     string s;
// //     while (x > 0) {
// //         if (x % 2)
// //             s += '1';
// //         else
// //             s += '0';
// //         x /= 2;
// //     }
// //     reverse(s.begin(), s.end());
// //     return s;
// // }
// // ll convertToDecimal(string s) {
// //     reverse(s.begin(), s.end());
// //     ll ans = 0;
// //     for (int i = 0; i < s.length(); i++) {
// //         if (s[i] == '1')
// //             ans += (1 << i);
// //     }
// //     return ans;
// // }
// // long long lcm(int a, int b)
// // {
// //     return (a / __gcd(a, b)) * b;
// // }
// // bool palindrome(string s) {
// //     for (int i = 0; i < s.length() / 2; i++) {
// //         if (s[i] != s[s.length() - i - 1])
// //             return false;
// //     }
// //     return true;
// // }
// // int sumOfDigits(ll n) {
// //     int sum = 0;
// //     string s = to_string(n);
// //     f(i, s.length())sum += s[i] - '0';
// //     return sum;
// // }
// // bool isUnique(ll x) {
// //     int size = log10(x) + 1;
// //     set<int> s;
// //     while (x > 0) {
// //         s.insert(x % 10);
// //         x /= 10;
// //     }
// //     if (s.size() == size)
// //         return true;
// //     else
// //         return false;
// // }
// // void subString(string s, int n) {
// //     for (int i = 0; i < n; i++)
// //         for (int len = 1; len <= n - i; len++)
// //             cout << s.substr(i, len) << el;
// // }

// // bool sortByVal(const pair<string, int> &a,
// //                const pair<string, int> &b)
// // {
// //     return (a.second > b.second);
// // }

// // ll Round(double n) {
// //     ll y = n;
// //     if (y == n)
// //         return y;
// //     else
// //         return y + 1;
// // }
// // bool isLetter(char x) {
// //     if (x >= 'A' && x <= 'Z')
// //         return true;
// //     else if (x >= 'a' && x <= 'z')
// //         return true;
// //     else
// //         return false;
// // }
// // int findLastIndex(string s, char x)
// // {
// //     int index = -1;
// //     for (int i = 0; i < s.length(); i++)
// //         if (s[i] == x)
// //             index = i;
// //     return index;
// // }
// // bool isVowel(char c) {
// //     c = tolower(c);
// //     if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y')
// //         return true;
// //     else
// //         return false;
// // }
// // bool isOdd(char c) {
// //     if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9')
// //         return true;
// //     else
// //         return false;
// // }
// // ll sum(ll n) {
// //     ll sum = (n * (n + 1)) / 2;
// //     return sum;
// // }
// // ll sumInRange(ll l , ll r) {
// //     ll ans = sum(r) - sum(l - 1);
// //     return ans;
// // }
// // bool sortedAsc(ll arr[],ll n) {
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] < arr[i-1])
// //             return false;
// //     }
// //     return true;
// // }
// // bool sortedDesc(ll arr[],ll n) {
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] > arr[i - 1])
// //             return false;
// //     }
// //     return true;
// // }
// // ll decimalDigitRoot(ll n) {
// //     return ((n - 1) % 9) + 1;
// // }
// // bool equal(char x , char y) {
// //     if (x == '.')
// //         return true;
// //     return x == y;
// // }
// // string add(string s , int n) {
// //     string temp = "";
// //     while (n--)
// //         temp += s;
// //     return temp;
// // }
// // bool regularBracketSequence(string s) {
// //     stack<char> s1;
// //     for (int i = 0; i < s.size(); i++) {
// //         if (s[i] == '(')
// //             s1.push('(');
// //         else {
// //             if (s1.empty())
// //                 return false;
// //             else
// //                 s1.pop();
// //         }
// //     }
// //     return s1.empty();
// // }
// // ll sumDigits(ll n)
// // {
// //     ll rem = 0;
// //     while (n)
// //     {
// //         rem += n % 10;
// //         n /= 10;
// //     }
// //     return rem;
// // }
// // bool sortedA(vector<int> arr,int n)
// // {
// //     for (int i = 1; i < n; i++)
// //         if (arr[i] < arr[i - 1])
// //             return false;
// //     return true;
// // }
// // bool sortedD(vector<int> arr,int n)
// // {
// //     for (int i = 1; i < n; i++)
// //         if (arr[i] > arr[i - 1])
// //             return false;
// //     return true;
// // }

// // //int ans[N];
// // /*
// // vector<int>adjList[N];
// // int dfs(int node,int parent) {
// //     visited[node] = true;
// //     for (auto adjNode : adjList[node]) {
// //         if (!visited[adjNode]) {
// //             group.pb(adjNode);
// //             dfs(adjNode, node);
// //         }
// //         else if (visited[adjNode] && adjNode != parent)
// //             return 1;
// //     }
// //     return 0;
// // }
// //  */
// // /*
// // void bfs(int node) {
// //     queue<int> q;
// //     q.push(node);
// //     visited[node] = 1;
// //     while (!q.empty()) {
// //         group.pb(q.front());
// //         for (auto adjNode : adjList[q.front()])
// //             if (!visited[adjNode])
// //                 q.push(adjNode), visited[adjNode] = 1;
// //         q.pop();
// //     }
// // }

// // void dijkstra(int source, vector<vector<pair<int,int>>>&graph) {
// //     int n = graph.size();
// //     vector<int> dist(n, inf), pre(n, -1);
// //     // cost , node
// //     priority_queue<pair<int, int>> nextToVisit;

// //     dist[source] = 0;
// //     pre[source] = source;
// //     nextToVisit.push({0, source});

// //     while (!nextToVisit.empty()) {
// //         int u = nextToVisit.top().second;
// //         nextToVisit.pop();
// //         if (visited[u])continue;
// //         visited[u] = 1;
// //         for (auto e : graph[u]) {
// //             int v = e.first;
// //             int c = e.second;
// //             if (dist[u] + c < dist[v]) {
// //                 dist[v] = dist[u] + c;
// //                 pre[v] = u;
// //                 nextToVisit.push({-dist[v], v});
// //             }
// //         }
// //     }
// // }
// // */
// // string onlyAlphaString(string s) {
// //     string temp = "";
// //     for (int i = 0; i < s.size(); i++)
// //         if (isalpha(s[i]))temp += tolower(s[i]);
// //     return temp;
// // }
// // int computeXOR(ll a) {
// //     if (a % 4 == 0) return a;
// //     else if (a % 4 == 1) return 1;
// //     else if (a % 4 == 2) return a + 1;
// //     else return 0;
// // }
// // void sort3(int& a, int& b, int& c) {
// //     if (a > b)swap(a, b);
// //     if (b > c)swap(b, c);
// //     if (a > b)swap(a, b);
// // }
// // int lis(vector<int>&a) {
// //     int n = a.size();
// //     vector<int> dp(n, 1);
// //     for (int i = 0; i < n; i++)
// //         for (int j = 0; j < i; j++)
// //             if (a[j] < a[i])dp[i] = max(dp[i], dp[j] + 1);
// //     int ans = dp[0];
// //     for (int i = 1; i < n; i++)ans = max(ans, dp[i]);
// //     return ans;
// // }
// // bool oneCharacterString(string s) {
// //     vasort(s);
// //     return s[0] == s[s.size() - 1];
// // }

// // ll nPr(ll n , ll r) {
// //     ll fact = 1;
// //     while (r--) {
// //         fact *= n;
// //         n--;
// //     }
// //     return fact;
// // }
// bool sortbysec(const pair<int, int> &a,
//                const pair<int, int> &b)
// {
//  return (a.second >= b.second);
// }
// // ll mod_mul(ll a, ll b, ll m) {
// //     a = a % m;
// //     b = b % m;
// //     return (((a * b) % m) + m) % m;
// // }
// // ll getFact(ll n){
// //     if(n==0 or n==1){
// //         return 1;
// //     }
// //     ll f=1;
// //     for(ll i=1;i<=n;i++){
// //         f*=i;
// //     }
// //     return f;
// // }
// // ll getNumber(ll n){
// //     ll sum=1;
// //     while(n>0){
// //         ll v = getFact(n%10);
// //         sum*=getFact(n%10);
// //         n/=10;
// //     }

// //     return sum;
// // }
// // vector<int> factors;
// // void primeFactors(ll n)
// // {

// //     while (n % 2 == 0)
// //     {
// //         factors.push_back(2);
// //         n = n/2;
// //     }


// //     for (ll i = 3; i <= sqrt(n); i = i + 2)
// //     {

// //         while (n % i == 0)
// //         {
// //             factors.push_back(i);
// //             n = n/i;
// //         }
// //     }


// //     if (n > 2)
// //         factors.push_back(n);
// // }
// // string ch[10]={"","","2","3","223","5","53","7","7222","7332"};
// // taskkill -im test.exe -f
// // think simple
// // string rev(string s,ll l, ll r){
// //     while(l<r){
// //         swap(s[l],s[r]);
// //         l++;
// //         r--;
// //     }
// //     return s;

// // }
// // void addEdge(vector<int> adj[], int u, int v)
// // {
// //     adj[u].push_back(v);
// //     adj[v].push_back(u);
// // }
// // void printGraph(vector<int> adj[], int V)
// // {
// //     for (int v = 0; v < V; ++v) {
// //         cout << "\n"<< v;
// //         for (auto x : adj[v])
// //             cout << "-> " << x;
// //         printf("\n");
// //     }
// // }
// // bool areBracketsBalanced(string expr)
// // {
// //     stack<char> s;
// //     char x;

// //     // Traversing the Expression
// //     for (int i = 0; i < expr.length(); i++)
// //     {
// //         if (expr[i] == '(' || expr[i] == '['
// //             || expr[i] == '{')
// //         {
// //             // Push the element in the stack
// //             s.push(expr[i]);
// //             continue;
// //         }

// //         // IF current current character is not opening
// //         // bracket, then it must be closing. So stack
// //         // cannot be empty at this point.
// //         if (s.empty())
// //             return false;

// //         switch (expr[i]) {
// //         case ')':

// //             // Store the top element in a
// //             x = s.top();
// //             s.pop();
// //             if (x == '{' || x == '[')
// //                 return false;
// //             break;

// //         case '}':

// //             // Store the top element in b
// //             x = s.top();
// //             s.pop();
// //             if (x == '(' || x == '[')
// //                 return false;
// //             break;

// //         case ']':

// //             // Store the top element in c
// //             x = s.top();
// //             s.pop();
// //             if (x == '(' || x == '{')
// //                 return false;
// //             break;
// //         }
// //     }

// //     // Check Empty Stack
// //     return (s.empty());
// // }
// // const int N=1e5+10;

// int stringtoint(string s)
// {
//  stringstream geek(s);
//  int x = 0;
//  geek >> x;
//  return x;
// }
// string inttostring(float n)
// {
//  ostringstream str;
//  str << n;
//  string geek = str.str();
//  return geek;
// }
// ll n,w;
// ll value[N],weight[N];
// ll dp[101][100000];
// ll func(ll value[],ll weight[],ll w,ll n){
//     if(n==0 or w==0){
//         return 0;
//     }
//     if(dp[n][w]!=-1){
//         return dp[n][w];
//     }
//     if(weight[n-1]<=w){
//         return dp[n][w]=max(value[n-1]+func(value,weight,w-weight[n-1],n-1),func(value,weight,w,n-1));
//     }
//     else{
//         return dp[n][w]=func(value,weight,w,n-1);
//     }

// }
// void display1d(vector<int>a)
// {
//  for (auto i : a)
//  {
//      cout << i << " ";
//  }
//  cout << endl;
// }
// void display2d(vector<vector<int>> arr)
// {
//  for (int i = 0; i < arr.size(); i++)
//  {
//      for (int j = 0; j < arr[i].size(); j++)
//      {
//          cout << arr[i][j] << " ";
//      }
//      cout << nl;
//  }
//  // cout << nl;
// }
// string chartostring(char a)
// {
//     stringstream stream;
//     stream << a;
//     string str;
//     stream >> str;
//     return str;
// }

// ll lcm(ll a, ll b)
// {
//     return a/__gcd(a,b)*b;
// }


// int getminidex(vector<int> arr)
// {
//     int minindex=-1,minvalue=INT_MAX;
//     for(int i=0; i<arr.size(); i++)
//     {
//         if(arr[i]<minvalue)
//         {
//             minvalue=arr[i];
//             minindex=i;
//         }
//     }
//     return minindex;
// }


// bool isPalindrome(string s)
// {
//     int n = s.size();
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (s[i] == s[n - 1 - i])
//         {
//             continue;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int countBits(int n) {
//     int cnt = 0;
//     while (n > 0) {
//         n /= 2;
//         cnt++;
//     }
//     return cnt;
// }

// // Function to find the possible
// // permutations
// void permutations(vector<vector<int> >& res,
//                   vector<int> nums, int l, int h)
// {
//     // Base case
//     // Add the vector to result and return
//     if (l == h) {
//         res.push_back(nums);
//         return;
//     }

//     // Permutations made
//     for (int i = l; i <= h; i++) {

//         // Swapping
//         swap(nums[l], nums[i]);

//         // Calling permutations for
//         // next greater value of l
//         permutations(res, nums, l + 1, h);

//         // Backtracking
//         swap(nums[l], nums[i]);
//     }
// }

// // Function to get the permutations
// vector<vector<int> > permute(vector<int>& nums)
// {
//     // Declaring result variable
//     vector<vector<int> > res;
//     int x = nums.size() - 1;

//     // Calling permutations for the first
//     // time by passing l
//     // as 0 and h = nums.size()-1
//     permutations(res, nums, 0, x);
//     return res;
// }

// bool prime[MAX + 1];
// void SieveOfEratosthenes()
// {
//     memset(prime, true, sizeof(prime));

//     prime[1] = false;

//     for (int p = 2; p * p <= MAX; p++) {


//         if (prime[p] == true) {
//             for (int i = p * 2; i <= MAX; i += p)
//                 prime[i] = false;
//         }
//     }
// }

// bool isPrime(int n)
// {

//     if (n <= 1) {
//         return false;
//     }
//     if (n <= 3) {
//         return true;
//     }


//     if (n % 2 == 0 || n % 3 == 0) {
//         return false;
//     }

//     for (int i = 5; i * i <= n; i = i + 6) {
//         if (n % i == 0 || n % (i + 2) == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// vector<int> getDivisors(int n) {
//     vector<int>ans;
//     set<int>st;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {

//             if (n / i == i)
//                 st.insert(i);

//             else {
//                 st.insert(i);
//                 st.insert(n / i);
//             }
//         }
//     }
//     for (auto it : st) {
//         ans.push_back(it);
//     }
//     return ans;
// }
// bool isPerfect(long long int n)
// {

//     long long int sum = 1;


//     for (long long int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             if (i * i != n)
//                 sum = sum + i + n / i;
//             else
//                 sum = sum + i;
//         }
//     }

//     if (sum == n && n != 1)
//         return true;

//     return false;
// }
// bool isVowel(char x)
// {
//     return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
// }


// int maxPrime = 0;
// void primeFactors(int n)
// {
//     vector<int>ans;
//     int c = 2;
//     while (n > 1)
//     {
//         if (n % c == 0) {
//             // cout << c << nl;
//             maxPrime = max(maxPrime, c);
//             n /= c;
//         }
//         else c++;
//     }
//     // return ans;
// }
// ll gcd(ll a, ll  b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// ll lcm(ll a, ll b)
// {
//     return (a / gcd(a, b)) * b;
// }


// int countSetBits(ll n)
// {
//     int count = 0;
//     while (n) {
//         n &= (n - 1);
//         count++;
//     }
//     return count;
// }
// int dirx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
// int diry[8] = { -1, -1, 0, 1, 1, 1, 0, -1};

// int find(int node, vector<int>&parent) {
//     if (node != parent[node]) {
//         parent[node] = find(parent[node], parent);
//     }
//     return parent[node];
// }
// void unionNode(int x, int y, vector<int>&parent, vector<int>&rank) {
//     int s1 = find(x, parent);
//     int s2 = find(y, parent);
//     if (s1 != s2) {
//         if (rank[s1] < rank[s2]) {
//             parent[s1] = s2;
//             rank[s2] += rank[s1];
//         }
//         else {
//             parent[s2] = s1;
//             rank[s1] += rank[s2];
//         }
//     }
// }





// factorial[1]=1;
//    for(int j=2;j<=1000000;j++){
//          factorial[j]=j*factorial[j-1];
//          factorial[j]%=1000000000+7;
//    }


// void fillParent(vector<int>&parent, int n) {
//     for (int i = 0; i < n; i++) {
//         parent[i] = i;
//     }
// }
// void updateParent(vector<int>&parent, int n) {
//     for (int i = 0; i < n; i++) {
//         parent[i] = find(parent[i], parent);
//     }
// }
// int solve(int idx, int amount, vector<int>&coins) {
//     if (idx >= coins.size()) {
//         if (amount == 0) {
//             return 0;
//         }
//     }
//     if (amount == 0) {
//         return 0;
//     }
//     int take = 0, notTake = 0;
//     if (amount >= coins[idx]) {
//         take = 1 + solve(idx + 1, amount - coins[idx], coins);
//     }
//     else {
//         notTake = solve(idx + 1, amount, coins);
//     }
//     return max(take, notTake);
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("inp.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     // cout << "Running Time: " << 1.0 * clock() / CLOCKS_PER_SEC << " s .\n";
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t = 1;
//     // cin >> t;
//     for (int tt = 0; tt < t; tt++) {
//         int n, a, b, c;
//         cin >> n >> a >> b >> c;
//         int f[10010];
//         f[0] = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             f[i] = -10000;
//             if (i >= a) f[i] = f[i - a] + 1;
//             if ((i >= b) && (f[i - b] + 1 > f[i])) f[i] = f[i - b] + 1;
//             if ((i >= c) && (f[i - c] + 1 > f[i])) f[i] = f[i - c] + 1;
//         }
//         cout << f[n] << endl;
//     }
//     return 0;
// }










// #include <bits/stdc++.h>
// #include <math.h>
// #include <unordered_map>
// #include <unordered_set>
// #include <tuple>

// #define io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define PB push_back
// #define MP make_pair
// #define REP(i,a,b) for (ll i = a; i < b; i++)
// #define enl "\n"
// #define INF std::numeric_limits<ll>::max()
// #define F first
// #define S second

// using namespace std;

// typedef long long int ll;
// typedef unsigned long long int ull;
// typedef long double ldb;
// typedef vector<long long> vll;
// typedef pair<long long,long long> pll;

// ll greatestSubarraySum(ll array[], ll n);
// ll binarySearch(vll arr, ll l, ll r, ll x);
// ll modpower(ll x, ll y, ll p);
// ll power(ll x, ll y);
// ll gcd(ll a, ll b);
// ll lcm(ll a, ll b);
// ll search(ll arr[], ll n, ll k);
// string findSum(string str1, string str2);
// ll extendedGcd(ll a, ll b, ll & x, ll & y);
// bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g);
// ll countSetBits(ll n);
// void primeFactors(ll n, map<ll,ll>& arr2, ll k, ll& flaggy);
// void matrixMultiply(ll a[3][3], ll b[3][3]);
// void matrixPower(ll F[7][7], ll n);
// ll sumSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r);
// vll squareRootDecompositionSumArray(ll arr[], ll n);
// ll minSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r);
// ll maxSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r);
// vll squareRootDecompositionMinArray(ll arr[], ll n);
// vll squareRootDecompositionMaxArray(ll arr[], ll n);
// void updateSquareRootDecompositionMinArray(ll arr[], vll &helper, ll n, ll i, ll x);
// void updateSquareRootDecompositionMaxArray(ll arr[], vll &helper, ll n, ll i, ll x);
// void updateSquareRootDecompositionSumArray(ll arr[], vll &helper, ll n, ll i, ll x);
// void dfs(ll i, set<ll> arr[], ll visited[]);
// void uni(ll x, ll y, ll par[], ll size[]);
// ll find(ll x, ll par[], ll size[]);
// ll modulo( ll value, ll m);
// class FenwickTree;
// void pairsort(ll a[], ll b[], ll n);
// ll max(ll a, ll b);
// ll min(ll a, ll b);
// ll modInverse(ll a, ll m);
// ll modsum(ll a, ll b, ll m);
// ll modmul(ll a, ll b, ll m);
// string reverseOfString(string s);
// ll nCrMod(ll n, ll r, ll mod);
// vll kmpArray(string s);


// #define MAXI 998244353


// ll fact[1000000];




// int main(){

//     io

//     ll q=1;
//     // cin>>q;
//     REP(currentIndex,0,q){

//         ll n;
//         cin>>n;
//         ll arr[n+1];
//         arr[0]=0;

//         vll arr2;
//         vll weight;

//         arr2.PB(0);
//         weight.PB(0);

//         ll compatible[n+1];

//         stack<ll> help;

//         REP(i,1,n+1){

//             cin>>arr[i];


//         }


//         sort(arr+1,arr+1+n);

//         REP(i,1,n+1){

//             if(arr[i]!=arr2[arr2.size()-1]){arr2.PB(arr[i]);weight.PB(arr[i]);}
//             else weight[weight.size()-1]+=arr[i];



//         }


//         REP(i,1,arr2.size()){




//             ll count=1;
//             if(help.empty())help.push(arr2[i]);
//             else {

//                 while(!help.empty() && help.top()==arr2[i]-1){

//                     help.pop();
//                     count++;

//                 }

//                 help.push(arr2[i]);

//             }

//             compatible[i]=i-count;

//         }


//         ll ans[arr2.size()];
//         ans[0]=0;
//         REP(i,1,arr2.size()){

//             ans[i]=max(weight[i]+ans[compatible[i]], ans[i-1]);


//         }




//         cout<<ans[arr2.size()-1]<<endl;


//     }





// }


// vll kmpArray(string s){

//     vll arr(s.length(), 0);

//     REP(i,1,s.length()){

//         ll len=arr[i-1];
//         while(len>0 && s[len]!=s[i])len=arr[len-1];
//         if(s[len]==s[i])len++;
//         arr[i]=len;



//     }

//     return arr;



// }



// ll nCrMod(ll n, ll r, ll mod){

//     return (fact[n]* modInverse(fact[r], mod) % mod * modInverse(fact[n-r], mod) % mod) % mod;

// }

// void SieveOfEratosthenes(ll n, bool isPrime[])
// {

//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 2; i <= n; i++)
//         isPrime[i] = true;

//     for (ll p = 2; p * p <= n; p++) {


//         if (isPrime[p] == true) {

//             for (ll i = p * 2; i <= n; i += p)
//                 isPrime[i] = false;
//         }
//     }
// }

// string reverseOfString(string s){

//     string t;
//     REP(i,0,s.length()){

//         t+=s[s.length()-i-1];

//     }

//     return t;

// }

// class FenwickTree{

// private:
//     ll n;

//     ll h(ll i){return (i|(i+1));}
//     ll g(ll i){return (i&(i+1));}



// public:

//     ll *sumtree;
//     ll *mainArray;

//     FenwickTree(ll n){

//         this->n=n;
//         mainArray = (ll*)malloc(n*sizeof(ll));
//         sumtree = (ll*)calloc(n, sizeof(ll));

//     }



//     void addElementAtIndex(ll i, ll x){
//         mainArray[i]=x;
//         update(i,x);
//     }

//     void update(ll i, ll delta){

//         for(ll j=i; j<n; j=h(j)){
//             sumtree[j]+=delta;

//         }

//     }

//     ll sum(ll i, ll j){

//         ll sum1=0, sum2=0;
//         ll i1=i,j1=j;
//         while(j>=0){
//             sum1+=sumtree[j];
//             j=g(j)-1;
//         }
//         while(i>=0){
//             sum2+=sumtree[i];
//             i=g(i)-1;
//         }
//         return sum1-sum2+mainArray[i1];

//     }


// };

// ll modsum(ll a, ll b, ll m){

//     return ((a%m)+(b%m))%m;

// }

// ll modmul(ll a, ll b, ll m){

//     return ((a%m)*(b%m))%m;


// }

// ll modInverse(ll a, ll m)
// {

//     return modpower(a, m-2, m);

// }

// ll max(ll a, ll b){

//     if(a>b)return a;
//     else return b;
// }

// ll min(ll a, ll b){

//     if(a<b)return a;
//     return b;

// }


// void pairsort(ll a[], ll b[], ll n)
// {
//     pair<ll, ll> pairt[n];


//     for (ll i = 0; i < n; i++)
//     {
//         pairt[i].first = a[i];
//         pairt[i].second = b[i];
//     }

//     sort(pairt, pairt + n);

//     for (ll i = 0; i < n; i++)
//     {
//         a[i] = pairt[i].first;
//         b[i] = pairt[i].second;
//     }
// }

// ll extendedGcd(ll a, ll b, ll & x, ll & y) {
//     if (a == 0) {
//         x = 0;
//         y = 1;
//         return b;
//     }
//     ll x1, y1;
//     ll d = extendedGcd(b % a, a, x1, y1);
//     x = y1 - (b / a) * x1;
//     y = x1;
//     return d;
// }

// bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
//     g = extendedGcd(abs(a), abs(b), x0, y0);
//     if (c % g) {
//         return false;
//     }

//     x0 *= c / g;
//     y0 *= c / g;
//     if (a < 0) x0 = -x0;
//     if (b < 0) y0 = -y0;
//     return true;
// }


// string findSum(string str1, string str2)
// {

//     if (str1.length() > str2.length()) {
//         string s = str1;
//         str1=str2;
//         str2=s;
//     }


//     string str = "";


//     int n1 = str1.length(), n2 = str2.length();


//     reverse(str1.begin(), str1.end());
//     reverse(str2.begin(), str2.end());

//     int carry = 0;
//     for (int i=0; i<n1; i++)
//     {

//         int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');

//         carry = sum/10;
//     }

//     // Add remaining digits of larger number
//     for (int i=n1; i<n2; i++)
//     {
//         int sum = ((str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');
//         carry = sum/10;
//     }

//     // Add remaining carry
//     if (carry)
//         str.push_back(carry+'0');

//     // reverse resultant string
//     reverse(str.begin(), str.end());

//     return str;
// }



// ll binarySearch(vll arr, ll l, ll r, ll x)
// {
//     if (r >= l) {
//         ll mid = l + (r - l) / 2;

//         // If the element is present at the middle
//         // itself
//         if (arr[mid] == x)
//             return mid;

//         // If element is smaller than mid, then
//         // it can only be present in left subarray
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);

//         // Else the element can only be present
//         // in right subarray
//         return binarySearch(arr, mid + 1, r, x);
//     }

//     // We reach here when element is not
//     // present in array
//     return -1;
// }

// ll greatestSubarraySum(ll array[], ll n){

//     ll best = 0, sum = 0;
//     for (ll k = 0; k < n; k++) {
//         sum = max(array[k],sum+array[k]);
//         best = max(best,sum);
//     }

//     return best;
// }

// ll modpower(ll x, ll y, ll p)
// {
//     ll res = 1;      // Initialize result

//     x = x % p;  // Update x if it is more than or
//                 // equal to p

//     while (y > 0)
//     {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;

//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }


// ll gcd(ll a, ll b)
// {
//     if (a == 0)
//         return b;

//     return gcd(b%a, a);
// }

// ll lcm(ll a, ll b)
// {
//     return (a*b)/gcd(a, b);
// }


// ll power(ll x, ll y)
// {
//     ll temp;
//     if( y == 0)
//         return 1;
//     temp = power(x, y/2);
//     if (y%2 == 0)
//         return temp*temp;
//     else
//         return x*temp*temp;
// }

// ll modulo( ll value, ll m) {
//     ll mod = value % m;
//     if (value < 0) {
//         mod += m;
//     }
//     return mod;
// }

// ll find(ll x, ll par[], ll size[]){

//     if(x==par[x])return x;
//     else return par[x]=find(par[x],par, size);

// }

// void uni(ll x, ll y, ll par[], ll size[]){

//     x=find(x,par,size);
//     y=find(y,par,size);

//     if(size[x]>size[y])swap(x,y);

//     par[x]=y;
//     size[y]+=size[x];


// }

// void dfs(ll i, set<ll> arr[], ll visited[]){

//     if(visited[i])return;

//     cout<<(char)('a'+i);

//     visited[i]=1;

//     for(auto u:arr[i])dfs(u, arr, visited);


// }


// ll countSetBits(ll n)
// {
//     ll count = 0;
//     while (n) {
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }


// ll flag2;


// void primeFactors(ll n, map<ll,ll>& arr2, ll k, ll& flaggy)
// {
//     ll count=0;

//     ll flag=0;

//     while (n % 2 == 0)
//     {
//         n = n/2;
//         count++;
//     }

//     if(count%k != 0){

//         flag=1;

//         arr2[2]=count%k;

//     }
//     count=0;

//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         while (n % i == 0)
//         {
//             n = n/i;
//             count++;
//         }


//         if(count%k!=0){

//             flag=1;
//             arr2[i]=count%k;

//         }

//         count=0;
//     }

//     if (n > 2)
//         {
//             if(1%k!=0){

//                 flag=1;
//                 arr2[n]=1%k;

//             }
//         }

//         if(flag==0){flag2++;flaggy=1;}

// }

// void matrixMultiply(ll* a[], ll *b[], ll n)
// {

//     ll mul[n][n];
//     for (ll i = 0; i < n; i++)
//     {
//         for (ll j = 0; j < n; j++)
//         {
//             mul[i][j] = 0;
//             for (ll k = 0; k < n; k++)
//                 mul[i][j] += a[i][k]*b[k][j];
//         }
//     }

//     for (int i=0; i<n; i++)
//         for (int j=0; j<n; j++)
//             a[i][j] = mul[i][j];
// }

// void matrixPower(ll **F, ll n, ll k)
// {

//     if(n==1)return;

//     ll **M = (ll **)malloc(k*sizeof(ll *));


//     REP(i,0,k){
//         M[i]=(ll *)malloc(k*sizeof(ll));
//         REP(j,0,k){
//             M[i][j]=F[i][j];
//         }
//     }


//     matrixPower(F, n/2, k);

//     matrixMultiply(F, F, k);

//     if (n%2 != 0)
//         matrixMultiply(F, M,k);

// }

// vll squareRootDecompositionMinArray(ll arr[], ll n){

//     ll k=(ll)ceil(sqrt(n));
//     vll helper(k,INF);

//     REP(i,0,n)helper[i/k]=min(helper[i/k],arr[i]);

//     return helper;


// }
// vll squareRootDecompositionMaxArray(ll arr[], ll n){

//     ll k=(ll)ceil(sqrt(n));
//     vll helper(k,-INF);

//     REP(i,0,n)helper[i/k]=max(helper[i/k],arr[i]);

//     return helper;


// }

// ll minSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r){

//     ll k=(ll)ceil(sqrt(n));

//     ll a=l/k;
//     ll b=r/k;

//     ll min1=INF;

//     if(a==b){

//         REP(i,l,r+1)min1=min(min1,arr[i]);

//         return min1;
//     }

//     REP(i,l,(a+1)*k)min1=min(min1,arr[i]);
//     REP(i,a+1,b)min1=min(min1,helper[i]);
//     REP(i,b*k,r+1)min1=min(min1,arr[i]);

//     return min1;


// }
// ll maxSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r){

//     ll k=(ll)ceil(sqrt(n));

//     ll a=l/k;
//     ll b=r/k;

//     ll min1=-INF;

//     if(a==b){

//         REP(i,l,r+1)min1=max(min1,arr[i]);

//         return min1;
//     }

//     REP(i,l,(a+1)*k)min1=max(min1,arr[i]);
//     REP(i,a+1,b)min1=max(min1,helper[i]);
//     REP(i,b*k,r+1)min1=max(min1,arr[i]);

//     return min1;


// }

// vll squareRootDecompositionSumArray(ll arr[], ll n){

//     ll k=(ll)ceil(sqrt(n));

//     //preprocessed array

//     vll helper(k,0);

//     //preprocessing

//     REP(i,0,n)helper[i/k]+=arr[i];

//     return helper;


// }

// void updateSquareRootDecompositionSumArray(ll arr[], vll &helper, ll n, ll i, ll x){

//     ll k=(ll)ceil(sqrt(n));
//     ll delta=x-arr[i];
//     arr[i]=x;
//     helper[i/k]+=delta;

// }

// void updateSquareRootDecompositionMinArray(ll arr[], vll &helper, ll n, ll i, ll x){

//     ll k=(ll)ceil(sqrt(n));
//     if(helper[i/k]==arr[i]){

//         if(x<arr[i])helper[i/k]=arr[i];
//         else{

//             ll min1=INF;
//             REP(j,i/k*k,(i/k+1)*k)min1=min(min1,arr[j]);
//             helper[i/k]=min1;

//         }

//     } else{

//         helper[i/k]=min(helper[i/k],x);
//     }


//     arr[i]=x;


// }
// void updateSquareRootDecompositionMaxArray(ll arr[], vll &helper, ll n, ll i, ll x){

//     ll k=(ll)ceil(sqrt(n));
//     if(helper[i/k]==arr[i]){

//         if(x<arr[i])helper[i/k]=arr[i];
//         else{

//             ll min1=-INF;
//             REP(j,i/k*k,(i/k+1)*k)min1=max(min1,arr[j]);
//             helper[i/k]=min1;

//         }

//     } else{

//         helper[i/k]=max(helper[i/k],x);
//     }


//     arr[i]=x;


// }

// ll sumSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r){

//     ll k=(ll)ceil(sqrt(n));

//     ll a=l/k;
//     ll b=r/k;

//     ll sum=0;

//     if(a==b){

//         REP(i,l,r+1)sum+=arr[i];

//         return sum;

//     }

//     REP(i,l,(a+1)*k){sum+=arr[i];}
//     REP(i,b*k,r+1)sum+=arr[i];
//     REP(i,a+1,b)sum+=helper[i];

//     return sum;

// }



// /*
// ।। जय श्री राम ।।
// ।। जय हनुमान ।।
// */

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> osetint;
// typedef map<long long, long long> mll;
// typedef unordered_map<long long, long long> umll;
// typedef vector<long long> vi;
// typedef vector<char> vc;
// typedef vector<long long> vll;
// typedef vector<vector<long long>> vvi;
// typedef vector<string> vs;
// typedef pair<long long, long long> pii;
// typedef pair<long long, string> pic;
// typedef pair<string, long long > pci;
// typedef vector<pair<long long, long long>> vpii;
// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double        lld;
// #define db(x) debug(x);
// #define check1 cout<<"YES"<<endl;
// #define check2 cout<<"NO"<<endl;
// #define check3 cout<<-1<<endl;
// #define int long long
// #define ff first
// #define ss second
// #define pb push_back
// #define mp make_pair
// #define pob pop_back
// #define findorder find_by_order
// #define orderkey order_of_key
// #define um unordered_map
// #define CHK 1e-9
// #define endl '\n'
// #define all(x) x.begin(), x.end()
// #define reverse(v) reverse(all(v));
// #define sorted(v) sort(v.begin(), v.end())
// #define reversesort(v) sort(v.begin(), v.end(),greater<int>())
// #define zerobefore(x) __builtin_clz(x)
// #define zeroafter(x) __builtin_ctz(x)
// #define ones(x) __builtin_popcount(x)
// #define parity(x) __builtin_parity(x)
// #define sz(x) x.size()
// #define len(x) x.length()
// #define prDouble(x)     cout << fixed << setprecision(9) << x
// #define goog(tno)       cout << "Case #" << tno <<": "
// #define fast_io         ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define elasped_time   1.0 * clock() / CLOCKS_PER_SEC
// #define dfor(i,a,b) for(long long  i=a;i<b;i++)
// #define dforr(i,a,b) for(long long  i=a;i>=b;i--)
// #define rep(i,a,b)      for(int (i) = (a); (i) <= (b); (i)++)
// #define rev(i,a,b)      for(int (i) = (a); (i) >= (b); (i)--)
// int mod = 1e9 + 7;
// #define gcd(a,b)       __gcd(a,b)
// #define mem1(a)        memset(a,-1,sizeof(a))
// #define mem0(a)        memset(a,0,sizeof(a))
// //NEXT PERMUTATION next_permutation(all(v))
// // MAX ELEMENT
// #define maxele(v) *max_element(all(v))
// // MIN ELEMENT
// #define minele(v) *min_element(all(v))
// int sumarr(vi v) {int sum = 0; for (auto x : v) sum += x; return sum ;}
// int maxarr(vi v) {int mx = INT_MIN; for (auto x : v) mx = max(x, mx); return mx;}
// int minarr(vi v) {int mn = INT_MAX; for (auto x : v) mn = min(x, mn); return mn;}
// #define fauto(arr,x) for(auto x:arr)
// //UNIQUE ELEMENTS IN A ARRAY/VECTOR
// //v.erase(unique(all(v)), v.end());
// #define sc ' '
// #define input(arr, n)            \
//     for (int i = 0; i < n; i++) \
//     {                           \
//         ll x;                   \
//         cin >> x;               \
//         arr.pb(x);              \
//     }

// #define sumall(arr,sum)                                      \
//     for (auto x:arr)                                    \
//     {                                                   \
//         sum+=x;                                           \
//     }                                                   \


// #define print(arr)                                      \
//     for (auto x:arr)                                    \
//     {                                                   \
//         cout << x << ' ' ;                              \
//     }                                                   \
//     cout << endl;
// // printf("%.6llf\n", ans);


// #define inputpair(arr, n)                   \
//     for(int i=0;i<n;i++){                   \
//         int a;                              \
//         int b;                              \
//         cin >> a >> b;                      \
//         arr.push_back(make_pair(a, b));       \
//         }                                   \


// #define printpair(arr)                                  \
//     for (auto x:arr)                                    \
//     {                                                   \
//         cout << x.first << ' '<< x.second<< endl ;      \
//     }                                                   \
//     cout << endl;

// // const int N = 1e7 + 10;
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// #else
// #define debug(x);
// #endif

// void init_code() {
//     fast_io;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("error.txt", "w", stderr);
// #endif
// }

// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// /*-------------------------------------------------------------------------------------------------------------------------------*/
// // Sieve of Eratosthenes Alogrithm
// int N = 1000000; //90000000;
// vector<bool>is_prime(N + 1, true); // use bool because it consumes less memory than integer so their will be no memory issues
// void sieve() { is_prime[0] = is_prime[1] = false; for (int i = 2; i <= N; i++) { if (is_prime[i] && (long long)i * i <= N) { for (int j = i * i; j <= N; j += i) is_prime[j] = false;} } }
// // It will generate all possible lucky numbers(digits containing only 4 and 7)
// vector<int> luckynumber;
// void bruteluckynumber(long long num) { luckynumber.pb(num); if (num > 1000000000) return; bruteluckynumber(num * 10 + 4); bruteluckynumber(num * 10 + 7);}
// // Calculating a^b for large number in O(logn) using binary exponentiation
// int modular_expo(int a, int b) { a = a % mod; int res = 1; while (b > 0) { if (b % 2) { res = res * a % mod; b--;} else { a = a * a % mod; b /= 2;}} return res;}
// // This is also called as Matrix exponentiation using it we can find matrix A^n in just O(logn) time
// #define Num 101// depend on the value of dim we have to just take slightly greater than dim
// int A[Num][Num], Res[Num][Num], A2[Num][Num]; // Now don't declare matrix A and Res again in void solve()
// void matrix_multiplication(int a[][Num], int b[][Num], int dim) {int c[dim][dim]; rep(i, 0, dim - 1) {rep(j, 0, dim - 1) { c[i][j] = 0; rep(k, 0, dim - 1) { c[i][j] += (a[i][k] % mod * b[k][j] % mod) % mod;}}} rep(i, 0, dim - 1) rep(j, 0, dim - 1) a[i][j] = c[i][j] % mod;}
// void Matrix_expo(int a[][Num], int dim, int n) {rep(i, 0, dim - 1) rep(j, 0, dim - 1) {if (i == j) Res[i][j] = 1; else Res[i][j] = 0;} while (n > 0) {if (n % 2) {matrix_multiplication(Res, a, dim); n--;} else {matrix_multiplication(a, a, dim); n /= 2;}} rep(i, 0, dim - 1) rep(j, 0, dim - 1) a[i][j] = Res[i][j] % mod;}
// // For getting index of any element in O(logn)
// int binarySearch(vector<int> &arr, int low, int high, int key) { if (low <= high) { int mid = low + (high - low) / 2; if (arr[mid] == key) return mid; if (arr[mid] > key) return binarySearch(arr, low, mid - 1, key); else return binarySearch(arr, mid + 1, high, key);} else return -1;}
// // For getting index of element such that the key value is not greater than that element value present in that array i.e {1 2 3 6} and key=4 so it will return the index of last element that is i=3(zero indexing)
// int binarySearchLargestElementsindex(vector<int> &arr, int low, int high, int key) { int mid = low + (high - low) / 2; if (low <= high) { if (arr[mid] == key) { return mid;} else if (arr[mid] > key) { return binarySearchLargestElementsindex(arr, low, mid - 1, key);} else { return binarySearchLargestElementsindex(arr, mid + 1, high, key); }} return mid;}
// // Returns number of elements smaller than or equal to key value
// int binarySearchnumberofSmallestequalElements(vector<int>&arr, int l, int h, int key) { int mid = l + (h - l) / 2; if (l <= h) { if (arr[mid] > key) {h = mid - 1; return binarySearchnumberofSmallestequalElements(arr, l, h, key);} else {l = mid + 1; return binarySearchnumberofSmallestequalElements(arr, l, h, key);}} else {mid -= 1;/* this is to decrease the increased value of l that when condition get false we haven't adjusted l before itself*/} return mid;}
// // This will check if n is power of 2 or not in O(1)
// bool is_powerof2(int n) { if (n < 0 || n == 1) return false; if ((n & (n - 1)) == 0) return true; else return false; }
// // This function will return a set consisting of all the distinct possible factors of a number n in O(sqrt(n))
// void factors(set<int>&st, int n) { rep(i, 2, sqrt(n)) { if (n % i == 0) { st.insert(i); st.insert(n / i);} } return ; }
// // Returns set of prime factor of a number
// void primefactors(set<int>&st, int n) { rep(i, 2, sqrt(n)) { int cnt = 0; while (n % i == 0) { cnt++; n = n / i; st.insert(i);} } if (n > 1) { st.insert(n);} return ;}
// // It is only applicable for array like 1 2 3 4 5.... where arr[i]=i.So this array would help us in reodering of array such that arr[i]!=i for any i
// void unorder_array(int arr[], int n) { rep(i, 0, n - 2) { swap(arr[i], arr[i + 1]); i++; } if (n % 2) { swap(arr[n - 2], arr[n - 1]); } return ;}
// // To calculate factorial
// int factorial(int n) {if (n == 1) return 1; return n % mod * factorial(n - 1) % mod;}
// // To take the array input
// void read(int arr[], int n) {rep(i, 0, n - 1) { cin >> arr[i];}}
// void readvec(vector<int> &arr) {for (auto &it : arr) {cin >> it;}}
// // void print(vector<int> &arr) {for (auto it : arr) {cout << it << " ";}}
// // To take modulo of a number
// int modulo(int num) {int ans; if (num >= 0) {ans = num % mod;} else {ans = ((num % mod) == 0 ? 0 : num % mod + mod);} return ans;}
// // Returns lcm of more then two number or lcm of whole array
// int LcmOfArray(vector<int> &arr, int index) {if (index == arr.size() - 1) {return arr[index];} int a = arr[index]; int b = LcmOfArray(arr, index + 1); return (a * b / __gcd(a, b)); }
// // Returns whether the permutation vector is completely in sorted order or not
// bool is_permutationsorted(vector<int> &arr, int n) { rep(i, 0, n - 1) {if (i + 1 != arr[i]) {return false;}} return true; }
// // Sorting the vector of pairs in in ascending order with respect to second element
// bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {if (a.second == b.second) return (a.first < b.first); else return (a.second < b.second);}
// // Checks whether a character is present or not in the string
// bool is_char_present(string str, char ch) {size_t found = str.find_first_of(ch); if (found != string::npos) return true; else return false;}
// // upper_bound(all(arr),key)-arr.begin() : when we require no. of elements smaller or equal to key are asked
// // lower_bound(all(arr),key)-arr.begin() : when we require no. of elements strictly smaller than key are asked
// /*-------------------------------------------------------------------------------------------------------------------------------*/

// int n, m, x,y,z, k, l,a,b;
// const int NMAX = 200005;

// void solve() {
//     int one = 0, zer = 0,sum = 0, ans = 0;;
//     string s;
//     ${2:}

//     cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";

// }




// int32_t main()
// {
//     init_code();
//     sieve();
//     bruteluckynumber(0); sort(all(luckynumber)); luckynumber.resize(unique(all(luckynumber)) - luckynumber.begin());

//     int testcase = 1;
//     cin >> testcase;${1:}
//     while (testcase--) {
//         solve();
//     }
//     return 0;
// }





////python code
// # creating an empty list
// a=int(input())
// for i in range(a):

//     lst = []

//     n ,k= map(int,input().split())
//     lst = list(map(int, input().split()))

//     a=1;
//     for i in range(0, n):
//         a*=lst[i];
//     if(a%k==0):
//         print("YES")

//     else:
//         print("NO")





// // priority_queue <int> p;
//   priority_queue< int, vector<int>, greater<int> > p;
//   p.push(1);
//   p.push(4);
//   p.push(6);
//   p.push(-6);
//   // vi v(8, 0);
//   while (!p.empty()) {
//       cout << p.top() << endl;
//       p.pop();
//   }






// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> osetint;
// typedef map<long long, long long> mll;
// typedef unordered_map<long long, long long> umll;
// typedef vector<long long> vi;
// typedef vector<char> vc;
// typedef vector<long long> vll;
// typedef vector<vector<long long>> vvi;
// typedef vector<string> vs;
// typedef pair<long long, long long> pii;
// typedef pair<long long, string> pic;
// typedef pair<string, long long > pci;
// typedef vector<pair<long long, long long>> vpii;
// typedef long long ll;
// #define check1 cout<<"YES"<<endl;
// #define check2 cout<<"NO"<<endl;
// #define check3 cout<<"yes3"<<endl;
// #define int long long
// #define ff first
// #define ss second
// #define pb push_back
// #define mp make_pair
// #define pob pop_back
// #define findorder find_by_order
// #define orderkey order_of_key
// #define um unordered_map
// #define CHK 1e-9
// #define endl '\n'
// #define all(x) x.begin(), x.end()
// #define reverse(v) reverse(all(v));
// #define sorted(v) sort(v.begin(), v.end())
// #define reversesort(v) sort(v.begin(), v.end(),greater<int>())
// #define zerobefore(x) __builtin_clz(x)
// #define zeroafter(x) __builtin_ctz(x)
// #define ones(x) __builtin_popcount(x)
// #define parity(x) __builtin_parity(x)
// #define elasped_time   1.0 * clock() / CLOCKS_PER_SEC
// #define dfor(i,a,b) for(long long  i=a;i<b;i++)
// #define dforr(i,a,b) for(long long  i=a;i>=b;i--)
// int mod = 1e9 + 7;
// #define gcd(a,b)       __gcd(a,b)
// #define mem1(a)        memset(a,-1,sizeof(a))
// #define mem0(a)        memset(a,0,sizeof(a))
// //NEXT PERMUTATION next_permutation(all(v))
// //MAX ELEMENT int maxi=*max_element(all(v))
// //MIN ELEMENT int mini=*min_element(all(v))
// #define input(arr, n)            \
//     for (int i = 0; i < n; i++) \
//     {                           \
//         ll x;                   \
//         cin >> x;               \
//         arr.pb(x);              \
//     }

// #define print(arr)                                      \
//     for (auto x:arr)                                    \
//     {                                                   \
//         cout << x << ' ' ;                              \
//     }                                                   \
//     cout << endl;


// #define inputpair(arr, n)                   \
//     for(int i=0;i<n;i++){                   \
//         int a;                              \
//         int b;                              \
//         cin >> a >> b;                      \
//         arr.push_back(make_pair(a, b));       \
//         }                                   \


// #define printpair(arr)                                  \
//     for (auto x:arr)                                    \
//     {                                                   \
//         cout << x.first << ' '<< x.second<< endl ;      \
//     }                                                   \
//     cout << endl;

// const int N = 1e7 + 10;
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
// #else
// #define debug(x);
// #endif
// void _print(int x) {cerr << x;}
// void _print(char x) {cerr << x;}
// void _print(string x) {cerr << x;}
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// template<class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
// template<class T>void _print(vector<T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template<class T>void _print(set<T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template<class T>void _print(multiset<T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template<class T, class V>void _print(map<T, V> v) {cerr << " [ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
// typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> ordered_pset;

// int MOD = 1e9 + 7;

// vector<bool> primesieve(N, 1);
// //NEXT PERMUTATION next_permutation(all(v))
// //MAX ELEMENT int maxi=*max_element(all(v))
// //MIN ELEMENT int mini=*min_element(all(v))


// ll binpow(ll a, ll b, ll MOD) {
//  ll ans = 1;
//  a %= MOD;
//  while (b) {
//      if (b & 1)
//          ans = (ans * a) % MOD;
//      b /= 2;
//      a = (a * a) % MOD;
//  }
//  return ans;
// }
// ll inverse(ll a, ll MOD) {
//  return binpow(a, MOD - 2, MOD);
// }



// template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template<class T> using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// long long nCr(int n, int r)
// {
//  if (n == r)    return 1;
//  else if (r == 0)  return 1;
//  else return ((nCr(n - 1, r - 1) + nCr(n - 1, r)) % MOD);
// }
// ll sdigit(ll x)
// {
//  ll ans = 0;
//  while (x)
//  {
//      ans += x % 10;
//      x /= 10;
//  }
//  return ans;
// }

// long long lcm(int a, int b)
// {
//  return ((long long)a * (long long)b) / __gcd(a, b);
// }


// bool sortbysec(const pair<int, int> &a,
//                const pair<int, int> &b)
// {
//  return (a.second < b.second);
// }


// bool static compare(vector<int> a, vector<int> b) {
//  if (a[1] == b[1]) {
//      return a[0] < b[0];
//  }
//  return a[1] > b[1];
// }

// bool sortbysecdec(const pii &v1, const pii &v2)
// {
//  if (v1.second != v2.second)
//      return v1.second > v2.second;
//  return v1.first < v2.first;
// }

// bool sortbyff(const pii &v1, const pii &v2)
// {
//  return (v1.first < v2.first);
// }



// int gcd( int a, int b) {
//  if (b == 0) return a;
//  return gcd(b, a % b);
// }




// int bsearch(vector<int> &arr, int target) {
//  //ELEMENT INDEXING (FROM 1), ELSE 0 CAN USE AS BOOL ALSO
//  int low = 0;
//  int hi = arr.size() - 1;
//  while (hi - low > 1) {
//      int mid = (low + hi) / 2;
//      if (arr[mid] < target) {
//          low = mid + 1;
//      }
//      else {
//          hi = mid;
//      }

//  }
//  if (arr[low] == target) {
//      return low + 1;
//  }
//  else if (arr[hi] == target) {
//      return hi + 1;
//  }
//  else {
//      return 0;
//  }
// }

// ll abs(ll a, ll b)
// {
//  if (a > b)
//      return a - b;
//  else
//      return b - a;
// }


// int zerofact(int n) {
//  int ans = 0;
//  for (int i = 5; i <= n; i = i * 5) {
//      ans = ans + (n / i);
//  }
//  return ans;
// }

// bool isprime(ll n)
// {
//  for (ll j = 2; j * j <= n; j++)
//  {
//      if (n % j == 0)
//      {
//          return false;
//      }
//  }
//  return true;
// }
// vi sieve(int n) {
//  vi ans(n + 1, 1);
//  ans[0] = 0;
//  ans[1] = 0;
//  for (int i = 2; i * i <= n; i++) {
//      for (int j = 2 * i; j <= n; j += i) {
//          ans[j] = 0;
//      }
//  }
//  return ans;
// }

// int pow(int a, int b) {
//  int ans = 1;
//  while (b > 0) {
//      if (b & 1) {
//          ans = ans * a;
//      }
//      a = a * a;
//      b = b >> 1;

//  }
//  return ans;

// }
// int powmod(int a, int b) {
//  a = a % mod;
//  int ans = 1;
//  while (b > 0) {
//      if (b & 1) {
//          ans = (ans * a) % mod;
//      }
//      a = (a * a) % mod;
//      b = b >> 1;

//  }
//  return ans;

// }

// void solve() {
//  int n, k, x, y, z;
//  int a, b, c, p, q, r;
//  int sum = 0, sum1 = 0, sum2 = 0;
//  int count = 0, c1 = 0, c2 = 0;
//  int mul = 1, mul1 = 1, div = 1, div1 = 1;
//  vi v, vv, vvv;
//  string s, ss;
//  char ch, ch1;
//  umll m;
//  set<int> set;




//  cerr << "Time:" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";




// }


// void fastc() {
//  ios_base::sync_with_stdio(0);
//  cin.tie(0);
//  cout.tie(0);
// #ifndef ONLINE_JUDGE

//  // For getting input from input.txt fileb
//  freopen("input.txt", "r", stdin);

//  // Printing the Output to output.txt file
//  freopen("output.txt", "w", stdout);
//  freopen("error.txt", "w", stderr);


// #endif
// }
// int32_t main()
// {
//  fastc();
//  primesieve[0] = false;
//  primesieve[1] = false;
//  for (int i = 2; i < N; ++i) {
//      if (primesieve[i] == true) {
//          for (int j = 2 * i; j < N; j = j + i) {
//              primesieve[j] = false;

//          }
//      }
//  }


//  int testcase = 1;
//  cin >> testcase;
//  while (testcase--) {
//      solve();
//  }



//  return 0;
// }


//SLECTION SORT


// int x;
// cin >> x;
// vi a;
// input(a, x);
// for (int i = 0; i < x; i++)
// {
//  int mini = i;
//  for (int j = i + 1; j < x; j++) {
//      if ((a[j]) < a[mini]) {
//          mini = j;
//      }
//  }
//  swap(a[i], a[mini]);

// }
// print(a);





// BINARY SEARCH

// int binarysearch(int arr[], int n, int k) {
//  int hi ;
// int low;
//  int mid;
//  low=0;
//  hi=n-1;
//  while(low<=hi){
//      mid=(low+hi)/2;
//      if(arr[mid]==k) return mid;
//      if(k>arr[mid]) low=mid+1;
//      else if(k<arr[mid]) hi=mid-1;

//  }
//  return -1;
// }



//SEARCH ELEMENT K BINARY SEARCH


//  int searchInsertK(vector<int>arr, int n, int k)
// {
//     // code here
//             int hi ;
//     int low;
//      int mid;
//      low=0;
//      hi=n-1;
//      int ans=0;
//      if(k>arr[n-1]) return n;
//      if(k<arr[0]) return 0;
//      while(low<=hi){
//          mid=(low+hi)/2;
//          if(arr[mid]==k) return mid;
//          if(k>arr[mid]){ low=mid+1;
//             //  ans=mid;
//             if(arr[mid]>k){
//                 ans=mid;
//             }
//             else{
//                 ans=mid+1;
//             }
//          }
//          else if(k<arr[mid]){

//           hi=mid-1;

//             if(arr[mid]>k){
//                 ans=mid;
//             }
//             else{
//                 ans=mid+1;
//             }
//          }

//      }
//      return ans;
// }

// int n;
// cin >> n;
// vpii v;
// inputpair(v, n);
// printpair(v);








////            SORT BY DESENDING MULTIPELE

/*



#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> osetint;
typedef map<long long, long long> mll;
typedef unordered_map<long long, long long> umll;
typedef vector<long long> vi;
typedef vector<char> vc;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvi;
typedef vector<string> vs;
typedef pair<long long, long long> pii;
typedef pair<long long, string> pic;
typedef pair<string, long long > pci;
typedef vector<pair<long long, long long>> vpii;
typedef long long ll;
#define check1 cout<<"yes1"<<endl;
#define check2 cout<<"yes2"<<endl;
#define check3 cout<<"yes3"<<endl;
#define int long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pob pop_back()
#define findorder find_by_order
#define orderkey order_of_key
#define um unordered_map
#define CHK 1e-9
#define endl '\n'
#define all(x) x.begin(), x.end()
#define reverse(v) reverse(all(v));
#define sorted(v) sort(v.begin(), v.end())
#define reversesort(v) sort(v.begin(), v.end(),greater<int>())
#define zerobefore(x) __builtin_clz(x)
#define zeroafter(x) __builtin_ctz(x)
#define ones(x) __builtin_popcount(x)
#define parity(x) __builtin_parity(x)
#define dfor(i,a,b) for(long long  i=a;i<b;i++)
int mod = 1e9 + 7;
//NEXT PERMUTATION next_permutation(all(v))
//MAX ELEMENT int maxi=*max_element(all(v))
//MIN ELEMENT int mini=*min_element(all(v))
#define input(arr, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        ll x;                   \
        cin >> x;               \
        arr.pb(x);              \
    }

#define print(arr)                                      \
    for (auto x:arr)                                    \
    {                                                   \
        cout << x << ' ' ;                              \
    }                                                   \
    cout << endl;


#define inputpair(arr, n)                   \
    for(int i=0;i<n;i++){                   \
        int a;                              \
        int b;                              \
        cin >> a >> b;                      \
        v.push_back(make_pair(a, b));       \
        }                                   \


#define printpair(arr)                                  \
    for (auto x:arr)                                    \
    {                                                   \
        cout << x.first << ' '<< x.second<< endl ;      \
    }                                                   \
    cout << endl;





const int N = 1e7 + 10;
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T> using omset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


bool sortbysecdec(const pii &v1, const pii &v2)
{
    if (v1.second != v2.second)
        return v1.second > v2.second;
    return v1.first < v2.first;
}



void solve() {
    int  a, b, c, d, n, k, l, x, y, z;
    vi v, vvv;
    vpii vv;
    cin >> n;
    input(v, n);
    umll m;
    set<int> s;
    dfor(i, 0, n) {
        m[v[i]]++;
        // s.insert(m[v[i]);
    }
    for (auto v : m) {
        vv.pb(mp(v.ff, v.ss));
    }
    sort(vv.begin(), vv.end(), sortbysecdec);
    dfor(i, 0, vv.size()) {
        dfor(p, 0, vv[i].ss) {
            cout << vv[i].ff << " ";
        }
    }
    // sorted(vvv);
    // print(vvv);
    cout << endl;





}





int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE

    // For getting input from input.txt fileb
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif

    int testcase = 1;
    cin >> testcase;
    while (testcase--) {
        solve();
    }



    return 0;
}






































/////           STRING INT
string numtostring(ll n)
{
    return bitset<31>(n).to_string();
}

unsigned long stringtonum(string s)
{
    return bitset<31>(s).to_ulong();
}


*/
//****************************Template Begins****************************//

// Header Files
// #include<bits/stdc++.h>
// #include<iostream>
// #include<iomanip>
// #include<algorithm>
// #include<vector>
// #include<utility>
// #include<set>
// #include<unordered_set>
// #include<list>
// #include<iterator>
// #include<deque>
// #include<queue>
// #include<stack>
// #include<set>
// #include<bitset>
// #include<random>
// #include<map>
// #include<unordered_map>
// #include<stdio.h>
// #include<complex>
// #include<math.h>
// #include<cstring>
// #include<chrono>
// #include<string>
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// // Header Files End

// using namespace std;
// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;

// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// // find_by_order(k)  returns iterator to kth element starting from 0;
// // order_of_key(k) returns count of elements strictly smaller than k;
// template <class T>
// using ordered_set =
//     tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// template <class T>
// istream &operator>>(istream &stream, vector<T> &v) {
//  for (int i = 0; i < (int)v.size(); i++) stream >> v[i];
//  return stream;
// }
// template <class T1, class T2>
// istream &operator>>(istream &stream, pair<T1, T2> &p) {
//  return stream >> p.first >> p.second;
// }
// template <class T>
// ostream &operator<<(ostream &stream, const vector<T> &v) {
//  for (int i = 0; i < (int)v.size(); i++) stream << v[i] << ' ';
//  stream << '\n';
//  return stream;
// }
// template <class T1, class T2>
// ostream &operator<<(ostream &stream, const pair<T1, T2> &pair) {
//  return stream << pair.first << ' ' << pair.second;
// }

// #define sn ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define ll long long
// #define umap unordered_map
// #define uset unordered_set
// #define lb lower_bound
// #define ub upper_bound
// #define all(v) (v).begin(),(v).end()
// #define all1(v) (v).begin()+1,(v).end()
// #define allr(v) (v).rbegin(),(v).rend()
// #define allr1(v) (v).rbegin()+1,(v).rend()
// #define sortall(v) sort(all(v))
// typedef pair<int, int> pii;
// typedef vector<int> vi;
// typedef vector<ll> vll;
// typedef pair<ll, ll> pll;
// #define sz(x) (ll)x.size()
// #define pb push_back
// #define ppb pop_back
// #define mkp make_pair
// #define inf 1000000000000000005
// #define f first
// #define s second
// #define py cout<<"YES"<<endl
// #define pn cout<<"NO"<<endl
// #define mod 1000000007
// template<typename T, typename T1>T amax(T &a, T1 b) {if (b > a)a = b; return a;}
// template<typename T, typename T1>T amin(T &a, T1 b) {if (b < a)a = b; return a;}

// ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

// ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

// ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

// ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

// ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

// ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

// ll binpow(ll a, ll b) {if (b == 0) {return 1;} ll res = binpow(a, b / 2); if (b % 2) {return res * res * a;} else {return res * res;}}

// //---Check---//
// ll highestPowerof2(ll n) { ll p = (ll)log2(n);   return (ll)pow(2, p);}
// bool isPowerOfTwo(int n) { if (n == 0)   return false;   return (ceil(log2(n)) == floor(log2(n)));}
// bool isPerfectSquare(ll x) {if (x >= 0) {ll sr = sqrt(x); return (sr * sr == x);} return false;}
// bool isPrime(ll n) {if (n <= 1)return false; if (n <= 3)return true; if (n % 2 == 0 || n % 3 == 0)return false; for (int i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false; return true;}

// //---Compare---//
// bool comparator(const pair<ll, ll> &a, const pair<ll, ll> &b) {if (a.first != b.first) {return a.first < b.first;} return a.second > b.second;}

// //---Bits---//
// string decToBinary(int n) {string s = ""; int i = 0; while (n > 0) {s = to_string(n % 2) + s; n = n / 2; i++;} return s;}
// ll binaryToDecimal(string n) {string num = n; ll dec_value = 0; int base = 1; int len = num.length(); for (int i = len - 1; i >= 0; i--) {if (num[i] == '1')dec_value += base; base = base * 2;} return dec_value;}
// ll countSetBits(ll n) { ll count = 0;  while (n) { count += n & 1; n >>= 1;  }  return count;}


// //Do not use unordered_map in cp use map

// //---Miscellaneous---//
// string removeLeadingZeros(string str) {const regex pattern("^0+(?!$)"); str = regex_replace(str, pattern, ""); return str;}
// int countodd(vector<int>v) {int o = 0; for (int i = 0; i < v.size(); i++) {if (v[i] % 2) o++;} return o;}
// //****************************************************Template Ends*************************************************************************************************************************************************//
// void solve() {
//  int n; cin >> n;
//  vector<int>a(n);
//  cin >> a;
//  map<int, int>freq;
//  for (int i = 0; i < n; ++i) {
//      freq[a[i]]++;
//  }
//  int mx = *max_element(all(a));
//  int cnt = 0, mxcnt = 0;
//  for (auto x : freq) {
//      if (x.s == 1) cnt++;
//      mxcnt = max(mxcnt, x.s);
//  }
//  if (cnt & 1) {
//      if (mxcnt == 2 && freq[mx] == 1)cnt++;
//      cout << cnt / 2 + 1 << endl;
//  }
//  else cout << cnt / 2 << endl;
// }

// int main() {
//  sn;
// #ifndef ONLINE_JUDGE
//  // for getting input from input.txt
//  freopen("inputf.txt", "r", stdin);
//  // for writing output to output.txt
//  freopen("outputf.txt", "w", stdout);
// #endif
//  int t = 1; cin >> t;
//  while (t--) {
//      solve();
//  }
// }



















// #include<bits/stdc++.h>
// #include <sstream>
// #include <string>
// #include <cstdio>
// #include <iomanip>
// #include <math.h>
// #include <cmath>
// #include<list>
// using namespace std;
// int mod = 1e9 + 7;

// // typedef long long int ll;

// // // todo defines
// #define ll long long int
// #define nl "\n"
// #define all(v) v.begin(),v.end()
// #define MAX 100000
// #define rep(i,l,r) for(ll i=l;i<=r;i++)
// #define int                 long long
// // #define ld                  long double
// // #define f(i,n)              for(ll i=0;i<(n);i++)
// // #define f1(i,n)             for(ll i=1;i<=n;i++)
// // #define el                  "\n"
// // #define sq(a)               (a)*(a)
// // #define pb                  push_back
// // #define asort(a,n)          sort(a,a+n)
// // #define dsort(a,n)          sort(a,a+n,greater<>())
// // #define vasort(v)           sort(v.begin(), v.end());
// // #define vdsort(v)           sort(v.begin(), v.end(),greater<>());
// // #define cina(arr)           f(i,n) cin >> arr[i];
// // #define YES                 cout << "YES\n"
// // #define Yes                 cout << "Yes"<<el
// // #define yes                 cout << "yes"<<el
// // #define NO                  cout << "NO\n"
// // #define No                  cout << "No"<<el
// // #define no                  cout << "no"<<el
// // #define covid19             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// // #define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// // #define TC                  int t; cin >> t; while(t--)


// // // todo typedefs
// // typedef pair<int,int> pii;
// // typedef map<int,int>mii;
// // typedef vector<int>vi;
// // typedef vector<pii>vii;
// // typedef set<int> si;
// // typedef set<char> sc;


// // bool as_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {return (a.second < b.second); }//sort the vector pair in assending order according to second element
// // bool ds_first(const pair<ll,ll> &a, const pair<ll,ll> &b){ return (a.first > b.first);}//sort the vector pair in decending order according to first element
// // bool ds_second(const pair<string,int> &a, const pair<string,int> &b) {return a.second>b.second;}//sort the vector pair in decending order according to second element
// class Node
// {

// public:
//  string name;
//  list<string>nbrs;
//  Node(string n) {
//      name = n;
//  }

// };
// class GraphString
// {
//  unordered_map<string, Node*>mp;
// public:
//  GraphString(vector<string>arr) {
//      for (auto i : arr) {
//          mp[i] = new Node(i);
//      }
//  }
//  void addEdge(string x, string y, bool undir = false) {
//      mp[x]->nbrs.push_back(y);
//      if (undir) {
//          mp[y]->nbrs.push_back(x);
//      }
//  }
//  void printAdjList() {
//      for (auto it : mp) {
//          auto city = it.first;
//          cout << city << "-->";
//          Node *node = it.second;
//          for (auto nbr : node->nbrs) {
//              cout << nbr << ",";
//          }
//          cout << nl;
//      }
//  }

// };
// class GraphInt
// {
//  int V;
//  list<int>*l;
// public:
//  GraphInt(int v) {
//      this->V = v;
//      l = new list<int>[V];
//  }
//  void addEdge(int i, int j, bool undir = true) {
//      l[i].push_back(j);
//      if (undir) {
//          l[j].push_back(i);
//      }
//  }
//  void printAdjList() {
//      for (int i = 0; i < V; i++) {
//          cout << i << "-->";
//          for (auto node : l[i]) {
//              cout << node << ",";
//          }
//          cout << nl;
//      }
//  }
//  void bfs(int source) {
//      queue<int>q;
//      bool *visited = new bool[V] {0};
//      q.push(source);
//      visited[source] = true;
//      while (!q.empty()) {
//          int f = q.front();
//          cout << f << " ";
//          q.pop();
//          for (auto node : l[f]) {
//              if (!visited[node]) {
//                  q.push(node);
//                  visited[node] = true;
//              }
//          }
//      }

//  }

//  vector<int>ans;
//  void dfsHelper(int node, bool *visited) {
//      ans.push_back(node);
//      visited[node] = true;
//      for (int nbr : l[node]) {
//          if (!visited[nbr]) {
//              dfsHelper(nbr, visited);
//          }
//      }
//      return;
//  }
//  vector<int> dfs(int source) {
//      bool *visited = new bool[V] {0};
//      dfsHelper(source, visited);
//  }

// };


// string factorial(int n)
// {
//     int res[MAX];

//     res[0] = 1;
//     int res_size = 1;

//     for (int x = 2; x <= n; x++)
//     {
//         res_size = multiply(x, res, res_size);
//     }

//     // cout << "Factorial of given number is \n";
//     string finalRes = "";
//     for (int i = res_size - 1; i >= 0; i--) {
//         finalRes += to_string(res[i]);
//     }
//     return finalRes;
// }


// bool primeFactors(int n, int l, int r, bool notFound)
// {
//  for (int i = l; i <= r; i++)
//  {
//      if (i == 1)
//          i++;
//      if (n % i == 0)
//      {
//          cout << i << " ";
//          notFound = false;
//      }
//      while (n % i == 0)
//      {
//          n = n / i;
//      }
//  }
//  return notFound;
// }
// bool IsInBinarySequence(ll number) {
//  ll numberToCheck = 1;
//  do {
//      if (number == numberToCheck) return true;
//      numberToCheck *= 2;
//  } while (numberToCheck <= number);
//  return false;
// }
// ll nextPowerOf2(ll n)
// {
//  if (n && !(n & (n - 1)))
//      return n;
//  ll cnt = 0;
//  while (n != 0)
//  {
//      n >>= 1;
//      cnt++;
//  }
//  ll x = 1;
//  x = x << cnt;
//  return x;
// }
// ll highestPowerof2(ll n)
// {
//  ll res = 0;
//  for (ll i = n; i >= 1; i--)
//  {
//      // If i is a power of 2
//      if ((i & (i - 1)) == 0)
//      {
//          res = i;
//          break;
//      }
//  }
//  return res;
// }

// vector<ll> first50fib1_1_2()
// {
//  vector<ll>v = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141 , 267914296 , 433494437 , 701408733 , 1134903170 , 1836311903 , 2971215073 , 4807526976 , 7778742049, 12586269025, 20365011074 };
//  return v;
// }
// void first50fib0_0_1()
// {
//  ll arr[51] = {0, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049};
// }
// ll fib(ll n) {
//  if (n == 1)
//      return 0;
//  if (n == 2)
//      return 1;
//  return fib(n - 1) + fib(n - 2);
// }
// ll binets_formula(ll n) {
//  double sqrt5 = sqrt(5);

//  int F_n = (pow((1 + sqrt5), n) - pow((1 - sqrt5), n)) / (pow(2, n) * sqrt5);

//  return F_n;
// }

// const int N = 1e7;
// bool prime[N + 3];
// vector<bool> checkPrime(10000, true);
// void Sieve() {

//     for (int p = 2; p * p <= 10000; p++) {
//         if (checkPrime[p]) {
//             for (int i = p * p; i <= 10000; i += p)
//                 checkPrime[i] = false;
//         }
//     }
// }

/*
// // void Sieve(int n) {
// //     memset(prime, true, sizeof(prime));
// //     prime[0] = prime[1] = false;
// //     for (int i = 2; i <= n; i++) {
// //         if (prime[i]) {
// //             for (int j = 2 * i; j <= n; j += i) {
// //                 prime[j] = false;
// //             }
// //         }
// //     }
// // }
// //  */

// // void firstLuckyto1e9()
// // {
// //     vector<ll>v = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447
// //                     , 7474, 7477, 7744, 7747, 7774, 7777, 44444, 44447, 44474, 44477, 44744, 44747, 44774, 44777, 47444, 47447, 47474, 47477
// //                     , 47744, 47747, 47774, 47777, 74444, 74447, 74474, 74477, 74744, 74747, 74774, 74777, 77444, 77447, 77474, 77477, 77744,
// //                     77747, 77774, 77777, 444444, 444447, 444474, 444477, 444744, 444747, 444774, 444777, 447444, 447447, 447474, 447477, 447744, 447747, 447774, 447777, 474444, 474447, 474474, 474477, 474744, 474747, 474774, 474777, 477444, 477447, 477474, 477477, 477744, 477747, 477774, 477777, 744444, 744447, 744474, 744477, 744744, 744747, 744774, 744777, 747444, 747447, 747474, 747477, 747744, 747747, 747774, 747777, 774444, 774447, 774474, 774477, 774744, 774747, 774774, 774777, 777444, 777447, 777474, 777477, 777744, 777747, 777774, 777777, 4444444, 4444447, 4444474, 4444477, 4444744, 4444747, 4444774, 4444777, 4447444, 4447447, 4447474, 4447477, 4447744, 4447747, 4447774, 4447777, 4474444, 4474447, 4474474, 4474477, 4474744, 4474747, 4474774, 4474777, 4477444, 4477447, 4477474, 4477477, 4477744, 4477747, 4477774, 4477777, 4744444, 4744447,
// //                     4744474, 4744477, 4744744, 4744747, 4744774, 4744777, 4747444, 4747447, 4747474, 4747477, 4747744, 4747747, 4747774, 4747777, 4774444, 4774447, 4774474, 4774477, 4774744, 4774747, 4774774, 4774777, 4777444, 4777447, 4777474, 4777477, 4777744, 4777747, 4777774, 4777777, 7444444, 7444447, 7444474, 7444477, 7444744, 7444747, 7444774, 7444777, 7447444, 7447447,
// //                     7447474, 7447477, 7447744, 7447747, 7447774, 7447777, 7474444, 7474447, 7474474, 7474477, 7474744, 7474747, 7474774, 7474777, 7477444, 7477447, 7477474, 7477477, 7477744, 7477747, 7477774, 7477777, 7744444, 7744447, 7744474, 7744477, 7744744, 7744747, 7744774, 7744777, 7747444, 7747447, 7747474, 7747477, 7747744, 7747747, 7747774, 7747777, 7774444, 7774447,
// //                     7774474, 7774477, 7774744, 7774747, 7774774, 7774777, 7777444, 7777447, 7777474, 7777477, 7777744, 7777747, 7777774, 7777777, 44444444, 44444447, 44444474, 44444477, 44444744, 44444747, 44444774, 44444777, 44447444, 44447447, 44447474, 44447477, 44447744, 44447747, 44447774, 44447777, 44474444, 44474447, 44474474, 44474477, 44474744, 44474747, 44474774, 44474777, 44477444, 44477447, 44477474, 44477477, 44477744, 44477747, 44477774, 44477777, 44744444, 44744447, 44744474, 44744477, 44744744, 44744747, 44744774, 44744777, 44747444, 44747447, 44747474, 44747477, 44747744, 44747747, 44747774, 44747777, 44774444, 44774447, 44774474, 44774477, 44774744, 44774747, 44774774, 44774777, 44777444, 44777447, 44777474, 44777477, 44777744, 44777747, 44777774, 44777777, 47444444, 47444447, 47444474, 47444477, 47444744, 47444747, 47444774, 47444777, 47447444, 47447447, 47447474, 47447477, 47447744, 47447747, 47447774, 47447777, 47474444, 47474447, 47474474, 47474477, 47474744, 47474747, 47474774, 47474777, 47477444, 47477447, 47477474, 47477477, 47477744, 47477747, 47477774, 47477777, 47744444, 47744447, 47744474, 47744477, 47744744, 47744747, 47744774, 47744777, 47747444, 47747447, 47747474, 47747477, 47747744, 47747747, 47747774, 47747777, 47774444, 47774447, 47774474, 47774477, 47774744, 47774747, 47774774, 47774777, 47777444, 47777447, 47777474, 47777477, 47777744, 47777747, 47777774, 47777777, 74444444, 74444447, 74444474, 74444477, 74444744, 74444747, 74444774, 74444777, 74447444, 74447447, 74447474, 74447477, 74447744, 74447747, 74447774, 74447777, 74474444, 74474447, 74474474, 74474477, 74474744, 74474747, 74474774, 74474777, 74477444, 74477447, 74477474, 74477477, 74477744, 74477747, 74477774, 74477777, 74744444, 74744447, 74744474, 74744477, 74744744, 74744747, 74744774, 74744777, 74747444, 74747447, 74747474, 74747477, 74747744, 74747747, 74747774, 74747777, 74774444, 74774447, 74774474, 74774477, 74774744, 74774747, 74774774, 74774777, 74777444, 74777447, 74777474, 74777477, 74777744, 74777747, 74777774, 74777777, 77444444, 77444447, 77444474, 77444477, 77444744, 77444747, 77444774, 77444777, 77447444, 77447447, 77447474, 77447477, 77447744, 77447747, 77447774, 77447777, 77474444, 77474447, 77474474, 77474477, 77474744, 77474747, 77474774, 77474777, 77477444, 77477447, 77477474, 77477477, 77477744, 77477747, 77477774, 77477777, 77744444, 77744447, 77744474, 77744477, 77744744, 77744747, 77744774, 77744777, 77747444, 77747447, 77747474, 77747477, 77747744, 77747747, 77747774, 77747777, 77774444, 77774447, 77774474, 77774477, 77774744, 77774747, 77774774, 77774777, 77777444, 77777447, 77777474, 77777477, 77777744, 77777747, 77777774, 77777777, 444444444, 444444447, 444444474, 444444477, 444444744, 444444747, 444444774, 444444777, 444447444, 444447447, 444447474, 444447477, 444447744, 444447747, 444447774, 444447777, 444474444, 444474447, 444474474, 444474477, 444474744, 444474747, 444474774, 444474777, 444477444, 444477447, 444477474, 444477477, 444477744, 444477747, 444477774, 444477777, 444744444, 444744447, 444744474, 444744477, 444744744, 444744747, 444744774, 444744777, 444747444, 444747447, 444747474, 444747477, 444747744, 444747747, 444747774, 444747777, 444774444, 444774447, 444774474, 444774477, 444774744, 444774747, 444774774, 444774777, 444777444, 444777447, 444777474, 444777477, 444777744, 444777747, 444777774, 444777777, 447444444, 447444447, 447444474, 447444477, 447444744, 447444747, 447444774, 447444777, 447447444, 447447447, 447447474, 447447477, 447447744, 447447747, 447447774, 447447777, 447474444, 447474447, 447474474, 447474477, 447474744, 447474747, 447474774, 447474777, 447477444, 447477447, 447477474, 447477477, 447477744, 447477747,447477774, 447477777, 447744444, 447744447, 447744474, 447744477, 447744744, 447744747, 447744774, 447744777, 447747444,447747447, 447747474, 447747477, 447747744, 447747747, 447747774, 447747777, 447774444, 447774447, 447774474, 447774477
// //                     , 447774744, 447774747, 447774774, 447774777, 447777444, 447777447, 447777474, 447777477, 447777744, 447777747, 447777774, 447777777, 474444444, 474444447, 474444474, 474444477, 474444744, 474444747, 474444774, 474444777, 474447444, 474447447, 474447474, 474447477, 474447744, 474447747, 474447774, 474447777, 474474444, 474474447, 474474474, 474474477, 474474744, 474474747, 474474774, 474474777, 474477444, 474477447, 474477474, 474477477, 474477744, 474477747, 474477774, 474477777, 474744444, 474744447, 474744474, 474744477, 474744744, 474744747, 474744774, 474744777, 474747444, 474747447, 474747474, 474747477, 474747744, 474747747, 474747774, 474747777, 474774444, 474774447, 474774474, 474774477, 474774744, 474774747, 474774774, 474774777, 474777444, 474777447, 474777474, 474777477, 474777744, 474777747, 474777774, 474777777, 477444444, 477444447, 477444474, 477444477, 477444744, 477444747, 477444774, 477444777, 477447444, 477447447, 477447474, 477447477, 477447744, 477447747, 477447774, 477447777, 477474444, 477474447, 477474474, 477474477, 477474744, 477474747,477474774, 477474777, 477477444, 477477447, 477477474, 477477477, 477477744, 477477747, 477477774, 477477777, 477744444,477744447, 477744474, 477744477, 477744744, 477744747, 477744774, 477744777, 477747444, 477747447, 477747474, 477747477
// //                     , 477747744, 477747747, 477747774, 477747777, 477774444, 477774447, 477774474, 477774477, 477774744, 477774747, 477774774, 477774777, 477777444, 477777447, 477777474, 477777477, 477777744, 477777747, 477777774, 477777777, 744444444, 744444447, 744444474, 744444477, 744444744, 744444747, 744444774, 744444777, 744447444, 744447447, 744447474, 744447477, 744447744, 744447747, 744447774, 744447777, 744474444, 744474447, 744474474, 744474477, 744474744, 744474747, 744474774, 744474777, 744477444, 744477447, 744477474, 744477477, 744477744, 744477747, 744477774, 744477777, 744744444, 744744447, 744744474, 744744477, 744744744, 744744747, 744744774, 744744777, 744747444, 744747447, 744747474, 744747477, 744747744, 744747747, 744747774, 744747777, 744774444, 744774447, 744774474, 744774477, 744774744, 744774747, 744774774, 744774777, 744777444, 744777447, 744777474, 744777477, 744777744, 744777747, 744777774, 744777777, 747444444, 747444447, 747444474, 747444477, 747444744, 747444747, 747444774, 747444777, 747447444, 747447447, 747447474, 747447477, 747447744, 747447747,747447774, 747447777, 747474444, 747474447, 747474474, 747474477, 747474744, 747474747, 747474774, 747474777, 747477444,747477447, 747477474, 747477477, 747477744, 747477747, 747477774, 747477777, 747744444, 747744447, 747744474, 747744477
// //                     , 747744744, 747744747, 747744774, 747744777, 747747444, 747747447, 747747474, 747747477, 747747744, 747747747, 747747774, 747747777, 747774444, 747774447, 747774474, 747774477, 747774744, 747774747, 747774774, 747774777, 747777444, 747777447, 747777474, 747777477, 747777744, 747777747, 747777774, 747777777, 774444444, 774444447, 774444474, 774444477, 774444744, 774444747, 774444774, 774444777, 774447444, 774447447, 774447474, 774447477, 774447744, 774447747, 774447774, 774447777, 774474444, 774474447, 774474474, 774474477, 774474744, 774474747, 774474774, 774474777, 774477444, 774477447, 774477474, 774477477, 774477744, 774477747, 774477774, 774477777, 774744444, 774744447, 774744474, 774744477, 774744744, 774744747, 774744774, 774744777, 774747444, 774747447, 774747474, 774747477, 774747744, 774747747, 774747774, 774747777, 774774444, 774774447, 774774474, 774774477, 774774744, 774774747, 774774774, 774774777, 774777444, 774777447, 774777474, 774777477, 774777744, 774777747, 774777774, 774777777, 777444444, 777444447, 777444474, 777444477, 777444744, 777444747,
// //                     777444774, 777444777, 777447444, 777447447, 777447474, 777447477, 777447744, 777447747, 777447774, 777447777, 777474444,
// //                     777474447, 777474474, 777474477, 777474744, 777474747, 777474774, 777474777, 777477444, 777477447, 777477474, 777477477
// //                     , 777477744, 777477747, 777477774, 777477777, 777744444, 777744447, 777744474, 777744477, 777744744, 777744747, 777744774, 777744777, 777747444, 777747447, 777747474, 777747477, 777747744, 777747747, 777747774, 777747777, 777774444, 777774447, 777774474, 777774477, 777774744, 777774747, 777774774, 777774777, 777777444, 777777447, 777777474, 777777477, 777777744, 777777747, 777777774, 777777777, 4444444444
// //                   };

// // }
// // void  luckyGenerator() {
// //     vector<ll> lucky;
// //     lucky.pb(0);
// //     int idx = 0;
// //     while (lucky.back() < 1e10) {
// //         lucky.push_back(((lucky[idx] * 10) + 4));
// //         lucky.push_back((lucky[idx] * 10) + 7);
// //         idx++;
// //     }
// // }
// // int binarySearch(int a[], int first, int last, int search_num) {
// //     int middle;
// //     if (last >= first) {
// //         middle = (first + last) / 2;
// //         //Checking if the element is present at middle loc
// //         if (a[middle] == search_num)
// //             return middle + 1;

// //             //Checking if the search element is present in greater half
// //         else if (a[middle] < search_num)
// //             return binarySearch(a, middle + 1, last, search_num);

// //             //Checking if the search element is present in lower half
// //         else
// //             return binarySearch(a, first, middle - 1, search_num);
// //     }
// //     return -1;
// // }
// // void factorize(long long n) {
// //     int count = 0;
// //     while (!(n % 2)) {
// //         n /= 2;
// //         count++;
// //     }
// //     if (count)
// //         cout << 2 << "^" << count << endl;
// //     for (long long i = 3; i <= sqrt(n); i += 2) {
// //         count = 0;
// //         while (n % i == 0) {
// //             count++;
// //             n = n / i;
// //         }
// //         if (count)
// //             cout << i << "^" << count << endl;
// //     }
// //     if (n > 2)
// //         cout << n << "^" << 1 << endl;
// // }
// // void primeFactors(ll num) {
// //     ll fac = 2;
// //     while (num > 1) {
// //         if (num % fac == 0) {
// //             cout << fac << " ";
// //             num /= fac;
// //             ll pow = 1;
// //             while (num % fac == 0) {
// //                 num /= fac;
// //                 pow++;
// //             }
// //             cout << pow << el;
// //         }
// //         else {
// //             fac++;
// //         }
// //     }
// // }
// // bool onePrimeFactor(ll num) {
// //     ll fac = 2;
// //     int cnt = 0;
// //     while (num > 1) {
// //         if (num % fac == 0) {
// //             cnt++;
// //             while (num % fac == 0)
// //                 num /= fac;
// //         } else
// //             fac++;
// //         if (cnt >= 2)
// //             return false;
// //     }
// //     return true;
// // }
// // bool isPerfect(ll d)
// // {
// //     double temp = d;
// //     d = sqrt(d);
// //     temp = sqrt(temp);
// //     if (temp == d)
// //         return true;
// //     return false;
// // }
// // void sort(string s[], int n)//sort string according to length
// // {
// //     for (int i = 1; i < n; i++)
// //     {
// //         string temp = s[i];
// //         int j = i - 1;
// //         while (j >= 0 && temp.length() < s[j].length())
// //         {
// //             s[j + 1] = s[j];
// //             j--;
// //         }
// //         s[j + 1] = temp;
// //     }
// // }
// // bool IsPowerOfTwo(ll x)
// // {
// //     return (x & (x - 1)) == 0;
// // }
// // int binarySearchCount(ll arr[], int n, ll key)
// // {
// //     int left = 0, right = n;

// //     int mid;
// //     while (left < right) {
// //         mid = (right + left) >> 1;

// //         if (arr[mid] == key) {
// //             while (mid + 1 < n && arr[mid + 1] == key)
// //                 mid++;
// //             break;
// //         }

// //         else if (arr[mid] > key)
// //             right = mid;

// //         else
// //             left = mid + 1;
// //     }

// //     while (mid > -1 && arr[mid] > key)
// //         mid--;

// //     return mid + 1;
// // }
// // int countOnesInBin(ll n) {
// //     int cnt = 0;
// //     while (n) {
// //         cnt += n & 1;
// //         n >>= 1;
// //     }
// //     return cnt;
// // }
// // string convertToBinary(ll x) {
// //     string s;
// //     while (x > 0) {
// //         if (x % 2)
// //             s += '1';
// //         else
// //             s += '0';
// //         x /= 2;
// //     }
// //     reverse(s.begin(), s.end());
// //     return s;
// // }
// // ll convertToDecimal(string s) {
// //     reverse(s.begin(), s.end());
// //     ll ans = 0;
// //     for (int i = 0; i < s.length(); i++) {
// //         if (s[i] == '1')
// //             ans += (1 << i);
// //     }
// //     return ans;
// // }
// // long long lcm(int a, int b)
// // {
// //     return (a / __gcd(a, b)) * b;
// // }
// // bool palindrome(string s) {
// //     for (int i = 0; i < s.length() / 2; i++) {
// //         if (s[i] != s[s.length() - i - 1])
// //             return false;
// //     }
// //     return true;
// // }
// // int sumOfDigits(ll n) {
// //     int sum = 0;
// //     string s = to_string(n);
// //     f(i, s.length())sum += s[i] - '0';
// //     return sum;
// // }
// // bool isUnique(ll x) {
// //     int size = log10(x) + 1;
// //     set<int> s;
// //     while (x > 0) {
// //         s.insert(x % 10);
// //         x /= 10;
// //     }
// //     if (s.size() == size)
// //         return true;
// //     else
// //         return false;
// // }
// // void subString(string s, int n) {
// //     for (int i = 0; i < n; i++)
// //         for (int len = 1; len <= n - i; len++)
// //             cout << s.substr(i, len) << el;
// // }

// // bool sortByVal(const pair<string, int> &a,
// //                const pair<string, int> &b)
// // {
// //     return (a.second > b.second);
// // }

// // ll Round(double n) {
// //     ll y = n;
// //     if (y == n)
// //         return y;
// //     else
// //         return y + 1;
// // }
// // bool isLetter(char x) {
// //     if (x >= 'A' && x <= 'Z')
// //         return true;
// //     else if (x >= 'a' && x <= 'z')
// //         return true;
// //     else
// //         return false;
// // }
// // int findLastIndex(string s, char x)
// // {
// //     int index = -1;
// //     for (int i = 0; i < s.length(); i++)
// //         if (s[i] == x)
// //             index = i;
// //     return index;
// // }
// // bool isVowel(char c) {
// //     c = tolower(c);
// //     if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y')
// //         return true;
// //     else
// //         return false;
// // }
// // bool isOdd(char c) {
// //     if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9')
// //         return true;
// //     else
// //         return false;
// // }
// // ll sum(ll n) {
// //     ll sum = (n * (n + 1)) / 2;
// //     return sum;
// // }
// // ll sumInRange(ll l , ll r) {
// //     ll ans = sum(r) - sum(l - 1);
// //     return ans;
// // }
// // bool sortedAsc(ll arr[],ll n) {
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] < arr[i-1])
// //             return false;
// //     }
// //     return true;
// // }
// // bool sortedDesc(ll arr[],ll n) {
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] > arr[i - 1])
// //             return false;
// //     }
// //     return true;
// // }
// // ll decimalDigitRoot(ll n) {
// //     return ((n - 1) % 9) + 1;
// // }
// // bool equal(char x , char y) {
// //     if (x == '.')
// //         return true;
// //     return x == y;
// // }
// // string add(string s , int n) {
// //     string temp = "";
// //     while (n--)
// //         temp += s;
// //     return temp;
// // }
// // bool regularBracketSequence(string s) {
// //     stack<char> s1;
// //     for (int i = 0; i < s.size(); i++) {
// //         if (s[i] == '(')
// //             s1.push('(');
// //         else {
// //             if (s1.empty())
// //                 return false;
// //             else
// //                 s1.pop();
// //         }
// //     }
// //     return s1.empty();
// // }
// // ll sumDigits(ll n)
// // {
// //     ll rem = 0;
// //     while (n)
// //     {
// //         rem += n % 10;
// //         n /= 10;
// //     }
// //     return rem;
// // }
// // bool sortedA(vector<int> arr,int n)
// // {
// //     for (int i = 1; i < n; i++)
// //         if (arr[i] < arr[i - 1])
// //             return false;
// //     return true;
// // }
// // bool sortedD(vector<int> arr,int n)
// // {
// //     for (int i = 1; i < n; i++)
// //         if (arr[i] > arr[i - 1])
// //             return false;
// //     return true;
// // }

// // //int ans[N];
// // /*
// // vector<int>adjList[N];
// // int dfs(int node,int parent) {
// //     visited[node] = true;
// //     for (auto adjNode : adjList[node]) {
// //         if (!visited[adjNode]) {
// //             group.pb(adjNode);
// //             dfs(adjNode, node);
// //         }
// //         else if (visited[adjNode] && adjNode != parent)
// //             return 1;
// //     }
// //     return 0;
// // }
// //  */
// // /*
// // void bfs(int node) {
// //     queue<int> q;
// //     q.push(node);
// //     visited[node] = 1;
// //     while (!q.empty()) {
// //         group.pb(q.front());
// //         for (auto adjNode : adjList[q.front()])
// //             if (!visited[adjNode])
// //                 q.push(adjNode), visited[adjNode] = 1;
// //         q.pop();
// //     }
// // }

// // void dijkstra(int source, vector<vector<pair<int,int>>>&graph) {
// //     int n = graph.size();
// //     vector<int> dist(n, inf), pre(n, -1);
// //     // cost , node
// //     priority_queue<pair<int, int>> nextToVisit;

// //     dist[source] = 0;
// //     pre[source] = source;
// //     nextToVisit.push({0, source});

// //     while (!nextToVisit.empty()) {
// //         int u = nextToVisit.top().second;
// //         nextToVisit.pop();
// //         if (visited[u])continue;
// //         visited[u] = 1;
// //         for (auto e : graph[u]) {
// //             int v = e.first;
// //             int c = e.second;
// //             if (dist[u] + c < dist[v]) {
// //                 dist[v] = dist[u] + c;
// //                 pre[v] = u;
// //                 nextToVisit.push({-dist[v], v});
// //             }
// //         }
// //     }
// // }
// // */
// // string onlyAlphaString(string s) {
// //     string temp = "";
// //     for (int i = 0; i < s.size(); i++)
// //         if (isalpha(s[i]))temp += tolower(s[i]);
// //     return temp;
// // }
// // int computeXOR(ll a) {
// //     if (a % 4 == 0) return a;
// //     else if (a % 4 == 1) return 1;
// //     else if (a % 4 == 2) return a + 1;
// //     else return 0;
// // }
// // void sort3(int& a, int& b, int& c) {
// //     if (a > b)swap(a, b);
// //     if (b > c)swap(b, c);
// //     if (a > b)swap(a, b);
// // }
// // int lis(vector<int>&a) {
// //     int n = a.size();
// //     vector<int> dp(n, 1);
// //     for (int i = 0; i < n; i++)
// //         for (int j = 0; j < i; j++)
// //             if (a[j] < a[i])dp[i] = max(dp[i], dp[j] + 1);
// //     int ans = dp[0];
// //     for (int i = 1; i < n; i++)ans = max(ans, dp[i]);
// //     return ans;
// // }
// // bool oneCharacterString(string s) {
// //     vasort(s);
// //     return s[0] == s[s.size() - 1];
// // }

// // ll nPr(ll n , ll r) {
// //     ll fact = 1;
// //     while (r--) {
// //         fact *= n;
// //         n--;
// //     }
// //     return fact;
// // }
// bool sortbysec(const pair<int, int> &a,
//                const pair<int, int> &b)
// {
//  return (a.second >= b.second);
// }
// // ll mod_mul(ll a, ll b, ll m) {
// //     a = a % m;
// //     b = b % m;
// //     return (((a * b) % m) + m) % m;
// // }
// // ll getFact(ll n){
// //     if(n==0 or n==1){
// //         return 1;
// //     }
// //     ll f=1;
// //     for(ll i=1;i<=n;i++){
// //         f*=i;
// //     }
// //     return f;
// // }
// // ll getNumber(ll n){
// //     ll sum=1;
// //     while(n>0){
// //         ll v = getFact(n%10);
// //         sum*=getFact(n%10);
// //         n/=10;
// //     }

// //     return sum;
// // }
// // vector<int> factors;
// // void primeFactors(ll n)
// // {

// //     while (n % 2 == 0)
// //     {
// //         factors.push_back(2);
// //         n = n/2;
// //     }


// //     for (ll i = 3; i <= sqrt(n); i = i + 2)
// //     {

// //         while (n % i == 0)
// //         {
// //             factors.push_back(i);
// //             n = n/i;
// //         }
// //     }


// //     if (n > 2)
// //         factors.push_back(n);
// // }
// // string ch[10]={"","","2","3","223","5","53","7","7222","7332"};
// // taskkill -im test.exe -f
// // think simple
// // string rev(string s,ll l, ll r){
// //     while(l<r){
// //         swap(s[l],s[r]);
// //         l++;
// //         r--;
// //     }
// //     return s;

// // }
// // void addEdge(vector<int> adj[], int u, int v)
// // {
// //     adj[u].push_back(v);
// //     adj[v].push_back(u);
// // }
// // void printGraph(vector<int> adj[], int V)
// // {
// //     for (int v = 0; v < V; ++v) {
// //         cout << "\n"<< v;
// //         for (auto x : adj[v])
// //             cout << "-> " << x;
// //         printf("\n");
// //     }
// // }
// // bool areBracketsBalanced(string expr)
// // {
// //     stack<char> s;
// //     char x;

// //     // Traversing the Expression
// //     for (int i = 0; i < expr.length(); i++)
// //     {
// //         if (expr[i] == '(' || expr[i] == '['
// //             || expr[i] == '{')
// //         {
// //             // Push the element in the stack
// //             s.push(expr[i]);
// //             continue;
// //         }

// //         // IF current current character is not opening
// //         // bracket, then it must be closing. So stack
// //         // cannot be empty at this point.
// //         if (s.empty())
// //             return false;

// //         switch (expr[i]) {
// //         case ')':

// //             // Store the top element in a
// //             x = s.top();
// //             s.pop();
// //             if (x == '{' || x == '[')
// //                 return false;
// //             break;

// //         case '}':

// //             // Store the top element in b
// //             x = s.top();
// //             s.pop();
// //             if (x == '(' || x == '[')
// //                 return false;
// //             break;

// //         case ']':

// //             // Store the top element in c
// //             x = s.top();
// //             s.pop();
// //             if (x == '(' || x == '{')
// //                 return false;
// //             break;
// //         }
// //     }

// //     // Check Empty Stack
// //     return (s.empty());
// // }
// // const int N=1e5+10;

// int stringtoint(string s)
// {
//  stringstream geek(s);
//  int x = 0;
//  geek >> x;
//  return x;
// }
// string inttostring(float n)
// {
//  ostringstream str;
//  str << n;
//  string geek = str.str();
//  return geek;
// }
// ll n,w;
// ll value[N],weight[N];
// ll dp[101][100000];
// ll func(ll value[],ll weight[],ll w,ll n){
//     if(n==0 or w==0){
//         return 0;
//     }
//     if(dp[n][w]!=-1){
//         return dp[n][w];
//     }
//     if(weight[n-1]<=w){
//         return dp[n][w]=max(value[n-1]+func(value,weight,w-weight[n-1],n-1),func(value,weight,w,n-1));
//     }
//     else{
//         return dp[n][w]=func(value,weight,w,n-1);
//     }

// }
// void display1d(vector<int>a)
// {
//  for (auto i : a)
//  {
//      cout << i << " ";
//  }
//  cout << endl;
// }
// void display2d(vector<vector<int>> arr)
// {
//  for (int i = 0; i < arr.size(); i++)
//  {
//      for (int j = 0; j < arr[i].size(); j++)
//      {
//          cout << arr[i][j] << " ";
//      }
//      cout << nl;
//  }
//  // cout << nl;
// }
// string chartostring(char a)
// {
//     stringstream stream;
//     stream << a;
//     string str;
//     stream >> str;
//     return str;
// }

// ll lcm(ll a, ll b)
// {
//     return a/__gcd(a,b)*b;
// }


// int getminidex(vector<int> arr)
// {
//     int minindex=-1,minvalue=INT_MAX;
//     for(int i=0; i<arr.size(); i++)
//     {
//         if(arr[i]<minvalue)
//         {
//             minvalue=arr[i];
//             minindex=i;
//         }
//     }
//     return minindex;
// }


// bool isPalindrome(string s)
// {
//     int n = s.size();
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (s[i] == s[n - 1 - i])
//         {
//             continue;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int countBits(int n) {
//     int cnt = 0;
//     while (n > 0) {
//         n /= 2;
//         cnt++;
//     }
//     return cnt;
// }

// // Function to find the possible
// // permutations
// void permutations(vector<vector<int> >& res,
//                   vector<int> nums, int l, int h)
// {
//     // Base case
//     // Add the vector to result and return
//     if (l == h) {
//         res.push_back(nums);
//         return;
//     }

//     // Permutations made
//     for (int i = l; i <= h; i++) {

//         // Swapping
//         swap(nums[l], nums[i]);

//         // Calling permutations for
//         // next greater value of l
//         permutations(res, nums, l + 1, h);

//         // Backtracking
//         swap(nums[l], nums[i]);
//     }
// }

// // Function to get the permutations
// vector<vector<int> > permute(vector<int>& nums)
// {
//     // Declaring result variable
//     vector<vector<int> > res;
//     int x = nums.size() - 1;

//     // Calling permutations for the first
//     // time by passing l
//     // as 0 and h = nums.size()-1
//     permutations(res, nums, 0, x);
//     return res;
// }

// bool prime[MAX + 1];
// void SieveOfEratosthenes()
// {
//     memset(prime, true, sizeof(prime));

//     prime[1] = false;

//     for (int p = 2; p * p <= MAX; p++) {


//         if (prime[p] == true) {
//             for (int i = p * 2; i <= MAX; i += p)
//                 prime[i] = false;
//         }
//     }
// }

// bool isPrime(int n)
// {

//     if (n <= 1) {
//         return false;
//     }
//     if (n <= 3) {
//         return true;
//     }


//     if (n % 2 == 0 || n % 3 == 0) {
//         return false;
//     }

//     for (int i = 5; i * i <= n; i = i + 6) {
//         if (n % i == 0 || n % (i + 2) == 0) {
//             return false;
//         }
//     }

//     return true;
// }

// vector<int> getDivisors(int n) {
//     vector<int>ans;
//     set<int>st;
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {

//             if (n / i == i)
//                 st.insert(i);

//             else {
//                 st.insert(i);
//                 st.insert(n / i);
//             }
//         }
//     }
//     for (auto it : st) {
//         ans.push_back(it);
//     }
//     return ans;
// }
// bool isPerfect(long long int n)
// {

//     long long int sum = 1;


//     for (long long int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             if (i * i != n)
//                 sum = sum + i + n / i;
//             else
//                 sum = sum + i;
//         }
//     }

//     if (sum == n && n != 1)
//         return true;

//     return false;
// }
// bool isVowel(char x)
// {
//     return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
// }


// int maxPrime = 0;
// void primeFactors(int n)
// {
//     vector<int>ans;
//     int c = 2;
//     while (n > 1)
//     {
//         if (n % c == 0) {
//             // cout << c << nl;
//             maxPrime = max(maxPrime, c);
//             n /= c;
//         }
//         else c++;
//     }
//     // return ans;
// }
// ll gcd(ll a, ll  b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// ll lcm(ll a, ll b)
// {
//     return (a / gcd(a, b)) * b;
// }


// int countSetBits(ll n)
// {
//     int count = 0;
//     while (n) {
//         n &= (n - 1);
//         count++;
//     }
//     return count;
// }
// int dirx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
// int diry[8] = { -1, -1, 0, 1, 1, 1, 0, -1};

// int find(int node, vector<int>&parent) {
//     if (node != parent[node]) {
//         parent[node] = find(parent[node], parent);
//     }
//     return parent[node];
// }
// void unionNode(int x, int y, vector<int>&parent, vector<int>&rank) {
//     int s1 = find(x, parent);
//     int s2 = find(y, parent);
//     if (s1 != s2) {
//         if (rank[s1] < rank[s2]) {
//             parent[s1] = s2;
//             rank[s2] += rank[s1];
//         }
//         else {
//             parent[s2] = s1;
//             rank[s1] += rank[s2];
//         }
//     }
// }





// factorial[1]=1;
//    for(int j=2;j<=1000000;j++){
//          factorial[j]=j*factorial[j-1];
//          factorial[j]%=1000000000+7;
//    }


// void fillParent(vector<int>&parent, int n) {
//     for (int i = 0; i < n; i++) {
//         parent[i] = i;
//     }
// }
// void updateParent(vector<int>&parent, int n) {
//     for (int i = 0; i < n; i++) {
//         parent[i] = find(parent[i], parent);
//     }
// }
// int solve(int idx, int amount, vector<int>&coins) {
//     if (idx >= coins.size()) {
//         if (amount == 0) {
//             return 0;
//         }
//     }
//     if (amount == 0) {
//         return 0;
//     }
//     int take = 0, notTake = 0;
//     if (amount >= coins[idx]) {
//         take = 1 + solve(idx + 1, amount - coins[idx], coins);
//     }
//     else {
//         notTake = solve(idx + 1, amount, coins);
//     }
//     return max(take, notTake);
// }
// int main()
// {
// #ifndef ONLINE_JUDGE
//     freopen("inp.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     // cout << "Running Time: " << 1.0 * clock() / CLOCKS_PER_SEC << " s .\n";
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t = 1;
//     // cin >> t;
//     for (int tt = 0; tt < t; tt++) {
//         int n, a, b, c;
//         cin >> n >> a >> b >> c;
//         int f[10010];
//         f[0] = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             f[i] = -10000;
//             if (i >= a) f[i] = f[i - a] + 1;
//             if ((i >= b) && (f[i - b] + 1 > f[i])) f[i] = f[i - b] + 1;
//             if ((i >= c) && (f[i - c] + 1 > f[i])) f[i] = f[i - c] + 1;
//         }
//         cout << f[n] << endl;
//     }
//     return 0;
// }










// #include <bits/stdc++.h>
// #include <math.h>
// #include <unordered_map>
// #include <unordered_set>
// #include <tuple>

// #define io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define PB push_back
// #define MP make_pair
// #define REP(i,a,b) for (ll i = a; i < b; i++)
// #define enl "\n"
// #define INF std::numeric_limits<ll>::max()
// #define F first
// #define S second

// using namespace std;

// typedef long long int ll;
// typedef unsigned long long int ull;
// typedef long double ldb;
// typedef vector<long long> vll;
// typedef pair<long long,long long> pll;

// ll greatestSubarraySum(ll array[], ll n);
// ll binarySearch(vll arr, ll l, ll r, ll x);
// ll modpower(ll x, ll y, ll p);
// ll power(ll x, ll y);
// ll gcd(ll a, ll b);
// ll lcm(ll a, ll b);
// ll search(ll arr[], ll n, ll k);
// string findSum(string str1, string str2);
// ll extendedGcd(ll a, ll b, ll & x, ll & y);
// bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g);
// ll countSetBits(ll n);
// void primeFactors(ll n, map<ll,ll>& arr2, ll k, ll& flaggy);
// void matrixMultiply(ll a[3][3], ll b[3][3]);
// void matrixPower(ll F[7][7], ll n);
// ll sumSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r);
// vll squareRootDecompositionSumArray(ll arr[], ll n);
// ll minSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r);
// ll maxSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r);
// vll squareRootDecompositionMinArray(ll arr[], ll n);
// vll squareRootDecompositionMaxArray(ll arr[], ll n);
// void updateSquareRootDecompositionMinArray(ll arr[], vll &helper, ll n, ll i, ll x);
// void updateSquareRootDecompositionMaxArray(ll arr[], vll &helper, ll n, ll i, ll x);
// void updateSquareRootDecompositionSumArray(ll arr[], vll &helper, ll n, ll i, ll x);
// void dfs(ll i, set<ll> arr[], ll visited[]);
// void uni(ll x, ll y, ll par[], ll size[]);
// ll find(ll x, ll par[], ll size[]);
// ll modulo( ll value, ll m);
// class FenwickTree;
// void pairsort(ll a[], ll b[], ll n);
// ll max(ll a, ll b);
// ll min(ll a, ll b);
// ll modInverse(ll a, ll m);
// ll modsum(ll a, ll b, ll m);
// ll modmul(ll a, ll b, ll m);
// string reverseOfString(string s);
// ll nCrMod(ll n, ll r, ll mod);
// vll kmpArray(string s);


// #define MAXI 998244353


// ll fact[1000000];




// int main(){

//     io

//     ll q=1;
//     // cin>>q;
//     REP(currentIndex,0,q){

//         ll n;
//         cin>>n;
//         ll arr[n+1];
//         arr[0]=0;

//         vll arr2;
//         vll weight;

//         arr2.PB(0);
//         weight.PB(0);

//         ll compatible[n+1];

//         stack<ll> help;

//         REP(i,1,n+1){

//             cin>>arr[i];


//         }


//         sort(arr+1,arr+1+n);

//         REP(i,1,n+1){

//             if(arr[i]!=arr2[arr2.size()-1]){arr2.PB(arr[i]);weight.PB(arr[i]);}
//             else weight[weight.size()-1]+=arr[i];



//         }


//         REP(i,1,arr2.size()){




//             ll count=1;
//             if(help.empty())help.push(arr2[i]);
//             else {

//                 while(!help.empty() && help.top()==arr2[i]-1){

//                     help.pop();
//                     count++;

//                 }

//                 help.push(arr2[i]);

//             }

//             compatible[i]=i-count;

//         }


//         ll ans[arr2.size()];
//         ans[0]=0;
//         REP(i,1,arr2.size()){

//             ans[i]=max(weight[i]+ans[compatible[i]], ans[i-1]);


//         }




//         cout<<ans[arr2.size()-1]<<endl;


//     }





// }


// vll kmpArray(string s){

//     vll arr(s.length(), 0);

//     REP(i,1,s.length()){

//         ll len=arr[i-1];
//         while(len>0 && s[len]!=s[i])len=arr[len-1];
//         if(s[len]==s[i])len++;
//         arr[i]=len;



//     }

//     return arr;



// }



// ll nCrMod(ll n, ll r, ll mod){

//     return (fact[n]* modInverse(fact[r], mod) % mod * modInverse(fact[n-r], mod) % mod) % mod;

// }

// void SieveOfEratosthenes(ll n, bool isPrime[])
// {

//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 2; i <= n; i++)
//         isPrime[i] = true;

//     for (ll p = 2; p * p <= n; p++) {


//         if (isPrime[p] == true) {

//             for (ll i = p * 2; i <= n; i += p)
//                 isPrime[i] = false;
//         }
//     }
// }

// string reverseOfString(string s){

//     string t;
//     REP(i,0,s.length()){

//         t+=s[s.length()-i-1];

//     }

//     return t;

// }

// class FenwickTree{

// private:
//     ll n;

//     ll h(ll i){return (i|(i+1));}
//     ll g(ll i){return (i&(i+1));}



// public:

//     ll *sumtree;
//     ll *mainArray;

//     FenwickTree(ll n){

//         this->n=n;
//         mainArray = (ll*)malloc(n*sizeof(ll));
//         sumtree = (ll*)calloc(n, sizeof(ll));

//     }



//     void addElementAtIndex(ll i, ll x){
//         mainArray[i]=x;
//         update(i,x);
//     }

//     void update(ll i, ll delta){

//         for(ll j=i; j<n; j=h(j)){
//             sumtree[j]+=delta;

//         }

//     }

//     ll sum(ll i, ll j){

//         ll sum1=0, sum2=0;
//         ll i1=i,j1=j;
//         while(j>=0){
//             sum1+=sumtree[j];
//             j=g(j)-1;
//         }
//         while(i>=0){
//             sum2+=sumtree[i];
//             i=g(i)-1;
//         }
//         return sum1-sum2+mainArray[i1];

//     }


// };

// ll modsum(ll a, ll b, ll m){

//     return ((a%m)+(b%m))%m;

// }

// ll modmul(ll a, ll b, ll m){

//     return ((a%m)*(b%m))%m;


// }

// ll modInverse(ll a, ll m)
// {

//     return modpower(a, m-2, m);

// }

// ll max(ll a, ll b){

//     if(a>b)return a;
//     else return b;
// }

// ll min(ll a, ll b){

//     if(a<b)return a;
//     return b;

// }


// void pairsort(ll a[], ll b[], ll n)
// {
//     pair<ll, ll> pairt[n];


//     for (ll i = 0; i < n; i++)
//     {
//         pairt[i].first = a[i];
//         pairt[i].second = b[i];
//     }

//     sort(pairt, pairt + n);

//     for (ll i = 0; i < n; i++)
//     {
//         a[i] = pairt[i].first;
//         b[i] = pairt[i].second;
//     }
// }

// ll extendedGcd(ll a, ll b, ll & x, ll & y) {
//     if (a == 0) {
//         x = 0;
//         y = 1;
//         return b;
//     }
//     ll x1, y1;
//     ll d = extendedGcd(b % a, a, x1, y1);
//     x = y1 - (b / a) * x1;
//     y = x1;
//     return d;
// }

// bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
//     g = extendedGcd(abs(a), abs(b), x0, y0);
//     if (c % g) {
//         return false;
//     }

//     x0 *= c / g;
//     y0 *= c / g;
//     if (a < 0) x0 = -x0;
//     if (b < 0) y0 = -y0;
//     return true;
// }


// string findSum(string str1, string str2)
// {

//     if (str1.length() > str2.length()) {
//         string s = str1;
//         str1=str2;
//         str2=s;
//     }


//     string str = "";


//     int n1 = str1.length(), n2 = str2.length();


//     reverse(str1.begin(), str1.end());
//     reverse(str2.begin(), str2.end());

//     int carry = 0;
//     for (int i=0; i<n1; i++)
//     {

//         int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');

//         carry = sum/10;
//     }

//     // Add remaining digits of larger number
//     for (int i=n1; i<n2; i++)
//     {
//         int sum = ((str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');
//         carry = sum/10;
//     }

//     // Add remaining carry
//     if (carry)
//         str.push_back(carry+'0');

//     // reverse resultant string
//     reverse(str.begin(), str.end());

//     return str;
// }



// ll binarySearch(vll arr, ll l, ll r, ll x)
// {
//     if (r >= l) {
//         ll mid = l + (r - l) / 2;

//         // If the element is present at the middle
//         // itself
//         if (arr[mid] == x)
//             return mid;

//         // If element is smaller than mid, then
//         // it can only be present in left subarray
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);

//         // Else the element can only be present
//         // in right subarray
//         return binarySearch(arr, mid + 1, r, x);
//     }

//     // We reach here when element is not
//     // present in array
//     return -1;
// }

// ll greatestSubarraySum(ll array[], ll n){

//     ll best = 0, sum = 0;
//     for (ll k = 0; k < n; k++) {
//         sum = max(array[k],sum+array[k]);
//         best = max(best,sum);
//     }

//     return best;
// }

// ll modpower(ll x, ll y, ll p)
// {
//     ll res = 1;      // Initialize result

//     x = x % p;  // Update x if it is more than or
//                 // equal to p

//     while (y > 0)
//     {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;

//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }


// ll gcd(ll a, ll b)
// {
//     if (a == 0)
//         return b;

//     return gcd(b%a, a);
// }

// ll lcm(ll a, ll b)
// {
//     return (a*b)/gcd(a, b);
// }


// ll power(ll x, ll y)
// {
//     ll temp;
//     if( y == 0)
//         return 1;
//     temp = power(x, y/2);
//     if (y%2 == 0)
//         return temp*temp;
//     else
//         return x*temp*temp;
// }

// ll modulo( ll value, ll m) {
//     ll mod = value % m;
//     if (value < 0) {
//         mod += m;
//     }
//     return mod;
// }

// ll find(ll x, ll par[], ll size[]){

//     if(x==par[x])return x;
//     else return par[x]=find(par[x],par, size);

// }

// void uni(ll x, ll y, ll par[], ll size[]){

//     x=find(x,par,size);
//     y=find(y,par,size);

//     if(size[x]>size[y])swap(x,y);

//     par[x]=y;
//     size[y]+=size[x];


// }

// void dfs(ll i, set<ll> arr[], ll visited[]){

//     if(visited[i])return;

//     cout<<(char)('a'+i);

//     visited[i]=1;

//     for(auto u:arr[i])dfs(u, arr, visited);


// }


// ll countSetBits(ll n)
// {
//     ll count = 0;
//     while (n) {
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }


// ll flag2;


// void primeFactors(ll n, map<ll,ll>& arr2, ll k, ll& flaggy)
// {
//     ll count=0;

//     ll flag=0;

//     while (n % 2 == 0)
//     {
//         n = n/2;
//         count++;
//     }

//     if(count%k != 0){

//         flag=1;

//         arr2[2]=count%k;

//     }
//     count=0;

//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         while (n % i == 0)
//         {
//             n = n/i;
//             count++;
//         }


//         if(count%k!=0){

//             flag=1;
//             arr2[i]=count%k;

//         }

//         count=0;
//     }

//     if (n > 2)
//         {
//             if(1%k!=0){

//                 flag=1;
//                 arr2[n]=1%k;

//             }
//         }

//         if(flag==0){flag2++;flaggy=1;}

// }

// void matrixMultiply(ll* a[], ll *b[], ll n)
// {

//     ll mul[n][n];
//     for (ll i = 0; i < n; i++)
//     {
//         for (ll j = 0; j < n; j++)
//         {
//             mul[i][j] = 0;
//             for (ll k = 0; k < n; k++)
//                 mul[i][j] += a[i][k]*b[k][j];
//         }
//     }

//     for (int i=0; i<n; i++)
//         for (int j=0; j<n; j++)
//             a[i][j] = mul[i][j];
// }

// void matrixPower(ll **F, ll n, ll k)
// {

//     if(n==1)return;

//     ll **M = (ll **)malloc(k*sizeof(ll *));


//     REP(i,0,k){
//         M[i]=(ll *)malloc(k*sizeof(ll));
//         REP(j,0,k){
//             M[i][j]=F[i][j];
//         }
//     }


//     matrixPower(F, n/2, k);

//     matrixMultiply(F, F, k);

//     if (n%2 != 0)
//         matrixMultiply(F, M,k);

// }

// vll squareRootDecompositionMinArray(ll arr[], ll n){

//     ll k=(ll)ceil(sqrt(n));
//     vll helper(k,INF);

//     REP(i,0,n)helper[i/k]=min(helper[i/k],arr[i]);

//     return helper;


// }
// vll squareRootDecompositionMaxArray(ll arr[], ll n){

//     ll k=(ll)ceil(sqrt(n));
//     vll helper(k,-INF);

//     REP(i,0,n)helper[i/k]=max(helper[i/k],arr[i]);

//     return helper;


// }

// ll minSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r){

//     ll k=(ll)ceil(sqrt(n));

//     ll a=l/k;
//     ll b=r/k;

//     ll min1=INF;

//     if(a==b){

//         REP(i,l,r+1)min1=min(min1,arr[i]);

//         return min1;
//     }

//     REP(i,l,(a+1)*k)min1=min(min1,arr[i]);
//     REP(i,a+1,b)min1=min(min1,helper[i]);
//     REP(i,b*k,r+1)min1=min(min1,arr[i]);

//     return min1;


// }
// ll maxSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r){

//     ll k=(ll)ceil(sqrt(n));

//     ll a=l/k;
//     ll b=r/k;

//     ll min1=-INF;

//     if(a==b){

//         REP(i,l,r+1)min1=max(min1,arr[i]);

//         return min1;
//     }

//     REP(i,l,(a+1)*k)min1=max(min1,arr[i]);
//     REP(i,a+1,b)min1=max(min1,helper[i]);
//     REP(i,b*k,r+1)min1=max(min1,arr[i]);

//     return min1;


// }

// vll squareRootDecompositionSumArray(ll arr[], ll n){

//     ll k=(ll)ceil(sqrt(n));

//     //preprocessed array

//     vll helper(k,0);

//     //preprocessing

//     REP(i,0,n)helper[i/k]+=arr[i];

//     return helper;


// }

// void updateSquareRootDecompositionSumArray(ll arr[], vll &helper, ll n, ll i, ll x){

//     ll k=(ll)ceil(sqrt(n));
//     ll delta=x-arr[i];
//     arr[i]=x;
//     helper[i/k]+=delta;

// }

// void updateSquareRootDecompositionMinArray(ll arr[], vll &helper, ll n, ll i, ll x){

//     ll k=(ll)ceil(sqrt(n));
//     if(helper[i/k]==arr[i]){

//         if(x<arr[i])helper[i/k]=arr[i];
//         else{

//             ll min1=INF;
//             REP(j,i/k*k,(i/k+1)*k)min1=min(min1,arr[j]);
//             helper[i/k]=min1;

//         }

//     } else{

//         helper[i/k]=min(helper[i/k],x);
//     }


//     arr[i]=x;


// }
// void updateSquareRootDecompositionMaxArray(ll arr[], vll &helper, ll n, ll i, ll x){

//     ll k=(ll)ceil(sqrt(n));
//     if(helper[i/k]==arr[i]){

//         if(x<arr[i])helper[i/k]=arr[i];
//         else{

//             ll min1=-INF;
//             REP(j,i/k*k,(i/k+1)*k)min1=max(min1,arr[j]);
//             helper[i/k]=min1;

//         }

//     } else{

//         helper[i/k]=max(helper[i/k],x);
//     }


//     arr[i]=x;


// }

// ll sumSquareRootDecomposition(ll arr[], vll helper, ll n, ll l, ll r){

//     ll k=(ll)ceil(sqrt(n));

//     ll a=l/k;
//     ll b=r/k;

//     ll sum=0;

//     if(a==b){

//         REP(i,l,r+1)sum+=arr[i];

//         return sum;

//     }

//     REP(i,l,(a+1)*k){sum+=arr[i];}
//     REP(i,b*k,r+1)sum+=arr[i];
//     REP(i,a+1,b)sum+=helper[i];

//     return sum;

// }











/*
।। जय श्री राम ।।
।। जय हनुमान ।।
*/

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> osetint;
// typedef map<long long, long long> mll;
// typedef unordered_map<long long, long long> umll;
// typedef vector<long long> vi;
// typedef vector<char> vc;
// typedef vector<long long> vll;
// typedef vector<vector<long long>> vvi;
// typedef vector<string> vs;
// typedef pair<long long, long long> pii;
// typedef pair<long long, string> pic;
// typedef pair<string, long long> pci;
// typedef vector<pair<long long, long long>> vpii;
// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;
// #define db(x) debug(x);
// #define check1 cout << "YES" << endl;
// #define check2 cout << "NO" << endl;
// #define check3 cout << -1 << endl;
// #define int long long
// #define ff first
// #define ss second
// #define pb push_back
// #define mp make_pair
// #define pob pop_back
// #define findorder find_by_order
// #define orderkey order_of_key
// #define um unordered_map
// #define CHK 1e-9
// #define endl '\n'
// #define all(x) x.begin(), x.end()
// #define reverse(v) reverse(all(v));
// #define sorted(v) sort(v.begin(), v.end())
// #define reversesort(v) sort(v.begin(), v.end(), greater<int>())
// #define zerobefore(x) __builtin_clz(x)
// #define zeroafter(x) __builtin_ctz(x)
// #define ones(x) __builtin_popcount(x)
// #define parity(x) __builtin_parity(x)
// #define sz(x) x.size()
// #define len(x) x.length()
// #define prDouble(x) cout << fixed << setprecision(9) << x
// #define goog(tno) cout << "Case #" << tno << ": "
// #define fast_io                       \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)
// #define elasped_time 1.0 * clock() / CLOCKS_PER_SEC
// #define dfor(i, a, b) for (long long i = a; i < b; i++)
// #define dforr(i, a, b) for (long long i = a; i >= b; i--)
// #define rep(i, a, b) for (int(i) = (a); (i) <= (b); (i)++)
// #define rev(i, a, b) for (int(i) = (a); (i) >= (b); (i)--)
// int mod = 1e9 + 7;
// #define gcd(a, b) __gcd(a, b)
// #define mem1(a) memset(a, -1, sizeof(a))
// #define mem0(a) memset(a, 0, sizeof(a))
// // NEXT PERMUTATION next_permutation(all(v))
// //  MAX ELEMENT
// #define maxele(v) *max_element(all(v))
// // MIN ELEMENT
// #define minele(v) *min_element(all(v))
// int sumarr(vi v)
// {
//     int sum = 0;
//     for (auto x : v)
//         sum += x;
//     return sum;
// }
// int maxarr(vi v)
// {
//     int mx = INT_MIN;
//     for (auto x : v)
//         mx = max(x, mx);
//     return mx;
// }
// int minarr(vi v)
// {
//     int mn = INT_MAX;
//     for (auto x : v)
//         mn = min(x, mn);
//     return mn;
// }
// #define fauto(arr, x) for (auto x : arr)
// // UNIQUE ELEMENTS IN A ARRAY/VECTOR
// // v.erase(unique(all(v)), v.end());
// #define sc ' '
// #define input(arr, n)           \
//     for (int i = 0; i < n; i++) \
//     {                           \
//         ll x;                   \
//         cin >> x;               \
//         arr.pb(x);              \
//     }

// #define sumall(arr, sum) \
//     for (auto x : arr)   \
//     {                    \
//         sum += x;        \
//     }

// #define print(arr)        \
//     for (auto x : arr)    \
//     {                     \
//         cout << x << ' '; \
//     }                     \
//     cout << endl;
// // printf("%.6llf\n", ans);

// #define inputpair(arr, n)               \
//     for (int i = 0; i < n; i++)         \
//     {                                   \
//         int a;                          \
//         int b;                          \
//         cin >> a >> b;                  \
//         arr.push_back(make_pair(a, b)); \
//     }

// #define printpair(arr)                              \
//     for (auto x : arr)                              \
//     {                                               \
//         cout << x.first << ' ' << x.second << endl; \
//     }                                               \
//     cout << endl;

// // const int N = 1e7 + 10;
// #ifndef ONLINE_JUDGE
// #define debug(x)       \
//     cerr << #x << " "; \
//     _print(x);         \
//     cerr << endl;
// #else
// #define debug(x) ;
// #endif

// void init_code()
// {
//     fast_io;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     freopen("error.txt", "w", stderr);
// #endif
// }

// void _print(int t) { cerr << t; }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(lld t) { cerr << t; }
// void _print(double t) { cerr << t; }
// void _print(ull t) { cerr << t; }

// template <class T, class V>
// void _print(pair<T, V> p);
// template <class T>
// void _print(vector<T> v);
// template <class T>
// void _print(set<T> v);
// template <class T, class V>
// void _print(map<T, V> v);
// template <class T>
// void _print(multiset<T> v);
// template <class T, class V>
// void _print(pair<T, V> p)
// {
//     cerr << "{";
//     _print(p.ff);
//     cerr << ",";
//     _print(p.ss);
//     cerr << "}";
// }
// template <class T>
// void _print(vector<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T>
// void _print(set<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T>
// void _print(multiset<T> v)
// {
//     cerr << "[ ";
//     for (T i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }
// template <class T, class V>
// void _print(map<T, V> v)
// {
//     cerr << "[ ";
//     for (auto i : v)
//     {
//         _print(i);
//         cerr << " ";
//     }
//     cerr << "]";
// }

// /*-------------------------------------------------------------------------------------------------------------------------------*/
// // Sieve of Eratosthenes Alogrithm
// int N = 1000000;                    // 90000000;
// vector<bool> is_prime(N + 1, true); // use bool because it consumes less memory than integer so their will be no memory issues
// void sieve()
// {
//     is_prime[0] = is_prime[1] = false;
//     for (int i = 2; i <= N; i++)
//     {
//         if (is_prime[i] && (long long)i * i <= N)
//         {
//             for (int j = i * i; j <= N; j += i)
//                 is_prime[j] = false;
//         }
//     }
// }
// // It will generate all possible lucky numbers(digits containing only 4 and 7)
// vector<int> luckynumber;
// void bruteluckynumber(long long num)
// {
//     luckynumber.pb(num);
//     if (num > 1000000000)
//         return;
//     bruteluckynumber(num * 10 + 4);
//     bruteluckynumber(num * 10 + 7);
// }
// // Calculating a^b for large number in O(logn) using binary exponentiation
// int modular_expo(int a, int b)
// {
//     a = a % mod;
//     int res = 1;
//     while (b > 0)
//     {
//         if (b % 2)
//         {
//             res = res * a % mod;
//             b--;
//         }
//         else
//         {
//             a = a * a % mod;
//             b /= 2;
//         }
//     }
//     return res;
// }
// // This is also called as Matrix exponentiation using it we can find matrix A^n in just O(logn) time
// #define Num 101                               // depend on the value of dim we have to just take slightly greater than dim
// int A[Num][Num], Res[Num][Num], A2[Num][Num]; // Now don't declare matrix A and Res again in void solve()
// void matrix_multiplication(int a[][Num], int b[][Num], int dim)
// {
//     int c[dim][dim];
//     rep(i, 0, dim - 1)
//     {
//         rep(j, 0, dim - 1)
//         {
//             c[i][j] = 0;
//             rep(k, 0, dim - 1) { c[i][j] += (a[i][k] % mod * b[k][j] % mod) % mod; }
//         }
//     }
//     rep(i, 0, dim - 1) rep(j, 0, dim - 1) a[i][j] = c[i][j] % mod;
// }
// void Matrix_expo(int a[][Num], int dim, int n)
// {
//     rep(i, 0, dim - 1) rep(j, 0, dim - 1)
//     {
//         if (i == j)
//             Res[i][j] = 1;
//         else
//             Res[i][j] = 0;
//     }
//     while (n > 0)
//     {
//         if (n % 2)
//         {
//             matrix_multiplication(Res, a, dim);
//             n--;
//         }
//         else
//         {
//             matrix_multiplication(a, a, dim);
//             n /= 2;
//         }
//     }
//     rep(i, 0, dim - 1) rep(j, 0, dim - 1) a[i][j] = Res[i][j] % mod;
// }
// // For getting index of any element in O(logn)
// int binarySearch(vector<int> &arr, int low, int high, int key)
// {
//     if (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == key)
//             return mid;
//         if (arr[mid] > key)
//             return binarySearch(arr, low, mid - 1, key);
//         else
//             return binarySearch(arr, mid + 1, high, key);
//     }
//     else
//         return -1;
// }
// // For getting index of element such that the key value is not greater than that element value present in that array i.e {1 2 3 6} and key=4 so it will return the index of last element that is i=3(zero indexing)
// int binarySearchLargestElementsindex(vector<int> &arr, int low, int high, int key)
// {
//     int mid = low + (high - low) / 2;
//     if (low <= high)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] > key)
//         {
//             return binarySearchLargestElementsindex(arr, low, mid - 1, key);
//         }
//         else
//         {
//             return binarySearchLargestElementsindex(arr, mid + 1, high, key);
//         }
//     }
//     return mid;
// }
// // Returns number of elements smaller than or equal to key value
// int binarySearchnumberofSmallestequalElements(vector<int> &arr, int l, int h, int key)
// {
//     int mid = l + (h - l) / 2;
//     if (l <= h)
//     {
//         if (arr[mid] > key)
//         {
//             h = mid - 1;
//             return binarySearchnumberofSmallestequalElements(arr, l, h, key);
//         }
//         else
//         {
//             l = mid + 1;
//             return binarySearchnumberofSmallestequalElements(arr, l, h, key);
//         }
//     }
//     else
//     {
//         mid -= 1; /* this is to decrease the increased value of l that when condition get false we haven't adjusted l before itself*/
//     }
//     return mid;
// }
// // This will check if n is power of 2 or not in O(1)
// bool is_powerof2(int n)
// {
//     if (n < 0 || n == 1)
//         return false;
//     if ((n & (n - 1)) == 0)
//         return true;
//     else
//         return false;
// }
// // This function will return a set consisting of all the distinct possible factors of a number n in O(sqrt(n))
// void factors(set<int> &st, int n)
// {
//     rep(i, 2, sqrt(n))
//     {
//         if (n % i == 0)
//         {
//             st.insert(i);
//             st.insert(n / i);
//         }
//     }
//     return;
// }
// // Returns set of prime factor of a number
// void primefactors(set<int> &st, int n)
// {
//     rep(i, 2, sqrt(n))
//     {
//         int cnt = 0;
//         while (n % i == 0)
//         {
//             cnt++;
//             n = n / i;
//             st.insert(i);
//         }
//     }
//     if (n > 1)
//     {
//         st.insert(n);
//     }
//     return;
// }
// // It is only applicable for array like 1 2 3 4 5.... where arr[i]=i.So this array would help us in reodering of array such that arr[i]!=i for any i
// void unorder_array(int arr[], int n)
// {
//     rep(i, 0, n - 2)
//     {
//         swap(arr[i], arr[i + 1]);
//         i++;
//     }
//     if (n % 2)
//     {
//         swap(arr[n - 2], arr[n - 1]);
//     }
//     return;
// }
// // To calculate factorial
// int factorial(int n)
// {
//     if (n == 1)
//         return 1;
//     return n % mod * factorial(n - 1) % mod;
// }
// // To take the array input
// void read(int arr[], int n)
// {
//     rep(i, 0, n - 1) { cin >> arr[i]; }
// }
// void readvec(vector<int> &arr)
// {
//     for (auto &it : arr)
//     {
//         cin >> it;
//     }
// }
// // void print(vector<int> &arr) {for (auto it : arr) {cout << it << " ";}}
// // To take modulo of a number
// int modulo(int num)
// {
//     int ans;
//     if (num >= 0)
//     {
//         ans = num % mod;
//     }
//     else
//     {
//         ans = ((num % mod) == 0 ? 0 : num % mod + mod);
//     }
//     return ans;
// }
// // Returns lcm of more then two number or lcm of whole array
// int LcmOfArray(vector<int> &arr, int index)
// {
//     if (index == arr.size() - 1)
//     {
//         return arr[index];
//     }
//     int a = arr[index];
//     int b = LcmOfArray(arr, index + 1);
//     return (a * b / __gcd(a, b));
// }
// // Returns whether the permutation vector is completely in sorted order or not
// bool is_permutationsorted(vector<int> &arr, int n)
// {
//     rep(i, 0, n - 1)
//     {
//         if (i + 1 != arr[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// // Sorting the vector of pairs in in ascending order with respect to second element
// bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
// {
//     if (a.second == b.second)
//         return (a.first < b.first);
//     else
//         return (a.second < b.second);
// }
// // Checks whether a character is present or not in the string
// bool is_char_present(string str, char ch)
// {
//     size_t found = str.find_first_of(ch);
//     if (found != string::npos)
//         return true;
//     else
//         return false;
// }
// // upper_bound(all(arr),key)-arr.begin() : when we require no. of elements smaller or equal to key are asked
// // lower_bound(all(arr),key)-arr.begin() : when we require no. of elements strictly smaller than key are asked
// /*-------------------------------------------------------------------------------------------------------------------------------*/

// int n, m, x, y, z, k, l, a, b;
// const int INF = 1e9 + 7;
// const int Nmax = 10005;

// void sarthak()
// {
//     int one = 0, zer = 0, sum = 0, ans = 0, naruto = 0;
//     string s;
//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     // a[i] -> smartness of a student
//     // a[i]% topic==0

//     // 6 4 3 5 7

//     // m=7

//     // 3 -> 1,3        -> 2 ->remove
//     // 4 -> 1,2,4      -> 4
//     // 5 -> 1,5        -> 5
//     // 6 -> 1,2,3,6    -> 6
//     // 7 -> 1,7        -> 7

//     sort(a.begin(), a.end());

//     vector<vector<int>> factors(n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j * j <= a[i]; j++)
//         {
//             if (a[i] % j == 0)
//             {
//                 int factor1 = j;
//                 int factor2 = a[i] / j;

//                 if (factor1 <= m)
//                 {
//                     factors[i].push_back(factor1);
//                 }
//                 if (factor2 <= m && factor2 != factor1)
//                 {
//                     factors[i].push_back(factor2);
//                 }
//             }
//         }
//     }

//     // for(int i=0;i<n;i++)
//     // {
//     //     for(auto x:factors[i]) cout<<x<<" ";
//     //     cout<<endl;
//     // }

//     int left = 0;
//     int right = 0;

//     set<int> st;
//     map<int, int> mp;

//     int res = 1e18;

//     while (left < n)
//     {
//         if (st.size() < m)
//         {
//             if (right >= n)
//                 break;
//             for (int i = 0; i < factors[right].size(); i++)
//             {
//                 mp[factors[right][i]]++;
//                 st.insert(factors[right][i]);
//             }
//             right++;
//         }
//         else
//         {
//             res = min(res, a[right - 1] - a[left]);
//             for (int i = 0; i < factors[left].size(); i++)
//             {
//                 mp[factors[left][i]]--;
//                 if (mp[factors[left][i]] == 0)
//                     st.erase(factors[left][i]);
//             }
//             left++;
//         }
//         db(right)
//     }

//     if (res == 1e18)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     cout << res << endl;

//     cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
// }

// int32_t main()
// {
//     init_code();
//     // sieve();
//     // bruteluckynumber(0); sort(all(luckynumber)); luckynumber.resize(unique(all(luckynumber)) - luckynumber.begin());

//     int luffy = 1;
//     cin >> luffy;
//     while (luffy--)
//     {
//         sarthak();
//     }
//     return 0;
// }