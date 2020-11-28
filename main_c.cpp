//
// Created by bloodsoul on 2020/11/28.
//
#include <iostream>

using namespace std;

int main() {

    int arr[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};

    int i, j, (*p)[4];//定义一个指向有四个元素的一维数组的指针

    p = arr;

    //i用于计算行数
    for (p = arr, i = 0; i < 3; i++, p++) {
        for (j = 0; j < 4; j++) {
            printf("%3d ", *(*p + j));//！！尤其注意，这里的p存储的是a行整体的地址指向一维数组a[0]整体，而不是指向一个具体的值!
            //*p的值取出来的值就是a[0][0]的地址，*p+j就是存储a[0][j]行的地址，
            // *(*p+j)就是该地址指向的元素的值!!
        }
        printf("\n");
    }

    printf("\n");

    for (p = arr, i = 0; i < 3; i++, p++) {
        for (j = 0; j < 4; j++) {
            printf("%p ", *p + j);
        }
        printf("\n");
    }

    printf("\n");

    p = arr;
    int *line = *p;
    printf("%p \n", line);
    printf("%p \n", line + 4);
    printf("%d \n", *(line + 1));

    printf("\n");

    int *pp = *arr;
    printf("%p \n", pp);
    printf("%d \n", *(pp + 1));
    printf("%d \n", *(pp + 4));

    printf("\n");

    int *ppp = pp + 1;
    printf("%p \n", ppp);
    printf("%d \n", ppp[0]); // 3
    printf("%d \n", ppp[1]); // 5
    printf("%d \n", ppp[4]); // 11

    return 0;
}
