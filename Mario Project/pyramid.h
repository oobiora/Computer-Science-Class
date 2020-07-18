#include <iostream>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


class pyramid{

    private:
        int height;


    public:

    void defPyramid (void)
    {

      while (height < 0 || height > 23) {
        cout << "Give me a number: ";
        cin >> height;
      }
    }


    void printPyramid(void)
    {
        for (int i = height; i >=1; i--)
        {

            int spaces = i - 1;
            for(int x = spaces; x >= 0; x-- )
            {
                cout << " ";
            }
            for(int hash = height - spaces; hash >=0; hash--)
            {
                cout << "#";
            }
            cout << endl;

        }
    }

};
