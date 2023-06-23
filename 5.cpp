

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
const int INF = 1e9 + 7;

void sarthak() {
    int one = 0, zer = 0, sum = 0,   naruto = 0 ;
    string s;
    cin >> n >> x;
    vi a;
    input(a, n);
    int ans = 0;
    for (int i = 0; i < 30; i++)
    {
        int val = 0;
        for (int j = 0; j < n; j++) {
            val |= 1 << ((a[j] >> i) & 1);
        }
        db(val)
        if (val != 3) {
            continue;
        }

        int tval = x;
        if (tval & (1 << i))
        {
            tval ^= 1 << i;
            db(tval)

            for (int j = i - 1; j >= 0; j--) {
                tval |= (1 << j);
            }
        }

        ans = max(ans, tval);
    }

    cout << ans << endl;



    cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";

}




int32_t main()
{
    init_code();
    //sieve();
    //bruteluckynumber(0); sort(all(luckynumber)); luckynumber.resize(unique(all(luckynumber)) - luckynumber.begin());

    int luffy = 1;
    cin >> luffy;
    while (luffy--) {
        sarthak();
    }
    return 0;
}