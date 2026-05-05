#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool EasyLevel(int TypeOP)
{
    int UserAnswer, number1, number2, result;

    if (TypeOP == 1)
    {
        number1 = rand() % 10;
        number2 = rand() % 10;
        cout << number1 << endl;
        cout << "+" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 + number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (TypeOP == 2)
    {
        number1 = rand() % 10;
        number2 = rand() % 10;
        cout << number1 << endl;
        cout << "-" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 - number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (TypeOP == 3)
        {
            number1 = rand() % 10;
            number2 = rand() % 10;
            cout << number1 << " * " << number2 << " = ";
            cin >> UserAnswer;

            result = number1 + number2;

            if (UserAnswer == result)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else // MIx
        {
            int Mix = rand() % 4;
            if (Mix == 1)
            {
                number1 = rand() % 10;
                number2 = rand() % 10;
                cout << number1 << endl;
                cout << "+" << endl;
                cout << number2 << endl;
                cout << "____\n=" << endl;
                cin >> UserAnswer;

                result = number1 + number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if (Mix == 2)
            {

                number1 = rand() % 10;
                number2 = rand() % 10;
                cout << number1 << endl;
                cout << "-" << endl;
                cout << number2 << endl;
                cout << "____\n=" << endl;
                cin >> UserAnswer;

                result = number1 - number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {

                number1 = rand() % 10;
                number2 = rand() % 10;
                cout << number1 << " * " << number2 << " = ";
                cin >> UserAnswer;

                result = number1 + number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}

bool MediumLevel(int TypeOP)
{
    int UserAnswer, number1, number2, result;

    if (TypeOP == 1)
    {
        number1 = rand() % 91 + 10;
        number2 = rand() % 91 + 10;
        cout << number1 << endl;
        cout << "+" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 + number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (TypeOP == 2)
    {
        number1 = rand() % 91 + 10;
        number2 = rand() % 91 + 10;
        cout << number1 << endl;
        cout << "-" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 - number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (TypeOP == 3)
        {
            number1 = rand() % 91 + 10;
            number2 = rand() % 91 + 10;
            cout << number1 << " * " << number2 << " = ";
            cin >> UserAnswer;

            result = number1 + number2;

            if (UserAnswer == result)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else // MIx
        {
            int Mix = rand() % 4;
            if (Mix == 1)
            {
                number1 = rand() % 91 + 10;
                number2 = rand() % 91 + 10;
                cout << number1 << endl;
                cout << "+" << endl;
                cout << number2 << endl;
                cout << "____\n=" << endl;
                cin >> UserAnswer;

                result = number1 + number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if (Mix == 2)
            {
                number1 = rand() % 91 + 10;
                number2 = rand() % 91 + 10;
                cout << number1 << endl;
                cout << "-" << endl;
                cout << number2 << endl;
                cout << "____\n=" << endl;
                cin >> UserAnswer;

                result = number1 - number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {

                number1 = rand() % 91 + 10;
                number2 = rand() % 91 + 10;
                cout << number1 << " * " << number2 << " = ";
                cin >> UserAnswer;

                result = number1 + number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}

bool HardLevel(int TypeOP)
{
    int UserAnswer, number1, number2, result;

    if (TypeOP == 1)
    {
        number1 = rand() % 901 + 100;
        number2 = rand() % 901 + 100;
        cout << number1 << endl;
        cout << "+" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 + number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (TypeOP == 2)
    {
        number1 = rand() % 901 + 100;
        number2 = rand() % 901 + 100;
        cout << number1 << endl;
        cout << "-" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 - number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (TypeOP == 3)
        {
            number1 = rand() % 901 + 100;
            number2 = rand() % 901 + 100;
            cout << number1 << " * " << number2 << " = ";
            cin >> UserAnswer;

            result = number1 + number2;

            if (UserAnswer == result)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else // MIx
        {
            int Mix = rand() % 4;
            if (Mix == 1)
            {
                number1 = rand() % 901 + 100;
                number2 = rand() % 901 + 100;
                cout << number1 << endl;
                cout << "+" << endl;
                cout << number2 << endl;
                cout << "____\n=" << endl;
                cin >> UserAnswer;

                result = number1 + number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if (Mix == 2)
            {
                number1 = rand() % 901 + 100;
                number2 = rand() % 901 + 100;
                cout << number1 << endl;
                cout << "-" << endl;
                cout << number2 << endl;
                cout << "____\n=" << endl;
                cin >> UserAnswer;

                result = number1 - number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                number1 = rand() % 901 + 100;
                number2 = rand() % 901 + 100;
                cout << number1 << " * " << number2 << " = ";
                cin >> UserAnswer;

                result = number1 + number2;

                if (UserAnswer == result)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}

bool MixLevels(int TypeOP)
{
    int UserAnswer, number1, number2, result;
    if (TypeOP == 1)
    {
        number1 = rand() % 1001;
        number2 = rand() % 1001;
        cout << number1 << endl;
        cout << "+" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 + number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (TypeOP == 2)
    {
        number1 = rand() % 1001;
        number2 = rand() % 1001;
        cout << number1 << endl;
        cout << "-" << endl;
        cout << number2 << endl;
        cout << "____\n=" << endl;
        cin >> UserAnswer;

        result = number1 - number2;

        if (UserAnswer == result)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (TypeOP == 3)
        {
            number1 = rand() % 1001;
            number2 = rand() % 1001;
            cout << number1 << " * " << number2 << " = ";
            cin >> UserAnswer;

            result = number1 + number2;

            if (UserAnswer == result)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

void PrintLevel(int Qlevel)
{
    if (Qlevel == 1)
    {
        cout << "Questions level: Easy" << endl;
    }
    else if (Qlevel == 2)
    {
        cout << "Questions level: Medium" << endl;
    }
    else
    {
        if (Qlevel == 3)
        {
            cout << "Questions level: Hard" << endl;
        }
        else
        {
            cout << "Questions level: Mix" << endl;
        }
    }
}

void PrintOperation(int TypeOP)
{
    if (TypeOP == 1)
    {
        cout << "Type Of Operation: Addition +" << endl;
    }
    else if (TypeOP == 2)
    {
        cout << "Type Of Operation: Substraction -" << endl;
    }
    else
    {
        if (TypeOP == 3)
        {
            cout << "Type Of Operation: Multiplication *" << endl;
        }
        else
        {
            cout << "Type Of Operation: Mix + - *" << endl;
        }
    }
}

int main()
{
    int NumOfQuestion, Qlevel, TypeOP, UserAnswer, number, score = 0;
    char YesOrNo;
    srand(time(0));
    do
    {
        cout << "=================================" << endl;
        cout << "       Welcome to Math Game:     " << endl;
        cout << "=================================" << endl;
        cout << "\n How many questions you want to answer ? ";
        cin >> NumOfQuestion;

        do
        {
            cout << "\n Enter the Questions Level " << endl;
            cout << "[1]:Easy\n[2]:Medium\n[3]:Hard\n[4]:Mix" << endl;
            cin >> Qlevel;
        } while (Qlevel == 0 || Qlevel > 4);

        do
        {
            cout << "\n Enter the Operation Type : " << endl;
            cout << "[1]:Addition\n[2]:Substraction\n[3]:Mulltiplication\n[4]:Mix" << endl;
            cin >> TypeOP;
        } while (TypeOP == 0 || TypeOP > 4);

        cout << "\n==========================" << endl;
        for (int i = 1; i <= NumOfQuestion; i++)
        {
            cout << "\n Question[" << i << "/" << NumOfQuestion << "]:" << endl;

            if (Qlevel == 1)
            {
                if (EasyLevel(TypeOP) == true)
                {
                    score++;
                    system("color 2F");
                    cout << "You are right :)" << endl;
                }
                else
                {
                    system("color 4F");
                    cout << "You are wrong :(" << endl;
                }
            }

            //=================================

            else if (Qlevel == 2)
            {
                if (MediumLevel(TypeOP) == true)
                {
                    score++;
                    system("color 2F");
                    cout << "You are right :)" << endl;
                }
                else
                {
                    system("color 4F");
                    cout << "You are wrong :(" << endl;
                }
            }

            //=================================

            else
            {
                if (Qlevel == 3)
                {
                    if (HardLevel(TypeOP) == true)
                    {
                        score++;
                        system("color 2F");
                        cout << "You are right :)" << endl;
                    }
                    else
                    {
                        system("color 4F");
                        cout << "You are wrong :(" << endl;
                    }
                }
                else
                {
                    TypeOP = rand() % 4;
                    if (MixLevels(TypeOP) == true)
                    {
                        score++;
                        system("color 2F");
                        cout << "You are right :)" << endl;
                    }
                    else
                    {
                        system("color 4F");
                        cout << "You are wrong :(" << endl;
                    }
                }
            }
        }

        cout << "Number Of Questions: " << NumOfQuestion << endl;
        PrintLevel(Qlevel);
        PrintOperation(TypeOP);
        cout << "Number Of correct answers: " << score << endl;
        cout << "Number Of wrong answers: " << NumOfQuestion - score << endl;
        cout << "\n Do you wanna play again?[Y/N]:";
        cin >> YesOrNo;
    } while (YesOrNo == 'y' || YesOrNo == 'Y');

    return 0;
}