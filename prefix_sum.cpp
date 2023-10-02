#include<iostream>
#include<vector>
using namespace std;
/* make the partition of an aaray such that the prefix sum of one ortion is equal to the suffix sum of other portion */
//  5  1 2 3 4 
//total_sum =15 
//prefix_sum =
bool chk_pre_suf_sum (vector<int>&v)
{   
   int total_sum=0;
    for (int i=0;i<v.size();i++)
    { 
        total_sum+=v[i];
    }
    int prefix_sum=0;
    for (int i=0;i<v.size();i++)
    {
        prefix_sum+=v[i];
        int suffix_sum=total_sum - prefix_sum;
        if (suffix_sum==prefix_sum)
        {
            return true;
        }
    }
    return false;
}

int main ()
{
    int n ; 
    cout <<"enter the  size of the vector ";
    cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++)
    {
        int ele ;
        cin>>ele;
        v.push_back(ele);
    } 
    cout<<"the vector elements is  : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<< chk_pre_suf_sum(v)<<endl;
    return 0;
}
