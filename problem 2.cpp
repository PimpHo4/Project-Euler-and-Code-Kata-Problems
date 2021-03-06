/* Project Euler problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
*/
  #include <iostream>
  using namespace std;

  int main() {
	int total = 0;

	int one = 1;
	int two = 2;
	int three = 0;
	
	cout << "two: " << one << endl;  // added for sequence affect
	cout << "three: " << one << endl;
	
	while (two <= 4000000)
	{
		three = one + two;
		if (two % 2 == 0)
			total += two;
		one = two;
		two = three;
		cout << "two: " << two << endl;	// summing variable and sequence variable
		cout << "three: " << three << endl; // both numbers match, don't know why
	}
 
	cout << "Sum: " << total << endl;
	
	return(0);
}
