//
//  main.c
//  MyCmdLineTool
//
//  Created by Magnus Romedahl on 2022-02-12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char MyInput[100];
    
    printf("Hej skriv namn:");
    scanf("%s", MyInput);
    printf("Hej %s!\n", MyInput);
    return 0;
}
