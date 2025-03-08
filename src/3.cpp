// Function to check if a number is even or odd
bool is_even(int num) {
  return (num % 2 == 0);
}

// Function to calculate the sum of two numbers
int add(int a, int b) {
  return a + b;
}

// Function to calculate the product of two numbers
int multiply(int a, int b) {
  return a * b;
}

// Driver code
int main() {
  // Testing the is_even function
  std::cout << "Is 10 even? " << is_even(10) << "\n";
  std::cout << "Is 11 even? " << is_even(11) << "\n";

  // Testing the add function
  std::cout << "The sum of 3 and 4 is: " << add(3, 4) << "\n";

  // Testing the multiply function
  std::cout << "The product of 5 and 6 is: " << multiply(5, 6) << "\n";

  return 0;
}
