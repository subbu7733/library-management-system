#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k;
    char poly[30], frame[30], trans[60];
    printf("\nEnter the polynomial: ");
    scanf("%s", poly);
    printf("\nEnter the frame: ");
    scanf("%s", frame);
    int m = strlen(poly); // Length of the polynomial
    int n = strlen(frame); // Length of the frame
    // Step 1: Copy the frame into trans and pad with '0's
    for (i = 0; i < n; i++)
    {
        trans[i] = frame[i];
    }
    for (i = n; i < n + m - 1; i++)
    {
        trans[i] = '0';
    }
    trans[i] = '\0'; // Null-terminate the string
    // Step 2: Perform XOR division
    for (i = 0; i < n; i++)
    {
        if (trans[i] == '1')
        { // Check if the bit is '1'
            for (j = i, k = 0; k < m; k++, j++)
            {
                // Perform XOR
                trans[j] = (trans[j] == poly[k]) ? '0' : '1';
            }
        }
    }
    // Step 3: Append the CRC remainder to the frame
    for (i = 0; i < n; i++)
    {
        trans[i] = frame[i]; // Restore the original frame
    }
    printf("\nThe transmitted message (frame + CRC): %s\n", trans);
    return 0'
}
