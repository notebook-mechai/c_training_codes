int main() {
  int x = 5;
  int y = 3;

  //printf("x is: %d and y is: %d \n", x , y);
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("And logical operator: %d\n", x > 3 && x < 10);
  printf("Or logical operator: %d\n", x > 3 || x < 4);
  printf("Not logical operator: %d\n", !(x > 3 && x < 10));

  return 0;
}
