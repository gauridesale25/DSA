#include <bits/stdc++.h>
using namespace std;

int getOutlierValue(vector<int> arr);
int main() 
{
    vector<int> arr1;
    arr1.push_back(4);
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(16);
    arr1.push_back(2);
    arr1.push_back(10);

    cout << getOutlierValue(arr1) << endl;  // Output should be 16
    
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(2);
    arr2.push_back(4);
    arr2.push_back(2);
	
    cout << getOutlierValue(arr2) << endl;  // Output should be 4
    
    return 0;
}
int getOutlierValue(vector<int> arr) 
{
	
    int n=arr.size();
    int i=0;
    int t_sum=accumulate(arr.begin(),arr.end(),0);
    int outlier=INT_MIN;
    
    for(i=0;i<n;i++)
    {
    	int remaining_sum=t_sum-arr[i];
        if(find(arr.begin(),arr.end(),remaining_sum) == arr.end())
        {
            outlier=max(outlier,arr[i]);
        }
        
    }
    return outlier;
}

