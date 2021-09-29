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

int main() {
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;++i)
    {
        cin>>a[i];
    }
    int ans =0;
    for(int i = 0;i<4;++i)
    {
     ans = ans^ a[i];
    }
    for(int i= 0;i<4;++i)
    {
        ans = ans ^ a[i];
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
