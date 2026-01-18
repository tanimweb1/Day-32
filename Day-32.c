#include<stdio.h>
int main(){


// #F8EFE0
// #FBF4E7
// for loop 

int n;
scanf("%d",&n);

for(int i = 1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
}




// Problem -1

int n;
scanf("%d",&n);

if(n>=18){
    printf("Person can give vote");
}
else{
    printf("Can't give vote");
}




// leap year 
int year;
scanf("%d",&year);

if(year%4==0){
    printf("Leap year");
}

else{
    printf("Not a leap year");
}

    


return 0;


}

