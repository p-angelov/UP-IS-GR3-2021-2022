#include <iostream>

using namespace std;

int main()
{
    int firstTone;
    int secondTone;
    int firstOctave;
    int secondOctave;

    //Използвам подредбата на клаическото пиано с октави от 0 до 8

    cout << "Enter a number from 1 to 7 corresponding to a specific tone: ";
    cin >> firstTone;

    if ((firstTone <= 0) || (firstTone >= 8))
    {
        cout << "Enter a valid number!";
        return 0;
    }

    cout << "Enter the octave (a number from 0 to 8) of the first tone : ";
    cin >> firstOctave;

    if ((firstOctave < 0) || (firstOctave > 8))
    {
        cout << "Enter a valid number!";
        return 0;
    }

    if (firstOctave == 0 && (firstTone != 6 && firstTone != 7))
    {
        cout << "There is no such tone in this octave!";
        return 0;
    }

    if (firstOctave == 8 && firstTone != 1)
    {
        cout << "There's only the note C in this octave!"; //C като международното означение за нотата До
    }

    cout << "Enter a number from 1 to 7 corresponding to the second tone: ";
    cin >> secondTone;

    if ((secondTone <= 0) || (secondTone >= 8))
    {
        cout << "Enter a valid number!";
        return 0;
    }

    cout << "Enter the octave (a number from 0 to 8) of the second tone : ";
    cin >> secondOctave;

    if ((secondOctave < 0) || (secondOctave > 8))
    {
        cout << "Enter a valid number!";
        return 0;
    }

    if (secondOctave == 0 && (secondTone != 6 && secondTone != 7))
    {
        cout << "There is no such tone in this octave!";
        return 0;
    }

    if (secondOctave == 8 && secondTone != 1)
    {
        cout << "There's only the note C in this octave!";
    }

    int intervalSound;

    if (firstOctave == secondOctave)
    {
        if (firstTone > secondTone)
        {
            intervalSound = firstTone - secondTone;
            switch (intervalSound)
            {
            case 1:
                cout << "This sounds dissonant!";
                break;
            case 2:
                cout << "This sounds good!";
                break;
            case 3:
                cout << "This sounds normal!";
                break;
            case 4:
                cout << "This sounds hollow!";
                break;
            case 5:
                cout << "This sounds normal!";
                break;
            case 6:
                cout << "This sounds dissonant!";
                break;

            default:
                break;
            }
        }
        else if (firstTone < secondTone)
        {
            intervalSound = secondTone - firstTone;
            switch (intervalSound)
            {
            case 1:
                cout << "This sounds dissonant!";
                break;
            case 2:
                cout << "This sounds good!";
                break;
            case 3:
                cout << "This sounds normal!";
                break;
            case 4:
                cout << "This sounds hollow!";
                break;
            case 5:
                cout << "This sounds normal!";
                break;
            case 6:
                cout << "This sounds dissonant!";
                break;
            default:
                break;
            }
        }
        else
        {
            cout << "This is the same key!";
            return 0;
        }
    }
    else if (firstOctave != secondOctave)
    {
        if (firstTone > secondTone)
        {
            intervalSound = firstTone - secondTone;
            switch (intervalSound)
            {
            case 1:
                cout << "This sounds dissonant!";
                break;
            case 2:
                cout << "This sounds good!";
                break;
            case 3:
                cout << "This sounds normal!";
                break;
            case 4:
                cout << "This sounds hollow!";
                break;
            case 5:
                cout << "This sounds normal!";
                break;
            case 6:
                cout << "This sounds dissonant!";
                break;

            default:
                break;
            }
        }
        else if (firstTone < secondTone)
        {
            intervalSound = secondTone - firstTone;
            switch (intervalSound)
            {
            case 1:
                cout << "This sounds dissonant!";
                break;
            case 2:
                cout << "This sounds good!";
                break;
            case 3:
                cout << "This sounds normal!";
                break;
            case 4:
                cout << "This sounds hollow!";
                break;
            case 5:
                cout << "This sounds normal!";
                break;
            case 6:
                cout << "This sounds dissonant!";
                break;
            default:
                break;
            }
        }
        else if (firstTone == secondTone)
        {
            cout << "This sounds like an octave!";
            return 0;
        }
    }

    return 0;
}