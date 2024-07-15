#include <bits/stdc++.h>
using namespace std;

int stoii(string a){
    int num = 0;
    for (int j = 0; j < a.size(); j++) {
        num = num * 10 + (a[j] - '0');
    }
    return num;
}
void solve(int n, string s, ofstream &output) {
	
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] > s[i + 1]) {
            output << "NO\n";
            return;
        }
    }
    output << "YES\n";
}
int main() {
    ifstream inputFile("test_case.txt");

    if (!inputFile.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }
    inputFile.close();

    ofstream output("output.txt");
    if (!output.is_open()) {
        cerr << "Failed to open file for writing.\n";
        return 1;
    }
    for (int i = 0; i < lines.size(); i += 2) {
    	cout << lines[i] << endl;
    	cout << lines[i + 1] << endl;
        int n = stoii(lines[i]);
        string s = lines[i + 1];
        solve(n, s, output);
    }
    output.close();
    return 0;
}
