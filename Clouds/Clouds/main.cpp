//
//  main.cpp
//  Clouds
//
//  Created by Tafadzwa Manyenga on 2/5/20.
//  Copyright © 2020 Tafadzwa Manyenga. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int c[] = {0, 0, 1, 0, 0, 1, 0};
    
    int n = 7;
    
    int jumps = 0;
    
    for (int i = 1; i<n; i++) {
        int next = i+1;
        if(c[next]==0){jumps++;i=next;}
        else if(c[i]==0)jumps++;
    }
    std::cout << jumps << "\n";
    return 0;
}
