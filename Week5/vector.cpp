#include <vector>
#include <iostream>
int main() {
    std::vector<int> nums; //en empty vector. A vector allows us to easily manage collections of elements 
    nums.push_back(1); //one element
    nums.push_back(2); //two elements
    std::cout <<"nums vector has "
            <<nums.size() <<"elements\n"
            <<nums [0] << " and " << nums[1] << '\n';
}