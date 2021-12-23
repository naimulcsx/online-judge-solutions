#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

// function prototypes
string char_addition(char, char);
string char_multiplication(char, char);
void swap_strings(string &, string &);
void add_leading_zeros(string &, int);
string string_addition(string, string);
string string_multiplication(string, string);
bool all_zero(const string &);

int main(void) {
    char a[100000], b[100000];

    while(scanf("%s %s", a, b) == 2) {
        string x (a), y (b);
        cout << string_multiplication(x, y) << endl;
    }
    
    return 0;
}


string char_addition(char a, char b) {
    string numbers = "0123456789";
    return to_string(numbers.find(a) + numbers.find(b));
}

string char_multiplication(char a, char b) {
    string numbers = "0123456789";
    return to_string(numbers.find(a) * numbers.find(b));
}

void swap_strings(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void add_leading_zeros(string &a, int times) {
    string zero = "";
    for (int i = 0; i < times; i++)
        zero += "0";
    zero += a;
    a = zero;
}


string string_addition(string a, string b) {
    string result = "";

    // if a has less number of digits than b
    if (a.length() < b.length())
        swap_strings(a, b);

    // add leading zeros to b
    add_leading_zeros(b, a.length() - b.length());

    // both the strings are of same length, so we can perform the addition
    string temp, carry; bool has_carry = false;

    for (int i = a.length() - 1; i >= 0; i--) {
        temp = char_addition(a.at(i), b.at(i));

        // if there is a carry add that with the temp
        if (has_carry)
            temp = to_string(atoi(temp.c_str()) + atoi(carry.c_str()));

        // if temp is more than one digit
        if (temp.length() > 1) {
            has_carry = true;
            carry = temp.at(0);
            temp = temp.at(1);
        } 

        // else there is no carry
        else has_carry = false;

        // append with result
        result += temp;
    }

    // if it left a carry, append it to the result
    if (has_carry)
        result += carry;
    
    // reverse the result
    reverse(result.begin(), result.end());
    return result;
}

bool all_zero(const string &str) {
    for (int i = 0; i < str.length(); i++) 
        if (str.at(i) != '0')
            return false;
    
    return true;
}

string string_multiplication(string a, string b) {
    string result = "0";

    // if a has less number of digits than b
    if (a.length() < b.length())
        swap_strings(a, b);

    
    string temp, carry, result_temp = ""; bool has_carry = false;
    int k = 0;

    for (int j = b.length() - 1; j >= 0; j--) {
        // result_temp will hold the value per step
        /* For example:
                237
                 37 
            __________
               1659 -> result_temp
               7110 -> result_temp
        
        */

        result_temp = "", has_carry = false;

        for (int i = a.length() - 1; i >= 0; i--) {
            // get the multiplication result of two chars, first 7x7 then 7x3 (previous example)
            temp = char_multiplication( a.at(i), b.at(j) );

            // if it has carry, then add the carry with the temp and save it as string in temp
            if (has_carry)
                temp = to_string(atoi(temp.c_str()) + atoi(carry.c_str()));

            // if temp is more that two digits
            if (temp.length() > 1) {
                has_carry = true;
                carry = temp.at(0);
                temp = temp.at(1);
            } 
            
            // else there is no carry
            else has_carry = false;

            // append with result_temp, temp is just used to store the value of two charecter digits
            result_temp += temp;            
        }

        // if it left a carry, append it to the result
        if (has_carry)
            result_temp += carry;

        // resvers thr result_temp 
        reverse(result_temp.begin(), result_temp.end());

        // add zero(s) at the end of the result_temp
        for (int i = 0; i < k; i++)
            result_temp += "0";

        // now add whatever we get, using the string_addition function with the previous result, initially result is set to "0"
        result = string_addition(result, result_temp);
        k++;
    }

    // if all the digits of result is zero, that means it's a zero
    if (all_zero(result))
        result = "0";

    return result;
}