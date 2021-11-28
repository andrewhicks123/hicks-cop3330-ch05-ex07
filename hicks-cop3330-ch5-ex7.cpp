/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Andrew Hicks
 */

#include <iostream>
#include <cmath>

using namespace std;

void roots(int a, int b, int c) {
    float r1, r2, real, i;
    int d = (b * b) - (4 * a * c);
    if (d == 0) {
        r1 = (float)(-b + sqrt(d)) / (2 * a);
        cout << "The roots are real and the same. \nThey are: " << r1 << endl;
    }
    else if (d > 0) {
        r1 = (float)(-b + sqrt(d)) / (2 * a);
        r2 = (float)(-b - sqrt(d)) / (2 * a);
        cout << "The roots are real and different. \n They are: " << r1 << " and " << r2 << endl;
    }
    else {
        real = (float)(-b / (2 * a));
        i = (float)(sqrt(-d) / (2 * a));
        cout << "The roots are complex and different. \nThey are: " << real << " and " << i << "i" << endl;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter A, B and C for a quadratic equation to solve: ";
    cin >> a >> b >> c;
    roots(a, b, c);
    return 0;
}

