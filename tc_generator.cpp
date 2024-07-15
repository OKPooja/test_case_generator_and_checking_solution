#include <bits/stdc++.h>
using namespace std;

void generate_testcases(ofstream &outfile, int test_count, int max_n, int max_value) {
    random_device rd;  
    mt19937 gen(rd()); 
    uniform_int_distribution<> dist_n(1, max_n); 
    uniform_int_distribution<> dist_val(1, max_value); 

    for (int t = 0; t < test_count; ++t) {
        int n = dist_n(gen); 
        outfile << n << "\n";
        for (int i = 0; i < n; ++i) {
            outfile << dist_val(gen) << " "; 
        }
        outfile << "\n"; 
    }
}

int main() {
    int test_count = 100; 
    int max_n = 100000; 
    int max_value = 100000; 

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
