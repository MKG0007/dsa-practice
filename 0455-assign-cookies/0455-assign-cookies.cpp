class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ssize = s.size();
        int gsize = g.size();
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int i = 0;
        int j = 0;
        int count = 0;
        while(i<ssize && j<gsize){
            if(s[i]>=g[j]){
                i++;
                j++;
                count++;
            }
            else{
                i++;
            }
        }


        return count;
    }
};