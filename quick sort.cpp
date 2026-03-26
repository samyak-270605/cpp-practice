#include<bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr, int low, int high)
{
  int pivot = low;
  int i = low;
  int j = high;

  while(i<j)
  {
    while(arr[i] <= arr[pivot] && i<=high-1)
    i++;

    while(arr[j] > arr[pivot] && j>=low+1)
    j--;

    if(i<j)
    {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[j], arr[pivot]);

  return j;
}

void quick_sort(vector <int> &arr, int low, int high)
{
  if(low>=high)
  return;
  int pIndex = partition(arr, low, high);
  quick_sort(arr,low, pIndex-1);
  quick_sort(arr, pIndex+1, high);
}

int main()
{
  int n;
  cin>>n;
  vector <int> arr;
  for(int i=0; i<n; i++)
  {
    int element;
    cin>>element;
    arr.push_back(element);
  }

  quick_sort(arr,0,n-1);

  for(auto it : arr)
  {
    cout<<it<<" ";
  }

  return 0;
}