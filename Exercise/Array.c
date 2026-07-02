#include<stdio.h>
/*
Array : multidimensional array is an array of arrays. It is a collection of data items, all of the same type, accessed using a common name. The elements of an array are stored in contiguous memory locations. The first element of the array is at index 0, the second element is at index 1, and so on.
always start with 0 index.
*/
int main ()
{
    //int marks1=45;
    //int marks2=55;
    //int marks3=65;
    //int marks4=75;
    //int marks5=85;
    int marks[5]={45,55,65,75,85}; //single dimensional array
    for(int i=0;i<5;i++) //i=1
    {
        printf("\n%d",marks[i]); //marks[1]
    }
    return 0;

}

