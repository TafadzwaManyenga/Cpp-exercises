//
//  main.cpp
//  Valleys
//
//  Created by Tafadzwa Manyenga on 2/5/20.
//  Copyright © 2020 Tafadzwa Manyenga. All rights reserved.
//

#include <iostream>
#include <exception>

using namespace std;

int main(int argc, const char * argv[]) {
    std::string s = "DDUUDDUDUUUD";
    int n = s.length();
    
        int valley_counter = 0;

        int current_pos = 0;

        for(int i = 0; i< n; i++){
            //Check first character
            
            if(s[i]=='U'){
                if(++current_pos==0)
                valley_counter++;
            }
            else current_pos--;
        }
    std::cout<<"Valleys: " << valley_counter << "\n";
}
