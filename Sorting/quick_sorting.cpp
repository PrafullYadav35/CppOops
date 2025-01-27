
#
using namespace std;
int partition(int arr[],int low ,int high){
   int pivot =arr[low];
   int i=low;
   int j=high;
while(i<j){
  while(arr[i]<=pivot && i<= high-1){
    i++;
}
while(arr[j]>=pivot && j>=low+1){
    j--;
}
if(i<j) swap(arr[i],arr[j]);

}
swap(arr[low],arr[j]);
return j;

}

//here void 
int quickSort(int arr[],int low,int high){
  if(low<high){
    int PartIndex = partition(arr,low,high);
    quickSort(arr,low,PartIndex-1);
    quickSort(arr,PartIndex+1,high);
  }
  return 0;
}

int main(){
    int n;
    cout<<"enter size of arry";
    cin>>n;
    cout<<endl<<"enter element of array";
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    int low = 0;
    int high= n-1;
    quickSort(arr,low,high);

   
    cout<<"Sorted array";
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }


    return 0;
}