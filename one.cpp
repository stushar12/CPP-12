#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main()
{
unordered_multiset<int> us;
int arr[]={1,4,13,-3,-10,5};
int flag=0; 
int k=4;
int sum=0;
int n=sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<n;i++)
{
    if (k==arr[i])
    flag=1;
    arr[i]=arr[i]+sum;
    sum=arr[i];
}
for (int i=0;i<n;i++)
{
    if(us.find(arr[i]-k)==us.end())
    us.insert(arr[i]);
    else
    {
     flag=1;   
    }
    
}
if (flag)
{
    cout<<"Subarray exist"<<"\n";
}
else
{
    cout<<"Subarray doesn't exist";
}


}