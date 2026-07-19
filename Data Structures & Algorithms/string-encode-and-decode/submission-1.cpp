class Solution {
    
    
public:

    string encode(vector<string>& strs) {
        // separator #
        string encodedStrings;
        for(auto it: strs)
        {
            encodedStrings = encodedStrings + to_string(it.size());
            encodedStrings = encodedStrings + '#';
            encodedStrings = encodedStrings + it;
        }
        return encodedStrings;
    }

    vector<string> decode(string s) {
        vector<string> decodedStrings;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            int start = j+1;
            decodedStrings.push_back(s.substr(start,length));
            i = length + start;
        }
        return decodedStrings;
    }
};
