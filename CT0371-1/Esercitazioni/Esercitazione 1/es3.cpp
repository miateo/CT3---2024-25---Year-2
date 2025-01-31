#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

struct NodeG {
    int key;
    NodeG* left_child;
    NodeG* right_sib;
};

typedef NodeG* PNodeG;

string ltrim(const string &str);
string rtrim(const string &str);
vector<string> split(const string &str);
PNodeG aggiungiNodo(PNodeG u, int val);
PNodeG costruisciInAmpiezzaInput(int dim);

int aux([[maybe_unused]] PNodeG n) {
    return 0; // Implementazione provvisoria
}

int larghezza([[maybe_unused]] PNodeG r) {
    return 0; // Implementazione provvisoria
}

int main() {
    vector<int> arr;
    PNodeG r;

    string dim_temp;
    getline(cin, dim_temp);

    int dim = stoi(ltrim(rtrim(dim_temp)));

    arr.resize(dim);

    r = costruisciInAmpiezzaInput(dim);

    cout << "Risultato: " << larghezza(r);

    return 0;
}

PNodeG aggiungiNodo(PNodeG u, int val) {
    PNodeG z, iter;

    z = new NodeG{val, nullptr, nullptr};
    if (u->left_child == nullptr)
        u->left_child = z;
    else {
        iter = u->left_child;
        while (iter->right_sib)
            iter = iter->right_sib;
        iter->right_sib = z;
    }

    return z;
}

PNodeG costruisciInAmpiezzaInput(int dim) {
    PNodeG r, u;
    queue<PNodeG> q;

    if (dim == 0)
        return nullptr;

    string radix_val_temp;
    getline(cin, radix_val_temp);

    int radix_val = stoi(ltrim(rtrim(radix_val_temp)));

    r = new NodeG{radix_val, nullptr, nullptr};

    q.push(r);

    vector<int> vals;

    while (!q.empty()) {
        u = q.front();
        q.pop();

        string vals_string_temp;
        getline(cin, vals_string_temp);
        vector<string> splitted_string_temp;

        splitted_string_temp = split(rtrim(ltrim(vals_string_temp)));
        if (splitted_string_temp.size() >= 2) {
            int grado = stoi(splitted_string_temp[0]);

            for (int i = 1; i <= grado; i++) {
                int val = stoi(splitted_string_temp[i]);
                q.push(aggiungiNodo(u, val));
            }
        }
    }

    return r;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char c) { return !isspace(c); })
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char c) { return !isspace(c); }).base(),
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