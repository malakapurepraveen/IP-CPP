#include<iostream>

// int main(){

// 	std::cout<<"I like pizza!"<<std::endl;
// 	std::cout<<"It's really Good"<<std::endl;
// 	return 0;
// }

//new line using '\n'
// #include<iostream>

// int main(){
// 	std::cout<<"I like pizza!"<<'\n';
// 	std::cout<<"It's really Good"<<'\n';
// 	return 0;
// }

//comments is ignored by compiler
/*This is
 a multi
  line comment*/


// #include<iostream>

// int main(){

// 	int x;// declaration
// 	x = 5; //Assigment
// 	//or int x=5;
// 	int y=6;
// 	int sum=x+y;
// 	std::cout<<x<<'\n';
// 	std::cout<<y<<'\n';
// 	std::cout<<sum<<'\n';

// 	return 0;
// }





// /*----------------------------------------*/
// #include<iostream>

// int main(){

// 	//integer(whole number)
// 	int age=12;
// 	int year = 2023;
// 	int days = 7.5;

// 	// std::cout<<days; // trunketed output will be 7

// 	//double(number(number including decimal))
// 	double price = 10.99;
// 	double gpa=2.5;
	
// 	//single character
// 	char grade='A';
// 	char initial = 'c';
// 	char currency = '$';

// 	//Boolean(true or false)
// 	bool student = false;
// 	bool power = true;
// 	bool forSale =  true;


// 	//String (objects that represents a sequence of text)
// 	std::string name = "Bro";
// 	std::cout<<name;
// 	std::string food= "pizza";
// 	std::cout<<"Hello "<<name<<'\n';

// 	std::cout<<"you are  "<<age<<" years old";




// 	return 0;
// }

//Const Kety word

// int main(){
// 	//Const keyword specifies the variabe's value is constant
// 	//Tells the compiler to prevent anything from modifiening it

// 	//(read only)

// 	const double PI=3.14159;
// 	const double LIGHT_Speed=299792458;
// 	double radius=10;
// 	double circumference = 2*PI*radius;

// 	std::cout<<circumference<<"cm";

// 	return 0;
// }
// namespace first{
// 	int x=1;
// }
// namespace second{
// 	int x=2;
// }
// int main(){
// 	//Namespace = Provides a solution fpr preventing name comflict in a large project.each entity needs a unique name.a namespace allows for aidentically named entities as long as the namespace are different

// 	int x=0;
// 	std::cout<<x; //op:0 -  if nothing mentioned it will take local first
// 	std::cout<<first::x;  //op:1
// 	std::cout<<second::x;  //op:2
// 	return 0;

// }

// int main(){
// 	using namespace first; 
// 	std::cout<<x<<std::endl;; //op:1

// 	std::cout<<second::x;  //op:2


// }

/*using namespace std;
  	to save little bit time-  no need to mention everytime std - how ever stdnamespace had hundreds on entities you can check by typing std::
	and you can only use for perticular entities you can use
	for ex:you can add just above the int main()- using std::cout  or using std::string;
	*/
// /*-------------------------------typedef----------------------------------*/
// #include<vector>
// //typedef std::vector<std::pair<std::string, int>> pairlist_t; - its hard to understand this type of long data type - lets try simple one

// // typedef std::string text_t;
// // typedef int number_t;  //insted of typedf you can use "using" key word foe ex
//  using text_t=std::string;
//  using number_t= int;
// int main(){

// 	//typedef=reserved keyword used to create an additional name(alias) for another data type.new identofoer for existing type helps with readability and reduces typos. 
// 	//use when there is a clear benfit
// 	//replaced with 'using'

// 	// pairlist_t pairlist;

// 	text_t firstname="bro";  //insted string we can use text_t as alias for string
// 	std::cout<<firstname<<'\n';  //output: bro

// 	number_t age=20;
// 	std::cout<<age<<'\n';   //insted of int we could use number_t
// 	return 0;
// }

/*--------------------------arithmetic opertor-------------------*/

// int main(){
// 	//arithmetic operator = returns the result of a specific atihmetic operation (+,-,x,/)
// 	int students =20;
// 	students= students+1; //like this we can use '-' for difference
// 	//students+=1;
// 	//students-=1;
// 	//students*=1;
// 	//students/=2;
// 	//remainder=students%=2;
// 	std::cout<<students<<'\n';


// }
/*--------------------------typeconversion-------------------*/

// int main(){
// 	//type conversion= conversion a value of one data type to another 
// 						//implicit=automatic;
// 						//explicit= predence value with new data type;
			
// 			int x=3.14;
// 			std::cout<<x<<'\n';  //op:3

// 			double y=(int)3.14;  //op:3
// 			std::cout<<y<<'\n';

// 			char z=100;
// 			std::cout<<z<<'\n';  //op:d

// 			int a=100;
// 			std::cout<<(char)a<<'\n';  //op:d

// 			int correct=8;
// 			int question=10;
// 			double score=(double)correct/(double)question;

// 			std::cout<<score;

// 	return 0;
// }

/*--------------------------user input-------------------*/
//cout<<(insterstion operator)
//cin>>(extraction operator)


// int main(){
// 	// std::string name;
// 	// std::cout<<"What is your name"<<'\n';
// 	// // std::cin>>name; // -- it will take upto once cursor hits white space
// 	// std::getline(std::cin,name); //  --it takes include white space
// 	// std::cout<<"Hello "<<name<<std::endl;

// 	int age;
// 	std::string fullName;

// 	std::cout<<"What is your age :";
// 	std::cin>>age;
// //if you taking input int followed with getline it will take new line charecter, getlinne will take buffered new line charecter which is in cin int inuput
// 	std::cout<<"What is your full name:";
// 	std::getline(std::cin >>std::ws,fullName); //std::ws-->it will eliminate any ws or new line charecter before taking input to getline()

// 	std::cout<<"hello "<<fullName<<'\n'<<"you are "<<age <<"years old";
// 	return 0;
// }

/*--------------usefull match related input-----------*/
// #include<cmath>
// int main(){
// 	double x=3.15;
// 	double y=5;
// 	double a, b, c,d ,e ,f,g,h;

// 	a=std::max(x,y);  //gives max number
// 	b=std::min(x,y); //gives min number
// 	c=std::pow(2,3);  //gives power value(2 power 3)
// 	d=std::sqrt(9);  //gives squareroot
// 	e=std::round(x); //gives round off value to near by number
// 	f=std::ceil(x);  //gives roundoff value to lower near number
// 	g=std::floor(x);  //gives roundoff value to higer near number
// 	h=std::abs(-3);   //gives absolute value

// 	std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<f<<'\n'<<g<<'\n'<<h;
// }


/*-----------------------practice question-------------*/

//finding the hypotenuse value of right angle triangle
// #include<cmath>
// int main(){
// 	double a,b;
// 	double c;
// 	std::cout<<"Enter size of side A of triangle: ";
// 	std::cin>>a;
// 	std::cout<<"Enter size of side B of triangle: ";
// 	std::cin>>b;
// 	c=sqrt((pow(a,2)+pow(b,2)));
// 	std::cout<<"Side C: "<<c<<'\n';
// 	return 0;
// }

/*-----------------------if statement-------------*/

// int main(){
// 	int age;
// 	std::cout<<"Enter your age: ";
// 	std::cin>>age;
// 	if(age>100){
// 		std::cout<<"you are too old to enter the site";
// 	}
// 	else if(age>=18){
// 		std::cout<<"Welcome to the site";
// 	}
// 	else if(age>100){
// 		std::cout<<"you are too old to enter the site";
// 	}
// 	else if(age<0){
// 		std::cout<<"You haven't born yet";
// 	}
// 	else{
// 		std::cout<<"You are not old enough to enter the site";
// 	}

// }

/*---------------------------switch statement-------------*/


// int main(){
// 	int month;
// 	std::cout<<"Enter the month(1-4): ";
// 	std::cin>>month;

// 	switch(month){
// 		case 1:
// 			std::cout<<"It is january";
// 			break;
// 		case 2:
// 			std::cout<<"It is Feb";
// 			break;
// 		case 3:
// 			std::cout<<"It is March";
// 			break;
// 		case 4:
// 			std::cout<<"It is april";
// 			break;
// 		default:
// 			std::cout<<"you haven't enter the number 1-4"<<'\n';
// 	std::cout<<"Entwr the corect number: ";

// 	}
// 	/*note: if it char value 
// 	char grade;
// 	switch(grade){
// 	     case 'A':
// 		 		cout<<"You did great"}
// 	*/


// }


/*---------------ternary operator------------------*/
//ternary operator ?: =replacement to an if/else statement
//condition?expression1:expression2;
// int main(){
// int num=1111;

// num%2==0 ?std::cout<<"Even":std::cout<<"odd";
// return 0;
// }



/*-------------------------boolean veriable------------*/

// int main(){
// 	bool hungry = false;
// 	//hungry ? std::cout<<"You are hungry":std::cout<<"you are full";
// 	std::cout<<(hungry?"You are hungry":"you are full");
// }

/*-----------------logical operator-----------*/

// int main(){

// }

/*--------------------string methods length------------------*/ 

//  int main(){
// 	std::string name;
// 	std::cout<<"Enter your name: ";
// 	std::getline(std::cin,name);

// 	if(name.length()>24){
// 			std::cout<<"Your name can't be more than 12 character"<<'\n';
// 		}	
// 	else{
// 		std::cout<<"Welcome "<< name<<'\n';
// 	}

// 	}

// /*------------------------clear---------------*/
//  int main(){
// 	std::string name;
// 	std::cout<<"Enter your name: ";
// 	std::getline(std::cin,name);

// 	name.clear();

// 	std::cout<<"Hello "<<name<<'\n';

// 	return 0;
// }


// /*------------------------append---------------*/
// int main(){
// 	std::string name;
// 	std::cout<<"Enter your name: ";
// 	std::getline(std::cin,name);

// 	name.append("@gmail.com");

// 	std::cout<<"Your user name: "<<name;


// }

/*-----------------insert and at--------------------*/

// int main(){
// 	std::string name;
// 	std::cout<<"Enter your name: ";
// 	std::getline(std::cin,name);
// 	std::cout<<name.at(0)<<'\n';
// 	name.insert(2,"@");
// 	std::cout<<"Updated name: "<<name;
// 	return 0;
// }
// /*---------------find---------------*/
// int main(){
// 	std::string name;
// 	std::cout<<"Enter your name: ";
// 	std::getline(std::cin,name);

// 	std::cout<<name.find(" ");
// }


/*---------------------------erase------------------*/

// int main(){
// 	std::string name;
// 	std::cout<<"Enter your name: ";
// 	std::getline(std::cin,name);
	
// 	name.erase(0,3);
// 	std::cout<<"Updated name: "<<name.erase(0,3);;
// 	return 0;

// }

/*------------while loop----------------------*/

// int main(){
// 	std::string name;
// 	while(name.empty()){
// 		std::cout<<"Enter your name: ";
// 		std::getline(std::cin,name);
// 	}
// 	std::cout<<"hello "<<name;

// }
/***********------do while loop--------- */
//do while loop=do some block of code first, then repeat again if condition is true

// int main(){
// 	int num;
// 	do{
// 		std::cout<<"Enter a postive number: ";
// 		std::cin>>num;

// 	}while(num<0);
// 	std::cout<<"The number is: "<<num;
// }

/*------------------for loop----------------*/


//for loop is a loop that will excecute a block of code specified amount of time

// int main(){
// 	for(int i=0;i<=3;i++){
// 		std::cout<<"Happy new year"<<std::endl;
// 	}
// }



// int main(){
// 	for(int i=0;i<=10;i+=2){
// 		std::cout<<i<<std::endl;
// 	}
// }

/*---------break and continue key word-----------------*/
// break=break out of loop;
//continue=skip the current iteration;
// int main(){
// for(int i=0;i<20;i++){
// 	if(i==13){
// 		break;
// 	}
// 	std::cout<<i<<'\n';
// }
// }
/*--------------continue---*/
// int main(){
// 	for(int i=0;i<=20;i++){
// 		if(i==13){
// 			continue;
// 		}
// 		std::cout<<i<<std::endl;
// 	}
// }


/*---nested loop------------------------------------*/
//  int main(){
// 	for(int i=1;i<=3;i++){
// 		for(int j=1;j<=10;j++){
// 			std::cout<<j<<" ";
// 		}
// 		std::cout<<std::endl;
// 	}
//  }

/*--------------practice nested loop rectangle*/
// int main(){
// 	int column;
// 	int row;
// 	char symbol;
// 	std::cout<<"Enter number of row: ";
// 	std::cin>>row;
// 	std::cout<<"Enter number of column: ";
// 	std::cin>>column;
// 	std::cout<<"Enter symbol: ";
// 	std::cin>>symbol;

// 	for(int i=0;i<row;i++){
// 		for(int i=0;i<column;i++){
// 			std::cout<<symbol;
// 		}
// 		std::cout<<'\n';
// 	}

// }


/*-----------------random number generator---------*/
// #include<ctime>
// int main(){
	
// 	srand(time(NULL)); //it will generate number from 0 to 32677  - this function will use the current time as a seed
	
// 	int num=rand();//it will generate number from 0 to 32677 
// 	int num1=(rand()%6);//it will generate number from 0 to 5 
// 	int num2=(rand()%6)+1;//it will generate number from 0 to 6
// 	std::cout<<num<<" "<<num1<<" "<<num2;
// 	return 0;

// }

/*********-------------------random event genearator--------- */
// #include<ctime>
// int main(){
// 	srand(time(0));
// 	int randNum=(rand()%6)+1;

// 	switch(randNum){
// 			case 1:
// 				std::cout<<"You won t-shirt";
// 				break;
// 			case 2:
// 				std::cout<<"You won shirt";
// 				break;
// 			case 3:
// 				std::cout<<"You won hoodi";
// 				break;
// 			case 4:
// 				std::cout<<"You won jacket";
// 				break;
// 			case 5:
// 				std::cout<<"You won a movie ticket";
// 				break;
// 			case 6:
// 				std::cout<<"You won nothing-  better luck next time";
// 				break;
			
// 	}
// }


/*-------------number guessting game----------*/
// #include<ctime>
// int main(){
// 	srand(time(0));
// 	int num;
// 	int guess;
// 	int tries=0;


// 	num=(rand()%10)+1;
// 	do{
// 		std::cout<<"Guesss the number between 1-10: ";
// 		std::cin>>guess;
// 		tries++;
// 		if(guess>num){
// 			std::cout<<"Enter number is higher than expected;"<<'\n';
// 		}
// 		else if(guess<num){
// 			std::cout<<"Enter number is lesser than expected;"<<'\n';
// 		}
// 		else{
// 			std::cout<<"Correct: numer of triels: "<<tries<<std::endl;
// 		}
// 	}while(guess!=num);
// 	return 0;

// }


/*****----------------functions------------------------------ */
// void happyBirthday(std::string name,int age);
// int main(){
// 	std::string name="bro";
// 	int age =21;
// 	happyBirthday(name,age);

// }

// void happyBirthday(std::string name,int age){
// 		std::cout<<"Happy Birthday to "<<name<<'\n';
// 		std::cout<<"Happy birthday to "<<name<<'\n';
// 		std::cout<<"happy Birthday to dear "<<name<<'\n';
// 		std::cout<<"Happy Birth to "<<name<<'\n';
// 		std::cout<<"You are "<<age<<" years old"<<'\n';
// 	}

/*************return variable******** */
// return == return a value back to spot where you called encompressing function
// double square(double length);
// double cube(double length);
// int main(){
// 	double length=6.5;
// 	double area=square(length);
// 	double volume=cube(length);
// 	std::cout<<"Area: "<<area<<" cm^2"<<'\n';
// 	std::cout<<"Volume: "<<volume<<" cm^3";
// 	return 0;
// }
// double square(double length){
// 	return length*length;
// }
// double cube(double length){
// 	return length*length*length;
// }

// std::string concatString(std::string string1, std::string string2);
// int main(){
// 	std::string firstName = "Praveen";
// 	std::string lastName="Malakapure";
// 	std::string fullName=concatString(firstName, lastName);

// 	std::cout<<"Hello "<<fullName<<'\n';
// }
// std::string concatString(std::string string1,std::string string2){
// 	return string1 + " " + string2;
// }


/*********overload function */

// overload function= function can share the name but you need the different set of parameter to be passed
// function signature=function name + its parameter - and function signature need to be uniquw
// void bakePizza();
// void bakePizza(std::string toppin1);
// void bakePizza(std::string toppin1, std::string toppin2);
// int main(){
// 	bakePizza("cheese","corn");
// 	return 0;
// }
// void bakePizza(){
// 	std::cout<<"you have ordered pizza";
// }
// void bakePizza(std::string toppin1){
// 	std::cout<<"You have orderd "<<toppin1<<" pizza";
// }
// void bakePizza(std::string toppin1,std::string toppin2){
// 	std::cout<<"You have orderd "<<toppin1<<" and "<<toppin2<<" pizza";
// }


/*********************variaable scope*************/
//local veriable= declared inside a function or block of code;
//global veriable = declared outside of all the functions

//avoid global veriable as much as possible because it takes global space and less secured veriable compare to local veriable
// int myNum=5;
// void fun();
// int main(){
// 	int myNum=10;
// 	std::cout<<::myNum<<'\n';                ////imp line
// 	fun();
// 	return 0;
// }
// void fun(){
// 	int myNum=3;
// 	std::cout<<myNum;
// }


//if you use scope resolution operator the veriable take it from globally declared varible otherwise pricision will be local veriable first

/***************banking program?***********/
// ?
// ?
// ?
// ?
// ?
// double balance = 0;
// void showBalance(double balance);
// void depositeMoney(double amount,double balance);
// void withdrawAmount();
// int main(){
	
// 	int choice;
// 	std::cout<<"*****************************\n";
// 	std::cout<<"ATM Machine\n";
// 	std::cout<<"*****************************\n";
// 	std::cout<<"1.Balance Enquiry\n";
// 	std::cout<<"2.Withdraw money\n";
// 	std::cout<<"3.Deposite money\n";
// 	std::cout<<"4.EXit\n";
// 	std::cout<<"Enter your choice: ";
// 	std::cin>>choice;
// 	do{
// 		switch(choice){
// 		case 1:
// 			showBalance(balance);
// 			break;
// 		case 2:
// 			withdrawAmount();
// 		case 3:
// 		case 4:
// 		default:
// 		}
// 	}while(choice!=4);


// }
// void showBalance(double balance){
// 	std::cout<<"Your balance is: "<<balance<<'\n';
// }
// void withdrawAmount(){
// 	int wAmount;
// 	std::cout<<"Enter amount to withdraw: ";
// 	std::cin>>wAmount;
// 	if(wAmount>balance){
// 		std::cout<<"Insufficient funds\n";
// 	}
// 	else{
// 		balance-=wAmount;
// 	}
// 	std::cout<<"Your Balance is :"<<balance<<'\n';
// }
// void depositeMoney(double amount,double balance){
// 	balance+=amount;
// }
// ?
// ?
// ?
// ?
// ?
// ?

/*****************Arrays******************************* */
//array is data type that stores multiple variable with same data type

// int main(){
// 	double numbers[4]={3.4,5.6,7.8,9.8};
	
// 	std::cout<<numbers[0]<<'\n';
// 	std::cout<<numbers[1]<<'\n';
// 	std::cout<<numbers[2]<<'\n';
// 	std::cout<<numbers[3]<<'\n';
// 	return 0;

// }

//////////////////////////////////////
// int main(){
// 	std::string cars[5]={"MB","BMW","VW","LR"};
// 	std::cout<<cars[0]<<'\n';
// 	std::cout<<cars[1]<<'\n';
// 	std::cout<<cars[2]<<'\n';

// 	cars[4]="Mustang";
// 	std::cout<<cars[4]<<'\n';
// 	return 0;



// }

 
/***************use of sizeof() function*********************/
//sizeof() = determines the size of in bytes the variable,dat type, class, object, etc..

// int main(){
// 	int a=6;
// 	std::string name="praveen";
// 	std::cout<<sizeof(a)<<"bytes\n";
// 	std::cout<<sizeof(name)<<"Bytes\n";
// 	return 0;

// }

/****************array over iteration*************************/

// int main(){
// 	std::string students[]={"Praveen","Mahesh","Kirshna","Radha",};
// 	int size=sizeof(students)/sizeof(std::string);
// 	for(int i=0;i<size;i++){
		// std::cout<<students[i]<<'\n';
// 	}
// 	return 0;
// }


/////*for each loop*////////////////
// int main(){
// 	int students[]={10,20,30,40,50,60,70,80};

// 	for(int student:students){
// 		std::cout<<student<<'\n';
// 	}
// 	return 0;
// }


/**************************pass array to function***********************/
// int totalNumbers(int numbers[],int size);
// int main(){
// 	int numbers[]={10,20,30,40};
// 	int size=sizeof(numbers)/sizeof(int);
// 	int total=totalNumbers(numbers,size);
// 	std::cout<<total<<'\n';
// }
// int totalNumbers(int numbers[],int size){
// 	int total=0;
// 	for(int i=0;i<size;i++){
// 		total+=numbers[i];
// 	}
// 	return total;
// }


/*seraching an element in array*/
// int searchElement(int numbers[],int size,int mynum);
// int main(){
// 	int numbers[]={0,1,2,3,4,5,6,7,8,9,10};
// 	int mynum;
// 	int size;
// 	int position;
// 	size=sizeof(numbers)/sizeof(numbers[1]);
// 	std::cout<<"Enter number to be search:";
// 	std::cin>>mynum;
// 	position=searchElement(numbers,size,mynum);
// 	if(position != -1){
// 		std::cout<<"The number " <<mynum<<" found at position "<<position+1<<'\n';
// 	}
// 	else{
// 		std::cout<<"The number "<<mynum<<" not found in array";
// 	}
// 	return 0;

// }
// int searchElement(int numbers[],int size,int mynum){
// 	for(int i=0;i<size;i++){
// 		if(numbers[i]==mynum){
// 			return i;
// 		}	
// 	}
// 	return -1;

// }


/*********************seraching an element in array************************/
// int searchElement(std::string foods[],int size,std::string myfood);
// int main(){
// 	std::string myfoods[]={"Pizza","Roti","chocolate"};
// 	std::string myfood;
// 	int size;
// 	int position;
// 	size=sizeof(myfoods)/sizeof(myfoods[1]);
// 	std::cout<<"Enter item to be search:";
// 	std::getline(std::cin, myfood);
// 	position=searchElement(myfoods,size,myfood);
// 	if(position != -1){
// 		std::cout<<myfood<<" found at position "<<position+1<<'\n';
// 	}
// 	else{
// 		std::cout<<myfood<<" not found in array";
// 	}
// 	return 0;

// }
// int searchElement(std::string foods[],int size,std::string myfood){
// 	for(int i=0;i<size;i++){
// 		if(foods[i]==myfood){
// 			return i;
// 		}	
// 	}
// 	return -1;
// }


/*****************Sort an array*****************/
// void sortArray(int array[],int size);
// int main(){
// 	int array[]={10,6,4,5,6,2,5,8,9,};
// 	int size=sizeof(array)/sizeof(array[0]);
// 	sortArray(array,size);
// 	for(int element:array){
// 		std::cout<<element<<" ";
// 	}
// 	return 0;

// }
// void sortArray(int array[],int size){
// 	int temp;
// 	for(int i=0;i<size-1;i++){
// 		for(int j=0;j<size-i-1;j++){
// 			if(array[j]>array[j+1]){
// 				temp=array[j];
// 				array[j]=array[j+1];
// 				array[j+1]=temp;
// 			}
// 		}
// 	}
// }

/********************Range Loop*******************************/
// fill()- fill the range of elements with a specified value
// int main(){
// 	// std::string food[]={"food","food","food","food","food","food","food","food",};
// 	std::string foods[100];	
// 	fill(foods,foods+100,"pizza");
// 	for(std::string food:foods){
// 			std::cout<<food<<'\n';
// 	}
// }

// int main(){
// 	// std::string food[]={"food","food","food","food","food","food","food","food",};
// 	std::string foods[100];	
// 	fill(foods,foods+100/2,"pizza");
// 	fill(foods+100/2,foods+100,"burger");
// 	for(std::string food:foods){
// 			std::cout<<food<<'\n';
// 	}
// }

// int main(){
// 	std::string foods[5];
// 	int size=sizeof(foods)/sizeof(foods[0]);
// 	std::string temp;
// 	for(int i=0;i<size;i++){
// 		std::cout<<"Enter the food you like or 'q' to quite #"<<i;
// 		std::getline(std::cin,temp);
// 		if(temp=="q")
// 		break;
// 		foods[i]=temp;
		
// 	}
// 	for(int i=0;!foods[i].empty();i++){
// 		std::cout<<foods[i]<<'\n';
// 	}
// }

/*************Multi- dimenstional array*********/

// int main(){
// 	std::string cars[][3]={{"mustang","escape","F-150"},{"Covrvette","Equinox","Silverdo"},{"challenger","Durango","Ram 1500"}};
// 	int rows=sizeof(cars)/sizeof(cars[0]);
// 	int columns=sizeof(cars[0])/sizeof(cars[0][0]);
// 	std::cout<<cars[0][0];
// 	for(int i=0;i<rows;i++){
// 		for(int j=0;j<columns;j++){
// 			std::cout<<cars[i][j]<<" ";
// 		}
// 		std::cout<<'\n';
// 	}
// 	return 0;
// }


/***************Memmory allocation */

//memoey address= a location in memory where data is stored
//a memory address can accessed with & (addrress-of operator)
// int main(){ 
// std::string name="Praveen";
//  int age=21;
//  bool student = true;

// std::cout<<&name<<'\n';
//   std::cout<<&name<<'\n'; \
//   std::cout<<&name<<'\n';
// return 0;
// }


/*******************pass by value and pass by reference */

































/****************Const parameter**************** */

//const parameter= parameter taht is effectivly read-only code is more secure & conveys intent useful for references and pointers
// void printInfo(std::string name,int age);
// int main(){
// 	std::string name="Praveen";
// 	int age=21;
// 	printInfo(name,age);
// 	return 0;

// }
// void printInfo(const std::string name,const int age){
// 	std::cout<<name<<'\n';
// 	std::cout<<age<<'\n';
// }

/* *******************pointers ************** */
// int main(){
// 	//pointers = variable that stores a memory of another variable 
// 	//sometimes it's easier to work with an address

// 	//& address of an operator
// 	//* deference operator

// 	std::string name="Praveen";
// 	int age=21;
// 	std::string freePizzas[5]={"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};

// 	std::string *pname=&name;
// 	int *page=&age;
// 	std::string *pfreepizza=freePizzas;

// 	std::cout<<*pname<<'\n';
// 	std::cout<<*page<<'\n';
// 	std::cout<<*pfreepizza<<'\n';

// }

/*    Null pointers       */



























/*dynamic memory allocation*/
//dynamic memory = memery that is allocated after the program is already compiled and already running.
//use 'new' opeator to allocate memery in the heap rather than the stack

//usefull when we don't know how much memory we will need. makes our program more flexible, especcially when accepting user input.
// int main(){
// 	int *pnum=NULL;
// 	pnum= new int;
// 	*pnum=10;


// 	std::cout<<"Adress: "<<pnum<<'\n';
// 	std::cout<<"Value:"<<*pnum<<'\n';
// 	return 0;
// }

// int main(){
// 	char *pgrades =NULL;
// 	int size;
// 	std::cout<<"How many grades to enter #:";
// 	std::cin>>size;
// 	pgrades= new char[size];

// 	for(int i=0;i<size;i++){
// 		std::cout<<"Enter a grade #"<<i+1<<": ";
// 		std::cin>>pgrades[i];
// 	}
// 		for(int i=0;i<size;i++){
// 		std::cout<<pgrades[i]<<" ";
// 	}
// 	delete[] pgrades;

// 	return 0;
	
// }


/*********Recursion*************/
//recursion= a programming technique where a function invokes itself from within
//breaks complex concept into repeatable single step

//adavantage= less code and is cleaner
// useful for sorting searching algorithm
// void walk(int steps);

//disandantage=it takes more memory and slower

// int main(){
// 	walk(100);
// 	return 0;
// }
// void walk(int steps){
// 	if(steps>0){
// 		std::cout<<"you take a step"<<'\n';
// 		walk(steps-1);
// 	}
// }
// int fact(int num);
// int main(){
// 	int num;
// 	std::cout<<"Enter the number factorial: ";
// 	std::cin>>num;
// 	std::cout<<fact(num);
// 	return 0;
// }
// int fact(int num){
// 	if(num>0){
// 		return num*fact(num-1);
// 	}
// 	else{
// 		return 1;
// 	}

// }

/*****************Function Template ******************/


//function template=describes what a function looks like.
//can be used to geenate as many as overload functions
//as nedded, each using different data types

// template <typename T>
// T max(T x, T y){
// 	return (x>y)?x:y;
// }
// int main(){
// 	std::cout<<max(1.1,2.2)<<"\n";
// }

// template <typename T,typename U>
// U max(T x, U y){   //auto keyword - compiler will decide what will be the date tyoe to return type should be
// 	return (x>y)?x:y;
// }
// int main(){
// 	std::cout<<max(3,2.2)<<"\n";
// }

/**************Stuct****************/
//struct=a structure that group related variable under one name   
//struct can contain many differant data types(strings,int double,char, etc)
//variable in a struct are know as "members"
//members ca be accesss with '.' "class member Access operator" 

// struct student{
// 	std::string name;
// 	double gpa;
// 	bool enrolled;
// 	int tshirt_size=38;  //with members we can set members value by default

// };
// int main(){
// 	student student1;   //student1 is clled identifier
// 	student1.name="praveen";  
// 	student1.gpa= 9.1;
// 	student1.enrolled=true;


// 	std::cout<<student1.name<<'\n';
// 	std::cout<<student1.gpa<<'\n';
// 	std::cout<<student1.enrolled<<'\n';
// 	std::cout<<student1.tshirt_size<<'\n';  
// 	return 0;   

// }

//pass a struct in funxtion as argument
// struct Car{
// 	std::string model;
// 	int year;
// 	std::string color;
// };
// void printCars(Car car);
// int main(){

// 	Car car1;
// 	Car car2;

// 	car1.model="Mustang";
// 	car1.year=2023;
// 	car1.color="red";

// 	car2.model="Toyota";
// 	car2.year=2023;
// 	car2.color="blue";
// 	printCars(car1);
// 	return 0;
// }
// void printCars(Car car){

// 	std::cout<<car.model<<'\n';
// 	std::cout<<car.year<<'\n';
// 	std::cout<<car.color<<'\n';


// }

/***********************oops************************ */

// class Human{
// 	public:
// 	std::string name;
// 	int age;
// 	std::string occupation;

// 	void eat(){
// 		std::cout<<"This persion is eating\n";
// 	}
// 	void drink(){
// 		std::cout<<"This person is drinking\n";
// 	}
// 	void sleep(){
// 		std::cout<<"This peson is sleeping\n";
// 	}
// };
// int main(){
// 	Human h1;
// 	h1.name="Praveen";
// 	h1.age=21;	
// 	h1.occupation="Student";
	
// 	std::cout<<h1.name<<'\n';
// 	std::cout<<h1.age<<'\n';
// 	std::cout<<h1.occupation<<'\n';

// 	h1.eat();
// 	h1.drink();
// 	h1.sleep();
// }

/***********************ex-2******************* */
// class Car{
// 	public:
// 	std::string type;     //its collection of attributes and methods
// 	std::string model;   //these all are the attributes - attributes are the characteristics of an object
// 	int year;
// 	std::string color;

// 	void accelerate(){
// 		std::cout<<"You step on the accelarate\n";
// 	}                                                //these 2 are the methods are function that object can perform
// 	void brake(){
// 		std::cout<<"you step on the brake";

// 	}
// };
// int main(){
// 	Car car1;
// 	car1.type="Ford";
// 	car1.model="Mustang";
// 	car1.year=2023;
// 	car1.color="Blue";

// 	std::cout<<car1.type<<'\n';
// 	std::cout<<car1.model<<'\n';
// 	std::cout<<car1.year<<'\n';
// 	std::cout<<car1.color<<'\n';
// 	car1.accelerate();
// 	car1.brake();

// }

/************constructor**************** */
//constructor = a special methos that is automatically called when object is instantiated, usefull for aasigning values to attributes as argument
// class Student{
// 	public:
// 	std::string name;
// 	int age;
// 	double cga;

// 	Student(std::string name,int age,double cga){
// 		this->name=name;
// 		this->age=age;
// 		this->cga=cga;

// 	}
// };
// int main(){
// 	Student student1("praveen",23,9.5);
// 	std::cout<<student1.name<<'\n';
// 	std::cout<<student1.age<<'\n';
// 	std::cout<<student1.cga<<'\n';
// 	return 0;
// }

/*******************getter & setter************* */
// class Stove{
// 	private:
// 	 int temp=0;
// 	 public:

// 	 int getTemp(){
// 		return temp;
// 	}
// 	void setTemp(int temp){
// 		this->temp=temp;
// 	}
	

// };

// int main(){
// 	Stove s1;
// 	s1.setTemp(100);
// 	std::cout<<s1.getTemp();
// 	return 0;
// }

/*************accessing private attributes by using constructor********* */
// class Stove{
// 	private:
// 	 int temp=0;
// 	 public:
// 	 Stove(int temp){
// 		setTemp(temp);
// 	 }

// 	 int getTemp(){
// 		return temp;
// 	}
// 	void setTemp(int temp){
// 		this->temp=temp;
// 	}
	

// };

// int main(){
// 	Stove s1(250);
// 	                         // s1.setTemp(100);
// 	std::cout<<s1.getTemp();
// 	return 0;
// }



/**************inheritance******************/
// class Shape{
// 	public:
// 	double area;
// 	double volume;
// };
// class Sphere : public Shape{
// 	public:
// 	double radius;
// 	Sphere(int radius){
// 		this->radius=radius;
// 		this->vo lume=(4/3.0)*3.14159*(radius*radius*radius);
// 		this->area=4*3.14159*(radius*radius);

// 	};
// };
// class Cube : public Shape{
// 	public:
// 	double side;
// 	Cube(int side){
// 	this->side=side;
// 	this->volume=(side*side*side);
// 	this->area=6*(side*side);
// 	}
// };

// int main(){
// 	Sphere s1(5);
// 	Cube c1(10);
// 	std::cout<<c1.area<<"cm\n";
// 	std::cout<<c1.volume<<"cm\n";

// 	std::cout<<s1.area<<"cm\n";
// 	std::cout<<s1.volume<<"cm\n";

// 	return 0;
// }



/*********************oops- apni kaksha************/
// class Teacher{
// 	private:
// 	double salary=25000;
// 	public:
// 	std::string name;
// 	std::string dept;
// 	std::string subject;
// 	Teacher(int salary){
// 		setSalary(salary);
// 	}
// 	int getSalary(){
// 		return salary;
// 	}
// 	void setSalary(int salary){
// 		this->salary=salary;
// 	}


// };
// int main(){
// 	Teacher t1(10000);
// 	Teacher t2(t1);
// 	t2.name="Praveen";
// 	t2.dept="Computer science";
// 	t2.subject="Computer network";

// 	std::cout<<t2.name<<'\n';
// 	std::cout<<t2.dept<<'\n';
// 	std::cout<<t2.subject<<'\n';
	
// 	std::cout<<t2.getSalary()<<'\n';
// 	t2.setSalary(30000);
// 	std::cout<<t2.getSalary()<<'\n';
// 	return 0;

// }

// int main(){
// 	int a=5;
// 	int* ptr=&a;
// 	int** parentPtr=&ptr;
	

// 	std::cout<<ptr<<'\n';
// 	std::cout<<&a<<'\n';
// 	std::cout<<&ptr<<'\n';
// 	std::cout<<parentPtr<<'\n';


// 	std::cout<<a<<'\n';
// 	std::cout<<*ptr<<'\n';
// 	std::cout<<&ptr<<'\n';
// 	std::cout<<*parentPtr<<'\n';
// }


/******************Smart pointers ******************/
// #include<memory>
// class Student{
// 	public:
// 	std::string name;
// 	int age;
// 	int std;
// };
// int main(){
// 	std::unique_ptr<Student> s1= std::make_unique<Student>();
// 	std::unique_ptr<Student> s2=std::make_unique<Student>();
// 	auto s3=std::make_unique<Student>();
// 	auto s4=std::make_unique<Student>();

// 	s1->name="Praveen";
// 	s1->age=15;
// 	s1->std=10;

// 	s2->name="Krishna";
// 	s2->age=15;
// 	s2->std=10;
	
// 	s3->name="Priya";
// 	s3->age=15;
// 	s3->std=10;

// 	s4->name="Raw pointer";
// 	s4->age=15;
// 	s4->std=10;

// 	std::cout<<s1->name<<std::endl;
// 	std::cout<<(*s1).age<<std::endl;
// 	std::cout<<s1->std<<std::endl;

// 	std::cout<<s2->name<<std::endl;
// 	std::cout<<(*s2).age<<std::endl;
// 	std::cout<<s2->std<<std::endl;

// 	std::cout<<s3->name<<std::endl;
// 	std::cout<<(*s3).age<<std::endl;
// 	std::cout<<s3->std<<std::endl;

// 	Student* raw=s4.get();
// 	std::cout<<raw->name<<std::endl;

// }


// #include <memory>

// class Base {
// public:
//     virtual void show() { std::cout << "Base\n"; }
//     virtual ~Base() {}
// };

// class Derived : public Base {
// public:
//     void show() override { std::cout << "Derived\n"; }
//     void onlyInDerived() { std::cout << "Only in Derived\n"; }
// };

