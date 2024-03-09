//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        
        while(r){
            string ans="";
        for(auto i:s){
            if(i=='1'){
                ans+="10";
            }
            else{
                ans+="01";
            }
            if(ans.size()>n){
                break;
            }
        }
            r--;
            s=ans;
    }
    
    return s[n];
    }

    
};
