// Erik Worley
// 10/3/18
// Vector.cpp
// Creates reachable implemented functions for the Vector class.
#pragma once
#include "Vector.h"
#include <fstream>
#include <iostream>
using namespace std;

Vector::Vector() {
	vec_ptr = new double[0];
	vec_size = 0;
	vec_capacity = 0;
}

Vector::Vector(const Vector &other) {
	vec_size = other.vec_size;
	vec_capacity = other.vec_capacity;
	vec_ptr = new double[vec_capacity];
	for (int i = 0; i < other.vec_size; i++)
	{
		vec_ptr[i] = other.vec_ptr[i];
	}
}

Vector::~Vector() {
	delete [] vec_ptr;
	vec_capacity = 0;
	vec_size = 0;
}

Vector& Vector::operator=(const Vector &other) {
	vec_size = other.vec_size;
	vec_capacity = other.vec_capacity;
	vec_ptr = new double[vec_capacity];
	for (int i = 0; i < other.vec_size; i++)
	{
		vec_ptr[i] = other.vec_ptr[i];
	}
	return *this;
}

int Vector::size() {
	return vec_size;
}

int Vector::capacity() {
	return vec_capacity;
}

void Vector::push_back(int element) {
	if (vec_size == vec_capacity) {
		resize();
		vec_ptr[vec_size] = element;
		vec_size++;
	}
	else {
		vec_ptr[vec_size] = element;
		vec_size++;
	}
}

void Vector::resize() {
	if (vec_capacity == 0) {
		vec_capacity = 1;
	}
	else
		vec_capacity = vec_capacity + vec_capacity;
}

double& Vector::operator[](unsigned int index) {
	return vec_ptr[index];
}
