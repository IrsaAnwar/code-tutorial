#include<iostream>
using namespace std;
int binarysearch(int array[],int x,int left,int right) 
{
 	 while(left<=right) 
  	{
    int mid=(left+right)/2;
    if(array[mid]==x)
      return mid;
    if(array[mid]<x)
      left=mid+1;
    else
      right=mid-1;
	}
  return -1;
}
int main() 
{
  int array[]={3,4,5,6,7,8,9};
  int x=8;
  int n=7;
  int result=binarysearch(array,x,0,n-1);
  if(result==-1)
    cout<<"Not found";
  else
    cout<<"Element is found at index "<<result;
}
