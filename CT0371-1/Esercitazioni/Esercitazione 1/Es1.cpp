#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

struct Node{ 
  int key;
  bool fruitful;
  Node* left;
  Node* center;
  Node* right;
};

typedef Node* PTNode;

vector<int> ricostruisci_array(int dim);

/* Funzione ausiliaria per sommare i valori node->key dei sottoalberi ed richiamare set_fruitful() nei nodi interni
*/
int auxTreeSum(PTNode node, int k){
    if(node == nullptr) return 0; // Caso base | Complessità O(1)
    
  set_fruitful(node, k); // Ricorsione per set_fruitful nei nodi interni | Complessità O(n)
  return node->key + auxTreeSum(node->left, k) + auxTreeSum(node->center, k) + auxTreeSum(node->right, k); // Ricorsione ritono somma sottoalberi | Complessità: 1 + O(3n) => O(n)

}

void set_fruitful(PTNode node, int k){
    if(node == nullptr) return;
    node->fruitful = ( auxTreeSum(node->left, k) + auxTreeSum(node->center, k) + auxTreeSum(node->right, k) ) > k;
}

PTNode creaAlbero(vector<int>& arr, int p, int f){
    if (p > f)
        return nullptr;
    size_t ter = (f - p)/3;
    PTNode root = new Node{arr[p], false, nullptr, nullptr, nullptr};
    root->left = creaAlbero(arr, p+1, p + ter);
    root->center = creaAlbero(arr, p+ter+1, p+2*ter);
    root->right = creaAlbero(arr, p+2*ter+1, f);
    return root;
}

vector<int> read_array(int dim) {
    vector<int> res;
    if (dim != 0) {
        string delimiter = " ";
        string line;
        getline(cin, line);
        for(int i = 0; i < dim; i++) {
            string key_str = line.substr(0, line.find(delimiter));
            int key = stoi(ltrim(rtrim(key_str)));
            res.push_back(key);
            line.erase(0, line.find(delimiter) + delimiter.length());
        }
    }
    return res;
}

void visita_keys(PTNode r) {
    if (r) {
        cout << r->key << ", ";
        visita_keys(r->left);
        visita_keys(r->center);
        visita_keys(r->right);
    }
}

void visita(PTNode r) {
    if (r) {
        cout << (r->fruitful ? "t" : "f");
        visita(r->left);
        visita(r->center);
        visita(r->right);
    }
}

int main()
{
    int dim, k;
    vector<int> arr;
    PTNode r;

    string k_temp;
    getline(cin, k_temp);

    k = stoi(ltrim(rtrim(k_temp)));
    
    string dim_temp;
    getline(cin, dim_temp);

    dim = stoi(ltrim(rtrim(dim_temp)));

    arr = read_array(dim);
    
    //for(int i = 0; i < arr.size(); i++)
    //    cout << arr[i] << "; ";
    //cout << endl;
    
    r = creaAlbero(arr, 0, dim-1);

    //visita_keys(r);
    
    set_fruitful(r, k);
    
    visita(r);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
