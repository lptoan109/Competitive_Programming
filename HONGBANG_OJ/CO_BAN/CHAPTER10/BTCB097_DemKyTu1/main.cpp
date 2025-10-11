#include <bits/stdc++.h>
using namespace std;
int ma[256]={0};
string to_lower(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	return s;
}
void dem(string s1){
    string s = to_lower(s1);
    for(int i = 0; i<s.size();++i){
        ma[(int)s[i]] +=1;
    }
    for(int i = 0; i<256;++i){
        if(ma[i]>=1)
            cout << (char)i << " " << ma[i] << "\n";
    }
}
int main()
{
    string s,t;
    while(getline(cin,t)){
        if(t=="") break;
        s+=t+" ";
    }
    dem(s);
    return 0;
}
