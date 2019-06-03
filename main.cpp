#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;


vector<int> generate_m_sequence(int baseVal, int powerVal, int shift=1, int whichSeq=0) {
    int bitNum = pow(baseVal, powerVal) - 1;
    deque<int> register_(powerVal, 1);
    vector<vector<int>> taps;
//    taps.push_back(tap({2,3,4,4}));

    if (baseVal == 2) {
        switch(powerVal)
        {
            case 2:
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                break;
            case 3:
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                break;
            case 4:
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                break;
            case 5:
                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                break;
            case 6:
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(6);
                taps.push_back(vector<int>());
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(6);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);

                break;
            case 7:
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);

                break;
            case 8:
                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(7);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(7);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);

                break;
            case 9:
                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(5);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(8);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(7);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(7);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(8);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);

                break;
            case 10:
                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(10);

                taps.push_back(vector<int>());
                taps.back().push_back(7);
                taps.back().push_back(10);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(6);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(7);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(7);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(6);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(7);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(5);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(9);
                taps.back().push_back(10);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(6);
                taps.back().push_back(7);
                taps.back().push_back(8);
                taps.back().push_back(9);
                taps.back().push_back(10);
                break;

            case 11:
                taps.push_back(vector<int>());
                taps.back().push_back(9);
                taps.back().push_back(11);
                break;

            case 12:
                taps.push_back(vector<int>());
                taps.back().push_back(6);
                taps.back().push_back(8);
                taps.back().push_back(11);
                taps.back().push_back(12);
                break;

            case 13:
                taps.push_back(vector<int>());
                taps.back().push_back(9);
                taps.back().push_back(10);
                taps.back().push_back(12);
                taps.back().push_back(13);
                break;

            case 14:
                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(8);
                taps.back().push_back(13);
                taps.back().push_back(14);
                break;

            case 15:
                taps.push_back(vector<int>());
                taps.back().push_back(14);
                taps.back().push_back(15);
                break;
            case 16:
                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(13);
                taps.back().push_back(15);
                taps.back().push_back(16);
                break;

            case 17:
                taps.push_back(vector<int>());
                taps.back().push_back(14);
                taps.back().push_back(17);
                break;

            case 18:
                taps.push_back(vector<int>());
                taps.back().push_back(11);
                taps.back().push_back(18);
                break;

            case 19:
                taps.push_back(vector<int>());
                taps.back().push_back(14);
                taps.back().push_back(17);
                taps.back().push_back(18);
                taps.back().push_back(19);
                break;

            case 20:
                taps.push_back(vector<int>());
                taps.back().push_back(17);
                taps.back().push_back(20);
                break;

            case 21:
                taps.push_back(vector<int>());
                taps.back().push_back(19);
                taps.back().push_back(21);
                break;

            case 22:
                taps.push_back(vector<int>());
                taps.back().push_back(21);
                taps.back().push_back(22);
                break;

            case 23:
                taps.push_back(vector<int>());
                taps.back().push_back(18);
                taps.back().push_back(23);
                break;

            case 24:
                taps.push_back(vector<int>());
                taps.back().push_back(17);
                taps.back().push_back(22);
                taps.back().push_back(23);
                taps.back().push_back(24);
                break;

            case 25:
                taps.push_back(vector<int>());
                taps.back().push_back(22);
                taps.back().push_back(25);
                break;

            case 26:
                taps.push_back(vector<int>());
                taps.back().push_back(20);
                taps.back().push_back(24);
                taps.back().push_back(25);
                taps.back().push_back(26);
                break;

            case 27:
                taps.push_back(vector<int>());
                taps.back().push_back(22);
                taps.back().push_back(25);
                taps.back().push_back(26);
                taps.back().push_back(27);
                break;

            case 28:
                taps.push_back(vector<int>());
                taps.back().push_back(25);
                taps.back().push_back(28);
                break;

            case 29:
                taps.push_back(vector<int>());
                taps.back().push_back(27);
                taps.back().push_back(29);
                break;

            case 30:
                taps.push_back(vector<int>());
                taps.back().push_back(7);
                taps.back().push_back(28);
                taps.back().push_back(29);
                taps.back().push_back(39);
                break;
            default:
                cout << "M-sequence " << baseVal << "^" << powerVal << " is not defined" << endl;


        }
    } else if (baseVal == 3) {
        switch (powerVal) {
            case 2:
                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);

                break;
            case 3:
                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);

                break;
            case 4:
                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);

                break;
            case 5:
                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);

                break;
            case 6:

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);

                break;
            case 7:
                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(2);

                break;
            default:
                cout << "M-sequence " << baseVal << "^" << powerVal << " is not defined" << endl;

        }
    } else if (baseVal == 5) {
        switch (powerVal) {
            case 2:
                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);

                break;
            case 3:
                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(3);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(3);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(1);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(3);

                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(3);

                break;
            case 4:
                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(3);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(3);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(2);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(2);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(0);
                taps.back().push_back(3);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(4);
                taps.back().push_back(4);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(4);
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(3);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(4);
                taps.back().push_back(3);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(3);
                taps.back().push_back(3);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(3);
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(3);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(2);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(2);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(2);
                taps.back().push_back(3);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(2);
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(4);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(3);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(2);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(0);
                taps.back().push_back(1);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(1);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(0);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(3);
                taps.back().push_back(1);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(0);
                taps.back().push_back(2);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(2);
                taps.back().push_back(4);
                taps.back().push_back(3);


                taps.push_back(vector<int>());
                taps.back().push_back(1);
                taps.back().push_back(1);
                taps.back().push_back(4);
                taps.back().push_back(2);


                break;
            default:
                cout << "M-sequence " << baseVal << "^" << powerVal << " is not defined" << endl;
        }
    }

    vector<int> ms(bitNum, 1);
    if (whichSeq >= taps.size() || whichSeq < 0) {
        cout << 'wrapping arround!' << endl;
        whichSeq = whichSeq % taps.size();
    }

    vector<int> weights(powerVal, 0);
    if (baseVal == 2) {
        for (const int& v: taps[whichSeq]) weights[v-1] = 1;
    } else if (baseVal > 2) {
        weights = taps[whichSeq];
    }


    for (int i = 0; i < bitNum; i++) {
        int sum = 0;
        for (int j = 0; j < powerVal; j++) {
            sum += weights[j] * register_[j];
        }
        ms[i] = (sum + baseVal) % baseVal;

        register_ .pop_back();
        register_.push_front(ms[i]);
    }

    if (shift >= 1) {
        shift = shift % ms.size();
        rotate(ms.begin(), ms.begin()+shift, ms.end());
    }

    if (baseVal == 2) {
        for (int &v :ms) v = 2 * v - 1;
    } else if (baseVal == 3) {
        ms[1] = -1;
    } else if (baseVal == 5) {
        ms[3] = -1;
        ms[2] = -2;
    } else {
        cout << "wrong baseVal!" << endl;
    }

    return ms;
    
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    int power = round(log2(63+1));
    vector<int> res = generate_m_sequence(2, power, 0, 0);
    vector<int> res2(res.end() - 10, res.end());

    return 0;
}
