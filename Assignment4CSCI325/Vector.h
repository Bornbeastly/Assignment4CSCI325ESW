// Erik Worley
// 10/3/18
// Vector.h
// Defines functions and methods for the vector class.
#include <fstream>
#include <iostream>
#ifndef VECTOR_H
#define VECTOR_H
using namespace std;

class Vector {
private:
	double *vec_ptr; //Points to the vector's dynamic array
	int vec_size, vec_capacity; //Same as size and capacity for std::vector

public:
	Vector();
	/* Description:
 *    Default constructor.  Initializes an empty vector.
 *
 * Post-conditions:
 *    vec_ptr is NULL, vec_size=0, and vec_capacity=0.
 */

	Vector(const Vector &other);
	/* Description:
 *    Copy constructor.  Initializes a dynamic array of the appropriate
 *    size/capacity and copies data from other's array to the new array.
 *
 * Parameters:
 *    other - a constant reference to the vector that is to be copied.
 *
 * Post-conditions:
 *    vec_ptr is initialized, and its array contains other.vec_ptr's data,
 *    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
 */

	~Vector();
	/* Description:
 *    Destructor.  Deallocates vec_ptr.
 *
 * Postconditions:
 *    vec_ptr has been deallocated, current_size=0, and capacity=0.
 */

	Vector& operator=(const Vector &other);
	/* Description:
 *    Assignment operator.  Initializes a dynamic array of the appropriate
 *    size/capacity and copies data from other's array to the new array.
 *
 * Parameters:
 *    other - a constant reference to the vector that is to be copied.
 *
 * Post-conditions:
 *    vec_ptr is initialized, and its array contains other.vec_ptr's data,
 *    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
 */
	
	int size();
	/* Description:
 *    Returns the current number of elements in the vector.
 *
 * Return:
 *    Current size of vector.
 */
	
	int capacity();
	/* Description:
 *    Returns the currently allocated storage capacity of the vector.
 *
 * Return:
 *    Current capacity of vector.
 */
	
	void push_back(int element);
	/* Description:
 *    Similar to std::vector.push_back(int element), stores element at the end of the vector.
 *
 * Parameters:
 *    element - The item to be inserted at the back of the vector.
 *
 * Postconditions:
 *    Item element has is stored at the end of the vector.
 *
 * Notes:
 *    If necessary, calls resize() before adding element to the end of the vector.
 *    This reserve doubles the current capacity of the vector.
 */
	
	void resize();
	/* Description:
 *    Requests that the vector capacity be doubled (the capacity will become 1 after resizing if it is 0 before resizing).
 *
 *    This function has no effect on vector size and cannot alter its elements.
 *
 * Postconditions:
 *    Vector capacity is now doubled.  Vector size (and contents) remains the same.
 *
 */
	
	double& operator[](unsigned int index);
	/* Description:
 *    Returns a reference to the element at position index.
 */
};
#endif