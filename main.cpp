#include"Functionalities.h"
#include<thread>

int main(){

    Container data;

    std::array<std::thread,3> thread;
    
    thread[0] = std::thread(& CreateObject, std::ref(data));

    thread[0].join();

    thread[1] = std::thread(& calculateTaxPayable, std::ref(data));

    thread[2] = std::thread (& CallParenoperator, std::ref(data));

    
    for(std::thread& th : thread){
        if(th.joinable()){
            th.join();
        }
    }

}