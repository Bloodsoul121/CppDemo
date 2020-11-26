#include <iostream>
#include <string.h>

using namespace std;

int main() {

    // 错误的
//    char c1;
//    scanf("scanf %9s", &c1); // 错错错
//    cout << c1 << endl;

//    char s1[10];
//    scanf("%9s", s1);
//    cout << "s1 -> " << s1 << endl;

//    char s2[10];
//    gets(s2);
//    cout << "s2 -> " << s2 << endl;

//    char s3[10];
//    gets(s3);
//    cout << "s3 -> " << s3 << endl;
//    cout << "s3 -> " << strlen(s3) << endl;
//    cout << "s3 -> " << sizeof(s3) << endl;

//    char s4[10];
//    fgets(s4, sizeof(s4), stdin);
//    cout << "s4 -> " << s4 << endl;

    FILE *file;
    file = fopen("./test.txt", "w");
    if (file == NULL) {
        perror("open");
        return -1;
    }

    fputs("hello", file);
    fputs("world", file);

    fwrite("abcdefg", 7, 1, file);

    int eof = feof(file);
    cout << "eof -> " << eof << endl;

    fclose(file);

    return 0;
}
