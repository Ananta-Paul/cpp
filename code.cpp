// C++ program to Count
// Inversions in an array
// using Merge Sort
#include <iostream>
using namespace std;

int _mergeSort(int arr[], int a[], int l, int r);
int merge(int arr[], int a[], int l, int mid,
		int r);

/* This function sorts the
input array and returns the
number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
	int a[array_size];
	return _mergeSort(arr, a, 0, array_size - 1);
}

/* An auxiliary recursive function
that sorts the input array and
returns the number of inversions in the array. */
int _mergeSort(int arr[], int a[], int l, int r)
{
	int mid, c = 0;
	if (r > l) {
		/* Divide the array into two parts and
		call _mergeSortAndCountInv()
		for each of the parts */
		mid = (r + l) / 2;

		/* Inversion count will be sum of
		inversions in l-part, r-part
		and number of inversions in merging */
		c += _mergeSort(arr, a, l, mid);
		c += _mergeSort(arr, a, mid + 1, r);

		/*Merge the two parts*/
		c += merge(arr, a, l, mid + 1, r);
	}
	return c;
}

/* This function merges two sorted arrays
and returns inversion count in the arrays.*/
// int merge(int arr[], int a[], int l, int mid,
// 		int r)
// {
// 	int i, j, k;
// 	int c = 0;

// 	i = l; /* i is index for l subarray*/
// 	j = mid; /* j is index for r subarray*/
// 	k = l; /* k is index for resultant merged subarray*/
// 	while ((i <= mid - 1) && (j <= r)) {
// 		if (arr[i] <= arr[j]) {
// 			a[k++] = arr[i++];
// 		}
// 		else {
// 			a[k++] = arr[j++];

// 			/* this is tricky -- see above
// 			explanation/diagram for merge()*/
// 			c = c + (mid - i);
// 		}
// 	}

// 	/* Copy the remaining elements of l subarray
// (if there are any) to a*/
// 	while (i <= mid - 1)
// 		a[k++] = arr[i++];

// 	/* Copy the remaining elements of r subarray
// 	(if there are any) to a*/
// 	while (j <= r)
// 		a[k++] = arr[j++];

// 	/*Copy back the merged elements to original array*/
// 	for (i = l; i <= r; i++)
// 		arr[i] = a[i];

// 	return c;
// }
int merge(int arr[],int a[],int l,int mid,int r){
        int i,j,k;
        int c=0;
        i=l;
        j=mid;
        k=l;
        while((i<=mid-1)&&(j<=r)){
            if(arr[i]<=arr[j]){
                a[k++]=arr[i++];
            }
            else{
                a[k++]=arr[j++];
                c=c+(mid-i);
            }
        }
    //     while ((i <= mid - 1) && (j <= r)) {
	// 	if (arr[i] <= arr[j]) {
	// 		a[k++] = arr[i++];
	// 	}
	// 	else {
	// 		a[k++] = arr[j++];
	// 		c = c + (mid - i);
	// 	}
	// }

        while(i<=mid-1)
            a[k++]=arr[i++];
        
        while(j<=r)
            a[k++]=arr[j++];
        
        for(i=l;i<=r;i++)
            arr[i]=a[i];
        
        return c;
    }
// Driver code
int main()
{
	int arr[] = { 468 ,335, 1, 170, 225, 479, 359, 463, 465, 206, 146, 282, 328, 462, 492, 496, 443, 328, 437, 392, 105, 403, 154, 293, 383, 422, 217, 219, 396, 448, 227, 272, 39 ,370, 413 ,168 ,300 ,36, 395, 204, 312, 323};
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans = mergeSort(arr, n);
	cout << " Number of inversions are " << ans;
	return 0;
}

// This is code is contributed by rathbhupendra
