#include<iostream>
#include<vector>

using namespace std;

int occ(const vector<int>& v, int k) {
    
    
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    cout << occ(v,k) << endl;
}