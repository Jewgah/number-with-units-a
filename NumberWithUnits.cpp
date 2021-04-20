/**
 * NumberWithUnits Assignment
 * C++ Course @Ariel_University
 * 
 * Author: Jordan Perez
 * https://www.github.com/jewgah
 * 
 * */

#include <iostream>
#include <fstream>
#include <string>
#include <map>

#include "NumberWithUnits.hpp"

using namespace std;
using namespace ariel;

namespace ariel {

    static map<string, map<string, double>> hmap;


    //Constructor
    NumberWithUnits::NumberWithUnits(double value, const string& unit) {
    this->value = value;
    this->unit = unit;
    }

    //fills the map with infos in text file
    void NumberWithUnits::read_units(ifstream& file) {
    }

    //converts type using the map
    static double convert(double value, const string& from, const string& to) {
         return value;
    }  
    
    // NumberWithUnits comparator
    static int compare(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return 0;
    }

    // Getters
    double NumberWithUnits::getValue() const { return this->value; }
    string NumberWithUnits::getUnit() const { return this->unit; }

    //Setters
    void NumberWithUnits::setValue(double val) {this->value = val;}
    void NumberWithUnits::setUnit(string val) {this->unit = val;}

    /**********************  Overloading Operators  **************************/

    // + operators
    NumberWithUnits operator+(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return unit_num_1;
    }

    NumberWithUnits operator+(const NumberWithUnits& unit_num, double number) {
        return unit_num;
    }

    // ++ operators
    NumberWithUnits operator++(NumberWithUnits& unit_num, int) {
        return unit_num;
    }

    NumberWithUnits operator++(NumberWithUnits& unit_num) {
        return unit_num;
    }

    // += operator
    NumberWithUnits operator+=(NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return unit_num_1;
    }

    // - operators
    NumberWithUnits operator-(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return unit_num_1;
    }
    NumberWithUnits operator-(const NumberWithUnits& unit_num) {
        return unit_num;
    }

    // -- operators
    NumberWithUnits operator--(NumberWithUnits& unit_num, int) {
        return unit_num;
    }
    NumberWithUnits operator--(NumberWithUnits& unit_num) {
        return unit_num;
    }

    // -= operator
    NumberWithUnits operator-=(NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return unit_num_1;
    }

    // * operators
    NumberWithUnits operator*(const NumberWithUnits& unit_num, double number) {
        return unit_num;
    }
    NumberWithUnits operator*(double number, const NumberWithUnits& unit_num) {
        return unit_num;
    }

    // *= operators
    NumberWithUnits operator*=(NumberWithUnits& unit_num, double number) {
        return unit_num;
    }
    NumberWithUnits operator*=(double number, NumberWithUnits& unit_num) {
        return unit_num;
    }

    /** equality operators */

    // == operator
    bool operator==(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return true;
    }

    // != operator
    bool operator!=(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return true;
    }

    // < and <= operators
    bool operator<(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return true;
    }
    bool operator<=(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return true;
    }

    // > and >= operators
    bool operator>(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return true;
    }
    bool operator>=(const NumberWithUnits& unit_num_1, const NumberWithUnits& unit_num_2) {
        return true;
    }

    // >> operator
    istream& operator>>(istream& is, NumberWithUnits& unit_num) {
        return is;
    }

    // << operator
    ostream& operator<<(ostream& os, const NumberWithUnits& unit_num) {
        return os;
    }

}