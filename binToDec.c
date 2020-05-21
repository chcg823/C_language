/* 
	C program to convert Binary number to Decimal number.
	You can find the explanation at the bottom of Code
*/

#include<math.h> //Math library header
#include<stdio.h> //Standard IO header

//Function to convert binary number to Decimal number.
int convert(long long n);

int main(){
    long long n;
    printf("Enter a binary number");
    scanf("%lld",&n);
    printf("%lld in binary = %d in decimal", n, convert(n));
    return 0;
}

//Function Definition
int convert(long long n){
    int dec = 0,rem,i=0;
    while(n!=0){
        rem = n%10;
        n /= 10;
        dec += rem * pow(2,i);
        ++i;
    }
    return dec;
}

/*

consider a binary number 1001
The decimal value of that number is 9
This is how it happens :
	1	0	0	1	Binary Number
	3	2	1	0	positions from right to left.
sum the product of 2's exponent of position and each digit in binary number.
i.e	(2^0)*1 = 1
	(2^1)*0 = 0
	(2^2)*0 = 0
	(2^3)*1 = 8
	         ----
	          9
	         ----
			 
lets convert this into logic.

step 1 : Read the binary number in a variable bin.
Step 2 : Create some variables rem = 0, dec = 0, i = 0, to store the remainder, decimal number, and position of digit.
step 3 : We need to get each digit from the end so we take the remainder of bin when its divided by 10 and store it in a variable rem.
			rem = bin%10;
step 4 : Now divide the binary number by 10 so that the last digit will be no more in the number.
			bin = bin/10;
step 5 : Now add the product of rem and 2's exponent of digit position to dec variable. And now increment the variable i i.e the postion.
			dec = dec+ rem * pow(2,i)
step 6 : check whether the bin is equal to 0 or not. If it's equal to 0 return the dec value else repeat the process from step 3.

*/
