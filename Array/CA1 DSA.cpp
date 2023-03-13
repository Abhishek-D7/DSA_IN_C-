#include<iostream>
#include<string.h>
#define Size 20

using namespace std;
   
void bubbleSort(char arr[][Size],int n) {
   
    char temp[Size];

    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - 1 - i; j++) {
            
		if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
        }
      }
    }
}                   
int main(){

    char arr[][Size]={"Abhishek","sahil","ajay","shaan","prakhar","harshit"};
    int size=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);

    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";  
return 0;
}