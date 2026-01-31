//Place your needed include statements here (This is roughly the equivelent of libraries in python)
#include <stdio.h>

int main() {
  //Place your solution code here
  int n = 0; //number of elements we will be getting 
  printf("Enter the number of elements desired: "); //ask the user for elements to be entered

  if (n <= 0) {
    printf(" Number of elements needs to be greater then 0. Error "); //stop from continuing running will throw error code
    return 1; //will exit since input is invalid
 }

arr = (int *)malloc(n* sizeof (int)); //n = number of user input , allocate memory for n intergers 

if (arr == NULL) { 
printf(" Memory allocate failed. Try again  ");   //check the memory if it alllocate but if it do not exit the program
return 1;
}

for (int i = 0; i < n; i++) {
printf("Enter element(s): ", i + 1); //get the numbers from the users input, holds it's place 
}

printf("Number printed in reverse:  "); 
for (int 1 = n - 1; i >= 0; i--) {    //printing in reverse (i-- = left to right not ++)
   printf(arr[i]);              //go down the place so numbers are shown in reverse order of it's first input

}

free(arr);   //allocate memory
arr = NULL;   //to avoid accidental use

return 0;

}

//gitcommands i use to run in VS code were 1. get clone https://github.com/CSC-362-Fall-2025/assignment-1-Apple-211/invitations 2. cd Assignment1 (what i named the file) 
//3. git status 4. git add question1.c 5. git push

