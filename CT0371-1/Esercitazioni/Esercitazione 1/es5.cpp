#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void findGoodCell(vector<vector<int>>& map, int columns, int& index_row, int& index_column){
    return;
}

vector<vector<int>> read_matrix(int dim_r, int dim_c) {
    vector<vector<int>> res;
    if ((dim_r != 0) && (dim_c != 0)) {
        string delimiter = " ";
        string line;
        for(int i = 0; i < dim_r; i++) {
            getline(cin, line);
            vector<int> row;
            for(int j = 0; j < dim_c; j++) {
                string key_str = line.substr(0, line.find(delimiter));
                int key = stoi(ltrim(rtrim(key_str)));
                row.push_back(key);
                line.erase(0, line.find(delimiter) + delimiter.length());
            }
            res.push_back(row);
        }
    }
    return res;
}

int main() {
    
    int dim_r, dim_c;
    vector<vector<int>> field;
    
    string dim_temp;
    getline(cin, dim_temp);
    dim_r = stoi(ltrim(rtrim(dim_temp)));
    
    getline(cin, dim_temp);
    dim_c = stoi(ltrim(rtrim(dim_temp)));
    
    field = read_matrix(dim_r, dim_c);
    
    int index_row, index_column;
    
    findGoodCell(field, dim_c, index_row, index_column);
    
    cout << index_row << " " << index_column;

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