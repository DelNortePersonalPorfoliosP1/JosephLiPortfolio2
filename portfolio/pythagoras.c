//
//  pythagoras.c
//  portfolioattempt4
//
//  Created by Li, Joseph on 9/17/19.
//  Copyright © 2019 Li, Joseph. All rights reserved.
//

#include "math.h"
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double side1;
    double side2;
    
    printf("side1");
    scanf("%lf",&side1);
    printf("side2");
    scanf("%lf",&side2);
    double side3 = sqrt(side1*side1 + side2*side2);
    printf ("the hypotenuse is %lf",side3);
    
    return 0;
}


