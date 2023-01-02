/**Print the UPPER-CASE pattern of Alphabet**/

#include <iostream>
using namespace std;
class alpha{
    public:
        int height = 5;
        int width = (2 * height) - 1;
        int abs(int d)
        {
            return d < 0 ? -1 * d : d;
        }

//Print A pattern
void printA()
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == n || j == (width - n)
                || (i == height / 2 && j > n
                    && j < (width - n)))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
        n--;
    }
}

//Print B pattern
void printB()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1 || i == half)
                && j < (width - 2))
                cout <<"*";
            else if (j == (width - 2)
                    && !(i == 0 || i == height - 1
                        || i == half))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print C pattern
void printC()
{
    int i, j;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < (height - 1); j++) {
            if (i == 0 || i == height - 1)
                cout <<"*";
            else
                continue;
        }
        cout <<"\n";
    }
}


//Print D pattern
void printD()
{
    int i, j;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                && j < height - 1)
                cout <<"*";
            else if (j == height - 1 && i != 0
                    && i != height - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print E pattern
void printE()
{
    int i, j;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height - 1)
                || (i == height / 2
                    && j <= height / 2))
                cout <<"*";
            else
                continue;
        }
        cout <<"\n";
    }
}


//Print F pattern
void printF()
{
    int i, j;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < height; j++) {
            if ((i == 0) || (i == height / 2
                            && j <= height / 2))
                cout <<"*";
            else
                continue;
        }
        cout <<"\n";
    }
}


//Print G pattern
void printG()
{
    int i, j;
    width--;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == height - 1)
                && (j == 0 || j == width - 1))
                cout <<" ";
            else if (j == 0)
                cout <<"*";
            else if (i == 0 && j <= height)
                cout <<"*";
            else if (i == height / 2
                    && j > height / 2)
                cout <<"*";
            else if (i > height / 2
                    && j == width - 1)
                cout <<"*";
            else if (i == height - 1
                    && j < width)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print H pattern
void printH()
{
    int i, j;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < height; j++) {
            if ((j == height - 1)
                || (i == height / 2))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print I pattern
void printI()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1)
                cout <<"*";
            else if (j == height / 2)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print J pattern
void printJ()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == height - 1 && (j > 0
                                    && j < height - 1))
                cout <<"*";
            else if ((j == height - 1
                    && i != height - 1)
                    || (i > (height / 2) - 1
                        && j == 0 && i != height - 1))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print K pattern
void printK()
{
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j <= half; j++) {
            if (j == abs(dummy))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
        dummy--;
    }
}


//Print L pattern
void printL()
{
    int i, j;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j <= height; j++) {
            if (i == height - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print M pattern
void printM()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j <= height; j++) {
            if (j == height)
                cout <<"*";
            else if (j == counter
                    || j == height - counter - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        if (counter == height / 2) {
            counter = -99999;
        }
        else
            counter++;
        cout <<"\n";
    }
}


//Print N pattern
void printN()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j <= height; j++) {
            if (j == height)
                cout <<"*";
            else if (j == counter)
                cout <<"*";
            else
                cout <<" ";
        }
        counter++;
        cout <<"\n";
    }
}


//Print O pattern
void printO()
{
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == width - abs(space)
                || j == abs(space))
                cout <<"*";
            else if ((i == 0
                    || i == height - 1)
                    && j > abs(space)
                    && j < width - abs(space))
                cout <<"*";
            else
                cout <<" ";
        }
        if (space != 0
            && i < height / 2) {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        cout <<"\n";
    }
}


//Print P pattern
void printP()
{
    int i, j;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2)
                && j < height - 1)
                cout <<"*";
            else if (i < height / 2
                    && j == height - 1 && i != 0)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print Q pattern
void printQ()
{
    printO();
    int i, j, d = height;
    for (i = 0; i < height / 2; i++) {
        for (j = 0; j <= d; j++) {
            if (j == d)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
        d++;
    }
}


//Print R pattern
void printR()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j < width; j++) {
            if ((i == 0 || i == half)
                && j < (width - 2))
                cout <<"*";
            else if (j == (width - 2)
                    && !(i == 0 || i == half))
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print S pattern
void printS()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                || i == height - 1))
                cout <<"*";
            else if (i < height / 2
                    && j == 0)
                cout <<"*";
            else if (i > height / 2
                    && j == height - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print T pattern
void printT()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
                cout <<"*";
            else if (j == height / 2)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print U pattern
void printU()
{
    int i, j;
    for (i = 0; i < height; i++) {
        if (i != 0 && i != height - 1)
            cout <<"*";
        else
            cout <<" ";
        for (j = 0; j < height; j++) {
            if (((i == height - 1)
                && j >= 0
                && j < height - 1))
                cout <<"*";
            else if (j == height - 1 && i != 0
                    && i != height - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
    }
}


//Print V pattern
void printV()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= width; j++) {
            if (j == counter
                || j == width - counter - 1)
                cout <<"*";
            else
                cout <<" ";
        }
        counter++;
        cout <<"\n";
    }
}


//Print W pattern
void printW()
{
    int i, j, counter = height / 2;
    for (i = 0; i < height; i++) {
        cout <<"*";
        for (j = 0; j <= height; j++) {
            if (j == height)
                cout <<"*";
            else if ((i >= height / 2)
                    && (j == counter
                        || j == height - counter - 1))
                cout <<"*";
            else
                cout <<" ";
        }
        if (i >= height / 2) {
            counter++;
        }
        cout <<"\n";
    }
}


//Print X pattern
void printX()
{
    int i, j, counter = 0;
    for (i = 0; i <= height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter
                || j == height - counter)
                cout <<"*";
            else
                cout <<" ";
        }
        counter++;
        cout <<"\n";
    }
}


//Print Y pattern
void printY()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= height; j++) {
            if (j == counter
                || j == height - counter
                    && i <= height / 2)
                cout <<"*";
            else
                cout <<" ";
        }
        cout <<"\n";
        if (i < height / 2)
            counter++;
    }
}


//Print Z pattern
void printZ()
{
    int i, j, counter = height - 1;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0 || i == height - 1
                || j == counter)
                cout <<"*";
            else
                cout <<" ";
        }
        counter--;
        cout <<"\n";
    }
}};


//Driver code
int main(){
char character;
do{
cout<<"Enter the character: ";
cin>>character;
alpha ch;
    switch (character) {
    case 'A':
        ch.printA();
        break;
    case 'B':
        ch.printB();
        break;
    case 'C':
        ch.printC();
        break;
    case 'D':
        ch.printD();
        break;
    case 'E':
        ch.printE();
        break;
    case 'F':
        ch.printF();
        break;
    case 'G':
        ch.printG();
        break;
    case 'H':
        ch.printH();
        break;
    case 'I':
        ch.printI();
        break;
    case 'J':
        ch.printJ();
        break;
    case 'K':
        ch.printK();
        break;
    case 'L':
        ch.printL();
        break;
    case 'M':
        ch.printM();
        break;
    case 'N':
        ch.printN();
        break;
    case 'O':
        ch.printO();
        break;
    case 'P':
        ch.printP();
        break;
    case 'Q':
        ch.printQ();
        break;
    case 'R':
        ch.printR();
        break;
    case 'S':
        ch.printS();
        break;
    case 'T':
        ch.printT();
        break;
    case 'U':
        ch.printU();
        break;
    case 'V':
        ch.printV();
        break;
    case 'W':
        ch.printW();
        break;
    case 'X':
        ch.printX();
        break;
    case 'Y':
        ch.printY();
        break;
    case 'Z':
        ch.printZ();
        break;
    }}
while(character!=0);
}
