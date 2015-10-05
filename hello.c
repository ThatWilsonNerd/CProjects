//
//  main.c
//  Hello
//
//  Created by Will Wilson on 8/22/14.
//  Copyright (c) 2014 Will Wilson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    char name[20];
    int age;
    
    printf("Please enter your name: ");
    scanf("%s", name);
    
    printf("Hello, %s! How old are you? ",name);
    scanf("%d", &age);

    printf("You are %d years old.\n", age);
    
    return 0;
}

