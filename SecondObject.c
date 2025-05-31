#include "FirstObject.c"
#pragma once

#define METHOD(argument) (*argument)()
#define OVERLOADMETHOD(argument) (*argument)(char *, ...)


static int Poo(int a){
    return a+2;
}


typedef struct {
    char a;
    int b;
    int OVERLOADMETHOD(OverloadFunction);
    int METHOD(Poo);
} SecondObject;

const SecondObject defaultSecondObject = {'\n', 1,  defaultFirstObject.OverloadFunction, Poo};

