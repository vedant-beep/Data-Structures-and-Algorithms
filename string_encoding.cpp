#include <bits/stdc++.h> 
string encode(string &message)
{
    int n = message.size();
    int count = 1;
    string str = "";
    char curr_char = message[0];
    for(int i =1; i<n; i++){
        if(message[i] != curr_char){
            str +=curr_char+to_string(count);
            curr_char = message[i];
            count = 1;
        }
        else{
            count++;
        }
    }
    str +=curr_char+to_string(count);
    return str;
}
