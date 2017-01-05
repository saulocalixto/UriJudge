#include <bits/stdc++.h>
using namespace std;

#define ABS(x) ((x)<0 ? -(x) : (x))
#define REP(i,n) for(int i=0, _e(n); i<_e; i++)
#define FOR(i,a,b) for(int i(a), _e(b); i<=_e; i++)
#define FORD(i,a,b) for(int i(a), _e(b); i>=_e; i--)
#define FORIT(i, m) for (__typeof((m).begin()) i=(m).begin(); i!=(m).end(); ++i)
#define SET(t,v) memset((t), (v), sizeof(t))
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize( unique( ALL(c) ) - (c).begin() )

#define inf_int (1<<31)-1
#define inf_long (1<<63)-1
#define sz size()
#define pb push_back
#define VI vector<int>
#define VS vector<string>

typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;


#ifdef DEBUG
#define dbg(x) x
#define dbgp(x) cerr << x ;
#else
#define dbg(x) //x
#define dbgp(x) //cerr << x << endl;
#endif

int n , a[100] ;

int main(){
    cin >> n ;
    REP(i,n){
        cin >> a[i];
    }
    sort(a,a+n);
    cout << 1 << " " << a[0] << endl;
    if ( a[n-1] == 0 ) {
        cout << 2 << " " << a[1] << " " << a[2] << endl;
        cout << n-3 ;
        for(int i=3;i<n;i++) cout << " " << a[i];
        cout << endl;
    }
    else {
        cout << 1 << " " << a[n-1] << endl;
        cout << n-2 ;
        for(int i=1;i<n-1;i++) cout << " " << a[i];
        cout << endl;
    }
    return 0;
}
