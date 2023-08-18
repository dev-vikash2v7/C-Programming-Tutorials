#include <iostream>
#include <vector>

using namespace std;
// using std::cout ;
// using std::endl ;
// using std::vector ;

//use c-style cast to convert float to int
//use static-cast


int main()
{
vector<float> f_vec {12.34 , 34.22 , 23.09897};
vector<int> i_vec ;

// cout << f_vec.size() <<endl;//return 3
i_vec.reserve(f_vec.size());

for(const auto &f : f_vec){
    i_vec.push_back(f);
};

//in float show
for(const auto &f : f_vec){
    cout<<f << "\n";
};

cout << "this above will convert to int as follows : \n";
//in interger shor
for(const auto &i : i_vec){
    cout<<i << "\n";
};


    return 0;
}