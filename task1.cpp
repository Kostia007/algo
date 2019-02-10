#include <iostream>
#include <fstream>
using namespace std;
int find(string s){
    int k=0,max=0;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='1') k++;
        if(s[i]=='0'){
            if(max<k) max=k;
            k=0;
        }
    }
    if (k>max) max=k;
    return max;
}
int main(){
    ifstream input_f("INPUT.TXT");
    if (!input_f) return 1;
    string s;
    input_f>>s;
    if (s.length()>100){
        cout<<"Warning! The total number of digits exceeds 100."<<endl;
        return 2;
    }
    input_f.close();
    fstream out("OUTPUT.TXT");
    out<<find(s)<<endl;
    out.close();
    return 0;
}
