#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(const char *str, char c); // Prototype for ft_split

void run_test(const char *description, const char *str, char delimiter, char **expected)
{
    printf("%s\n", description);
    printf("Input: \"%s\", delimiter: '%c'\n", str ? str : "NULL", delimiter);

    char **result = ft_split(str, delimiter);

    // Compare result with expected
    if (result == NULL && expected == NULL)
    {
        printf("Test passed!\n");
    }
    else if (result && expected)
    {
        int i = 0;
        while (result[i] || expected[i])
        { // Continue until both are NULL
            if ((result[i] == NULL && expected[i] != NULL) ||
                (result[i] != NULL && expected[i] == NULL) ||
                (strcmp(result[i], expected[i]) != 0))
            {
                printf("Test failed.\n");
                break;
            }
            i++;
        }
        printf("Test passed!\n");
    }
    else
    {
        printf("Test failed.\n");
    }

    // Free the result strings and the array
    if (result)
    {
        for (int j = 0; result[j]; j++)
        {
            free(result[j]);
        }
        free(result);
    }
}

int main()
{
    // Run test cases
    run_test("Normal Case with Multiple Words", "Hello World", ' ', (char *[]){"Hello", "World", NULL});
    run_test("Leading and Trailing Whitespace", "   Hello   World   ", ' ', (char *[]){"Hello", "World", NULL});
    run_test("Multiple Consecutive Whitespace Characters", "Hello    World", ' ', (char *[]){"Hello", "World", NULL});
    run_test("Empty String", "", ' ', (char *[]){NULL});
    run_test("String with Only Whitespace", "     ", ' ', (char *[]){NULL});
    run_test("Single Word Without Whitespace", "Hello", ' ', (char *[]){"Hello", NULL});
    run_test("String with Different Whitespace Characters", "\tHello\nWorld\r!", '\0', (char *[]){"Hello", "World", "!", NULL});
    run_test("Multiple Words with Tabs as Delimiter", "Hello\tWorld", '\t', (char *[]){"Hello", "World", NULL});
    run_test("String with a Single Character Delimiter", "H,e,l,l,o", ',', (char *[]){"H", "e", "l", "l", "o", NULL});
    run_test("String with Mixed Delimiters", "Hello,  World\tthis is   a test.", ' ', (char *[]){"Hello,", "World", "this", "is", "a", "test.", NULL});
    run_test("Special Characters", "Hello! @World#", ' ', (char *[]){"Hello!", "@World#", NULL});
    run_test("Long String Input", "This is a longer string with multiple words", ' ', (char *[]){"This", "is", "a", "longer", "string", "with", "multiple", "words", NULL});
    run_test("NULL Input", NULL, ' ', NULL);

    return 0;
}
