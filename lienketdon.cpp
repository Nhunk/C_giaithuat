#include <stdio.h>

struct node{
    int data;
    node *next;
};
void XUAT(node *L);
void NHAP1(node *&L, int n);
node *NHAP2(int n);
void NHAP3(node *&L, int n);

int main(){
    node *L = NULL;
    // NHAP1(L,5);
    // XUAT(L);
    // node *L1 = NHAP2(5);  
    // XUAT(L1);  
    NHAP3(L, 5);
    XUAT(L);
}
void XUAT(node *L){
    for(node *q = L; q!=NULL; q = q -> next){
        printf("%5d",q->data);
    }
}
//Nhập danh sách liên kết đơn chèn sau
void NHAP1(node *&L, int n){
    node *p, *q;
    for(int i = 1; i<=n;i++){
        p = new node;
        printf("Nhap so %d: ", i);
        scanf("%d", & p->data);
        p -> next = NULL;
        if(L == NULL) L = p;
        else q -> next = p;
        q = p;
    }
}
//Nhập danh sách liên kết đơn chèn sau bằng hàm return
node* NHAP2(int n){
    node *L1 = NULL, *p, *q=NULL;
    for(int i = 1; i<=n;i++){
        p = new node;
        printf("Nhap so %d: ", i);
        scanf("%d", & p->data);
        p -> next = NULL;
        if(L1 == NULL) L1 = p;
        else q -> next = p;
        q = p;
    }
    return L1;
}
// Nhập danh sách liên kết đơn(chèn đầu)
void NHAP3(node *&L, int n){
    node *p;
    for(int i = 1; i<=n; i++){
        p = new node;
        printf("Nhap so %d: ", i);
        scanf("%d", &p->data);
        p->next = L;
        L = p;
    }
}
