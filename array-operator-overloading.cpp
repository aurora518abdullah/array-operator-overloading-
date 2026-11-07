#include<bits/stdc++.h>
using namespace std;
class Array{
public:
    int arr[100];
    Array(int n)
    {
        for(int i=0;i<n;i++)
        {
            arr[i]=i*10;
        }
    }
    int operator[](int i)
    {
        int temp;
        temp=arr[i];
        return temp;
    }
};
int main()
{
    int n;
    cin>>n;
    Array ob(n);
    for(int i=0;i<n;i++)
    {
        cout<<ob[i]<<endl;
    }
}