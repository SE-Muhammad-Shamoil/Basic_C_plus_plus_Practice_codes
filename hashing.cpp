#include <iostream>
#include <unordered_map>
#include <filesystem>
using namespace std;
 
class demo
{
 
};
 
int main()
{
    unordered_map<int,int> mp;
    mp[8] = 0;
    cout << mp[8];
}