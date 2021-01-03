#include<iostream>
using namespace std;
void disp(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void comp(int a[],int count)
{
    int i,j;int smallest;int temp;
    for(i=0;i<count-1;i++)
    {
         smallest=i;
        for(j=i+1;j<count;j++)
        {
            if(a[j]<a[smallest])
            smallest=j;
        }
        temp=a[i];a[i]=a[smallest];a[smallest]=temp;
    }
}
void chk(int a[],int n)
{
    comp(a,n);disp(a,n);
}
int main()
{
    int a[]={12,2,3,10,3,4,1};
    chk(a,7);
}