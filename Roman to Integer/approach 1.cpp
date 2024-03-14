class Solution {
public:
    int romanToInt(string s) {
        reverse(s.begin(),s.end());
        int ans = 0;
        int I = 0, V = 0, X = 0, L = 0, C = 0, D = 0, M= 0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='I' && I ==0){
                ans = ans + 1;
                continue;
            }else if(s[i]=='I' && I == 1){
                ans = ans - 1;
                continue;
            }
            
            if(s[i]=='V' && V == 0){
                ans = ans + 5;
                I = 1;
                continue;
            }else if(s[i]=='V' && V == 1){
                ans = ans - 5;
                continue;
            }
            
            if(s[i]=='X' && X == 0){
                ans = ans + 10;
                I = 1;
                V = 1;
                continue;
            }else if(s[i]=='X' && X == 1){
                ans = ans - 10;
                continue;
            }
            
            if(s[i]=='L' && L == 0){
                ans = ans + 50;
                I = 1;
                V = 1;
                X = 1;
                continue;
            }else if(s[i]=='L' && L == 1){
                ans = ans - 50;
                continue;
            }
            
            if(s[i]=='C' && C == 0){
                ans = ans + 100;
                I = 1;
                V = 1;
                X = 1;
                L = 1;
                continue;
            }else if(s[i]=='C' && C == 1){
                ans = ans - 100;
                continue;
            }
            
            if(s[i]=='D' && D == 0){
                ans = ans + 500;
                I = 1;
                V = 1;
                X = 1;
                L = 1;
                C = 1;
                continue;
            }else if(s[i]=='D' && D == 1){
                ans = ans - 500;
                continue;
            }
            
            if(s[i]=='M' && M == 0){
                ans = ans + 1000;
                I = 1;
                V = 1;
                X = 1;
                L = 1;
                C = 1;
                D = 1;
                continue;
            }else if(s[i]=='M' && M == 1){
                ans = ans - 1000;
                continue;
            }
        }
        return ans;
    }
};