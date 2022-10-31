
int rec(int i, int len, int currsum,vector<int>&A, vector<int>&ans, vector<vector<vector<int>>>&dp){// check = totalsum/no of elel
    
    int n = A.size();
    if(len==0)  //can't take ele further(if currsum is also that means currsum is present)
      return currsum==0;
    if(i>=n)   // >last index
      return 0;
    // taking A[i]
    
    
    if(dp[i][currsum][len] == 0)return 0;
    
    if(currsum-A[i]>=0){ 
        ans.push_back(A[i]);
        if(rec(i+1,len-1,currsum-A[i], A,ans,dp)) return 1;
        ans.pop_back();
    }
    //not taking
    
    if(rec(i+1,len,currsum,A,ans,dp)) return 1;
    
    return dp[i][currsum][len] = 0;
     
}

int Totalsum(vector<int>&v){
    int n = v.size();
    int sum = 0;
    for(auto x: v)
        sum += x;
    
    return sum;
    
}
vector<vector<int> > Solution::avgset(vector<int> &A) {
    
    sort(A.begin(),A.end());
    
    int n = A.size();
    int sum  = Totalsum(A);
    vector<vector<vector<int>>>dp(n+1, vector<vector<int>>(sum+1,vector<int>(n+1,1)));
    vector<vector<int>>res;
    
    for(int i=1;i<n;i++){
        
        vector<int>ans;
        
        if((sum*i)%n != 0) continue;
        
        int currsum = (sum*i)/n;
        if(rec(0,i,currsum,A,ans,dp)) // inde, len, arraty, currsum ,dp
        {
            vector<int>res1 = ans;
            vector<int>res2;
            int ptr1=0, ptr2=0;
            
            while(ptr1<n || ptr2<res1.size()){
                if(ptr2<res1.size() && A[ptr1]==res1[ptr2]){
                    ptr1++,ptr2++;
                }
                else{
                   res2.push_back(A[ptr1]);
                   ptr1++;
                }
            } 
            
            res.push_back(res1);
            res.push_back(res2);   
            return res;     
        }         
    }
    
    return res;
}
