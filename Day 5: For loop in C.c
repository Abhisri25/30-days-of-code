/*
For each integer  in the interval  (given as input) :
If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,n=0;
    char* arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&a);
    scanf("%d",&b);

    for(n = a;n<=b;n++)
    {
       if(n == 1) {

        printf("one\n");

    }

    else if(n == 2) {

        printf("two\n");

    }

    else if(n == 3) {

        printf("three\n");

    }

    else if(n == 4) {

        printf("four\n");

    }

    else if(n == 5) {

        printf("five\n");

    }

    else if(n == 6) {

        printf("six\n");

    }

    else if(n == 7) {

        printf("seven\n");

    }

    else if(n == 8) {

        printf("eight\n");

    }

    else if(n == 9) {

        printf("nine\n");

    }

    else {

        if(n %2 ==0)
            printf("even\n");
        else
           printf("odd\n");

    }
    }
    return 0;

}
