#include <stdio.h>
#include <string.h>
#include "libft.h"

void run_test(const char *s1, const char *set, const char *expected)
{
    char *result = ft_strtrim(s1, set);
    if (result)
    {
        if (strcmp(result, expected) == 0)
        {
            printf("Test passed: ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set, result);
        }
        else
        {
            printf("Test failed: ft_strtrim(\"%s\", \"%s\") = \"%s\", expected \"%s\"\n", s1, set, result, expected);
        }
        free(result); // Free the allocated memory for the result
    }
    else
    {
        printf("Test failed: ft_strtrim(\"%s\", \"%s\") returned NULL\n", s1, set);
    }
}

int main()
{
    // Test cases
    run_test("   Hello, World!   ", " ", "Hello, World!"); // Trimming spaces
    run_test("!!!Hello!!!", "!", "Hello");                 // Trimming exclamation marks
    run_test("abcabc", "abc", "");                         // Trimming all characters
    run_test("", "abc", "");                               // Empty input string
    run_test("   ", " ", "");                              // Input with only spaces
    run_test("Hello", " ", "Hello");                       // No trimming needed
    run_test("   Hello World   ", " HW", "ello World");    // Trim multiple characters
    run_test("12345", "6789", "12345");                    // No characters to trim
    run_test("abcdeabc", "abc", "d");                      // Trim leading and trailing 'abc'
    run_test("   ", " ", "");                              // Full string trim
    run_test("   Hello World!   ", " !", "Hello World");   // Trim spaces and exclamation marks

    return 0;
}