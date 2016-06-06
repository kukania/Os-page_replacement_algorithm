#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>

#define PAGEREF 10000
#define FRAMENUM 100

/*global*/
int pageRef[PAGEREF];
int frame[FRAMENUM];

/*basic function*/
void printS(int *buf){
    int i;
    for(i=1; i<=PAGEREF; i++){ 
        printf("%d ",pageRef[i-1]);
        if(i%10==0)
            printf("\n");
    }  
}
void makePageRef(){
    int i;
    for(i=0; i<PAGEREF; i++) pageRef[i]=rand()%100;
}

/*page replacement algorithm*/
void FIFO();
void OPT();
void TrueLRU();
void Sec_Chance();


int main(){
    srand((unsigned int)time(NULL));
    makePageRef();
    printS(pageRef);


}
