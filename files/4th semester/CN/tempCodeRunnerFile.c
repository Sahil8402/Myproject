#include<stdio.h>
 
void main() {
    int a[7],b[7],i,c,d,e,f=0;
  
 
    printf("Enter 4 bits of data one by one\n");
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[4]);
    

a[6]=a[0]^a[2]^a[4];
a[5]=a[0]^a[1]^a[4];
a[3]=a[0]^a[1]^a[2];

printf("\n Data is\n");
for(i=0;i<7;i++){
        printf("%d",a[i]);
}
printf("\n\nEnter received data bits one by one\n");
    for(i=0;i<7;i++){
        scanf("%d",&b[i]);
    }
    c=a[0]^a[2]^a[4]^a[6];
    d=a[5]^a[4]^a[1]^a[0];
    e=a[3]^a[2]^a[1]^a[0];
    f=c*4+d*2+e;
    if(f==0){
        printf("no error");
    }
    else{
        printf("Error on Position %d",c);
    }

}