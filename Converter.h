#pragma once
#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <fstream>
using namespace std;

class Converter
{
    public:
        void convertNumericalValueToLetter(char currentNumber);
        void convertNumericalValueToLetter(char currentNumber, char nextNumber);
        bool nextNumAfterTwo(char next);
};

#endif // !CONVERTER_H
