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
    printf("le chiffre %d est à l'index : %d",key, mid);
    return tab[mid];
};

int main(){
    int tab[7]={1,2,3,4,8,9,29};
    int low = 0;
    int high = 6;
    int key = 9; //choisir le chiffre qu'on cherche
    int reponse = binarysearch(tab,low,  high, key);
};

