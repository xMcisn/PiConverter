#include "Converter.h"

ofstream fout;

void Converter::convertNumericalValueToLetter(char currentNumber)
{
    fout.open("Converted.txt", ios::app);

    switch (currentNumber)
    {
    case '1':
        fout << 'A';
        break;
    case '2':
        fout << 'B';
        break;
    case '3':
        fout << 'C';
        break;
    case '4':
        fout << 'D';
        break;
    case '5':
        fout << 'E';
        break;
    case '6':
        fout << 'F';
        break;
    case '7':
        fout << 'G';
        break;
    case '8':
        fout << 'H';
        break;
    case '9':
        fout << 'I';
        break;
    default:
        break;
    }

    fout.close();
}

void Converter::convertNumericalValueToLetter(char currentNumber, char nextNumber)
{
    bool nextNumberValid = true;

    if (currentNumber == '2')
    {
        nextNumberValid = nextNumAfterTwo(nextNumber);
    }

    if (!nextNumberValid)
    {
        convertNumericalValueToLetter(currentNumber);
        convertNumericalValueToLetter(nextNumber);
        return;
    }
    else
    {
        fout.open("Converted.txt", ios::app);

        char *concatenatedString;
        concatenatedString = new char[3];
        concatenatedString[0] = currentNumber;
        concatenatedString[1] = nextNumber;
        concatenatedString[2] = '\0';

        switch (concatenatedString[0])
        {
            case '1':
                switch (concatenatedString[1])
                {
                case '0':
                    fout << 'J';
                    break;
                case '1':
                    fout << 'K';
                    break;
                case '2':
                    fout << 'L';
                    break;
                case '3':
                    fout << 'M';
                    break;
                case '4':
                    fout << 'N';
                    break;
                case '5':
                    fout << 'O';
                    break;
                case '6':
                    fout << 'P';
                    break;
                case '7':
                    fout << 'Q';
                    break;
                case '8':
                    fout << 'R';
                    break;
                case '9':
                    fout << 'S';
                    break;
                default:
                    break;
                }
                break;
            case '2':
                switch (concatenatedString[1])
                {
                case '0':
                    fout << 'T';
                    break;
                case '1':
                    fout << 'U';
                    break;
                case '2':
                    fout << 'V';
                    break;
                case '3':
                    fout << 'W';
                    break;
                case '4':
                    fout << 'X';
                    break;
                case '5':
                    fout << 'Y';
                    break;
                case '6':
                    fout << 'Z';
                    break;
                default:
                    break;
                }
                break;
        }
        fout.close();
    }
}

bool Converter::nextNumAfterTwo(char nextNumber)
{
    if (nextNumber != '7' && nextNumber != '8' && nextNumber != '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
