#include <algorithm>
#include <iostream>
#include <ranges>
 

int main()
{
    namespace views = std::views;
    auto print = [](char x){ std::cout << x; };
 
    for (const char nums[]{'1', '2', '3'};
         int n : views::iota(0, 5))
    {
        std::cout << "take(" << n << "): ";
        // safely takes only upto min(n, num.size()) elements:
        std::ranges::for_each(nums | views::take(n), print);
        std::cout << '\n';
    }
}