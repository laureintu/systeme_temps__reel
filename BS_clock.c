#include <time.h>
#include <stdio.h>



int binarysearch(int tab[],int low, int high, int key){
    int mid = (low+high)/2;
    while(tab[mid]!=key){
        if(tab[mid]>key){
            high = mid-1;
            mid = (low+high)/2;   
        }
        else if(tab[mid]<key){
            low = mid+1;
            mid = (low+high)/2;
        }
        else{
            printf("Le chiffre n'est pas dans le tableau");
        }
    }
    printf("le chiffre %d est à l'index : %d \n",key,mid);
    return tab[mid];
};

int main(){
    clock_t start, end;
    double total;

    int tab[7]={1,2,3,4,8,9,29};
    int low = 0;
    int high = 6;
    int key = 9; //choisir le chiffre qu'on cherche

    start = clock();
    printf("starting time : %ld \n",start);

    int reponse = binarysearch(tab,low,  high, key);

    end = clock();
    printf("endind time : %ld \n", end);

    total = (double)(end-start)/CLOCKS_PER_SEC;
    printf("CLOCKS_PER_SEC : %ld \n", CLOCKS_PER_SEC);
    printf("duration time : %f\n", total);
  
};
