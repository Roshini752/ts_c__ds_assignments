#include <stdio.h>
void swap(int *a, int *b)       
{
  int t = *a;
     *a = *b;
     *b = t;
}
int partition(int array[], int low, int high) // arr 5 6     arr 4 6    arr 0 2 ||arr 0 6      
{
  int pivot = array[high];  //  8  7  ||0  ||6
  
  int i = (low - 1); // 4   3  -1   -1
   //a[0]=0 a[1]=1 a[2]=2 a[3]=6 a[4]=7 a[5]=8 a[6]=9
  
  for (int j = low; j < high; j++) //5      4 5      0 1 2    //0 1 2 3 4 5
  {
    if (array[j] <= pivot)  // 9<=8    8<=7| 9<=7|           2<=0| 1<=0|           //8<=6| 7<=6| 2<=6 1<=6 0<=6 9<=6|
    {
        i++; //                                   0 1 2
        
        swap(&array[i], &array[j]);           // swap element at i with element at j
    }
  }

  swap(&array[i + 1], &array[high]);         // swap the pivot element with the greater element at i
  
   return (i + 1); //3       // return the partition point
}

void quickSort(int array[], int low, int high) //arr 0 2    ||arr 0 6
{ 
  if (low < high) 
  {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high); //      ||3 
    
    quickSort(array, low, pi - 1);  // arr 0 2    // recursive call on the left of pivot
    
    
    quickSort(array, pi + 1, high); // arr 5 6     arr 4 6       // recursive call on the right of pivot
  }
}


void printArray(int array[], int size)      // function to print array elements
{
  for (int i = 0; i < size; ++i) 
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() 
{
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  printf("n=%d\n",n);
  printf("Unsorted Array\n");
  printArray(data, n);
  
  quickSort(data, 0, n - 1);        // perform quicksort on data
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
