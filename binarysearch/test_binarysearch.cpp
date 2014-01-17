#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <assert.h>

int binsearch(unsigned int val, int min, int max, unsigned int arr[]);

void test_null()
{
    assert( binsearch(0, 0, 0, nullptr) == -2);
}

void test_zero()
{
    unsigned int arr[] = {};

    assert( binsearch(10, 0, -1, arr) == -2);
    assert( binsearch(10, 1, 0, arr) == -2);
    assert( binsearch(10, -1, 0, arr) == -2);
    assert( binsearch(10, 0, -1, arr) == -2);
}

void test_one()
{
    unsigned int arr[] = {42};

    assert( binsearch(10, 0, 0, arr) == -1);
    assert( binsearch(42, 0, 0, arr) == 0);
}

void test_two()
{
    unsigned int arr[] = {10, 42};

    assert( binsearch(10, 0, 1, arr) == 0);
    assert( binsearch(42, 0, 1, arr) == 1);
    assert( binsearch(99, 0, 1, arr) == -1);
}

void test_three()
{
    unsigned int arr[] = {10, 42, 99};

    assert( binsearch(10, 0, 2, arr) == 0);
    assert( binsearch(42, 0, 2, arr) == 1);
    assert( binsearch(99, 0, 2, arr) == 2);
    assert( binsearch(98, 0, 2, arr) == -1);
}

void test_four()
{
    unsigned int arr[] = {1, 10, 42, 99, 100, 1381279837};

    assert( binsearch(10, 0, 5, arr) == 1);
    assert( binsearch(42, 0, 5, arr) == 2);
    assert( binsearch(99, 0, 5, arr) == 3);
    assert( binsearch(98, 0, 5, arr) == -1);
    assert( binsearch(1, 0, 5, arr) == 0);
    assert( binsearch(100, 0, 5, arr) == 4);
    assert( binsearch(1381279837, 0, 5, arr) == 5);
}



int main(int argc, char**argv)
{
    test_null();
    test_zero();
    test_one();
    test_two();
    test_three();
    test_four();
    return 0;
}
