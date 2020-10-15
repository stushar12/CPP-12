#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_multiset<int> us;
int p;
cin>>p;
while(p--)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
int k=0;
int flag=0; 
int sum=0;
for (int i=0;i<n;i++)
{
    if (k==arr[i])
    {
    flag=1;
    break;
    }
    arr[i]=arr[i]+sum ;
    if (k==arr[i])
    {
    flag=1;
    break;
    }
    sum=arr[i];
}
for (int i=0;i<n;i++)
{
    if(us.find(arr[i]-k)==us.end())
    us.insert(arr[i]);
    else
    {
        
     flag=1;   
     break;
    }
    
}
if (flag)
{
    cout<<"Yes"<<"\n";
}
else
{
    cout<<"No"<<endl;
}
us.clear();


}
}
