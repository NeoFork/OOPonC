#include"FirstObject.c"
#include"SecondObject.c"

int main(){
    FirstObject A = defaultFirstObject;
    SecondObject B = defaultSecondObject;
    
    A.OverloadFunction("meow \t");
    B.OverloadFunction("double", 16.235786);
    printf("%d \n", B.Poo(2));
    return 0;
}
