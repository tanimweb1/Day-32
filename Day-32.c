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





// revise

//kinetic energy
float mass, velocity;
printf("enter the value of mass and velocity");
scanf("%f%f", &mass, &velocity);
printf("Kinetic Energy is %f", 0.5 * mass * velocity* velocity);




    //Ohm's Law
float Current, resistance;
printf("Enter the value of Current and Resistance ");
scanf("%f%f", &Current, &resistance);
printf("Voltage is %f", Current * resistance);

    


return 0;


}



