#include<bits/stdc++.h>
#define int long long
#define f(i, n) for(int i = 0; i < n ; i ++)
using namespace std;
#define pb push_back
#define endl '\n' 


void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int_fast32_t main(){
    fast();
    int t;
    cin >> t;
    while( t--){ // basically whatever not come u can put off nice;
            int n;
            cin >> n;
            int arr[n];
            for(int i =0 ;i < n ; i ++){
                int value;
                cin >> value;
                arr[i] = value;
            }
            set<int>s;
            for(int i = 1; i <= n ; i ++){
                s.insert(i);
            }
            map<int, int> mp;
            vector<int> b(n,0);
            for(int i = 0; i < n ; i++){
                if(mp.count(arr[i]) == 0){
                    b[i] = arr[i];
                    mp[arr[i]] ++;
                    s.erase(arr[i]);

                }
                else{
                    b[i] = *s.begin();
                    s.erase(*s.begin());
                    mp[b[i]] ++;

                }
            }
            for(auto it: b){
                cout << it << " ";
            }
            cout << endl;


    }


    
    return 0;
}