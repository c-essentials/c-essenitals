#include "c-essentials.h"
int main() {
    char mode[] = "curl";
    char path[] = "https://raw.githubusercontent.com/c-essentials/c-essentials/main/src/test.h";
    char name[] = "festtest.h";

    hinstall(mode, path, name);

    return 0;
}