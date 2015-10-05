//
//  main.c
//  C Scratchpad
//
//  Created by Will Wilson on 11/20/14.
//  Copyright (c) 2014 Will Wilson. All rights reserved.
//


#include <curses.h>
#include <math.h>


void welcome() {
    addstr("Welcome to my calculator!\n");
    addstr("Press <Enter> to continue...");
    refresh();
    char ret[1];
    getnstr(ret,sizeof(ret)-1);
    clear();
}

void calc() {
   int a, b;
   printf("Please enter an integer value: ");
   scanf("%i", &a);
   printf("Please enter another integer value: ");
   scanf("%i", &b);
   printf("%i * %i = %i\n", a, b, (a*b));
   printf("%i / %i = %4.3f\n", a, b, ((float)a/(float)b));
   printf("%i ^ %i = %4.0f\n", a, b, pow((float)a,(float)b));
}

int main(int argc, const char * argv[]) {
    char users_name[ 100 ];

    initscr();
    (void)echo();

    welcome();

    calc();
  //printw( "Greetings and salutations %s!\n", users_name );
  //refresh();

  //printw( "\n\n\nPress ENTER to quit." );
  //refresh();
  //getnstr( users_name, sizeof( users_name ) - 1 );
    
    //welcome();
    
    //  run calculator
    //calc();
    
    endwin();
    return 0;
}
