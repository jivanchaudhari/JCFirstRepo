//
//  main.c
//  JCFirstRepo
//
//  Created by Student P_02 on 26/08/16.
//  Copyright © 2016 Jivan Chaudhari. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int number;
    scanf("%d",&number);
    
    if (number % 2 == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");

    }
    return 0;
}
