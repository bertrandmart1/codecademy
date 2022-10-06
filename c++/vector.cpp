#include <iostream>
#include <vector>

int main() {

  std::vector<int> numb = {2, 4, 3, 6, 1, 9};
  int sum_even = 0;
  int product_odd = 1;

  for (int i = 0; i < numb.size(); i++){
    
    if (numb[i] % 2 == 0){
      sum_even = sum_even + numb[i];
    }
    else {
      product_odd = product_odd * numb[i];
    }
  }

  std::cout << "Sum of even: " << sum_even << "\n";
  std::cout << "Product of odd: " << product_odd;
  
}
