class Solution {
public:
    bool checkCondition(string a1,string a2){
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        return a1==a2;
    }
    bool checkInclusion(string s1, string s2) {
        int k=s1.length();
        int n=s2.length()-k;
        for(int i=0;i<=n;i++){
            string a=s2.substr(i,k);
            if(checkCondition(s1,a)) return true;
        }
        return false;
    }
};
