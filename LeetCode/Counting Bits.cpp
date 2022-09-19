class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans; //take vector type variable to insert count of 1
        int count,temp;
        ans.push_back(0);  //1st number is 0 so number of 1 is 0
        //for loop to count till n
        for(int i=1;i<=n;i++){
            count=0;
            temp=i;
            //find if it contains 1
         while(temp>0){
             if(temp%2!=0)
                 count++;
             temp=temp/2;
         }
            ans.push_back(count);
        }
        return ans;
    }
};