#include<stdio.h>
#include <stdarg.h>
#pragma once

#define METHOD(argument) (*argument)()
#define OVERLOADMETHOD(argument) (*argument)(char *, ...)

static void Pprint(char str[]){
    printf("%s \n \b", str);
    return;
}

static int OverloadFunction(char* typesString, ...){
    if(!strcmp("int", typesString)){
        va_list argument;
        va_start(argument, typesString);
        printf("%d \n", va_arg(argument, int));
        return;
    } else if(!strcmp("double", typesString)){
        va_list argument;
        va_start(argument, typesString);
        printf("%.4f \n", va_arg(argument, double));
        return;
    } else{
        printf("\033[41;30mskill issue, small pines, no balls, also error\033[0m\n");
    }
}

typedef struct {
    char a;
    int b;
    void METHOD(Pprint);
    int OVERLOADMETHOD(OverloadFunction);
} FirstObject;

const FirstObject defaultFirstObject = {'\t', 0, Pprint, OverloadFunction};
        
