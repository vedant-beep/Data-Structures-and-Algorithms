#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    int n = pattern.size();
    int count_close = 0;
    int count_open = 0;
    int res = 0;
    for(int i =0; i<n; i++){
        if(pattern[i] == ')' && count_open == 0){
            count_close++;
        }
        else if(pattern[i] == '('){
            count_open++;
        }
        else if(pattern[i] == ')' && count_open != 0){
            count_open--;
        }
    }
    res  = count_open + count_close;
    return res;
}
