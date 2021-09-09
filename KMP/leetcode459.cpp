#include<iostream>
#include<string>
using namespace std;

void getNext(int *next, const string &s) {
    int j = 0;
    next[0] = 0;
    cout << "next[0]"<<next[0]<<endl;
    
    for (int i = 1; i < s.size(); ++i) {
        while (j > 0 && s[i] != s[j]) {
            j = next[j - 1];
        }
        if (s[i] == s[j]) ++j;
        next[i] = j;
        cout << "next["<<i<<"] = "<<next[i]<<endl;
    }
}

int main() {
    string s = "abcabcabc";
    int next[s.size()];
    getNext(next, s);
    system("pause");
    return 0;
}