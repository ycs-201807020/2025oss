// mod.cpp 파일
#include "sub.h"


int mod(int x, int y) {
    while (x > y)
    {
        x = sub(x, y);
    }

 
    return x;  // 마지막으로 남은 값이 나머지
}
