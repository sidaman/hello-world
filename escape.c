//
//  escape.c
//  LearnC
//
//  Created by sid_datta on 9/23/17.
//  Copyright © 2017 sid_datta. All rights reserved.
//

#include <stdio.h>
 int main()
{
    int c,x;
    x=0;
    char store[5];
    while ((c =getchar()) != EOF && x<5)
    {
        switch(c)
        {
            case '\t':
                printf("\\t\n");
                store[x++] =c;
                break;
           default :
                putchar(c);
                store[x++] =c;
                break;
        }
    
    }
    printf("\n");
    for (int y=0; y < 5; ++y)
    {
        switch (store[y])
        {
            case '\t':
                printf("\\t \n");
                break;
            default:
                printf("%c\n",store[y]);
                break;
        }
        }

        

}
