/*=============================================================================

            author: @shmVirus --> Sabbir < sabbir@disroot.org >

=============================================================================*/
#include <bits/stdc++.h>
using namespace std;


/*=====     using     =======================================================*/
/*---------------aliases: data types                               ----------*/
using ll    = long long;
/*---------------aliases: containers                               ----------*/
using vi    = vector<int>;              // vector of integers
/*---------------aliases: pairs                                    ----------*/
using pi    = pair<int, int>;           // pair of integers
/*---------------aliases: containers of pairs                      ----------*/
using vpi   = vector<pair<int, int>>;   // vector of pairs of integers
/*=====-----using-----=======================================================*/


/*=====     #define     =====================================================*/
/*-----------------aliases: functions with arguments               ----------*/
#define pb      push_back
#define pob     pop_back
#define mp      make_pair
#define all(v)  (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
/*-----------------aliases: functions without arguments            ----------*/
#define fi      first()
#define se      second()
#define be      begin()
#define en      end()
/*-----------------aliases: miscellaneous functions                ----------*/
#define sz(v)           (int)(v).size()
#define countx(v,x)     count((v).begin(),(v).end(), (x))
#define asrt(v)         sort((v).begin(), (v).end())
#define dsrt(v)         sort((v).rbegin(), (v).rend())
#define rev(v)          reverse((v).begin(), (v).end())
#define mx(v)           *max_element((v).begin(), (v).end())
#define mn(v)           *min_element((v).begin(), (v).end())
#define sum(v)          accumulate((v).begin(),(v).end(), 0)
#define uni(v)          (v).erase(unique((v).begin(),(v).end()), (v).end());
/*-----------------macros: function like                           ----------*/
#define sq(a)           ( (a) * (a) )
#define issq(a)         ( (ll)(sqrt((a))) * (ll)(sqrt((a))) == (a) )
#define mod(a, m)       ( ((a) % (m) + (m)) % (m) )
#define gcd(a,b)        ( __gcd((a), (b)) )
#define lcm(a,b)        ( (a)*(b)/(gcd((a),(b))) )
/*-----------------macros: loops                                   ----------*/
#define FOR(i,L,R)      for (int (i) = (L); (i) < (R); ++(i))
#define FORE(i,L,R)     for (int (i) = (L); (i) <= (R); ++(i))
#define ROF(i,R,L)      for (int (i) = (R) - 1; (i) >= (L); --(i))
#define ROFE(i,R,L)     for (int (i) = (R); (i) >= (L); --(i))
/*-----------------macros: miscellaneous                           ----------*/
#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n";
/*=====-----#define-----=====================================================*/


/*=====     const     =======================================================*/
const int INF = 2147483647;
const long long INF64 = 9223372036854775807;
const double PI = 3.1415926535897932384626;
/*=====-----const-----=======================================================*/


clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}


void solution ();
int main (void) {
    startTime = clock();
    FastIO;

    int tc=1;
    //cin>>tc;
    for(int cs=1;cs<=tc;cs++) {
        solution();
        cerr << "--- Case #"<< cs << " end ---\n";
        cerr << "time = " << fixed << setprecision(5) << getCurrentTime() << endl;
    }

    return 0;
}
void solution () {
    int n,a,b,c, p=0;
    cin >> n >> a >> b >> c;
    for (int i=0; i*a<=n; ++i) {
        for (int j=0; i*a+j*b<=n; ++j) {
            int k = (n-i*a-j*b)/c;
            if (i*a+j*b+k*c == n) p = max(i+j+k, p);
        }
    }
    cout << p << nl;
}