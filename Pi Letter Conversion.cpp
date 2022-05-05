// Pi Letter Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Markus Cisneros 5-4-2022

#include "Converter.h"

int main()
{
    Converter PiConverter;

    ifstream fin;
    ofstream fout;

    char current = 0;
    char next = 0;

    fin.open("PI_copy.txt");

    while(!fin.eof())
    {
        fin >> current;
        if (current == '0')
        {
            fin >> next;
            PiConverter.convertNumericalValueToLetter(next);
        }
        else if(current == '1' || current == '2')
        {
            fin >> next;
            PiConverter.convertNumericalValueToLetter(current, next);
        }
        else
        {
            PiConverter.convertNumericalValueToLetter(current);
        }
    }

    fin.close();

    return 0;
}
