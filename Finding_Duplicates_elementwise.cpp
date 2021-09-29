
     #include <bits/stdc++.h>
     int main()
     {
        //bool ans = false;
       long int n;
       int input;
       cout <<"Enter Size:";
       cin>> n;
       cout<<"Enter Vector:";
       vector <int> nums[n];
       
       for(int i = 0;i<n;++i)
       {
         cin>>input;
         nums.push_back(input);
       }
       sort(nums.begin(),nums.end());
        //long long int n = nums.size();
       for(int i =1;i<n;++i)
        {
               if(nums[i-1] == nums[i])
                {
                     cout<< "true";
                }
        }
         cout<< "false";
    }
