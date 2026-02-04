#include<iostream>
#include<thread>
#include<mutex>

int count=0;
std::mutex m;
void increment(){
    for(int i=0;i<1000000;i++){
        // m.lock();
        // count++;
        // m.unlock();

        std::lock_guard<std::mutex> lock(m);
        count++;
    }
}

int main(){
    std::thread t1(increment);
    std::thread t2(increment);
    t1.join();
    t2.join();

    std::cout<<count<<std::endl;
    return 0;
    
}