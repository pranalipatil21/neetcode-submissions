bool comp(vector<int>a,vector<int>b){
    //sort by end time
    return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int end = INT_MIN;
        int remove =0;

        for(int i=0; i<intervals.size();i++){
            if(end <= intervals[i][0]){
                //non overlapping
                end = intervals[i][1];
            }
            else{
                //overlapping
                remove++;
            }
        }
        return remove;
    }
};
