// dive.cpp 파일
#include "sub.h"

int dive(int x, int y) {
    int cnt = 0;  // 몫을 저장할 변수
    while (x > y)
    {
        cnt++;
        x = sub(x,y);
    }

    return cnt;
}

