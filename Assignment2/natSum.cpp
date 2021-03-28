#include<bits/stdc++.h>
using namespace std;

int sumArray(int anArray[], int size)
{
    //base case
    if (size == 0)
    {
        return 0;
    }
    else if (size == 1)
    {
        return anArray[0];
    }

    //divide and conquer
    int mid = size / 2;
    int rsize = size - mid;
    int lsum = sumArray(anArray, mid);
    int rsum = sumArray(anArray + mid, rsize);
    return lsum + rsum;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        arr[i-1]=i;
    }
    cout<<"Sum will be : "<<sumArray(arr,n)<<endl;
}
