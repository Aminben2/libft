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
    test_ft_strchr("", 'a');           // Test for empty string
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
    test_ft_strrchr("", 'a');           // Test for empty string
    test_ft_strrchr("abcdefg", 'g');    // Test for last character
    test_ft_strrchr("abcdefg", 'a');    // Test for first character
    test_ft_strrchr("abcdeabcde", 'c'); // Test for character that appears multiple times
    test_ft_strrchr("abcdeabcde", 'd'); // Test for another character that appears multiple times

    return 0;
}

// ---------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

void test_ft_memchr(const void *s, int c, unsigned int n)
{
    void *result = ft_memchr(s, c, n);
    void *expected = memchr(s, c, n);

    if (result == expected)
    {
        printf("Test passed for string \"%s\" and character '%c' in first %u bytes\n", (char *)s, (char)c, n);
    }
    else
    {
        printf("Test failed for string \"%s\" and character '%c' in first %u bytes\n", (char *)s, (char)c, n);
        printf("  ft_memchr result: %s\n", result ? (char *)result : "NULL");
        printf("  memchr result: %s\n", expected ? (char *)expected : "NULL");
    }
}

int main(void)
{
    // Test cases
    const char *str1 = "Hello, world!";
    test_ft_memchr(str1, 'o', 13);  // Test for character in the string
    test_ft_memchr(str1, 'x', 13);  // Test for character not in the string
    test_ft_memchr(str1, '!', 13);  // Test for last character
    test_ft_memchr(str1, 'H', 13);  // Test for first character
    test_ft_memchr(str1, 'l', 5);   // Test within a limited range (should find 'l')
    test_ft_memchr(str1, 'l', 2);   // Test within a limited range (should not find 'l')
    test_ft_memchr(str1, '\0', 13); // Test for null terminator

    const char *str2 = "abcdef";
    test_ft_memchr(str2, 'c', 6); // Test for middle character
    test_ft_memchr(str2, 'a', 6); // Test for first character
    test_ft_memchr(str2, 'f', 6); // Test for last character
    test_ft_memchr(str2, 'g', 6); // Test for character not in the string

    return 0;
}

// ----------------------------------------------------------------------------

int main(void)
{
    // Test cases
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    const char *str3 = "Hello!";
    const char *str4 = "Hello, world!";
    const char *str5 = "hellO";

    test_ft_memcmp(str1, str2, 5); // Identical strings
    test_ft_memcmp(str1, str3, 5); // Identical prefix
    test_ft_memcmp(str1, str3, 6); // Different length (last character is different)
    test_ft_memcmp(str1, str4, 5); // Different length (str4 is longer)
    test_ft_memcmp(str1, str5, 5); // Different case
    test_ft_memcmp(str1, str5, 4); // Same prefix (should be equal)

    const char *str6 = "abcdef";
    const char *str7 = "abcdeg";
    test_ft_memcmp(str6, str7, 5); // Check first 5 characters (should be equal)
    test_ft_memcmp(str6, str7, 6); // Check all characters (last one differs)

    return 0;
}
// --------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

void test_ft_strnstr(const char *haystack, const char *needle, size_t len, const char *expected)
{
    char *result = ft_strnstr(haystack, needle, len);

    if (result == NULL && expected == NULL)
        printf("PASSED\n");
    else if (result && expected && strcmp(result, expected) == 0)
        printf("PASSED\n");
    else
        printf("FAILED - Expected: %s, Got: %s\n", expected ? expected : "NULL", result ? result : "NULL");
}

int main(void)
{
    const char *haystack = "Hello world";

    // Test case 1: Full match within length
    test_ft_strnstr(haystack, "world", 11, "world"); // Expected: "world"

    // Test case 2: Partial match within length
    test_ft_strnstr(haystack, "lo", 5, "lo world"); // Expected: "lo world"

    // Test case 3: Empty needle (should return haystack)
    test_ft_strnstr(haystack, "", 11, "Hello world"); // Expected: "Hello world"

    // Test case 4: Match with space in needle
    test_ft_strnstr(haystack, "o w", 11, "o world"); // Expected: "o world"

    // Test case 5: Needle not found
    test_ft_strnstr(haystack, "notfound", 11, NULL); // Expected: NULL

    // Test case 6: Length too short to match
    test_ft_strnstr(haystack, "world", 4, NULL); // Expected: NULL

    // Test case 7: Single character match
    test_ft_strnstr("a", "a", 1, "a"); // Expected: "a"

    // Test case 8: Needle is longer than haystack
    test_ft_strnstr("abc", "abcd", 4, NULL); // Expected: NULL

    // Test case 9: Match at the start
    test_ft_strnstr(haystack, "Hello", 11, "Hello world"); // Expected: "Hello world"

    // Test case 10: Empty haystack
    test_ft_strnstr("", "find", 0, NULL); // Expected: NULL

    return 0;
}

// ----------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test_ft_strdup(const char *str)
{
    char *result = ft_strdup(str);
    char *expected = strdup(str);

    if (result == NULL && expected == NULL)
        printf("PASSED\n");
    else if (result && expected && strcmp(result, expected) == 0)
        printf("PASSED\n");
    else
        printf("FAILED - Input: '%s', Expected: '%s', Got: '%s'\n", str, expected ? expected : "NULL", result ? result : "NULL");

    free(result);
    free(expected);
}

int main(void)
{
    // Test case 1: Normal string
    test_ft_strdup("Hello world"); // Expected: "Hello world"

    // Test case 2: Empty string
    test_ft_strdup(""); // Expected: ""

    // Test case 3: String with special characters
    test_ft_strdup("!@#$%^&*()_+"); // Expected: "!@#$%^&*()_+"

    // Test case 4: String with numbers
    test_ft_strdup("1234567890"); // Expected: "1234567890"

    // Test case 5: Long string
    test_ft_strdup("This is a long string used for testing purposes to check behavior with larger inputs."); // Expected: Same string

    // Test case 6: Single character string
    test_ft_strdup("A"); // Expected: "A"

    // Test case 7: Null character in the middle (not applicable since C strings are null-terminated)
    // This test doesn't apply as strdup only copies until the null terminator, so no explicit test is necessary.

    return 0;
}

// --------------------------------------------------------------------------------

