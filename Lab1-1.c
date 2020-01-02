#include <stdio.h>
void display(int M[],int len);
void printArray(int N[],int i, int len);
void printArrayRev(int N[],int i, int len);
int main(){
    int M[100] = {12,25,30,29,55,60,71,89,8,11};
    int length=10;
    int i,X,Y,Z;
    int flag=-1;

    //(a)printing array in loop
    for(i=0;i<length;i++){
        printf("%d\t",M[i]);
    }
    printf("\n");

    //(b)insert any value at tenth(10)
    //index of the array
    M[10] = 43;
    length++;
    display(M,length);

    /*(c)update(5th) index of the array */
    M[5] = 99;
    display(M,length);

    /*(d)search a value in any array
    and print the index
    */
    printf("Search for  value: ");
    scanf("%d",&X);
    for(i=0;i<length;i++){
        if(M[i]==X){
            flag=i;
            break;
        }
    }

    if(flag != -1)
        printf("Found & index is %d\n",flag);
    else
        printf("Not Found\n");

    //(e)insert a value in the array at third(3rd)index and shift all other value to right
    printf("Insert value at 3rd index: ");
    scanf("%d",&Y);
    for(i=length-1;i>2;i--){
        M[i+1] = M[i];
    }

    M[3] = Y;
    length++;
    display(M,length);

    //(f)DELETING ANY VALUE FROM Zth INDEX AND SHIFTING ALL OTHER VALUE TO LEFT
    printf("Delete value from index of: ");
    scanf("%d",&Z);
    for(i=Z;i<length;i++){
        M[i] = M[i+1];
    }

    length--;
    display(M,length);

    //(g)PRINTING ARRAY WITH RECURSION
    printf("PRINTING ARRAY WITH RECURSION\n");
    printArray(M,0,length);

    //(h)PRINTING ARRAY WITH RECURSION IN REVERSE ORDER
    printf("\nPRINTING ARRAY WITH RECURSION IN REVERSE ORDER\n");
    printArrayRev(M,0,length);
    return 0;
}

void display(int M[],int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d\t",M[i]);
    }
    printf("\n");
}

void printArray(int N[],int i, int len)
{
    if(i>=len)
        return;

    printf("%d\t", N[i]);
    printArray(N,i+1, len);
}
void printArrayRev(int N[],int i, int len)
{
    if(i>=len)
        return;

    printArrayRev(N,i+1, len);
    printf("%d\t", N[i]);
}
