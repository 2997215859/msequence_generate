#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;
struct tap {
    vector<int> No;
    tap(const vector<int> &No): No(No) {};
};
vector<int> generate_m_sequence(int baseVal, int powerVal, int shift=1, int whichSeq=0) {
    int bitNum = pow(baseVal, powerVal) - 1;
    deque<int> register_(powerVal, 1);
    vector<tap> taps;
//    taps.push_back(tap({2,3,4,4}));

    if (baseVal == 2) {
        switch(powerVal)
        {
            case 2:
                taps.push_back(tap({1, 2}));
                break;
            case 3:
                taps.push_back(tap({1, 3}));
                taps.push_back(tap({2, 3}));
                break;
            case 4:
                taps.push_back(tap({1,4}));
                taps.push_back(tap({3,4}));
                break;
            case 5:
                taps.push_back(tap({2,5}));
                taps.push_back(tap({3,5}));
                taps.push_back(tap({1,2,3,5}));
                taps.push_back(tap({2,3,4,5}));
                taps.push_back(tap({1,2,4,5}));
                taps.push_back(tap({1,3,4,5}));
                break;
            case 6:
                taps.push_back(tap({1,6}));
                taps.push_back(tap({5,6}));
                taps.push_back(tap({1,2,5,6}));
                taps.push_back(tap({1,4,5,6}));
                taps.push_back(tap({1,3,4,6}));
                taps.push_back(tap({2,3,5,6}));
                break;
            case 7:
                taps.push_back(tap({1,7}));
                taps.push_back(tap({6,7}));
                taps.push_back(tap({3,7}));
                taps.push_back(tap({4,7}));
                taps.push_back(tap({1,2,3,7}));
                taps.push_back(tap({4,5,6,7}));
                taps.push_back(tap({1,2,5,7}));
                taps.push_back(tap({2,5,6,7}));
                taps.push_back(tap({2,3,4,7}));
                taps.push_back(tap({3,4,5,7}));
                taps.push_back(tap({1,3,5,7}));
                taps.push_back(tap({2,4,6,7}));
                taps.push_back(tap({1,3,6,7}));
                taps.push_back(tap({1,4,6,7}));
                taps.push_back(tap({2,3,4,5,6,7}));
                taps.push_back(tap({1,2,3,4,5,7}));
                taps.push_back(tap({1,2,4,5,6,7}));
                taps.push_back(tap({1,2,3,5,6,7}));
                break;
            case 8:
                taps.push_back(tap({1,2,7,8}));
                taps.push_back(tap({1,6,7,8}));
                taps.push_back(tap({1,3,5,8}));
                taps.push_back(tap({3,5,7,8}));
                taps.push_back(tap({2,3,4,8}));
                taps.push_back(tap({4,5,6,8}));
                taps.push_back(tap({2,3,5,8}));
                taps.push_back(tap({3,5,6,8}));
                taps.push_back(tap({2,3,6,8}));
                taps.push_back(tap({2,5,6,8}));
                taps.push_back(tap({2,3,7,8}));
                taps.push_back(tap({1,5,6,8}));
                taps.push_back(tap({1,2,3,4,6,8}));
                taps.push_back(tap({2,4,5,6,7,8}));
                taps.push_back(tap({1,2,3,6,7,8}));
                taps.push_back(tap({1,2,5,6,7,8}));
                break;
            case 9:
                taps.push_back(tap({4,9}));
                taps.push_back(tap({5,9}));
                taps.push_back(tap({3,4,6,9}));
                taps.push_back(tap({3,5,6,9}));
                taps.push_back(tap({4,5,8,9}));
                taps.push_back(tap({1,4,5,9}));
                taps.push_back(tap({1,4,8,9}));
                taps.push_back(tap({1,5,8,9}));
                taps.push_back(tap({2,3,5,9}));
                taps.push_back(tap({4,6,7,9}));
                taps.push_back(tap({5,6,8,9}));
                taps.push_back(tap({1,3,4,9}));
                taps.push_back(tap({2,7,8,9}));
                taps.push_back(tap({1,2,7,9}));
                taps.push_back(tap({2,4,7,9}));
                taps.push_back(tap({2,5,7,9}));
                taps.push_back(tap({2,4,8,9}));
                taps.push_back(tap({1,5,7,9}));
                taps.push_back(tap({1,2,4,5,6,9}));
                taps.push_back(tap({3,4,5,7,8,9}));
                taps.push_back(tap({1,3,4,6,7,9}));
                taps.push_back(tap({2,3,5,6,8,9}));
                taps.push_back(tap({3,5,6,7,8,9}));
                taps.push_back(tap({1,2,3,4,6,9}));
                taps.push_back(tap({1,5,6,7,8,9}));
                taps.push_back(tap({1,2,3,4,8,9}));
                taps.push_back(tap({1,2,3,7,8,9}));
                taps.push_back(tap({1,2,6,7,8,9}));
                taps.push_back(tap({1,3,5,6,8,9}));
                taps.push_back(tap({1,3,4,6,8,9}));
                taps.push_back(tap({1,2,3,5,6,9}));
                taps.push_back(tap({3,4,6,7,8,9}));
                taps.push_back(tap({2,3,6,7,8,9}));
                taps.push_back(tap({1,2,3,6,7,9}));
                taps.push_back(tap({1,4,5,6,8,9}));
                taps.push_back(tap({1,3,4,5,8,9}));
                taps.push_back(tap({1,3,6,7,8,9}));
                taps.push_back(tap({1,2,3,6,8,9}));
                taps.push_back(tap({2,3,4,5,6,9}));
                taps.push_back(tap({3,4,5,6,7,9}));
                taps.push_back(tap({2,4,6,7,8,9}));
                taps.push_back(tap({1,2,3,5,7,9}));
                taps.push_back(tap({2,3,4,5,7,9}));
                taps.push_back(tap({2,4,5,6,7,9}));
                taps.push_back(tap({1,2,4,5,7,9}));
                taps.push_back(tap({2,4,5,6,7,9}));
                taps.push_back(tap({1,3,4,5,6,7,8,9}));
                taps.push_back(tap({1,2,3,4,5,6,8,9}));
                break;
            case 10:
                taps.push_back(tap({3,10}));
                taps.push_back(tap({7,10}));
                taps.push_back(tap({2,3,8,10}));
                taps.push_back(tap({2,7,8,10}));
                taps.push_back(tap({1,3,4,10}));
                taps.push_back(tap({6,7,9,10}));
                taps.push_back(tap({1,5,8,10}));
                taps.push_back(tap({2,5,9,10}));
                taps.push_back(tap({4,5,8,10}));
                taps.push_back(tap({2,5,6,10}));
                taps.push_back(tap({1,4,9,10}));
                taps.push_back(tap({1,6,9,10}));
                taps.push_back(tap({3,4,8,10}));
                taps.push_back(tap({2,6,7,10}));
                taps.push_back(tap({2,3,5,10}));
                taps.push_back(tap({5,7,8,10}));
                taps.push_back(tap({1,2,5,10}));
                taps.push_back(tap({5,8,9,10}));
                taps.push_back(tap({2,4,9,10}));
                taps.push_back(tap({1,6,8,10}));
                taps.push_back(tap({3,7,9,10}));
                taps.push_back(tap({1,3,7,10}));
                taps.push_back(tap({1,2,3,5,6,10}));
                taps.push_back(tap({4,5,7,8,9,10}));
                taps.push_back(tap({2,3,6,8,9,10}));
                taps.push_back(tap({1,2,4,7,8,10}));
                taps.push_back(tap({1,5,6,8,9,10}));
                taps.push_back(tap({1,2,4,5,9,10}));
                taps.push_back(tap({2,5,6,7,8,10}));
                taps.push_back(tap({2,3,4,5,8,10}));
                taps.push_back(tap({2,4,6,8,9,10}));
                taps.push_back(tap({1,2,4,6,8,10}));
                taps.push_back(tap({1,2,3,7,8,10}));
                taps.push_back(tap({2,3,7,8,9,10}));
                taps.push_back(tap({3,4,5,8,9,10}));
                taps.push_back(tap({1,2,5,6,7,10}));
                taps.push_back(tap({1,4,6,7,9,10}));
                taps.push_back(tap({1,3,4,6,9,10}));
                taps.push_back(tap({1,2,6,8,9,10}));
                taps.push_back(tap({1,2,4,8,9,10}));
                taps.push_back(tap({1,4,7,8,9,10}));
                taps.push_back(tap({1,2,3,6,9,10}));
                taps.push_back(tap({1,2,6,7,8,10}));
                taps.push_back(tap({2,3,4,8,9,10}));
                taps.push_back(tap({1,2,4,6,7,10}));
                taps.push_back(tap({3,4,6,8,9,10}));
                taps.push_back(tap({2,4,5,7,9,10}));
                taps.push_back(tap({1,3,5,6,8,10}));
                taps.push_back(tap({3,4,5,6,9,10}));
                taps.push_back(tap({1,4,5,6,7,10}));
                taps.push_back(tap({1,3,4,5,6,7,8,10}));
                taps.push_back(tap({2,3,4,5,6,7,9,10}));
                taps.push_back(tap({3,4,5,6,7,8,9,10}));
                taps.push_back(tap({1,2,3,4,5,6,7,10}));
                taps.push_back(tap({1,2,3,4,5,6,9,10}));
                taps.push_back(tap({1,4,5,6,7,8,9,10}));
                taps.push_back(tap({2,3,4,5,6,8,9,10}));
                taps.push_back(tap({1,2,4,5,6,7,8,10}));
                taps.push_back(tap({1,2,3,4,6,7,9,10}));
                taps.push_back(tap({1,3,4,6,7,8,9,10}));
                break;
            case 11: taps.push_back(tap({9,11}));break;
            case 12: taps.push_back(tap({6,8,11,12}));break;
            case 13: taps.push_back(tap({9,10,12,13}));break;
            case 14: taps.push_back(tap({4,8,13,14}));break;
            case 15: taps.push_back(tap({14,15}));break;
            case 16: taps.push_back(tap({4,13,15,16}));break;
            case 17: taps.push_back(tap({14,17}));break;
            case 18: taps.push_back(tap({11,18}));break;
            case 19: taps.push_back(tap({14,17,18,19}));break;
            case 20: taps.push_back(tap({17,20}));break;
            case 21: taps.push_back(tap({19,21}));break;
            case 22: taps.push_back(tap({21,22}));break;
            case 23: taps.push_back(tap({18,23}));break;
            case 24: taps.push_back(tap({17,22,23,24}));break;
            case 25: taps.push_back(tap({22,25}));break;
            case 26: taps.push_back(tap({20,24,25,26}));break;
            case 27: taps.push_back(tap({22,25,26,27}));break;
            case 28: taps.push_back(tap({25,28}));break;
            case 29: taps.push_back(tap({27,29}));break;
            case 30: taps.push_back(tap({7,28,29,30}));break;
            default:
                cout << "M-sequence " << baseVal << "^" << powerVal << " is not defined" << endl;


        }
    } else if (baseVal == 3) {
        switch (powerVal) {
            case 2:
                taps.push_back(tap({2,1}));
                taps.push_back(tap({1,1}));
                break;
            case 3:
                taps.push_back(tap({0,1,2}));
                taps.push_back(tap({1,0,2}));
                taps.push_back(tap({1,2,2}));
                taps.push_back(tap({2,1,2}));
                break;
            case 4:
                taps.push_back(tap({0,0,2,1}));
                taps.push_back(tap({0,0,1,1}));
                taps.push_back(tap({2,0,0,1}));
                taps.push_back(tap({2,2,1,1}));
                taps.push_back(tap({2,1,1,1}));
                taps.push_back(tap({1,0,0,1}));
                taps.push_back(tap({1,2,2,1}));
                taps.push_back(tap({1,1,2,1}));
                break;
            case 5:
                taps.push_back(tap({0,0,0,1,2}));
                taps.push_back(tap({0,0,0,1,2}));
                taps.push_back(tap({0,0,1,2,2}));
                taps.push_back(tap({0,2,1,0,2}));
                taps.push_back(tap({0,2,1,1,2}));
                taps.push_back(tap({0,1,2,0,2}));
                taps.push_back(tap({0,1,1,2,2}));
                taps.push_back(tap({2,0,0,1,2}));
                taps.push_back(tap({2,0,2,0,2}));
                taps.push_back(tap({2,0,2,2,2}));
                taps.push_back(tap({2,2,0,2,2}));
                taps.push_back(tap({2,2,2,1,2}));
                taps.push_back(tap({2,2,1,2,2}));
                taps.push_back(tap({2,1,2,2,2}));
                taps.push_back(tap({2,1,1,0,2}));
                taps.push_back(tap({1,0,0,0,2}));
                taps.push_back(tap({1,0,0,2,2}));
                taps.push_back(tap({1,0,1,1,2}));
                taps.push_back(tap({1,2,2,2,2}));
                taps.push_back(tap({1,1,0,1,2}));
                taps.push_back(tap({1,1,2,0,2}));
                break;
            case 6:
                taps.push_back(tap({0,0,0,0,2,1}));
                taps.push_back(tap({0,0,0,0,1,1}));
                taps.push_back(tap({0,0,2,0,2,1}));
                taps.push_back(tap({0,0,1,0,1,1}));
                taps.push_back(tap({0,2,0,1,2,1}));
                taps.push_back(tap({0,2,0,1,1,1}));
                taps.push_back(tap({0,2,2,0,1,1}));
                taps.push_back(tap({0,2,2,2,1,1}));
                taps.push_back(tap({2,1,1,1,0,1}));
                taps.push_back(tap({1,0,0,0,0,1}));
                taps.push_back(tap({1,0,2,1,0,1}));
                taps.push_back(tap({1,0,1,0,0,1}));
                taps.push_back(tap({1,0,1,2,1,1}));
                taps.push_back(tap({1,0,1,1,1,1}));
                taps.push_back(tap({1,2,0,2,2,1}));
                taps.push_back(tap({1,2,0,1,0,1}));
                taps.push_back(tap({1,2,2,1,2,1}));
                taps.push_back(tap({1,2,1,0,1,1}));
                taps.push_back(tap({1,2,1,2,1,1}));
                taps.push_back(tap({1,2,1,1,2,1}));
                taps.push_back(tap({1,1,2,1,0,1}));
                taps.push_back(tap({1,1,1,0,1,1}));
                taps.push_back(tap({1,1,1,2,0,1}));
                taps.push_back(tap({1,1,1,1,1,1}));
                break;
            case 7:
                taps.push_back(tap({0,0,0,0,2,1,2}));
                taps.push_back(tap({0,0,0,0,1,0,2}));
                taps.push_back(tap({0,0,0,2,0,2,2}));
                taps.push_back(tap({0,0,0,2,2,2,2}));
                taps.push_back(tap({0,0,0,2,1,0,2}));
                taps.push_back(tap({0,0,0,1,1,2,2}));
                taps.push_back(tap({0,0,0,1,1,1,2}));
                taps.push_back(tap({0,0,2,2,2,0,2}));
                taps.push_back(tap({0,0,2,2,1,2,2}));
                taps.push_back(tap({0,0,2,1,0,0,2}));
                taps.push_back(tap({0,0,2,1,2,2,2}));
                taps.push_back(tap({0,0,1,0,2,1,2}));
                taps.push_back(tap({0,0,1,0,1,1,2}));
                taps.push_back(tap({0,0,1,1,0,1,2}));
                taps.push_back(tap({0,0,1,1,2,0,2}));
                taps.push_back(tap({0,2,0,0,0,2,2}));
                taps.push_back(tap({0,2,0,0,1,0,2}));
                taps.push_back(tap({0,2,0,0,1,1,2}));
                taps.push_back(tap({0,2,0,2,2,0,2}));
                taps.push_back(tap({0,2,0,2,1,2,2}));
                taps.push_back(tap({0,2,0,1,1,0,2}));
                taps.push_back(tap({0,2,2,0,2,0,2}));
                taps.push_back(tap({0,2,2,0,1,2,2}));
                taps.push_back(tap({0,2,2,2,2,1,2}));
                taps.push_back(tap({0,2,2,2,1,0,2}));
                taps.push_back(tap({0,2,2,1,0,1,2}));
                taps.push_back(tap({0,2,2,1,2,2,2}));
                break;
            default:
                cout << "M-sequence " << baseVal << "^" << powerVal << " is not defined" << endl;

        }
    } else if (baseVal == 5) {
        switch (powerVal) {
            case 2:
                taps.push_back(tap({4,3}));
                taps.push_back(tap({3,2}));
                taps.push_back(tap({2,2}));
                taps.push_back(tap({1,3}));
                break;
            case 3:
                taps.push_back(tap({0,2,3}));
                taps.push_back(tap({4,1,2}));
                taps.push_back(tap({3,0,2}));
                taps.push_back(tap({3,4,2}));
                taps.push_back(tap({3,3,3}));
                taps.push_back(tap({3,3,2}));
                taps.push_back(tap({3,1,3}));
                taps.push_back(tap({2,0,3}));
                taps.push_back(tap({2,4,3}));
                taps.push_back(tap({2,3,3}));
                taps.push_back(tap({2,3,2}));
                taps.push_back(tap({2,1,2}));
                taps.push_back(tap({1,0,2}));
                taps.push_back(tap({1,4,3}));
                taps.push_back(tap({1,1,3}));
                break;
            case 4:
                taps.push_back(tap({0,4,3,3}));
                taps.push_back(tap({0,4,3,2}));
                taps.push_back(tap({0,4,2,3}));
                taps.push_back(tap({0,4,2,2}));
                taps.push_back(tap({0,1,4,3}));
                taps.push_back(tap({0,1,4,2}));
                taps.push_back(tap({0,1,1,3}));
                taps.push_back(tap({0,1,1,2}));
                taps.push_back(tap({4,0,4,2}));
                taps.push_back(tap({4,0,3,2}));
                taps.push_back(tap({4,0,2,3}));
                taps.push_back(tap({4,0,1,3}));
                taps.push_back(tap({4,4,4,2}));
                taps.push_back(tap({4,3,0,3}));
                taps.push_back(tap({4,3,4,3}));
                taps.push_back(tap({4,2,0,2}));
                taps.push_back(tap({4,2,1,3}));
                taps.push_back(tap({4,1,1,2}));
                taps.push_back(tap({3,0,4,2}));
                taps.push_back(tap({3,0,3,3}));
                taps.push_back(tap({3,0,2,2}));
                taps.push_back(tap({3,0,1,3}));
                taps.push_back(tap({3,4,3,2}));
                taps.push_back(tap({3,3,0,2}));
                taps.push_back(tap({3,3,3,3}));
                taps.push_back(tap({3,2,0,3}));
                taps.push_back(tap({3,2,2,3}));
                taps.push_back(tap({3,1,2,2}));
                taps.push_back(tap({2,0,4,3}));
                taps.push_back(tap({2,0,3,2}));
                taps.push_back(tap({2,0,2,3}));
                taps.push_back(tap({2,0,1,2}));
                taps.push_back(tap({2,4,2,2}));
                taps.push_back(tap({2,3,0,2}));
                taps.push_back(tap({2,3,2,3}));
                taps.push_back(tap({2,2,0,3}));
                taps.push_back(tap({2,2,3,3}));
                taps.push_back(tap({2,1,3,2}));
                taps.push_back(tap({1,0,4,3}));
                taps.push_back(tap({1,0,3,3}));
                taps.push_back(tap({1,0,2,2}));
                taps.push_back(tap({1,0,1,2}));
                taps.push_back(tap({1,4,1,2}));
                taps.push_back(tap({1,3,0,3}));
                taps.push_back(tap({1,3,1,3}));
                taps.push_back(tap({1,2,0,2}));
                taps.push_back(tap({1,2,4,3}));
                taps.push_back(tap({1,1,4,2}));
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
        for (const int& v: taps[whichSeq].No) weights[v-1] = 1;
    } else if (baseVal > 2) {
        weights = taps[whichSeq].No;
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

    vector<int> res = generate_m_sequence(2, 12, 0, 0);
    vector<int> res2(res.end() - 10, res.end());

    return 0;
}