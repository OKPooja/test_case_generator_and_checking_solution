#include <bits/stdc++.h>
using namespace std;

void generate_testcases(ofstream &outfile, int test_count, int max_n, int max_value) {
    srand(time(0));
    const string charset = "abcdefghijklmnopqrstuvwxyz";

    for (int t = 0; t < test_count; ++t) {
        int n = rand() % max_n + 1; 
        outfile << n << "\n"; 
        string random_string;
        for (int i = 0; i < n; ++i) {
            random_string += charset[rand() % charset.size()];
        }
        outfile << random_string << "\n";
    }
}

int main() {
    int test_count = 15; 
    int max_n = 100; 
    int max_value = 100; 

    ofstream outfile("test_case.txt");
    if (!outfile.is_open()) {
        cerr << "Failed to open file for writing.\n";
        return 1;
    }

    generate_testcases(outfile, test_count, max_n, max_value);
    outfile.close();

    cout << test_count << " test cases generated in test_case.txt." << endl;
    return 0;
}
