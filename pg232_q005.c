#include <stdio.h>

float compute_average(int [], int );
int find_max(int [], int );
int find_min(int [], int );
int main (int argc, char* argv[] ){
    /* Write a program that:
    * 1. Reads ten int as input in an array, one int per line
    * 2. Defines three functions - compute_average, find_max, find_min that find average, max and min in an array 
    * Prints the average of the array (two decimal places), max, and min separated by a single space and no trailing newline 
    * For example: Input 
    * 1
    * 2
    * 3
    * 4
    * 5
    * 6
    * 7
    * 8
    * 9
    * 10
    * Output:
    * "5.50 10 1 " without quotes*/
   
    int arr[10] = {0};
 	int i=0;
 	 for( i=0; i<10; i++) {
        scanf("%d",&arr[i]);
    }
    printf("%.2f",compute_average(arr,10));
    printf(" %d",find_max(arr,10));
    printf(" %d",find_min(arr,10));
    return 0;
}
float compute_average(int arr[], int size) {
		float average = 0.0;
	    int i=0;
	    for(i=0; i<10; i++) {
        average += arr[i];
    }
    average /= 10;
    return average;
	}
 int find_max(int arr[], int size) {
    int max = arr[0];
    for(int i=1; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
 
int find_min(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
