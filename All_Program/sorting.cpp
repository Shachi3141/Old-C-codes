//code for sorting 
//will take data from "given.data" file
//after sorting data will save in "pet.text"


#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
 { 
    int i,j,b,c,a[10];
    ifstream khaa("given.data");
    ofstream haa("pet.text");
    khaa>>b;       //number of element in given array
    for(i=0;i<b;i++)
    khaa>>a[i];    //input from file
    haa<<"your gven values were "<<endl;
    for(i=0;i<b;i++)
   {
      haa<<a[i]<<" ";
   } 
    for (i=0;i<b;i++)
    {
      for(j=i+1;j<b;j++)
      {
         if (a[i]>a[j])
         {
            c=a[i];
            a[i]=a[j];
            a[j]=c;


         }
      }
    }

   
    haa<<endl<<"sotred array is"<<endl;
   for(i=0;i<b;i++)
   {
      haa<<a[i]<<" ";  //out put at file pet.text
      
   } 
 }


//sorting program done by chat gpt

/*#include <iostream>

void bubbleSort(int arr[], int n, bool ascending) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    bool ascending;
    std::cout << "Sort in ascending order? (0 for descending, 1 for ascending): ";
    std::cin >> ascending;

    bubbleSort(arr, n, ascending);

    std::cout << "Sorted array:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

*/
