#include <iostream>

int multiplica(int a, int b){
    if((a >= 0 && b >= 0) || (a <= 0 && b <= 0)){
        return a * b;
    }
    else{
        return -(a * b);
    }
}

int main(int argc, char **argv)
{
    int N, a, b; 
    
    std::cout << "Type N: " << std::endl;
    std::cin >> N;
    
    for(int i = 0; i<N; i++){
        std::cout << "Type A and B: " << std::endl;
        std::cin >> a >> b;
        
        int res = multiplica(a,b);
        std::cout << "Result: " << res << std::endl;
    }
}