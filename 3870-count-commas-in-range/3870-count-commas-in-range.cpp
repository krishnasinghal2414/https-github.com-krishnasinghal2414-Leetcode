class Solution {
public:
    int countCommas(int n) {
      int c=0;
      if(n>999){
        int a=(n-1000)+1;
        return a;
      }  
      return 0;
    }
};