#include <iostream>

int addDigits(int num) {
    int sum = 0;
        while(num/10 != 0) {
            sum += num%10;
            num = num/10;
            
        }
    int ans = sum + num;
    if(ans/10 != 0){
        
        return addDigits(ans);
    } 
    else return ans;
    }

int main() {

    //Test cases
    std::cout << addDigits(1) <<std::endl;
    return 0;
}