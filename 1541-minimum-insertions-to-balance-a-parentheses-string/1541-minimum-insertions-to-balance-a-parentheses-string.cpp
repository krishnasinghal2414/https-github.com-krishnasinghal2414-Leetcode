class Solution {
public:
    int minInsertions(string s) {
         int c = 0;
        int o = 0;
        for(char ch : s){
            if(ch == '('){
                if(c % 2 == 1){
                    o++;
                    c--;
                }
                c+= 2;
            }else{
                c--;
                if(c < 0){
                    o++;
                    c = 1;
                }
            }
        }
        return o + c;
    }
};