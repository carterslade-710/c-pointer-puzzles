#include<stdio.h>
#include<stdlib.h>

struct pekka{
    char data;
    struct pekka* next;
};

void raid(struct pekka* head){
    struct pekka* current = head;
    int count = 0;
    if(current==NULL){
        printf("your village has been destroyed by anonymous234");
        exit(1);
    }

    while(current!=NULL){
        printf("%c",current->data);
        //printf('a' + count++);
        current = current->next;
    }
}

int main(void){
    struct pekka* lavaloon1 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon2 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon3 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon4 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon5 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon6 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon7 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon8 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon9 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon10 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon11 = (struct pekka*)malloc(sizeof(struct pekka));
    struct pekka* lavaloon12 = (struct pekka*)malloc(sizeof(struct pekka));

    char wizard[2][3][2] = {'R','A','N','A','I','C','B','W','R','A','B','L'};
    lavaloon1->data = ***(wizard+1);
    lavaloon1->next = lavaloon2;
    lavaloon2->data = *(**wizard+1);
    lavaloon2->next = lavaloon3;
    lavaloon3->data = ***wizard;
    lavaloon3->next = lavaloon4;
    lavaloon4->data = **(*(wizard+1)+2);
    lavaloon4->next = lavaloon5;
    lavaloon5->data = *((**wizard)+1);
    lavaloon5->next = lavaloon6;
    lavaloon6->data = **(*(wizard+1)+1);
    lavaloon6->next = lavaloon7;
    lavaloon7->data = **(*wizard+2);
    lavaloon7->next = lavaloon8;
    lavaloon8->data = *(*(*wizard+1)+1);
    lavaloon8->next = lavaloon9;
    lavaloon9->data = **(*wizard+1);
    lavaloon9->next = lavaloon10;
    lavaloon10->data = *(*(*wizard+2)+1);
    lavaloon10->next = lavaloon11;
    lavaloon11->data = *(**(wizard+1)+1);
    lavaloon11->next = lavaloon12;
    lavaloon12->data = *(*(*(wizard+1)+2)+1);
    lavaloon12->next = NULL;

    raid(lavaloon1);
return 0;
}