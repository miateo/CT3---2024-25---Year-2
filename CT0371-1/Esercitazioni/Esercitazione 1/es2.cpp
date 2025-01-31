#include <iostream>    // cin, cout
#include <vector>      // vector
#include <string>      // string, stoi
#include <algorithm>   // find_if
#include <functional>  // ptr_fun
#include <cctype>      // isspace

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

struct Node{
    int key;
    Node* left;
    Node* right;
};

typedef Node* PNode;

int aux(PNode n){
    if(n->left && n->right) return 0; // Case Complete
    if(!n->left && n->right) return 1; // Case Right
    if(n->left && !n->right) return 2; // Case Left
    return -1; // Case Leaf
}
bool quasicompleto(PNode node){
    // BSF
    /*
     Si ferma se:
     - un nodo è preceduto da una foglia
     - un nodo ha solo il figlio right
     - un nodo completo è preceduto da un nodo left -> "Quasicompleto"
    */
    if(!node) return true;
    if(node->right && !node->left) return false;
    
    vector<PNode> q;
    q.push_back(node);
    
    int prevType = aux(node);
    bool ret = true;
    // cout << "root = " << prevType << endl;
    while(!q.empty() && ret){
        PNode curr = q[0];
        q.erase(q.begin());
        // cout << curr->key << endl;
        int currType = aux(curr);
        if(curr != node){
            if(currType == 1){
                ret = false;
            }else{
                // cout << "ret = " << ret << endl;
                if(prevType == 2 && currType != -1) ret = false; // caso left non seguito da leaf
                if(prevType == -1 && currType !=-1) ret = false; // caso leaf non seguito da leaf
                if(prevType == 2 && currType == 0) ret = false; // caso left seguito da completo
                if(prevType == 0 && currType == 1) ret = false;
            }
            // cout << "prev = " << prevType << endl;
            cout << "curr = " << currType << endl;
            cout << "curr->key" << curr->key << endl;
            prevType = currType;
        }
        if(ret){
            if(curr->left){
                q.push_back(curr->left);
            }
            if(curr->right)
                q.push_back(curr->right);
        }
    }
    return ret;
}




PNode ricostruisciAux(const vector<int>& va, int infa, int supa, const vector<int>& vs, int infs, int sups){

    int i;
    PNode r;

    if (infa > supa)
        return nullptr;

    r = new Node{va[infa],nullptr,nullptr};

    i = infs;

    while (vs[i] != va[infa])
        i++;

    r->left = ricostruisciAux(va, infa+1, infa + (i - infs), vs, infs, i-1);
    r->right = ricostruisciAux(va, infa+(i - infs) + 1, supa, vs, i+1, sups);

    return r;
}

PNode ricostruisci(const vector<int>& va, const vector<int>& vs){
    return ricostruisciAux(va, 0, va.size()-1, vs, 0, vs.size()-1);
}

void visita(PNode r) {
    if (r) {
        visita(r->left);
        cout << r->key;
        visita(r->right);
    }
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

int main()
{
    int dim;
    vector<int> arr_va, arr_vs;
    PNode r;
    
    string dim_temp;
    getline(cin, dim_temp);

    dim = stoi(ltrim(rtrim(dim_temp)));

    arr_va = read_array(dim);
    
    arr_vs = read_array(dim);
    
    r = ricostruisci(arr_va, arr_vs);

    //visita_keys(r);
    
    cout << quasicompleto(r);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), [](int c) { return !isspace(c); })
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), [](int c) { return !isspace(c); }).base(),
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