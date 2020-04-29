class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> setArr;

        for(int i=0; i<arr.size(); i++) 
            setArr.insert(arr[i]);

        int count = 0;

        for(int i=0; i<arr.size(); i++) {
            if(setArr.count(arr[i]+1))
                count++;
        }        
        return count;
    }
};