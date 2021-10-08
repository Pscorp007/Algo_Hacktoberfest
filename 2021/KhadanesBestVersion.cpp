#include <iostream>
using namespace std;


// gives maximum sum of sub array
//input  8
//-1 2 4 -3 5 2 -5 2
// output - 10 (sum from index 2 to 6 ie 2 to 2)
int main(){

  int n,x;
  cin>>n;
  int array[n];
  for(int i=0; i<n; i++){
    cin>>array[i];
  }
  int best = 0,sum =0;

  for(int i=0; i<n; i++){
    sum = max( array[i], sum + array[i] );
    best  = max( best, sum );
  }

  int dp[n],ans=0;
  for(int i=0; i<n; i++){
    dp[i] = array[i] + max(dp[i-1],0);
    ans = max(dp[i],ans); 
  }
  // KHADANES ALGO FOR K DELETIONS POSSIBLE JUST INITIALIZE K WITH (ALLOWED DELETIONS +1)
  // EXAMPLE : if 1 deletions is allowed initialize k with 2;
  // question:
  // https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/
  // explanation:
  // https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/discuss/546447/on-2-state-dp-one-pass/494386
  

}
