/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vp;
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"
#define format(n) fixed<<setprecision(n)

//directions array 4 directions
// Which is: d r u  l
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0, -1};
/*
to loop on the vertices

we loop on the hole grid and put our conditon

int nx = i+dx[k],ny = j+dy[k] : k is the varialble

then we set this condition
if(nx < rows && ny < columns)
    #some code here

of the loop which loops on the grid array
*/
//directions array 8 directions
// Which is: d r u  l ld lu rd ru
int dx_8[8] = {1,0,-1,0, 1,-1,1,-1};
int dy_8[8] = {0,1,0, -1,-1,1,1, 1};
const int INF = (int)1e9;
int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}
//in any array index = rows*i+j and i = index/rows , j = index%rows
/*
- ~Tip
if you wanna get the longest sequance of a string just use a map and max
*/
template<class T>
void print(vector<T>v,T s)
{
    for(int i = 0; i < s; i++)cout << v[i] << " ";
    cout << el;
}


int main() {
     SUPERPOWER;
     // freopen("popcorn.in", "r", stdin);
int t = 1;//cin >> t;
while(t--)
{
    //write the code here
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n ; i++)
    {
       cin >> v[i].first >>v[i].second;

    }
    sort(v.begin(),v.end());
    int l = v[0].first,r = v[0].second;
    for(int i = 0; i < n; i++)
    {
        if(v[i].first <= r)
        {
            r = max(r,v[i].second);
        }else
        {
            cout << l << " " << r << el;
            l = v[i].first;
            r = v[i].second;
        }
    }
    r = max(r,v[n-1].second);
    cout << l << " " << r << el;




}
  return 0;
}





