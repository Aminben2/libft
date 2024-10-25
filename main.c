#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2); // Prototype for ft_strjoin

void run_test(const char *description, const char *s1, const char *s2, const char *expected) {
    printf("%s\n", description);
    printf("Input s1: \"%s\", s2: \"%s\"\n", s1 ? s1 : "NULL", s2 ? s2 : "NULL");

    char *result = ft_strjoin(s1, s2);
    printf("Expected: \"%s\"\n", expected ? expected : "NULL");
    printf("Result: \"%s\"\n", result ? result : "NULL");

    if ((result == NULL && expected == NULL) || (result && expected && strcmp(result, expected) == 0)) {
        printf("Test passed!\n\n");
    } else {
        printf("Test failed.\n\n");
    }

    free(result);
}

int main() {
    // Test Case 1: Normal strings
    run_test("Concatenating two normal strings", "Hello, ", "world!", "Hello, world!");

    // Test Case 2: s1 is an empty string
    run_test("s1 is an empty string", "", "world!", "world!");

    // Test Case 3: s2 is an empty string
    run_test("s2 is an empty string", "Hello, ", "", "Hello, ");

    // Test Case 4: Both s1 and s2 are empty strings
    run_test("Both s1 and s2 are empty strings", "", "", "");

    // Test Case 5: s1 is NULL
    run_test("s1 is NULL", NULL, "world!", NULL);

    // Test Case 6: s2 is NULL
    run_test("s2 is NULL", "Hello, ", NULL, NULL);

    // Test Case 7: Both s1 and s2 are NULL
    run_test("Both s1 and s2 are NULL", NULL, NULL, NULL);

    return 0;
}

