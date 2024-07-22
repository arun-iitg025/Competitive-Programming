class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        string ans = "";
        int maxi = INT_MIN;
        
        for(int i=0; i<arr1.size(); i++){
            for(int j=0; j<arr2.size(); j++){
                string str1 = to_string(arr1[i]);
                string str2 = to_string(arr2[j]);
                int size1 = str1.size();
                int size2 = str2.size();
                if(size1>size2){
                    if(str2 == str1.substr(0, size2)){
                        if(ans.size()<size2){
                            ans = str2;
                        }
                    }
                }
                else{
                    if(str1 == str2.substr(0, size1)){
                        if(ans.size()<size1){
                            ans = str1;
                        }
                    }
                }
                int count = 0;
                sort(str1.begin(), str1.end());
                sort(str2.begin(), str2.end());
                for(int i=0; i<size1; i++){
                    if(str1[i] == str2[i]){
                        count++;
                    }
                    else{
                        break;
                    }
                }
                maxi = max(maxi, count);
            }
        }
        int result =0;
        if(maxi>ans.size()) result = maxi;
        else result = ans.size();
        return result;
    }
};