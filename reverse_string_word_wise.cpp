#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    int n = input.size();
    string res = "";
    string str = "";
    for(int i=n-1; i>=0; i--){
        if(input[i] == ' ' && str != ""){
            if(res != ""){
                res += " "+str;
            }
            else{
                res += str;
            }
            str = "";
        }
        if(input[i] != ' '){
            str = input[i] + str;
        }
    }
    if(str !=""){
        if(res != ""){
                res += " "+str;
            }
            else{
                res += str;
            }
    }
    return res;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
