//
//
#include <iostream>
#include "apex_code.h"

using namespace std;

void email_concat(stringstream& cin, stringstream& cout) {
    string addr;                 // read addresses until input ends
                        
    while (cin >> addr) {
        cout << addr << ":";
    }
    cout << endl;
}

void donation_total(stringstream &cin, stringstream &cout) {
    double amt;
    double total = 0.0;            // keep reading until a negative number appears
    
    while (cin >> amt) {
        if (amt < 0) {
            break;
        }
        if (amt > 100.0) {
            cout << "Send a t-shirt" << endl;
        }
        total = total + amt;   // tally all non-negative donations
    }

    cout << fixed << setprecision(2);
    cout << "Total donations made $" << total << endl;
}

void average_books_checked_out(std::stringstream &cin, std::stringstream &cout) {
    int monthCount = 12;
    long sum = 0;
    bool Over1268 = true;

    for (int i = 0; i < monthCount; ++i) {
        long x;
        cin >> x;
        sum = sum + x;
        if (x <= 1268) {                    // "more than 1268" = greater
            Over1268 = false;
        }
    }

    long avg = sum / monthCount;    // integer average like the examples

    cout << "Average monthly circulation: " << avg << " books" << endl;
    if (Over1268 && avg > 2500) {
        cout << "Extend hours!!" << endl;
    }
    
}

void rectangles(std::stringstream &cin, std::stringstream &cout) {
    int width, height;
    char ch;
    cin >> width >> height >> ch;

    for (int r = 0; r < height; ++r) {
        for (int c = 0; c < width; ++c) {
            cout << ch;
            if (c < width - 1) cout << " ";   // same spacing: X X X
        }
        cout << endl;
    }
}

