#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// this program sorts an array of 26 randomized integer inputs in such a way that you first sort the odd integers and then you sort the even integers in an ascending order
int cmp(int a, int b)
{
    if (a % 2 != 0 && b % 2 == 0) return -1;
    if (a % 2 == 0 && b % 2 != 0) return 1;
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

int main()
{
    int arr[26],i,min,j,p;
    srand((unsigned)time(NULL));
    for(i=0;i<26;i++){
        arr[i] = rand() % 100;
    }
    for(i=0;i<26;i++){
        printf("%2d ", i);
    }
    puts("");
    for(i=0;i<26;i++){
        printf("%2d ", arr[i]);
    }

    for(i=0;i<26;i++){
        min = i;
        for(j = i+1;j<26;j++){
            if(cmp(arr[j],arr[min])<0){
                min = j;
            }
        }
        p = arr[i];
        arr[i] = arr[min];
        arr[min] = p;
    }

    puts("");
    for(i=0;i<26;i++){
        printf("%2d ", arr[i]);
    }

    return 0;
}