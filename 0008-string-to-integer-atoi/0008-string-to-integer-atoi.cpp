class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int flag = 0;
        int i=0;
        long num = 0;
        while(i < n){
            if(s[i] == ' ') i++;
            else break;
        }
        if(s[i] == '-'){
            i++;
            flag = 1;
        }
        else if (s[i] == '+') i++;

        for(int j = i ; j < n ; j++){
            if(s[j] >= '0' && s[j] <= '9'){
               num = num*10 + (s[j] - '0');

            if(num >= INT_MAX)
            break;   
            }
            else
               break;
        }
        if(flag == 1){
            num = -1*num;
        }
        if(num<=INT_MIN)
        return INT_MIN;  

        else if(num>=INT_MAX) 
        return INT_MAX;

        return num;
    }
};