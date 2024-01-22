//Author : Rushikesh Thakare

// You have been given an integer 'N'. Your task is to generate and return all binary strings of length 'N' such that there are no consecutive 1's in the string.

// A binary string is that string which contains only ‘0’ and ‘1’.

// For Example:
// Let ‘N'=3, hence the length of the binary string would be 3. 

// We can have the following binary strings with no consecutive 1s:
// 000 001 010 100 101 

#include <iostream>
#include <vector>
using namespace std;

void gent(int n, int idx, string temp, vector<string>& ans) {
    if (n == idx) {
        ans.push_back(temp);
        return;
    }
    // Add 0;
    gent(n, idx + 1, temp + '0', ans);
    // Add 1 without being consecutive;
    if (idx == 0 || (idx > 0 && temp[idx - 1] != '1'))
        gent(n, idx + 1, temp + '1', ans);
}

vector<string> generateString(int N) {
    vector<string> ans;
    string temp = "";
    gent(N, 0, temp, ans);
    return ans;
}

int main() {
    int n = 4;
    vector<string> result = generateString(n);

    // Print the generated binary strings
    for (const string& s : result) {
        cout << s << " ";
    }

    return 0;
}
