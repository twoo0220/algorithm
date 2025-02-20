#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
   std::ios_base::sync_with_stdio(0);
   std::cout.tie(0);
   std::cin.tie(0);

   std::vector<int> v(4);
   for (int i = 0; i < 4; ++i)
   {
      std::cin >> v[i];
   }

   std::sort(v.begin(), v.end());
   std::cout << (v[0] * v[2]);
   
   return 0;
}
