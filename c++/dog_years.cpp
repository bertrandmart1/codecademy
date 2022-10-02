#include <iostream>

int main() {
  int dog_age = 6; // declaration dog_age
  int early_years; // for the dog's first 2 years
  int later_years; // for the dog following years
  int human_years; // for the dog total human years
  early_years = 21;
  later_years = (dog_age - 2) * 4;
  human_years = early_years + later_years;
  std::cout << "My name is Bert! Ruff ruff, I am " << human_years << " years old in human years.\n";
 
}
