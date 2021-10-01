/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109*/

//solution
#include <iostream>
#include <vector>
int main() {
    int size;
    cin>>size;
    vector <int> a;
    for(int i=0;i<size;++i)
    {
        int input;
        a.push_back(input);
    }
    int ans =0;
    for(int i = 0;i<size;++i)
    {
     ans = ans^ a[i];
    }
    for(int i= 0;i<size;++i)
    {
        ans = ans ^ i;
    }
    if(ans == 0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
