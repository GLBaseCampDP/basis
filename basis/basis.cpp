// basis.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#define F(name, val) int f_##name() { return val;}

F(1, 1) // replaced by f_1(){return 1;}
F(2, 2)// replaced by f_2(){return 1;}

#define FF(name, ...) int ff_##name(int __VA_ARGS__) { return 0;}
FF(a, b) // replaced by ff_a(0, int b,){return 0;}

#define FFF(...) int fff(__VA_ARGS__) { return 0;}
FFF(int k, int z) // replaced by fff(int k, int z) {return 0;}


int main()
{
    return 0;
}

