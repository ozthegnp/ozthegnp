//
//  main.cpp
//  tdd
//
//  Created by Oz on 1/30/18.
//  Copyright © 2018 Oscar Inc. All rights reserved.
//

#include <iostream>
//#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int one_element_arr[] = {1};
int three_element_arr[] = {1, 2, 3};
int four_element_arr[] = {1, 2, 3, 4};
int ten_element_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


int elementsum(int num_array[]) {
    int size = sizeof(num_array) / sizeof(num_array[0]);
    return size;
}

int main(){
    
    printf("%d\n", elementsum(ten_element_arr));
    
    return 0;
}
/*TEST_CASE( "elements counted", "[elementsum]" ) {
    //REQUIRE( elementsum(one_element_arr) == 1 );
    REQUIRE( elementsum(three_element_arr) == 3 );
    REQUIRE( elementsum(four_element_arr) == 4 );
    REQUIRE( elementsum(ten_element_arr) == 10 );
}*/
