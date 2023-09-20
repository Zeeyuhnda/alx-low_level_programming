#include "main.h"
/**
 * infinite_add - adds two integers stored as strings
 *
 * @n1: first integer string to add
 * @n2: second integer string to add
 * @r: array to store resulting string in
 * @size_r: size of array r
 *
 * Return: the summed string in r. If r is too small for the result, return 0;
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    // ... (existing code)

    // Check if the result can fit within the buffer
    if (index > size_r - 1) {
        return (0); // Buffer is too small
    }

    // Reverse the result to make sure it's presented in the correct order
    int start = 0;
    int end = index;
    while (start < end) {
        char tmp = r[start];
        r[start] = r[end];
        r[end] = tmp;
        start++;
        end--;
    }

    return (r); // Return the summed string in r
}
