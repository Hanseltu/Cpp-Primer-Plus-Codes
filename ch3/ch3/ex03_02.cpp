//
//  ex03_02.cpp
//  ch3
//
//  Created by tuhaoxin on 2018/8/15.
//  Copyright © 2018 dlut. All rights reserved.
//

#include <iostream>

const double Inch_per_feet = 12.0;
const double Meter_per_inch = 0.0254;
const double Pound_per_kilogram = 2.2;

int main(void){
    using namespace std;
    
    cout << "Enter your height of feet:_ \b\b\b";
    double ht_feet;
    cin >> ht_feet;
    
    cout << "Enter height of inch:_\b\b\b";
    double ht_inch;
    cin >> ht_inch;
    
    //convert height
    double ht_meter = (ht_feet*Inch_per_feet + ht_inch)*Meter_per_inch;
    
    cout << "Enter your weight in pound:_\b\b\b";
    double wt_pound;
    cin >> wt_pound;
    
    //convert weight
    double wt_kilogram = wt_pound/Pound_per_kilogram;
    
    double BMI = wt_kilogram/ht_meter;
    cout << "BMI: " << BMI << endl;
    
    return 0;
}
