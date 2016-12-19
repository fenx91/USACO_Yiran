//
//  main.cpp
//  test
//
//  Created by Yiran Wang on 11/4/16.
//  Copyright © 2016 Yiran Wang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 42;
    const int &r = i;
    const int &r3 = r;
    
    std::cout << "Hello, World!\n";
    return 0;
}
