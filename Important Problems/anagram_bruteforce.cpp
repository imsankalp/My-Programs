// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespaces std;
int main() {
    // Write C++ code here
string s , t;
int count = 0;
cin>>s>>t;
for(int i = 0; i < s.length; i++){
    for(int j = 0; j < t.length(); j++){
        if(s[i] == t[j] && s[i] !- '$' && t[i] != '$'){
            count++;
            s[i] = '$';
            t[j] = '$';
            break;
        }
    }
}
    if(count == s.length())
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    return 0;
}
