#include <iostream> //for cout/endl etc.
#include <cstdlib>  //c++ version of stdlib - for exit. 

#include "Colour.h" //Need this to define our class. 

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    cout << "Testing the colour library" << endl;

    Colour foreground; //static colour on stack.
    foreground.setRed(255);
    foreground.setBlue(0);
    foreground.setGreen(0);
    foreground.setAlpha(0);

    // cout can't print an unsigned int use + 
    // to make promote it to a signed char.
    cout << +foreground.getRed() << ","
        << +foreground.getGreen() << ","
        << +foreground.getBlue() << endl;
        << +foreground.getAlpha() << ".";
   
    Colour background; //static colour
    background.setRed(0);
    background.setBlue(255);
    background.setGreen(0);
    background.setAlpha(0);

    cout << +background.getRed() << ","
        << +background.getGreen() << ","
        << +background.getBlue() << endl;
        << +background.getAlpha() << ".";

    Colour anotherOne(255, 255, 255, 255); //static colour
    cout << +anotherOne.getRed() << ","
        << +anotherOne.getGreen() << ","
        << +anotherOne.getBlue() << endl;
        << +anotherOne.getAlpha() << ".";

    Colour* justOneMore; // dynamic colour on heap.
    //new allocates memory and calls constructor.
    justOneMore = new Colour(255, 255, 0, 0);

    cout << +justOneMore->getRed() << ","
        << +justOneMore->getGreen() << ","
        << +justOneMore->getBlue() << endl;
        << +justOneMore->getAlpha() << ".";
    delete justOneMore; //must release memory.

    Colour maxTest;
    cout << +maxTest.getRed() << ","
        << +maxTest.getGreen() << ","
        << +maxTest.getBlue() << endl;
        << +maxTest.getAlpha() << ".";
    cout << "Colour max " << +Colour::MAX << endl;
    exit(0);
}