#ifndef VECTOR_H
#define VECROT_H

#include <stdio.h>
#include <math.h>

typedef struct vector
{
    float x;
    float y;
    float z;
} Vector;

// Основные векторные
Vector vec_init(float x, float y, float z);
float vec_len(Vector vec);
int find_long(Vector* vectors, int count);

// Проверки
int get_int(const char* prompt);
Vector get_vector(int index);

#endif