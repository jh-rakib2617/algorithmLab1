#include <stdio.h>
#define max 10
void selectionSortAscMin(int C[]);
void selectionSortDescMin(int C[]);
void selectionSortAscMax(int C[]);
void selectionSortDescMax(int C[]);
void display(int C[]);

void main(){
    int C[max] = {9,21,33,15,5,27,81,92,49,57};

    printf("\nUnsorted Array\n");
    display(C);
    selectionSortAscMin(C);
    printf("\nSorted Array In Ascending Order Using Minimum\n");
    display(C);

    int K[max] = {6,9,23,76,22,87,27,99,35,76};
    selectionSortDescMin(K);
    printf("\nSorted Array In Descending Order Using Minimum\n");
    display(K);

    int M[max] = {1,4,3,52,41,74,15,89,32,78};
    selectionSortAscMax(M);
    printf("\nSorted Array In Ascending Order Using Maximum\n");
    display(M);

    int P[max] = {54,87,12,76,45,33,78,23,55,21};
    selectionSortDescMax(P);
    printf("\nSorted Array In Descending Order Using Maximum\n");
    display(P);
}

void selectionSortAscMin(int C[]){
    int i,j,min_index,temp;
    for(i=0;i<max-1;i++){
        min_index = i;
        for(j=i+1;j<max;j++){
            if(C[j]<C[min_index])
                min_index=j;
        }
        if(i!=min_index){
            temp = C[i];
            C[i] = C[min_index];
            C[min_index] = temp;
        }
    }
}
void selectionSortDescMin(int C[]){
    int i,j,min_index,temp;
    for(i=max-1;i>0;i--){
        min_index = i;
        for(j=i-1;j>=0;j--){
            if(C[j]<C[min_index])
                min_index=j;
        }
        if(i!=min_index){
            temp = C[i];
            C[i] = C[min_index];
            C[min_index] = temp;
        }
    }
}

void selectionSortAscMax(int C[]){
    int i,j,max_index,temp;
    for(i=max-1;i>0;i--){
        max_index = i;
        for(j=i-1;j>=0;j--){
            if(C[j]>C[max_index])
                max_index=j;
        }
        if(i!=max_index){
            temp = C[i];
            C[i] = C[max_index];
            C[max_index] = temp;
        }
    }
}

void selectionSortDescMax(int C[]){
    int i,j,max_index,temp;
    for(i=0;i<max-1;i++){
        max_index = i;
        for(j=i+1;j<max;j++){
            if(C[j]>C[max_index])
                max_index=j;
        }
        if(i!=max_index){
            temp = C[i];
            C[i] = C[max_index];
            C[max_index] = temp;
        }
    }
}

void display(int C[]){
    int i;
    for(i=0;i<max;i++){
        printf("%d\t",C[i]);
    }
    printf("\n");
}
