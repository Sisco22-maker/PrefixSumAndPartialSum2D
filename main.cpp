
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
    
    // code for prefix sum and partial sum 2D
    
    // 1- prefix sum  
    int n,m,q;cin >> n >> m >> q;
    vector<vector<ll>> v(n+7,vector<ll>(m+7));
    for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j <=m; j++)
        {
            cin >> v[i][j];
        }
    }
     for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j <=m; j++)
        {
            v[i][j] += v[i][j-1];
        }
    }
       for(int j = 1; j <=m; j++)
    {
        for(int i = 1; i <=n; i++)
        {
            v[i][j] += v[i-1][j];
        }
    }
    while(q--)
    {
        int x1,y1,x2,y2;cin>> x1>>y1>>x2>>y2;
        ll sum = v[x2][y2] -
        v[x2][y1 - 1] -
        v[x1 - 1][y2] +
         v[x1 - 1][y1 - 1];
        cout << sum << el;
    }
//------------------------------------------------------//

// To make the Partial sum on the 2D matrix you have to do the folowing
  vector<vector<ll>> prefix(n+7,vector<ll>(m+7));
  int q;cin >> q;
  while(q--)
  {
      int x1,y1,x2,y2,value;cin >> x1 >> y1 >> x2 >> y2 >> value;
      prefix[x1][y1] += vlaue;
      prefix[x1][y2+1] -= value;
      prefix[x2][y1] -= value;
      prefix[x2][y2+1] += value;
  }
  //Then we have to make prefix sum on the prefix matrix
  
  // Then we have to iterate on the original matrix and print the value of the prefix plus the original



}
  return 0;
}





