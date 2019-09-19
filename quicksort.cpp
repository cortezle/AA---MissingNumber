#include <bits/stdc++.h>
using namespace std;

void swap(int*a,int*b)
{
	int t= *a;
	*a=*b;
	*b=t;
}

int partition(int arr[], int low, int high)
{
	int pivot=arr[high];
	int i=(low-1);

	for(int j=low; j<=high-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}

void quickSort(int arr[],int low, int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}

}

void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}


int main()
{
    int casos, aux=0;
    cin >> casos;
    int arr[casos];
    while(aux<casos){
        int n;
        cin >> n;
        int A[n];
        for (int i=0;i<n;i++)
            cin >> A[i];
        quickSort(A, 0, n );
        long long int p=2;int k=2;
        for(int i=0;i<n;i++)
        {
            if(A[i]>=p)
            p=2*(k++);
            }
            cout<<p<<endl;
            aux+=1;
    }
    return 0;
}
