#ifndef TASK1
#define TASK1
#include <string>
#include <cstdlib>

using namespace std;

struct Person
{
    string   name;
    unsigned age;
};

int comp1(int* a, int* b);
int comp2(double* a, double* b);
int comp3(const char** a, const char** b);
int comp4(const char** a, const char** b);
int comp5(const char** a, const char** b);
int comp6(Person* a, Person* b);
#endif // !TASK1
