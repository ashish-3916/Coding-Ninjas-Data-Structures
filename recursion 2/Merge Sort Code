void merging(int input [],int low, int mid, int high) {

    int b[high-low+1];
    int l1=low,l2=mid+1,i=0;
    while(l1 <= mid && l2 <= high) {
        if(input[l1] <= input[l2])
            b[i++] = input[l1++];
        else
            b[i++] = input[l2++];
    }   // end while loop here
        while(l1 <= mid)  
        {
            b[i++] = input[l1++];
        }

        while(l2 <= high)  
        {
            b[i++] = input[l2++];
        }

        int j=0;
        for(i = low; i <= high; i++)
            input[i] = b[j++];
       
      //   }   dont end it here 
}
void mergeSort1(int input[],int first,int last)
{


    if(first<last) {
        int mid = (first+last) / 2;
        mergeSort1(input,first, mid);
        mergeSort1(input,mid+1,last);
        merging(input,first, mid,last);
    } else { 
        return;
    }   
}
void mergeSort(int input[],int length)
{
    if(length<=0)
    {
        return;
    }
    mergeSort1(input,0,length-1);
}










void MergeArray(int a[],int s,int e)
{
    int mid=(s+e)/2;

    int a3[e];//alternate array
    int i=s-1,j=mid,k=0;
    for( k=s-1;(i<mid&&j<e);k++)//merging array
    {

            if(a[i]<=a[j])
            {
                a3[k]=a[i];
                i++;
            }
            else
            {
                a3[k]=a[j];
                j++;
            }
    }
    //merging left elements
    if(i<mid)
    {
        for(int m=i;m<mid;m++)
        {
            a3[k++]=a[m];
        }
    }
    if(j<e)
    {
        for(int m=j;m<e;m++)
        {
            a3[k++]=a[m];
        }
    }
    //copying into original array
    for(int i=s-1;i<e;i++)
    {
        a[i]=a3[i];
    }
    
}

void MergeSorting(int a[],int s,int e)
{
    if(s>=e)
        return;
    else
    {
        int mid=(s+e)/2;
        MergeSorting(a,s,mid);
        MergeSorting(a,mid+1,e);
        MergeArray(a,s,e);
    }
}

void mergeSort(int input[], int size){
	// Write your code here

    int start =1;
    int end = size;

    MergeSorting(input,start,end);


}
