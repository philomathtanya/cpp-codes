#includeiostream
using namespace std;
void swapping(int &a, int &b) {         swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int array, int size) {
   for(int i = 0; isize; i++)
      cout  array[i]   ;
   cout  endl;
}
void selectionSort(int array, int size) {
   int i, j, imin;
   for(i = 0; isize-1; i++) {
      imin = i;   get index of minimum data
      for(j = i+1; jsize; j++)
         if(array[j]  array[imin])
            imin = j;
         placing in correct position
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout  Enter the number of elements ;
   cin  n;
   int arr[n];           create an array with given number of elements
   cout  Enter elements  endl;
   for(int i = 0; in; i++) {
      cin  arr[i];
   }
   cout  Array before Sorting ;
   display(arr, n);
   selectionSort(arr, n);
   cout  Array after Sorting ;
   display(arr, n);
}