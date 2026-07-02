#include <stdio.h>
/*
1 pizza 
2 burger
3 noodles
4 icecream
*/
 int main()
 {
    int choice=2;
    switch(choice)
    {
        case 1:
            printf("pizza");
            break;
        case 2:
            printf("burger");
            break;
        case 3:
            printf("noodles");
            break;
        case 4:
            printf("icecream");
            break;
        default:
            printf("");
    }  
    return 0;
 }
    