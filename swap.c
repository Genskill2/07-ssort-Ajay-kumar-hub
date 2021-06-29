void swap_max(int arr[], int 1, int pos)
{
  int max= -999999;
  int index = 0;
  for(int i = pos; i < 1; i++)
  {
    if(max<arr[i])
    {
     max=arr[i];
     index = i;
    }
  }
  int temp=0;
  temp=arr[index];
  arr[index]=arr[pos];
  arr[pos]=temp;
  }
  void ssort(int arr[], int 1)
  {
  for(int i=0;i<1-1;i++)
   {
     swap_max(arr,1,i);
    }
 }
