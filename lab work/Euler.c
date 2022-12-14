#include <stdio.h>

float function(float x, float y){
    return (x+y);
}

int main(){
    float x0, y0, h;
    printf("Enter x0, y0 and h: ");
    scanf("%f%f%f",&x0,&y0,&h);

    float x;
    printf("Enter x: ");
    scanf("%f",&x);
    float n = (x - x0)/h;
    float y = y0;

    int i = 0;
    float temp = x;
    x = x0;
    while(x < temp){
        y = y + h * function(x,y);
        x += h;
        i++;
        printf("y(%d): %f\n",i, y);
    }

    printf("Answer: %f\n", y);

}
