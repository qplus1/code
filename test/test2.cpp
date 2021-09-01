#include<iostream>
#include<string>
using namespace std;
string reverseLeftWords(string s, int n);
void reverse(string &s, int l, int r);
    string reverseLeftWords(string s, int n) {
        int len = s.size();
        //先反转前n个
        reverse(s,0,n-1);
        //在反转n至最后
        reverse(s,n,len-1);
        //反转整个字符串
        reverse(s,0,n-1);
        return s;
    }
    void reverse(string &s, int l, int r)
    {
        for (int i = l, j = r; i < j; i++, j--) swap(s[i],s[j]);
    }
  

int main()
{
    int k =2;
    string s = "abcdefg";
    reverseLeftWords(s,k);

    return 0;

}
