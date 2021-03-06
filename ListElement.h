﻿/**
    Структура, которой оперирует класс EdgesList.
*/

#pragma once

#include <iostream>
#include <string>

using namespace std;

struct ListElement {
    string edge, system, country;
    float height;
    ListElement* next;

    void print() {
        cout << "\nName - " << edge << "\n " 
            << "Mount system - " << system << "\n " 
            << "Country - " << country << "\n " 
            << "Height - " << height << "\n"
            << endl;
    }
};
