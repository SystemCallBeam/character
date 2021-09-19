#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int cnt = 0, frac3 = 0, frac11 = 0;
    int size = n.size();
    for (int i = 0; i < size; i++)
    {
        frac3 = (frac3*10+(n[i]-'0'))%3;
        frac11 = (frac11*10+(n[i]-'0'))%11;
    }
    cout << frac3 << " " << frac11;
    return 0;
}