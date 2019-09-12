//
//  main.c
//  pythagoraslab
//
//  Created by Li, Joseph on 9/10/19.
//  Copyright © 2019 Li, Joseph. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    double side1;
    double side2;
    printf("We will help prove the Pythagorean Theorem!");
    printf("What is side 1?");
    scanf("%lf",&side1);
    printf("What is side 2?");
    scanf("%lf",&side2);
    double side3 = sqrt(side1*side1 + side2*side2);
    printf ("the hypotenuse is %lf",side3);
    
    return 0;
}
