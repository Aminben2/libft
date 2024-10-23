void test_ft_strchr(const char *s, char c)
{
    char *result = ft_strchr(s, c);
    char *expected = strchr(s, c);

    if (result == expected)
    {
        printf("Test passed for string \"%s\" and character '%c'\n", s, c);
    }
    else
    {
        printf("Test failed for string \"%s\" and character '%c'\n", s, c);
        printf("  ft_strchr result: %s\n", result ? result : "NULL");
        printf("  strchr result: %s\n", expected ? expected : "NULL");
    }
}

int main(void)
{
    // Test cases
    test_ft_strchr("amine", 'a');      // Test for first character
    test_ft_strchr("amine", 'i');      // Test for middle character
    test_ft_strchr("amine", 'e');      // Test for last character
    test_ft_strchr("amine", 'n');      // Test for character that appears
    test_ft_strchr("amine", 'x');      // Test for character that does not appear
    test_ft_strchr("", 'a');            // Test for empty string
    test_ft_strchr("abcdefg", 'g');    // Test for last character
    test_ft_strchr("abcdefg", '\0');   // Test for null terminator
    test_ft_strchr("abcdeabcde", 'c'); // Test for character that appears multiple times
    test_ft_strchr("abcdeabcde", 'd'); // Test for another character that appears multiple times

    return 0;
}
// -----------------------------------------------------------------------

void test_ft_strlcat(char *dst, char *src, unsigned int dsize)
{
    char original_dst[256]; // To store the original dst
    unsigned int result;
    unsigned int expected;

    // Copy the original dst to restore it after the test
    strncpy(original_dst, dst, sizeof(original_dst));
    original_dst[sizeof(original_dst) - 1] = '\0'; // Ensure null termination

    // Call your implementation
    result = ft_strlcat(dst, src, dsize);
    // Call the standard implementation
    expected = strlcat(original_dst, src, dsize);

    // Compare the results
    if (result == expected && strcmp(dst, original_dst) == 0)
    {
        printf("Test passed for dst: \"%s\", src: \"%s\", dsize: %u\n", original_dst, src, dsize);
    }
    else
    {
        printf("Test failed for dst: \"%s\", src: \"%s\", dsize: %u\n", original_dst, src, dsize);
        printf("  ft_strlcat result: %u, dst after: \"%s\"\n", result, dst);
        printf("  strlcat expected: %u, dst after: \"%s\"\n", expected, original_dst);
    }
}

int main(void)
{
    // Test cases
    char dst1[20] = "Hello, ";
    char src1[] = "world!";
    test_ft_strlcat(dst1, src1, sizeof(dst1));

    char dst2[20] = "Test ";
    char src2[] = "123456789";
    test_ft_strlcat(dst2, src2, sizeof(dst2));

    char dst3[20] = "Short";
    char src3[] = "LongerString";
    test_ft_strlcat(dst3, src3, sizeof(dst3));

    char dst4[20] = "12345";
    char src4[] = "67890";
    test_ft_strlcat(dst4, src4, 5); // dsize < total length

    char dst5[20] = "";
    char src5[] = "NonEmpty";
    test_ft_strlcat(dst5, src5, sizeof(dst5)); // dsize > length of src

    char dst6[20] = "Full";
    char src6[] = "Data";
    test_ft_strlcat(dst6, src6, sizeof(dst6)); // Test when dst is small

    return 0;
}

// ------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

void test_ft_strrchr(const char *s, char c)
{
    char *result = ft_strrchr(s, c);
    char *expected = strrchr(s, c);

    if (result == expected)
    {
        printf("Test passed for string \"%s\" and character '%c'\n", s, c);
    }
    else
    {
        printf("Test failed for string \"%s\" and character '%c'\n", s, c);
        printf("  ft_strrchr result: %s\n", result ? result : "NULL");
        printf("  strrchr result: %s\n", expected ? expected : "NULL");
    }
}

int main(void)
{
    // Test cases
    test_ft_strrchr("amine", 'a');      // Test for first character
    test_ft_strrchr("amine", 'i');      // Test for middle character
    test_ft_strrchr("amine", 'e');      // Test for last character
    test_ft_strrchr("amine", 'n');      // Test for character that appears
    test_ft_strrchr("amine", 'x');      // Test for character that does not appear
    test_ft_strrchr("", 'a');            // Test for empty string
    test_ft_strrchr("abcdefg", 'g');    // Test for last character
    test_ft_strrchr("abcdefg", 'a');    // Test for first character
    test_ft_strrchr("abcdeabcde", 'c'); // Test for character that appears multiple times
    test_ft_strrchr("abcdeabcde", 'd'); // Test for another character that appears multiple times

    return 0;
}

// ---------------------------------------------------------------------------