//
//  convert_m_to_k.cpp
//  Book Exercise 5.4 - Convert Miles To Kilometers
//
//  Created by ax on 9/20/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "Convert Miles to Kilometers \n";
    
    cout << left << setw(10) << "Miles" << setw(20) << "Kilometers" << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << setw(10) << i << setw(20);
        // set precision based on digits before the decimal point
        // static cast to avoid floating point comparison operation
        if (static_cast<int>(i * 1.609) < 10) {
            cout << setprecision(4);
        } else {
            cout << setprecision(5);

        }
        cout << showpoint
        << i * 1.609
        << endl;

    }
    
    return 0;
}
