#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program using switch case that takes day of the week (1-7) as user input and prints the name of the day.
  * E.g. Monday for 1, Tuesday for 2, and so on. 
  * In case user input is outside the range 1-7, program should print an error message using default case. 
  * Input: one integer value. You are not expected to check for non-integer values.
  * Output: One of the following depending on input value
  *         Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Incorrect input 
  * Note that output is case sensitive */
  
    int month = 0;
    printf("Enter month number ");
    scanf("%d",&month);
 
    if(month == 1) {
        printf("January\n");
    }
    if(month == 2) {
        printf("February\n");
    }
    if(month == 3) {
        printf("March\n");
    }
    if(month == 4) {
        printf("April\n");
    }
    if(month == 5) {
        printf("May\n");
    }
    if(month == 6) {
        printf("June\n");
    }
    if(month == 7) {
        printf("July\n");
    }
    if(month == 8) {
        printf("August\n");
    }
    if(month == 9) {
        printf("September\n");
    }
    if(month == 10) {
        printf("October\n");
    }
    if(month == 11) {
        printf("November\n");
    }
    if(month == 12) {
        printf("December\n");
    }
 
    if(month < 1 ) {
        printf("Wrong input\n");
    }
    if(month > 12 ) {
        printf("Wrong input\n");
    }
  return 0
}
