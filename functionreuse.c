#include <stdio.h>
void gst(float value);

int main(){
    float value = 100.00;
    gst(value);
    printf("Final price = %f\n",value); //it still prints 100 here because it doesnt reflects what happened in function
    return 0;
}

void gst (float value){
    value = value + (0.18 * value);
    printf("Final value after gst + %f\n",value); // any change here is not reflected in argument as u can see
}