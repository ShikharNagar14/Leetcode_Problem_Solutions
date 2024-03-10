//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	   map<char,int>mp;
	   for(auto i:str){
	       mp[i]++;
	   }
	   string ans="";
	    for(char ch : str){
            if(mp.find(ch)!=mp.end() && mp[ch]!=-1){
                ans.push_back(ch);
                mp[ch]=-1;
            }else if(mp.find(ch)==mp.end()){
                ans.push_back(ch);
            }
	}
	return ans;
	}
};
