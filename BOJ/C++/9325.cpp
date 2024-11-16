#include <iostream>

int main()
{
   std::ios_base::sync_with_stdio(false);
   std::cout.tie(0);
   std::cin.tie(0);

   int size = 0;
   std::cin >> size;

   for (int i = 0; i < size; ++i)
   {
      int sum(0), price(0), optionCount(0);
      std::cin >> price >> optionCount;
      sum += price;

      for (int j = 0; j < optionCount; ++j)
      {
         int q(0), p(0);
         std::cin >> q >> p;
         sum += (q * p);
      }
      std::cout << sum << "\n";
   }

   return 0;
}
