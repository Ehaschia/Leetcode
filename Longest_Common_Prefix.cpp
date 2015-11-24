class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string perfix = strs[0];
        int n1 = strs.size();
        int n2 = strs[0].length();
        int i,j;
        for(i = 0;i<n1;i++)
        {
            if(strs[i].length()<n2)
                n2 = strs[i].length();
        }
        if(n2 == 0) return "";
        for(i=0;i<n1;i++)
        {
            for(j = 0;j<n2;++j)
            {
                if(perfix[j]!=strs[i][j])
                    break;
            }
            perfix = perfix.substr(0,j);
        }
        return perfix;
    }
};
