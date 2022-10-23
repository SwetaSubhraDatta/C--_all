#include "bitwise.hpp"

using namespace std;

int Samsung::count_8_bits(uint32_t num,uint8_t pattern)
{
    //lets say num = 0x12345678
    //lets say pattern = 0x12
    uint8_t bitmask=0xFF;
    uint8_t count=32;
    uint8_t pattern_matched=0;

        while(count!=0)
        {
        int holdvalue=num&bitmask;//8
        if (holdvalue==pattern)
        {
            pattern_matched++;
        }
        num=num>>1; 
        count=count-1;
        }
        return pattern_matched;
}

