/*
this will work for negative numbers also
for eg if arr[]={-500} then the kadane's algorithm will return 0 which is a wrong ans
below mentioned algorithm will give the correct ans
*/
int max_so_far = -99999, max_ending_here = 0; 
    for(int i = 0; i<A.size();i++){
        max_ending_here+=A[i];
        if(max_ending_here < A[i]) max_ending_here = A[i];
        if(max_so_far < max_ending_here) max_so_far = max_ending_here;
    }
    return max_so_far;
