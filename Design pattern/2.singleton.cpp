// #include<iostream>
// #include<string>
// using namespace std;

// class Logger{
//     static int ctr;
//     public:
//         Logger(){
//             ctr++;
//             cout<<"New instance of logger created. No of instances: "<<ctr<<endl;
//         }
//         void Log(string msg){
//             cout<<msg<<endl;

//         }
// };
// int Logger::ctr=0;

// int main(){
//     Logger* logger1=new Logger();
//     logger1->Log("This mesage is from user 1");
    
//     Logger* logger2=new Logger();
//     logger2->Log("This mesage is from user 2");

//     return 0;

// }


// #include<iostream>
// using namespace std;
// class Logger{
//     private:
//     static Logger *loggerInstance;     /////////////
//     static int ctr;
//     Logger(){                         /////////////
//         ctr++;
//         cout<<"New Instance of logger is created. No of instance: "<<ctr<<endl;
        
//     }
//     public:

//     static Logger* getLogger(){  
//         if(loggerInstance==nullptr) {
//             loggerInstance =new Logger();
//         }          
//             return loggerInstance;
//     }

//     void log(string msg){
//         cout<<msg<<endl;
//     }
// };
// int Logger::ctr=0;
// Logger* Logger::loggerInstance=nullptr;
// int main(){
//     Logger* logger1=Logger::getLogger();
//     logger1->log("Messafe from user1");

//     Logger* logger2=Logger::getLogger();
//     logger2->log("message from user2");

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Singleton{
//     private:
//     static Singleton* instance;
//     static int counter;
//         Singleton(){
//             counter++;
//             cout<<"Singleton instance is created. No of instance<<<"<<counter<<endl;
//         }
//     public:
//     static Singleton* getInstance(){
//         if(instance==nullptr){
//             instance=new Singleton();
//         }
//         return instance;
        
//     }
//     void log(string msg){
//         cout<<msg<<endl;
//     }
    
// };
// int Singleton::counter=0;
// Singleton* Singleton::instance=nullptr;
// int main(){
//     Singleton* s1=Singleton::getInstance();
//     s1->log("Enssage from user 1 ");
    
//     Singleton* s2=Singleton::getInstance();
//     s2->log("Enssage from user 2 ");

//     cout<<s1<<endl;
//     cout<<s2<<endl;
//     return 0;
// }



// #include<iostream>
// #include<string>
// #include<thread>
// #include<mutex>
// using namespace std;
// class Singleton{
//     private:
//     static Singleton* instance;
//     static std::mutex mtx; 
//     static int counter;
//     Singleton(){
//         counter++;
//             cout<<"Singleton instance is created. No of instance: "<<counter<<endl;
//         }
//     public:
//     static Singleton* getInstance(){
//         mtx.lock();
//         // std::lock_guard<std::mutex> lock(mtx);
//         if(instance==nullptr){
//             instance=new Singleton();
//         }
//         mtx.unlock();
//         return instance;
        
//     }
//     void log(string msg){
//         cout<<msg<<endl;
//     }
    
// };
// int Singleton::counter=0;
// Singleton* Singleton::instance=nullptr;



// void user1(){
//     Singleton* s1=Singleton::getInstance();
//     s1->log("Message from user 1");
// }
// void user2(){
//     Singleton* s2=Singleton::getInstance();
//     s2->log("Message from user 2 ");
// }


// int main(){
//     std::thread t1(user1);
//     std::thread t2(user2);
//     t1.join();
//     t2.join();
//     return 0;
// }



#include<iostream>
#include<string>
#include<thread>
#include<mutex>
using namespace std;
class Singleton{
    private:
    static Singleton* instance;
    static std::mutex mtx; 
    static int counter;
    Singleton(){
        counter++;
            cout<<"Singleton instance is created. No of instance: "<<counter<<endl;
        }
        public:
        static Singleton* getInstance(){
            if(instance==nullptr){
                mtx.lock();
                // std::lock_guard<std::mutex> lock(mtx);
                if(instance==nullptr){
                    instance=new Singleton();
                }
                mtx.unlock();
                return instance;
            }
            Singleton(const Singleton &)=delete;
            Singleton operator=(const Singleton &)=delete;


    }
    void log(string msg){
        cout<<msg<<endl;
    }
    
};
int Singleton::counter=0;
Singleton* Singleton::instance=nullptr;

void user1(){
    Singleton* s1=Singleton::getInstance();
    s1->log("Message from user 1");
}
void user2(){
    Singleton* s2=Singleton::getInstance();
    s2->log("Message from user 2 ");
}

int main(){
    std::thread t1(user1);
    std::thread t2(user2);
    t1.join();
    t2.join();
    return 0;
}

