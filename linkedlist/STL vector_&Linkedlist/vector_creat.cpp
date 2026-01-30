#include <iostream>
#include <vector>
using namespace std;


int main() {

// Type -- 1
//vector <data_type> vector_name;

        vector<int> v1;  
        vector<char> v2;
        vector<float> v3;
        vector<long long> v4; 
    // এই ভাবে ভেক্টর লিখতে হয় । 

// type --2 
// যদি আমার সাইজ জানি তাহলে সাইজ উল্লেখ করে লিখতে হয়। 

    vector<int> roal(100);
    vector<char> name(10);
    vector<float> gpa(100);
    vector<long long> clas(50);

    //  মানে এখানে ভেক্টর লিখা হইছে তার সাইজ উল্লেক করে, (100,10,100,50) এগুলা সাইজ । 

//type --3
// যখন আমরা সাইজ জানবো ,   এবং তার মান ও জানবো  
     vector<int> roall(10, 25); // এখানে সাইজ 10 , মান সবগুলা, 25 (মানে 10 টি 25)

    vector<int> roal(10, 20); // size = 10, all values = 20

    for (int i = 0; i < roal.size(); i++) {
        cout << roal[i] <<endl;
    }

// type -- 4
// যদি   আমরা একটি vector আরেকটি vector   এর মধ‌্যে  coppy করে রাখতে চাই তাহলে  এভবে করতে হবে । 

    // vector<int> roal = {10 ,20,30,40,50}; // 
    // //  coppy করে রাখতে চাই তাহলে

   
    

    return 0;
}
