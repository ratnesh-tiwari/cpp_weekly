/********
 *
 * 	This example demonstrates the use of mutable lambda.
 * 	Mutable lambda can not be const.
 *
 * ******/


#include <iostream>


int main() {

	const auto lambda_nonMutable = [i = 3]() {return i;};
	std::cout << lambda_nonMutable() << '\n';

	const auto lambda_Mutable = [i = 5]() mutable {return i;};
	std::cout << lambda_Mutable() << '\n';

	return 0;
}


/***
 *	END OF FILE
 * **/
