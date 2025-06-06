/***   Bismillahir Rahmanir Rahim   ***/

#include<bits/stdc++.h>
using namespace std;

#define     nn          '\n'
#define     ss          second
#define     ff          first
#define     sp(d, n)    fixed << setprecision(d) << n
#define     srt(v)      sort(v.begin(),v.end());
#define     rsrt(v)     sort(v.rbegin(),v.rend());
#define     rev(v)      reverse(v.begin(),v.end());
#define     mem(a, x)   memset(a, x, sizeof a)
#define     yes         cout << "YES" << nn
#define     no          cout << "NO" << nn

using ll =  long long;
using ld =  long double;
using ull = unsigned long long;
const ld pi = acos(-1.0);
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

int dx[6] = {0, 1, -1, 0, 0};
int dy[6] = {0, 0, 0, 1, -1};

const int M = 1e9 + 7;
const int N = 1e3 + 9;

void solution(){
    int n; 
    cin >> n; 

    int a[n + 1], b[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    } 

    string s, k; 
    cin >> s; 
    k = s; 

    if(is_sorted(a + 1, a + n + 1)){
        cout << 0 << nn;
        return;
    }

    srt(k);
    if(k[0] == k[n - 1]){
        if(!is_sorted(a + 1, a + n + 1)){
            cout << -1 << nn;
        }
        else cout << 0 << nn;
        return;
    }
    
    int l = 1, r = n; 
    sort(b + 1, b + n + 1);
    for(int i = 1; i <= n; i++){
        if(a[i] != b[i]){
            l = i; 
            break;
        }
    }
    for(int i = n; i >= 1; i--){
        if(a[i] != b[i]){
            r = i; 
            break;
        }
    }

    int css = 0, cns = 0;
    int csf = 0, cnf = 0;
    for(int i = l; i >= 1; i--){
        if(s[i - 1] == 'S')csf++;
        else cnf++;
    }
    for(int i = r; i <= n; i++){
        if(s[i - 1] == 'N')cns++;
        else css++;
    }

    if((csf and cns) or (cnf and css)){
        cout << 1 << nn;
    }
    else cout << 2 << nn;
}
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t = 1, c = 1;
    cin >> t;
    //cin.ignore();
    while(t--){
        //cout << "Case " << c++ << ": ";
        solution();
    }
    return 0;
}
