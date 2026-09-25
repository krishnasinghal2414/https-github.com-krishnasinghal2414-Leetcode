class Solution {
public:
    string intToRoman(int num) {
        int in[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ro[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans;
        for(int i=0;i<13;i++){
            while(num>=in[i]){
                ans.append(ro[i]);
                num-=in[i];
            }
        }
        return ans;   
    }
};