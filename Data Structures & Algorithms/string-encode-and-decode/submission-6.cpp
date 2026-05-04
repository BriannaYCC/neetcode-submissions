class Solution {
public:
    string encode(vector<string>& strs) {
        string encodedStr = "";
        for(int i = 0; i < strs.size(); i++){
            encodedStr += strs[i] + '.';
        }
        return encodedStr;
    }

    vector<string> decode(string s) {
        
        std::vector<string> decodedVec;
        size_t findDelim = s.find('.');

        if(s.length() == 0) return decodedVec;

        if(findDelim == std::string::npos){
            decodedVec.push_back(s);
        }
        while(findDelim != std::string::npos){
            decodedVec.push_back(s.substr(0, findDelim));
            
            s = s.substr(findDelim + 1);
            findDelim = s.find('.');
        }
        return decodedVec;
    }
};
