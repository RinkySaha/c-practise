#include<stdio.h>
#include<stdlib.h>


int insert_new_last(int k,int l,int m,int change);
void print_all ();
void wash ();

struct node{
            int data;
            int time;
            int prm;
            struct node * next;
            }*first;


int main(void){
    int ch,change=0,a,b,c;
    while(1){
    printf("press 1 to insert car\npress 2 to display the car queue\npress 3 to wash a car\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:printf("please enter the car no\n");
               scanf("%d",&a);
               printf("please enter the time to finish\n");
               scanf("%d",&b);
               printf("please enter 1 if premium paid else enter 0 \n");
               scanf("%d",&c);
               insert_new_last(a,b,c,change);
               change++;
               break;
        case 2: print_all ();
                break;
        case 3: wash ();
                if(change>0){
                    change--;
                }
                break;
        default: printf("wrong input");

                    }


    }


}


int insert_new_last(int k,int l,int m,int change){
    struct node *new;
    new =(struct node *) malloc(sizeof(struct node));
    struct node *cur;
    cur =(struct node *) malloc(sizeof(struct node));
    int i;
    new->data=k;
    new->time=l;
    new->prm=m;
    new->next=NULL;
    if(change==0){
        first=new;
    }
    else{
        cur=first;
        for(i=0;i<(change-1);i++){
            cur=cur->next;
        }
        cur->next=new;
    }


}

void print_all (){
     struct node *print;
     print =(struct node *) malloc(sizeof(struct node));
     int i=1;
     print = first;
     if(print==NULL){
        printf("No car in the queue \n");
     }
     else{
         printf("Car Queue-----\n");
         while(print != NULL){
         printf("Car no:%d  Time:%d Premium:%d \n",print->data,print->time,print->prm);
         i++;
         print=print->next;
         }
         if(i==1){
            printf("nothing\n");
         }
         else{
         printf("\n");
         }

     }

}

void wash (){
     struct node *wash;
     wash =(struct node *) malloc(sizeof(struct node));
     struct node *middle;
     middle =(struct node *) malloc(sizeof(struct node));

     wash = first;
     int min = wash->time,totalcar=0,i=0,minposition=0;
     while(wash != NULL){
         if(min >= wash->time){
            min = wash->time;
         }
         wash=wash->next;
         totalcar++;
     }

     if(totalcar==1){
        wash=NULL;
        first = wash;
     }
     else{
        wash = first;
         while(wash != NULL){
             if(wash->time==min && wash->prm==1){
                minposition = i+1;
                break;
             }
             wash=wash->next;
             i++;
         }
         if(minposition==0){
             i=0;
             wash = first;
             while(wash != NULL){
                 if(wash->time==min && wash->prm==0){
                    minposition = i+1;
                    break;
                 }
                 wash=wash->next;
                 i++;
             }
         }
         wash = first;
         if(minposition==1){
            first= wash->next;
         }
         else{
            for(i=1;i<minposition-1;i++){
                wash=wash->next;
            }
            if(minposition==totalcar){
                wash->next = NULL;
            }
            else{
                middle=wash;
                middle=middle->next;
                wash->next = middle->next;
            }
         }
     }




}





                                                                                                                                                                                //a project done by KanokChanpa Saha Bhowmik


