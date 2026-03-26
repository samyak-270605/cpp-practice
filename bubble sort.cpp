 #include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
  int temp;
  for(int i = n-1; i>0; i--)
  {
    int swapCount = 0;
    for(int j = 0; j<= i-1; j++)
    {
      if(arr[j] > arr[j+1])
      {
        swap(arr[j+1], arr[j]);
      swapCount = 1;
      }
    }
    if(swapCount == 0)
    {
      break;
    }
  }
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }

 bubble_sort(arr,n);

 for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}