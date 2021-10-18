class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
      int n=nums.size();
      for(int i=0;i<n;i++){
        int nom=nums[i];
        while(nom>0 && nom<=n && nums[nom-1]!=nom){
          int temp=nums[nom-1];
          nums[nom-1]=nom;
          nom=temp;
        }
      }
      
      for(int i=0;i<n;i++){
        if(nums[i]!=i+1)
          return i+1;
      }
      return n+1;
      
    }
};
