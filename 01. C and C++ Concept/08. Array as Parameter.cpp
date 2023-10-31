#include <iostream>

using namespace std;

void fun(int *A,int n){
    for (int i=0; i<n; i++){
        printf("%d   ",A[i]);
    }
    A[2]=15;
}

int * fun1(int size){
    int *p=new int[size];
    
    for (int i=0; i<size; i++){
        p[i]=i+1;
    }
    return p;
}

int main()
{
    int A[]={2,4,6,8,10};
    int n=5;
    
    fun(A,n);
    cout<<endl;
    for (int i=0; i<n; i++){
        printf("%d   ",A[i]);
    }
    cout<<endl;
    int *B, sz=7;
    B=fun1(sz);
    for (int i=0; i<sz; i++){
        printf("%d   ",B[i]);
    }
    return 0;
}
