#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len); // Prototype for ft_substr

void run_test(const char *description, const char *s, unsigned int start, size_t len, const char *expected)
{
    char *result = ft_substr(s, start, len);
    printf("%s\n", description);
    printf("Input: \"%s\", start: %u, len: %zu\n", s ? s : "NULL", start, len);
    printf("Expected: \"%s\"\n", expected ? expected : "NULL");
    printf("Result: \"%s\"\n", result ? result : "NULL");

    if ((result == NULL && expected == NULL) || (result && expected && strcmp(result, expected) == 0))
    {
        printf("Test passed!\n\n");
    }
    else
    {
        printf("Test failed.\n\n");
    }

    free(result);
}

int main()
{
    // Test Case 1: Normal substring
    run_test("Normal substring", "Hello, world!", 7, 5, "world");

    // Test Case 2: Start at the beginning
    run_test("Start at the beginning", "Hello, world!", 0, 5, "Hello");

    // Test Case 3: Start in the middle with len larger than the rest of the string
    run_test("Start in middle, len beyond end", "Hello, world!", 7, 20, "world!");

    // Test Case 4: Start out of bounds
    run_test("Start out of bounds", "Hello, world!", 20, 5, "");

    // Test Case 5: len is zero
    run_test("Zero length", "Hello, world!", 7, 0, "");

    // Test Case 6: Empty input string
    run_test("Empty input string", "", 0, 5, "");

    // Test Case 7: Empty input string with non-zero start
    run_test("Empty input string, non-zero start", "", 5, 5, "");

    // Test Case 8: Full length of input string
    run_test("Full length substring", "Hello, world!", 0, strlen("Hello, world!"), "Hello, world!");

    // Test Case 9: NULL string input
    run_test("NULL input string", NULL, 5, 5, NULL);

    return 0;
}
