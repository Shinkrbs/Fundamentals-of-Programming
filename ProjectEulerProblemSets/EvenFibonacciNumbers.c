/*Problem: Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2
, the first terms will be: 1, 2 ,3, 5, 8 ,13, 21, 34, 55, 89...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>

int main()
{

    //Variables
    int limit = 4000000; //Fixed value of limit for the sequence
    int firstTerm = 1;
    int secondTerm = 2;
    int nextTerm = 0;
    int sum = 2; //Add 2 because second term is even

    printf("Sequence: 1, 2, ");

    //Loop to add numbers until the next term passes the limit
    while (nextTerm <= limit)
    {
        //Next term is equals the first and second terms
        nextTerm = firstTerm + secondTerm;
        
        //Assign second term to first terms since the next second term will become first term
        firstTerm = secondTerm;
        //Assign next term to next term since the current second term will become the next term
        secondTerm = nextTerm;
        
        //Display values of the next terms
        printf("%d, ", nextTerm);

        //Check values for even numbers
        if (nextTerm % 2 == 0)
        {
            //If next term is an even number then add the value to variable sum
            sum += nextTerm;
        }
    }
    
    //Print Results
    printf("...");
    printf("\n\nSum of Even Numbers: %d", sum);
    
    return 0;
}