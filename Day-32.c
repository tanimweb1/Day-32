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

    




// Area of a Circle

float pai, r;
printf("Enter the value of pai and r");
scanf("%f%f", &pai, &r);
printf("Area is %f", pai * r * r );


// Average of 5 Numbers
float a,b,c,d,e;
printf("enter the value of a b c d e ");
scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
printf("Sum is %f", (a + b + c + d + e)/5);





    //Fahrenheit to Celsius
float c, f;
printf("enter the vlaue of F ");
scanf("%f", &f);
c = ((f-32)* 5)/9;
printf("Celcious is %f", c);





// total cost-class practice

int day;
float cpd,tc,hc,scp,Total,t1,t2;
scanf("%d%f%f%f%f",&day,&cpd,&tc,&hc,&scp);

t1 = day*cpd;
t2 = day * cpd * scp /100;

Total = t1 + t2 + tc + hc;
printf("Total cost is %f",Total);


    
    

return 0;


}






