#                 include<stdio.h>

/* Show how to modify the addfrac.c program of Section 3.2 so that
  the user is allowed to entre fractions that contain spaces b4 &
  after each / character */

int main(void) {
	int num1,denom1, num2, denom2,result_num, result_denom;
	printf("entre the 1st fraction: ");
	scanf("%d / %d",&num1,&denom1); /* add spaces between / */
	
	printf("entre 2nd fraction: ");
	scanf("%d / %d",&num2,&denom2); /* also */
	/* bcause scanf is 'pattern-matching' */

result_num = num1 * denom2 + num2 * denom1;
result_denom = denom1 * denom2;

printf("the sum is %d/%d\n",result_num,result_denom); return 0; }
