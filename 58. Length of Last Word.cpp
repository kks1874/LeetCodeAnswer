class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        istringstream in(s);
        string res;
        while(in>>res);
        return res.size();
    }
};
