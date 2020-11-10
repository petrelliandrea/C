#include<stdio.h>

void testprint(int x)
{
    printf("Valore: %d",x);
}

int multy(int f){
    return (f * 2);
}

int * poin(int x){
    int *p = &x;
    return (p);
}

int find(int x,int y){
    if(x == y){
        return 0;
    }else{
        return 1;
    }
}