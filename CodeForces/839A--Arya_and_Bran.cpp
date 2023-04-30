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
#define all(a)  (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
/*-----------------aliases: functions without arguments            ----------*/
#define fi      first()
#define se      second()
#define be      begin()
#define en      end()
/*-----------------aliases: miscellaneous functions                ----------*/
#define sz(a)           (int)(a).size()
#define countv(a,x)     count((a).begin(),(a).end(), x)
#define asrt(a)         sort((a).begin(), (a).end())
#define dsrt(s)         sort((a).rbegin(), (a).rend())
#define rev(a)          reverse((a).begin(), (a).end())
#define mx(a)           *max_element((a).begin(), (a).end())
#define mn(a)           *min_element((a).begin(), (a).end())
#define sum(a)          accumulate((a).begin(),(a).end(), 0)
#define uni(a)          (a).erase(unique((a).begin(),(a).end()), (a).end());
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
#define test    int tc; cin>>tc; for(int cs=1;cs<=tc;cs++)
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

    {
        solution();
        //cerr << "--- Case #"<< cs << " end ---\n";
        //cerr << "time = " << fixed << setprecision(5) << getCurrentTime() << endl;
    }

    return 0;
}
void solution () {
    int n,k, x, c=0,s=0; cin >> n >> k;
    while (n--) {
        cin >> x; c += x;
        x = min (8, c);
        c -= x; k -= x; s++;
        if (k<=0) break;
    }
    cout << (k>0? -1 : s) << nl;
}
