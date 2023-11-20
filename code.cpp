/*#include<iostream>
using namespace std;
int main()
{
  int rows,i,j;
  cout<<"enter the value of rows";
  cin>>rows;
  for (i=1;i<=rows;++i){
    for (j=1; j <=i; ++j)

    {
        cout<<"*";
    }
    cout<<"\n";
}

    return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int a[5];
	a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;
	a[4]=50;
	for (int i=0;i<5;i++)
	{
		cout<<"elements are "<<a[i]<<endl;
		
	}
	return 0;
	
}*/



/*#include<iostream>
using namespace std;
main()
{
	int k=0,a[k];
	while (k<=5){
		cout<<a[k];
		k++;

	}


	
	
}*/
/*#include <iostream>

class Rectangle {
private:
    int l;
    int w; 

public:
    
    Rectangle(int length, int width) {
        l = length;
        w = width;
    }

   
    int getl() {
        return l;
    }

    int getw() {
        return w;
    }
};

int main() {
   
    Rectangle rectangle_obj(5, 10);

    
    int length = rectangle_obj.getl();
    int width = rectangle_obj.getw();
  

    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string stu_name;
    int rollno;

    

};
int main()
{
    student e;
    e.stu_name="John";
    e.rollno=2;
    cout<<e.stu_name<<" "<<e.rollno<<endl;
    return 0;

        
    

}*/

/*#include<iostream>
using namespace std;
class student
{
    public:
    string stu_name;
    int addresss;
    double phoneno;
    long rollno;

};
main()
{
    student sam;
    sam.stu_name="sam";
    sam.addresss=3345;
    sam.phoneno=986754367;
    sam.rollno=78;
    student john;
    john.stu_name="john";
    john.addresss=72781;
    john.phoneno=83131279;
    john.rollno=67;
    cout<<sam.stu_name<<"  "<<sam.addresss<<" "<<sam.phoneno<<"  "<<sam.rollno;
    cout<<john.stu_name<<"  "<<john.addresss<<" "<<john.addresss<<" "<<john.rollno;
    return 0;

}*/
/*#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class triangle
{
    public:
    void print_area(int s1,int s2,int s3)
    {
        double s=(s1+s2+s3)/2.0;
        cout<<s<<endl;
        cout<<"perimeter is"<<(s1+s2+s3)<<endl;

    }
    
};
int main()
{
    triangle t;
    t.print_area(3,4,5);
    return 0;

}*/
/*#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
};

int main() {
    Student students[3];

    students[0].name = "John";
    students[0].age = 20;

    students[1].name = "Alice";
    students[1].age = 19;

    students[2].name = "Bob";
    students[2].age = 22;

    cout << "Name: " << students[1].name << ", Age: " << students[1].age << endl;

    return 0;
}*/

/*#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    double x, y, size=15;
    char ch=42; 
    string message(" Happy Friendship Day "); 
    int print_line = 2;


    if (message.length() % 2 != 0) message += " ";


    for (x=0;x<size;x++)
    {
        for (y=0;y<=4*size;y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );


            if (dist1 < size + 0.5 || dist2 < size + 0.5 ) {
                cout << ch;
            }
            else cout << " ";
        }
        cout<<"\n";
    }


    for (x=0;x<3*size;x++)
    {
        for(y=0;y<x;y++) cout << " ";


        for (y=0; y<4*size + 1 - 2*x; y++)
        {
            if (x >= print_line - 1 && x <= print_line + 1) {
                int idx = y - (4*size - 2*x - message.length()) / 2;
                if (idx < message.length() && idx >= 0) {
                    if (x == print_line) cout<<message[idx];
                    else cout << " ";
                }
                else cout << ch;
            }
            else cout << ch;
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int array[5];
    cout<<"enter the elements:";
    for(int i=0;i<5;i++)
    {
        cin>>array[i];
    }
    cout<<"the array elemensts are:";
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<"  ";
        
    }
}*/

/*#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    public:
    int rno;
    char name[30];
    int age;
    void get()
    {
        cin>>rno>>name>>age;
    }
    void put()
    {
        cout<<rno<<" "<<name<<" "<<age<<endl;
    }
};
int main()
{
  student s[5];
  for(int i=0;i<2;i++)
  {
    s[i].get();
    
  } 
  for(int i=0;i<2;i++)
    { 
  if(strcmp(s[i].name,"abc")==0)
  {
    s[i].put();
  } 
    }

    
}*/
/*#include<iostream>
using namespace std;
enum level{easy=1,normal,hard};
int main()
{
   int choice;
   cout<<"choice";
   cin>>choice;
   switch(choice)
   {
    case easy:
    cout<<"the level is easy"<<endl;
    break;
    case normal:
    cout<<"the level is normal"<<endl;
    break;
    case hard:
    cout<<"the level is hard"<<endl;
    break;
    default:
    cout<<"you made an illegal choice"<<endl;
   }
   

    
}*/
// program to add two numbers using a function

/*#include <iostream>
using namespace std;
int add(int a, int b) {
    return (a + b);
}

int main() {

    int sum;
    sum = add(56, 98);

    cout << "sum is" << sum << endl;

    return 0;
}*/
/*#include<iostream>
using namespace std;
class employee
{
    public:
    char emp_name[20];
    int emp_exp;
    char emp_status[20];
    int age;
    void get()
    {
        cin>>emp_name>>emp_exp>>emp_status>>age;
    }
    void put()
    {
        cout<<emp_name<<" "<<emp_exp<<" "<<emp_status<<" "<<age;
    }


};
int main()
{
    employee e;
    e.get();
   
    if(e.emp_exp>5)
    {
        cout<<"the employee is eligible"<<endl;
        e.put();
    }
    else
    {
        cout<<"not eligible";
    }
}*/
//inline void employee::put()
/*{
    if(emp>5)
    {
        cout<<" ";
    }
}*/
/*#include<iostream>
using namespace std;
class university
{
    public:
    static int reg_no;
    static int count;
    char stu_name[20];
    void get()
    {
        cin>>reg_no>>stu_name;
    }
    void put()
    {
        cout<<reg_no<<" "<<stu_name;
        reg_no++;
        count++;
        cout<<reg();
    }
     int  reg()
    {
        return reg_no;
    }
    static void cnt()
    {
        cout<<count;
    }

};
int university::reg_no=10;
int university:: count=0;
main()
{
    university u1,u2;
    u1.get();
    u1.put();
    u2.get();
    u2.put();
    university::cnt();


}*/
/*#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int *z;
    *z=*x;
    *y=*x;
    *y=*z;
    cout<<"value after swapping"<<x<<" "<<y<<endl;
    

}
main()
{
    int a;
    int b;

    cin>>a>>b;
    cout<<"values before swapping"<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"values after swapping"<<a<<" "<<b<<endl;
}*/


/*#include<iostream>
using namespace std;
class factorial 
{   
    public:
    long int n;
    long int fact(int n)
  {
        if (n>=1)
            return n*fact(n-1);
        
        else
        
            return 1;
}   
    

};
int main()
{
  factorial f;
  int n;
  cout<<"enter a positive integer:"<<endl;
  cin>>n;
  cout<<"factorial is"<<f.fact(n);
    
}*/

/*#include<iostream>
using namespace std;
class fibb
{
    public:
    long int fibbo(int n)
    {
    if(n==0){
        return 0;}
    else if (n==1){
        return 1;}
    else{
        return(fibbo(n-1)+ fibbo(n-2));     
    }
    }
};
int main()
{
    fibb f;
    int n;
    cout<<"enter the integer";
    cin>>n;

    cout<<"fibbo series is";
    for(int i=0;i<n;++i){
    cout<<f.fibbo(i)<<" ";
    }
}*/
/*#include<iostream>
using namespace std;
void fun(int);
void fun(float);
void fun(int i)
{
    cout<<"Value of i is:"<<i<<endl;
}
void fun(float j)
{
    cout<<"value of j is"<<j<<endl;
}
int main()
{
    fun(12);
    fun(1.2f);
    return 0;
}*/

//write a program creating a function area we need to compute area for circle ,sqaure,rectangle.
/*#include<iostream>
using namespace std;
class shape
{
    public:
    void area(float);
    void area(int); 
    void area(int,int);
};
void area(float i)
{
    cout<<"THE AREA OF CIRCLE IS "<<3.14*i*i<<endl;
}
void area(int i)
{
    cout<<"THE AREA OF THE SQUARE IS "<<i*i<<endl;
}
void area(int i,int y)
{
    cout<<"THE AREA OF THE RECTANGLE IS "<<i*y<<endl;

}
int main()
{
    area(3.2f);
    area(4);
    area(2,3);
    return 0;

}*/
//Write a program to calculate the area of circles using static data members and static member function.
/*#include<iostream>
using namespace std;
class circle
{
    private:
    int r; 
    public:
    static void get()
    {
        cin>>r;
        cout<<"the radius of circle is "<<r<<endl;

    }
    static void put()
    {
        cout<<"area of circle "<<3.14*r*r<<endl;
    } 

};

int main()
{
    
    circle::get();
    circle::put();
    return 0;
}*/

/*#include <iostream>
#include <string>
#include <cctype>

class phone_number {
private:
    std::string number;

public:
    void input_number() {
        std::cout << "Enter the phone number: ";
        std::cin >> number;
    }

    void output_number() const {
        std::cout << "Your entered number is: " << number << std::endl;
    }

    inline void check_num(std::string num);
};

inline void phone_number::check_num(std::string num) {
    bool isValid = true;

    if (num.length() != 10) {
        isValid = false;
    }

    for (char c : num) {
        if (!isdigit(c)) {
            isValid = false;
            break;
        }
    }

    if (isValid) {
        output_number();
    } else {
        std::cout << "Entered Phone number is wrong" << std::endl;
    }
}

int main() {
    phone_number phoneNumber;
    phoneNumber.input_number();
    phoneNumber.check_num(phoneNumber.number);
    
    return 0;
}*/
/*#include <iostream>
#include <iomanip>

int main() {
    int decimalNumber;

    // Input the decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert to hexadecimal and octal using iomanip
    std::cout << "Decimal: " << decimalNumber << std::endl;
    std::cout << "Hexadecimal: 0x" << std::hex << std::uppercase << decimalNumber << std::endl;
    std::cout << "Octal: 0" << std::oct << decimalNumber << std::endl;

    return 0;
}*/
/*#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;

    // Input the string
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    // Calculate the reverse of the string
    std::string reversedString = inputString;
    std::reverse(reversedString.begin(), reversedString.end());

    // Output the original and reversed strings using setw for formatting
    std::cout << std::setw(20) << "Original String: " << inputString << std::endl;
    std::cout << std::setw(20) << "Reversed String: " << reversedString << std::endl;

    return 0;
}*/
/*#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;

    std::vector<double> closingPrices(size);

    for (int i = 0; i < size; ++i) {
        std::cin >> closingPrices[i];
    }

    std::vector<double> positiveClosingPrices;

    for (int i = 0; i < size; ++i) {
        if (closingPrices[i] > 0) {
            positiveClosingPrices.push_back(closingPrices[i]);
        }
    }

    for (int i = 0; i < positiveClosingPrices.size(); ++i) {
        std::cout << positiveClosingPrices[i];
        if (i < positiveClosingPrices.size() - 1) {
            std::cout << " ";
        }
    }

    return 0;
}*/
/*#include<iostream>
using namespace std;
class sample
{
    int x;
    public:
    void getvalue()
        {
            cin>>x;

        }
    
    friend int squae(sample a);
};
int squae(sample a)
{
    return a.x*a.x;
}
int main()
{
    sample b;
    b.getvalue();
    cout<<"Square is  "<<squae(b);
}*/
/*#include<iostream>
using namespace std;
class classB;
class classA{
    private:
    int a;
    public:
    void get()
    {
        cin>>a;
    }
    friend int multiply(classA,classB);


}A;
class classB{
    private:
    int b;
    public:
    friend int multiply(classA,classB);
    void get()
    {
        cin>>b;
    }
}B;
int multiply(classA objecta,classB objectb){
    int s;
    s=objecta.a*objectb.b;
}
main()
{
    A.get();
    B.get();
    cout<<"Multiply : "<<multiply(A,B);
}*/
/*#include<iostream>
using namespace std;
class A{
    int a;
    void get()
    {
        cin>>a;
    }
    friend void multiply(A,B,C);
}o1;
class B{
    int b;
    void get()
    {
        cin>>b;
    }
    friend void multiply(A,B,C);
}o2;
class C{
    int c;
    void get()
    {
        cin>>c;
    }
    friend void multiply(A,B,C);
}o3;
void multiply(A x,B y,C z);
{
    cout<<"multiplication result is"<<x.a*y.b*z.c;
}
int main()
{
    o1.get();
    o2.get();
    o3.get();
    multiply(o1,o2,o3);
}*/
/*#include<iostream>
using namespace std;
class XYZ
{
    int x,y;


    public:
    void getdata()
    {cin>>x>>y;
    }
    friend class ABC;
};
class ABC
{
    
    public:
    void set(XYZ A)
    {
        cout<<"square of x is"<<A.x*A.x;
    }
    void get(XYZ A)
    {
        cout<<"cube of y is"<<A.y*A.y*A.y;
    }

};
int main()
{
   XYZ X;
   ABC OBJ;
   X.getdata();
    OBJ.get(X);
    OBJ.set(A);
}*/
/*#include<iostream>
using namespace std;

enum Month{
 JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER
};

class Year{
 private:
 Month month;
 
 public:
 Year(int m){
 if (m>=1 && m<=12){
 month=static_cast<Month>(m-1);
 }
 else{
 std::cout<<"Invalid month input\n";
 exit(1);
 }
 }
 
 Month getMonth(){
 return month;
 }
};
int main(){
 int inputMonth;
 std::cin>>inputMonth;
 Year year(inputMonth);
 
 std::cout<<"Month: ";
 switch(year.getMonth()){
 case Month::JANUARY:
 std::cout<<"JANUARY";
 break;
 case Month::FEBRUARY:
 std::cout<<"FEBRUARY";
 break;
 case Month::MARCH:
 std::cout<<"MARCH";
 break;
 case Month::APRIL:
 std::cout<<"APRIL";
 break;
 case Month::MAY:
 std::cout<<"MAY";
 break;
 case Month::JUNE:
 std::cout<<"JUNE";
 break;
 case Month::JULY:
 std::cout<<"JULY";
 break;
 case Month::AUGUST:
 std::cout<<"AUGUST";
 break;
 case Month::SEPTEMBER:
 std::cout<<"SEPTEMBER";
 break;
 case Month::OCTOBER:
 std::cout<<"OCTOBER";
 break;
 case Month::NOVEMBER:
 std::cout<<"NOVEMBER";
 break;
 case Month::DECEMBER:
 std::cout<<"DECEMBER";
 break;
 
 }
 std::cout<<std::endl;
 return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    
    
    int a[5];
   
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    int *p=a;
    p=p+2;
    {

    cout<<p<<*p;
    }
    p=p-2;
    {
        cout<<p<<*p;
    }
   
   
    int *q=&a[3];
   // q-p;
    {
        cout<<q-p;
    }
    


}*/
/*#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    void *p;
    void *q;
    p=&a;
    q=&b;
    cout<<"sum is"<<*(int*)p + *(int*)q;
    

}*/
/*#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];

    }
    int *p=a;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+= *p;
        p++;
    }
    cout<<"sum is :"<<sum;
}*/


/*#include<iostream>
using namespace std;

int main() {

    int n, r, rev = 0;
    int *num;
    cout << "Enter a number:";
    cin >> n;
    num = &n;
    while (*num > 0) {
        r = *num % 10;
        rev = rev * 10 + r;
        *num = *num / 10;
    }
    cout << "Reverse number is:" << rev;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    {
        int v=23;
        ptr=&v;
        cout<<"value is"<<*ptr<<endl;
        cout<<"address is"<<ptr<<endl;
    }
    cout<<"calue is"<<*ptr<<endl;
    cout<<"address is"<<ptr;
    ptr=NULL;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int* pvalue=NULL;
    pvalue=new int;
    *pvalue=23;
    cout<<"value before delection:"<<*pvalue<<endl;
    cout<<"address where pointer before delection:"<<pvalue<<endl;
    delete pvalue;
    cout<<"\n value after delection"<<*pvalue<<endl;
    cout<<"address where pointer is pointering after delection:"<<pvalue<<endl;
    pvalue=NULL;
    cout<<"\n"<<pvalue;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a;
    cin>>a;
    ptr=&a;
    if(*ptr%2==0)
    {
        cout<<"the number is prime"<<*ptr;
    }
    else{
        cout<<"the number is not prime"<<*ptr;
    }
}*/
/*#include<iostream>
using namespace std;
class movie
{   
    private:
    string title;
   
    string award;
    string hero;
    string heroine;
    string language;
    public:
   int year;
    void get()
    {
        cin>>title>>year>>award>>hero>>heroine>>language;
        cout<<title<<endl;
        cout<<award<<endl;
        cout<<hero<<endl;
        cout<<heroine<<endl;
        cout<<language<<endl;
    
    }
    void put()
    {
       
     cout<<year<<endl;
    }
};
int main()
{
    movie m;
    movie *p;
    p=&m;
    int movie::*ptr=&movie::year; //pointer to member..
    p->get();
    p->put();

}*/

/*#include<iostream>
using namespace std;
class test
{
    private:
    int x;
    int y;
    public:
    void assign(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    test &setX(int a)
    {
        x=a;
        return *this;

    }
    test &setY(int b)
    {
        y=b;
        return *this;

    }
    void print()
    {
        cout<<"x is:"<<x<<"y= "<<y<<endl;
    }

};
int main()
{
    test obj1;
    obj1.assign(5,5);
    obj1.setX(10).setY(20);
    obj1.print();
}*/
/*#include<iostream>
using namespace std;
class student
{
    private:
    int *rollno;
    string *name;
    public:
    void getdata(int x,string y);
    void putdata();
};
void student ::getdata(int x,string y)
{
    rollno=&x;
    name=&y;

}
void student ::putdata()
{
    cout<<"roll no is:"<<*rollno<<endl;
    cout<<"the name is:"<<*name<<endl;
}
int main()
{
    student s;
    s.getdata(300,"krrish");
    s.putdata();
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    cout<<"sum is:"<<sum;

}*/
//wap to find largest element in 2d array.
/*#include<iostream>
using namespace std;
int main()
{
    int a[5][5];
    int *p=a;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int largest = *p;
    for(int i=0;i<5;i++)
    {
    if(*(p+i)>largest)
    {
        largest=*(p+i);
    }
    }
    cout<<largest<<endl;
}*/
//wap to find largest element in 2d array.
/*#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
    int largest=a[0][0];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        if(a[i][j]>largest);
        {
            largest=a[i][j];
        }
    }
    cout<<largest<<endl;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int item;
    cout<<"enter item"<<item;
    cin>>item;
    if(a[0]==item)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
    }
    else{
        cout<<"item is not found";
    }

}*/
/*#include<iostream>
using namespace std;
class search
{
    public:
    int arr[5];
    int *p=arr;
    int item;
    int i;
    void getdata()
    {
        cout<<"enter the element";
        cin>>item;
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }

    }
    void linear()
    {
        for(int i=0;i<5;i++)
        {
            if(item==*(p+i))
            break;
        }
        if(i==5)
        cout<<"not found";
        else
        cout<<"element found at:"<<i;
    }
};
int main()
{
    search s;
    s.getdata();
    s.linear();
}*/
/*#include<iostream>
using namespace std;
class binary
{
    public:
    int arr[5];
    int key;
    int ub,lb;
    void getdata()
    {
        for(int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
    }
    void putdata()
    {
        while(lb<=ub)
        {
            int mid=lb+ub/2;
            if(arr[mid]==key)
            {
                int loc=mid;
                break;
            }
            else if(arr[mid]>key)
            {
                ub=mid-1;
            }
            else if(arr[mid]<key)
            {
                lb=mid+1;
            }
            
        }
    }
};
int main()
{
    binary b;
    b.getdata();
    b.putdata();

}*/
/*#include<iostream>
using namespace std;
class rectangle
{
    private:
    int l,b;
    
    public:
    rectangle() //default constructor.
    {
        cin>>l;
        cin>>b;

    }
    void area()
    {
        
        cout<<"area of rectangle is: "<<l*b;
    }
};
int main()
{
    rectangle r;
    r.area();
}*/

/*#include<iostream>
using namespace std;
class rectangle
{
    private:
    int l,b;
    
    public:
    rectangle(int x,int y) //parameterised  constructor.
    {
        
        l=x;
        
        b=y;

    }
    void area()
    {
        
        cout<<"area of rectangle is: "<<l*b;
    }
};
int main()
{
    int a,c;
    cin>>a>>c;

    rectangle r(a,c);

    r.area();
}*/
/*#include<iostream>
#include<string>
using namespace std;
class customer
{
    private:
    string c_name;
    int acc_number;
    string dob;
    int balance;
    public:
    customer(string a,int b,string c,int d)
    {
        c_name=a;
        acc_number=b;
        dob=c;
        balance=d;
    }
    void print()
    {
        cout<<"the customer name is"<<c_name;
        cout<<"date of birth is"<<acc_number;
        cout<<"the acc_number is"<<acc_number;
        cout<<"the balance is "<<balance;

    }


};
int main()
{
    int a;
    cin>>a;
    customer c("abc",123,"6sept",10000);
    c.print();
}*/
//copy constructor.
/*#include<iostream>
using namespace std;
class counter
{
    int c;
    public:
    counter(int a)
    {
        c=a;
    }
    counter(counter &ob) //copy
    {
        cout<<"Copy constructor invoked";
        c=ob.c;
    }

};
int main()
{
    counter c1(10);
    counter c2(c1);
}*/
/*#include<iostream>
using namespace std;
class A
{
    int a;
    public:
     A(int x)
     {
        a=x;
     }
     A(A &o)
     {
        a=o.a;
     }
     void display()
     {
        cout<<a<<endl;
     }
};
main()
{
    A a1(5);
    A a2(a1);
    a1.display();
    a2.display();
}*/
/*#include<iostream>
using namespace std;
class marks
{
    int s1,s2;
    public:
        marks(int x,int y):s1(x),s2(y)
        {
            
        }
        marks(marks &e)
        {
            s1=e.s1;
            s2=e.s2;
           
        }
        void display()
        {
            cout<<s1<<" "<<s2<<endl;
        }

};
int main()
{
    marks m1(10,56);
    m1.display();
    marks m2(m1);
    m2.display();
}*/
/*#include<iostream>
using namespace std;

class student
{
    string stuname;
    string fathername;
    string address;
    string city;
    string country;
    int zipcode;
    
    public:
    
    student (string a, string b="sanjeev", string c="civil lines", string d="ldh", string e="india", int f=0)
    {
       stuname = a;
       fathername = b;
       address = c;
       city = d;
       country = e;
       zipcode = f;
    }
    
    void display()
    {
        cout << stuname << " " << fathername << " " << address << " " << city << " " << country << " " << zipcode;
    }
};

int main()
{
    student a1("yuvraj", "Vikram", "Model Town", "Chandigarh", "India", 12345);
    a1.display();
    return 0;
}*/

///filehandling /////////
/*#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
main()
{
    char name[20];
    int rno; 
    ofstream o;
    o.open("abc");
    cin>>name;
    cin>>rno;
    o<<name<<endl;
    o<<rno;
    
    o.close();


}*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ob;
    ob.open("abc.txt");
    int a;
    cin>>a;
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        ob<<a<<"*"<<i<<"="<<a*i<<endl;
    }
    ob.close();
}*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("large.txt");
    int a,b,c;
    cin>>a>>b>>c;
    fout<<a<<" "<<b<<" "<<c;
    fout.close();
    ifstream ob;
    int a1,a2,a3;
    ob.open("large.txt");
    while(ob)
    {
        ob>>a1;
        ob>>a2;
        ob>>a3;
    }
    cout<<a1<<" "<<a2<<" "<<a3<<endl;                                    ;
    ob.close();
    ofstream o("large.txt");
    if(a1>a2&&a1>a3)
    {
        o<<a1;
    }
    else if(a2>a1&&a2>a3)
    {
        o<<a2;
    }
    else{
        o<<a3;
    }
    o.close();
    int x;
    ifstream p("large.txt");
    p>>x;
    cout<<x;
    p.close();
}*/
/*#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string sourceFileName, destinationFileName;
    ifstream sourceFile;
    ofstream destinationFile;
    char ch;
    cout << "Enter source file name: ";
    cin >> sourceFileName;
    sourceFile.open(sourceFileName);
    if (!sourceFile.is_open()) {
        cout << "Error opening source file. Please check if the file exists." << endl;
        return 1;
    }
    cout << "Enter destination file name: ";
    cin >> destinationFileName;
    destinationFile.open(destinationFileName);
    if (!destinationFile.is_open()) {
        cout << "Error creating destination file. Please check if you have the necessary permissions." << endl;
        return 1;
    }
    while (!sourceFile.eof()) {
        sourceFile.get(ch);
        destinationFile.put(ch);
    }
    cout << "File copied successfully." << endl;
    sourceFile.close();
    destinationFile.close();
    return 0;
}*/
/*#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int name()
{
    fstream obj1;
    obj1.open("abc.txt",ios::out);
    fstream obj2;
    obj2.open("large.txt",ios::in);
    char ch;
    if(!obj1||!obj2)
    {
        cout<<"\n file could not be opened";
        exit(1);
    }
    ch=obj2.get();
    /*while(ch!=EOF)
    {
        obj1.put(ch);
        ch=obj2.get();
    }
    while(obj2)
    {
        obj1.put(ch);
        ch=obj2.get();

    }
    while(obj2.eof()==0)
    {
        obj1.put(ch);
        ch=obj2.get();
    }
    cout<<"\n data copied from one file to another";
    return 0;
}*/
/*#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    int pos;
    fstream outfile;
    outfile.open("message.txt",ios::out);
    outfile<<"welcome";
    cout<<"\nthe current position of write pointer is"<<endl;
    cout<<outfile.tellp();
    cout<<"\nenter the position to move:";
    cin>>pos;
    outfile.seekg(pos,ios::beg);
    cout<<"\nthe position of get pointer is";
    cout<<outfile.tellg()<<endl;
    cout<<"\nenter the position to move from current position";
    cin>>pos;
    outfile.seekg(pos,ios::cur);
    cout<<"\nthe position of get pointer is";
    cout<<outfile.tellg()<<endl;
    cout<<"\n enter the position to end "<<endl;
    cin>>pos;
    outfile.seekg(-pos,ios::end);
    cout<<"\nthe position of get pointer is :"<<endl;
    cout<<outfile.tellg()<<endl;
    cout<<outfile.tellp()<<endl;


}*/
/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int marks[]={98,67,89,100,45,65,51,78,12,43};
    int arr[10]={0};
    fstream FILE;
    FILE.open("temp",ios::out|ios::binary);
    FILE.write((char *)marks,sizeof(marks));
    FILE.close();
    FILE.open("temp",ios::in|ios::binary);
    FILE.read((char *)arr,sizeof(arr));
    cout<<"\n MARKS OBTAINED";
    for(int i=0;i<10;i++)
    {
        cout<<"\t"<<arr[i];

    }
    FILE.close();
}*/
/*#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class employee 
{
    private:
    int emp_code;
    char name[20];
    int hra;
    int da;
    int ta;
    public:
    void read_data()
    {
        cout<<"\n\n enter the employee code";
        cin>>emp_code;
        cout<<"\n\n enter the name of the employee";
        cin>>name;
        cout<<"\n\n enter the hra,da and ta:";
        cin>>hra>>da>>ta;

    }
    void show_data()
    {
        cout<<"\n\n EMP CODE:"<<emp_code;
        cout<<"\n\n NAME: "<<name;
        cout<<"\n\n HRA,DA AND TA:"<<hra<<"\t"<<da<<"\t"<<ta;
    }

};
int main()
{
    fstream FILE;
    employee e[5],d[3];
    int i;
    FILE.open("EMPLOYEE1",ios::out|ios::binary);
    cout<<"\n enter the details of three employee";
    cout<<"\n--------------------------------------";
    for(int i=0;i<3;i++)
    {
        e[i].read_data();
        FILE.write((char *)&e[i],sizeof(e[i]));

    }
    FILE.close();
    FILE.open("employee1",ios::in|ios::binary);
    for(int i=0;i<3;i++)
    {
        FILE.read((char *)&d[i],sizeof(d[i]));
        d[i].show_data();
    }
    FILE.close();
    return 0;
}*/
/*#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    fstream file;
    int lines=1, nospace=0, nochars=0;
    char ch;

    file.open("large.txt", ios::in);

    if(!file.is_open())
    {
        cout << "FILE CAN NOT BE OPENED";
        exit(1);
    }

    ch = file.get();

    while(!file.eof())
    {
        nochars++;

        if(ch == '\n')
        {
            lines++;
        }
        else if(ch == ' ')
        {
            nospace++;
        }

        ch = file.get();
    }

    cout << "\n lines : " << lines << " " << "spaces: " << nospace << " " << " char " << nochars;
}*/


/*#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class employee 
{
    private:
    int emp_code;
    char name[20];
    int hra;
    int da;
    int ta;
    public:
    void read_data()
    {
        cout<<"\n\n enter the employee code";
        cin>>emp_code;
        cout<<"\n\n enter the name of the employee";
        cin>>name;
        cout<<"\n\n enter the hra,da and ta:";
        cin>>hra>>da>>ta;

    }
    void show_data()
    {
        cout<<"\n\n EMP CODE:"<<emp_code;
        cout<<"\n\n NAME: "<<name;
        cout<<"\n\n HRA,DA AND TA:"<<hra<<"\t"<<da<<"\t"<<ta;
    }

};
int main()
{
    fstream FILE;
    employee e;
    int no;
    FILE.open("employee1",ios::in|ios::binary);
    cout<<"\n Enter the object whose record has to be displayed";
    cin>>no;
    int location=(no-1)*sizeof(e);
    FILE.seekg(location);
    FILE.read((char*)&e,sizeof(e));
    e.show_data();
    
}*/
//updating 
/*#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class employee 
{
    private:
    int emp_code;
    char name[20];
    int hra;
    int da;
    int ta;
    public:
    void read_data()
    {
        cout<<"\n\n enter the employee code";
        cin>>emp_code;
        cout<<"\n\n enter the name of the employee";
        cin>>name;
        cout<<"\n\n enter the hra,da and ta:";
        cin>>hra>>da>>ta;

    }
    void show_data()
    {
        cout<<"\n\n EMP CODE:"<<emp_code;
        cout<<"\n\n NAME: "<<name;
        cout<<"\n\n HRA,DA AND TA:"<<hra<<"\t"<<da<<"\t"<<ta;
    }

};
int main()
{
    fstream File;
    employee e;
    int no;
    File.open("employee1",ios::ate|ios::in|ios::out|ios::binary);
    int num_objects=File.tellp()/sizeof(e);
    cout<<"\n enter the object whose object whose record has to be updated:";
    cin>>no;
    int location=(no-1)*sizeof(e);
    File.seekp(location);
    cout<<"\nenter the new details";
    e.read_data();
    File.write((char*)&e,sizeof(e));
    File.seekg(0);
    cout<<"\n\n File Updated-------";
    for(int i=0;i<num_objects;i++)
    {
        File.read((char*)&e,sizeof(e));
        e.show_data();
    }
}*/
//INHERITANCE
/*#include<iostream>
using namespace std;
class student 
{
    private:
    int rollno;
    protected:
    char section[20];
    public:
    void  getrollno()
    {
        cin>>rollno>>section;
    }
    void showrollno()
    {
        cout<<rollno<<" "<<section;
    }
};
class result:public student
{
    private:
    int fee;
    public:
    void getfess()
    {
        cin>>fee;

    }
    void setfess()
    {
        cout<<fee<<endl;
      
    }
};
int main()
{
    result r;
    r.getrollno();
    r.getfess();
    r.setfess();
    r.showrollno();

}*/
/*#include<iostream>
using namespace std;
class student 
{
    private:
    int rollno;
    protected:
    char section[20];
    public:
    void  getrollno()
    {
        cin>>rollno>>section;
    }
    void showrollno()
    {
        cout<<rollno<<" "<<section;
    }
};
class result: private student
{
    private:
    int fee;
    public:
    void getfess()
    {
        getrollno();
        
        cin>>fee;
        showrollno();
    }
    void setfess()
    {
         
        cout<<fee<<endl;
      
    }
};
int main()
{
    result r;
 
    r.getfess();
    r.setfess();


}*/
/*#include<iostream>
using namespace std;
class rectangle
{
    protected:
    int l,w;
    public:
    void get()
    {       
        cin>>l>>w;
    }   
};
class circle
{
    protected:
     float r;
     public:
     void gett()
     {
        cin>>r;
     }
};
class area:public rectangle,public circle
{
    public:
    void display()
    {
        cout<<"area is"<<l*w<<endl;
        cout<<"area of circle"<<3.14*r*r;
    }
};
int main()
{
    area a;
    a.get();
    a.gett();
    a.display();
}
#include<iostream>
using namespace std;
class acad
{
    protected:
    float marks[5];
    int sum;
    public:
    void get()
    {
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }

    }
    void put()
    {
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<endl;
        }

    }
    int s()
    {
        sum=0;
        for(int i=0;i<5;i++)
        sum=sum+marks[i];
        return sum;
    }
};
class sports
{
    protected:
    float sportsweightage;
    public:
    void p()
    {
        cin>>sportsweightage;
        cout<<"sportsweightage is"<<sportsweightage<<endl;
    }
};
class result:public acad,public sports
{
    protected:
   

    public:
    void display()
    {

       cout<<"\n average marks are"<<(s()+sportsweightage)/600*100;
      
        
    }
};
int main()
{
    result obj1;
    obj1.get();
    obj1.put();
    obj1.p();
    obj1.display();
}*/
/*#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void gett()
    {
        cin>>a;

    }

};
class B : public A
{
    public:
    int  factorial=1;

    void get()
    {
        if(a<0)
        {
            cout<<"ERROR";
        }
        else 
        {
            for(int i=1;i<=a;i++)
            {
                factorial*=i;

            }
        }
        cout<<"factorial is"<<factorial<<endl;
        
    }
};
class C: public A
{
    public:
    void put()                              /* void cube()
                                                    {
                                                        x=get();
                                                        cout<<x*x*x;
                                                    }*/
   /* {
    cout<<"the cube is"<<a*a*a<<endl;
    }
};
int main()
{
    B b;
    b.gett();
    b.get();
    C c;
    c.gett();
    c.put();
    
}*/

/*#include<iostream>
using namespace std;
class student 
{
    protected:
    int rno;
    public:
    void gett()
    {
        cin>>rno;
        
    }
};
class test : public student 
{
    protected:
    int m1,m2;
    public:
    void get()
    {
        cin>>m1>>m2;
    }
};
class result :public test
{
    public:
    void display()
    {
        cout<<"roll no"<<rno<<endl;
        cout<<"total marks are"<<m1+m2<<endl;
    }
    
};
int main()
{
    result r;
    r.gett();
    r.get();
    r.display();
}*/
/*#include<iostream>
using namespace std;
class length
{
    protected:
    int l;

    /*public:
    int get()
    {
        cin>>l;
        return l;
    }*/
/*};
class breadth:public length{
    protected:
    int b;

    /*public:
    int put()
    {
        cin>>b;
        return b;
    }*/
//};
/*class height :public breadth
{
    protected:
    int h;
  
    /*int gtt()
    {
        cin>>h;
        return h;
    }*/
/*};
class vol :protected height
{
    public:
    void get()
    {
        cin>>l>>b>>h;
    }
    void volume()
    {
    cout<<" the volume is"<<l*b*h<<endl;
    }
};
int main()
{
    vol v;
    v.get();
    v.volume();
 
}*/
/*#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void get()
    {
        A ::get();
        cin>>a;
        cout<<"a";
    }
    
   
};

class B : public A
{
    protected:
    int b;
    public:
    void get()
    {
        cin>>b;
        cout<<"Bb";
    }
};
int main()
{
    B b;
    b.get();

}*/


/*#include<iostream>
using namespace std;
class student 
{
    protected:
    int rno;
    public:
    void geyt()
    {
        cin>>rno;
    }
};
class test:public student
{
    protected:
    int m1,m2;
    public:
    void geet()
    {
        cin>>m1>>m2;
    }

};
class sports
{
    protected:
    int sno;
    public:
    void geth()
    {
        cin>>sno;
    }
};
class result :public sports,public test
{
    public:
    void gety()
    {
        
        cout<<"the roll no is"<<rno<<" \n"<<"the sum is "<<m1+m2+sno;
    }
};
int main()
{
    result r;
    r.geyt();
    r.geet();
    r.geth();
    r.gety();

}*/
/*#include<iostream>
using namespace std;
class student
{
    protected:
    int rno;
    int id;
    public:
    void get()
    {
        cin>>rno>>id;
    }
};
class acad:public  virtual student
{
    protected:
    int m1,m2;
    public:
    void get2()
    {
        cin>>m1>>m2;
    }
};
class sports: public virtual student 
{
    protected:
    int sno;
    public:
    void get1()
    {
        cin>>sno;
    }
};
class result:public acad,public sports
{
    public:
    void sum()
    {
        cout<<"THE ROLL NO AND ID IS"<<rno<<" "<<id<<endl;
        cout<<"THE TOTAL MARKS IS"<<m1+m2+sno;
    }
};
int main()
{
    result r;
    r.get();
    r.get2();
    r.get1();
    r.sum(); 
}*/
/*#include<iostream>
using namespace std;
class course
{
    protected:
    char cname[20];
    int cid;
    public:
    void get()
    {
        cin>>cname;
        cin>>cid;

    }

};

class special : public course
{
    protected:
    char type[20];
    public:
    void get()
    {
       
        cin>>type;
        cout<<type;
    }
};
int main()
{
    special s;
    s.course::get();
    s.get();

}*/
//order of execution...
/*#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"constructor of a"<<endl;
    }
    ~A()
    {
        cout<<"DESTRUCTOR OF A"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"Constrcutor of b"<<endl;
    }
    ~B()
    {
        cout<<"destructor of b"<<endl;
    }
};
class C : public B
{
    public:
    C()
    {
        cout<<"construictor of c"<<endl;
    }
    ~C()
    {
        cout<<"Destructor of c"<<endl;
    }
};
int main()
{
    C c;
}*/
//paraterised constructor
/*#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(int a)
    {
        x=a;
        cout<<"constructor of A"<<endl;
    }
    ~A()
    {
        cout<<"object A destroyed"<<endl;
    }
};
class B:public A
{
    int z;
    public:
    B(int y):A(y)   //Parameter to be pass to the base class..
    {
        z=y;
        cout<<"Constructor of B"<<z<<endl;
    }
    ~B()
    {
        cout<<"B destroyed "<<endl;
    }
};
int main()
{
    B b(10);
}*/
/*#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(int a)

    {
        x=a;
        cout<<"constructor of a"<<endl;
    }
    ~A()
    {
        cout<<"DESTRUCTOR OF A"<<endl;
    }
};
class B:public A
{
    int z;
    public:
    B(int y):A(y)
    {
        y=z;
        cout<<"Constrcutor of b"<<endl;
    }
    ~B()
    {
        cout<<"destructor of b"<<endl;
    }
};
class C : public B
{
    public:
    C(int n):B(n)
    {
        cout<<"construictor of c"<<endl;
    }
    ~C()
    {
        cout<<"Destructor of c"<<endl;
    }
};
int main()
{
    C c(10);
}*/
/*#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"constructor of a "<<endl;
    }
    ~A()
    {
        cout<<"destructor of a"<<endl;
    }
};
class B
{
    public :
    B()
    {
        cout<<"constructor b"<<endl;
    }
    ~B()
    {
        cout<<"destructor of b"<<endl;
    }
};
class C:public A,public B
{
    public:
    C()
    {
        cout<<"constructor of c"<<endl;
    }
    ~C()
    {
        cout<<"destructor of c"<<endl;
    }
};
int main()
{
    C c;

}*/
/*#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"constructor of a "<<endl;
    }
    ~A()
    {
        cout<<"destructor of a"<<endl;
    }
};
class B
{
    public :
    B()
    {
        cout<<"constructor b"<<endl;
    }
    ~B()
    {
        cout<<"destructor of b"<<endl;
    }
};
class C:public A,virtual public  B
{
    public:
    C()
    {
        cout<<"constructor of c"<<endl;
    }
    ~C()
    {
        cout<<"destructor of c"<<endl;
    }
};
int main()
{
    C c;

}*/

/*#include<iostream>
using namespace std;
class length
{
    protected:
    int l;
    public:
    length(int a)
    {
        l=a;
        cout<<"constructor of length is"<<endl;
    }
    ~length()
    {
        cout<<"destructor of length l"<<endl;
    }
};
class width:public length
{
    protected:
    int w;
    public:
    width(int b):length(30)
    {
        w=b;
        cout<<"constructor of width is"<<endl;
    }
    ~width()
    {
        cout<<"destructor of width is"<<endl
    }
};
class area:public width
{
    protected:
    int are;
    public:
    area(int c):width(c)
    {
        are=a*b<<endl;
        cout<<"the area is"<<are;
        cout<<"constructor of area"<<endl;

    }
    ~area()
    {
        cout<<"destructor of area is"<<endl;
        
    }
};
int main()
{
    area a(10);
}*/
/*#include<iostream>
#include<string.h>
using namespace std;
class department
{
    public:
    char name[20];
    department()
    {
        strcpy(name,"abc");
    }
    ~department()
    {
        cout<<"department class destroyed"<<endl;
    }
};
class professor
{
    int pid;
    int exp;
    department *d;
    public:
    professor(int a,int b,department *d)
    {
        pid=a;
        exp=b;
        this->d=d;

    }
    ~professor()
    {
        cout<<"professor class destroyed"<<endl;
    }
};
main()
{
    department D;
    {
        professor p(1,2,&D);
    }
    cout<<"At this point professor gets delected but department is still there...."<<endl;
}*/
/*#include<iostream>
using namespace std;
class birthday
{
    int date,month,year;
    public:
    birthday(int d,int m,int y)
    {
        date=d;
        month=m;
        year=y;
        cout<<"birthday constructor"<<endl;
    }
    ~birthday()
    {
        cout<<"Birthday destructor "<<endl;
    }
    void display()
    {
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};
class person
{
    string name;
    birthday b;
    public:
    person(string n,int d,int m,int y):b(d,m,y)
    {
        name=n;
        cout<<"person constructor"<<endl;
    }
    void show()
    {
        b.display();
        cout<<name<<endl;
    }
    ~person()
    {
        cout<<"person destructor"<<endl;
    }
};
main()
{
    person ob("krrish",12,10,2023);
    ob.show();
}*/
/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    float *p;
    float *r;
    int *t;
    float si;
    p=new float();
    cin>>*p;
    r=new float;
    cin>>*r;
    t=new int ;
    cin>>*t;
    //si=new float;
    si=((*p)*(*r)*(*t))/100;
    cout<<"the simple interest is"<<si;
    delete p;
    delete r;
    delete t;
   

}*/
/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
    p=new int;
    cin>>*p;
    int *fact=new int(1);
    if(*p==0||*p==1)
    {
        cout<<"the factorial is "<<"1";
    }
    else
    {
        for(int i=1;i<=*p;i++)
        *fact=*fact*i;
        cout<<"the factorioal is "<<*fact;
        
    }
    delete p;
    delete fact;

}*/
/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    double *arr;
    double *s=new double(0.0);
    arr=new double[5];
    if(arr=NULL)
    {
        cout<<"PROBLEM IN MEMORY ALLOCATION\n";
        exit(1);
    }
    cout<<"\nenter array elements";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        //cin>>*(arr+i);
        //cin>>*(i+arr);
    }
    for(int i=0;i<5;i++)
    {
        *s=*s+arr[i];
        cout<<"sum is "<<sum;
        cout<<"average is"<<*s/5;

    }
    delete[] arr;
    delete s;
}*/
/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int *arr=new int [5];
    int *arr2=new int [5];
    int *arr3=new int [5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<5;i++)
    {
        arr3[i]=arr[i]+arr2[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr3[i]<<" ";
    }
    delete[] arr;
    delete[] arr2;
    delete[] arr3;


}*/
/*#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char* str="hello,this is dyanmic memory allocation";
    int len=strlen(str);
    char* ptr;
    ptr=new char[len+1];
    strcpy(ptr,str);
    cout<<"ptr: "<<ptr<<endl;
    delete[] ptr;
    return 0;
}*/
/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int *v=new int;
    cin>>*v;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==*v)
        {
            cout<<"element found";
            break;
        }
    }
    //if(i==5)
    {
        cout<<"element not found";
    }
    delete[] arr;
    delete v;
}*/
/*#include<iostream>
using namespace std;
class employee
{
    public:
    virtual void showsalary() const {
        cout<<"salary"<<endl;
    }
};
class manager:public employee
{
    public:
    void showsalary() const override{
        cout<<"salary1"<<endl;
    }
};
int main()
{
    employee* empPtr1=new manager();
    empPtr1->showsalary();
    employee* empPtr2=new employee();
    empPtr2->showsalary();
    delete empPtr1;
    delete empPtr2;


}*/
/*#include<iostream>
using namespace std;
class rectangle
{
    public:
    virtual void area()=0;
    rectangle()
    {
        int l,b;
        cin>>l>>b;
        cout<<"area of rectangle"<<l*b<<endl;
    }
};
class square:public rectangle
{
    public:
    void area()
    {
        int r;
        cin>>r;
        cout<<"area of square is"<<r*r<<endl;
    }


};
int main()
{
    rectangle *ptr;
    square obj1;
    ptr=&obj1;
    ptr->area();
}*/
//self referental class
/*#include<iostream>
#include<conio.h>
using namespace std;
class s
{
    int rollno;
    char name[10];
    int age;
    s *next;
    public:
        s()
        {
            next=NULL;
        }
        void getdata()
        {
            cout<<"enter rollno,name,age"<<endl;
            cin>>rollno>>name>>age;

        }
        void link(s *t)
        {
            next=t;

        }
        void print()
        {
             s *p=this;
             while(p!=NULL)
             {
                cout<<"Rollno = "<<p->rollno<<" "<<"Name= "<<p->name<<" "<<"Age ="<<p->age<<endl;
                p=p->next;

             }  
        }
};
int main()
{
    s o1,o2,o3;
    o1.getdata();
    o2.getdata();
    o3.getdata();
    o1.link(&o2);
    o2.link(&o3);
    o1.print();
    //getch();
}*/
//exception handling..
/*#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter values of a and b";
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"result(a/x)="<<a/x;
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"exception caught:x"<<x;
    }
    cout<<"end";
    return 0;    
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    try{
    int i=0;
    while(1)
    {
        cout<<a[i]<<endl;
        i++;
        if(i==5)

        throw i;
    }
    }
        catch(int j)
        {
            cout<<"arraay are outof range"<<endl;
        }

    
}*/
//case 2 throw outside try
/*#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
    cout<<"You are inside the function"<<endl;
    if((x-y)!=0)
    {
      int R=z/(x-y);
        cout<<"Result="<<R; 
        
    }
    else
    {
        throw(x-y);
    }

}
int main()
{
    try
    {
        cout<<"we are inside the try block"<<endl;
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
        cout<<"exception is caught"<<endl;
    }
    return 0;
    
}*/
/*#include<iostream>
using namespace std;
void Test(int x)
{
    try
    {
        if(x==11)

        throw x;
        else if(x==0)
        {
            throw 'x';
        }
        else if(x==-1)
        {
            throw 1.0;
        } 
        cout<<"end of try block"<<endl;
        
    }
    catch(char c)
    {
        cout<<"caught a character"<<endl;
    }
    catch(int m)

    {
        cout<<"caught an integer"<<endl;
    }
    catch(double d)
    {
        cout<<"caught a double"<<endl;
    }
    cout<<"end of the catch custom"<<endl;
}
int main()
{
    cout<<"Testing multiple catches"<<endl;
    cout<<"x==1"<<endl;
    Test(1);
    cout<<"x==0"<<endl;
    Test(0);
    cout<<"x==-1"<<endl;
    Test(-1);
    cout<<"x==2"<<endl;
    Test(2);
    return 0;
}*/

/*#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
    if(x==0)
    throw x;
    if(x==-1)
    throw 'x';
    if(x==1)
    throw 1.0;
    } 

catch(...)
{
    cout<<"caught an exception"<<endl;
}
}

int main()
{
    cout<<"testing generic catch"<<endl;
    test(-1);
    test(0);
    test(1);
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    try
    {
        for(int i=0;i<n;i++)
        {
        if (arr[i]%2==0)
        {
            throw arr[i];
        }
        }
        else{
            cout<<"not caught an exception"<<endl;
        }
        
    }
    catch(...)
    {
        cout<<"caught an exception"<<endl;
    }
    
}*/
/*#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class error
{
    int err_code;
    char *err_desc;
    public:
    error(int c,char *d)
    {
        err_code=c;
        err_desc=new char[strlen(d)];
        strcpy(err_desc,d);
    }
    void err_display(void)
    {
        cout<<"error code :"<<err_code<<" "<<"error description:"<<err_desc;

    }
};
int main()
{
    try
    {
        cout<<"press any key";
        getch();
        throw error(99,"test exception");
    }
    catch(error e)
    {
        cout<<"exception caught successfully";
        e.err_display();
    }
    getch();
    return 0;

    
}*/
//RETHROWING FUNCTION
/*#include<iostream>
using namespace std;
void divide(double x,double y)
{
    cout<<"INSIDE FUNCTION"<<endl;

try
{
    {
        if(y==(0.0))
        throw y;
        else
        cout<<"division="<<x/y<<endl;
    }
}
catch(double)
{
    cout<<"caught double inside function"<<endl;
    throw;
}
cout<<"end of function"<<endl;
}
int main()
{
    cout<<"iNSIDE MAIN"<<endl;
        try
        {
            divide(10.5,2.0);
            divide(20.0,0.0);
        }

        catch(double)
        {
           cout<<"caught double inside main"<<endl;
        }
        cout<<"end of main"<<endl;
        return 0;

        
}*/
/*#include<iostream>
using namespace std;
template <class T>
T square(T a)
{
    return a*a;
}
main()
{
    int a;
    cin>>a;
    cout<<square<int>(a);
    double b;
    cin>>b;
    cout<<square<double>(b);

}*/
/*#include<iostream>
using namespace std;
template<class A>
A largest(A a,A b)
{
    if(a>b)
    {
        cout<< "a is greater than b"<<endl;
        return a;

    }
    else
    {
        cout<<"a is not greater than b"<<endl;
        return b;
    }

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<largest<int>(a,b);
    double p,q;
    cin>>p>>q;
    cout<<largest<double>(p,q);
}*/

/*#include <iostream> 
using namespace std; 
template <class T> 
int swap_numbers(T& x, T& y) 
{ 
	T t; 
	t = x; 
	x = y; 
	y = t; 
	return 0; 
} 
int main() 
{ 
	int a, b; 
	a = 10, b = 20;
	swap_numbers(a, b); 
	cout << a << " " << b << endl; 
	return 0; 
}*/
/*#include<iostream>
using namespace std;
template<class Y>
void smallest(Y total)
{
    Y total=A[0];
    for(int i=0;i<5;i++)
    {
        if(A[i]<total);
        {
            total=A[i];
            cout<<total;
            return 0;

        }

    }
}
template<class T>
void read(T A[])
{
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
    }
}
int main()
{
    int Array[5];
    float Array[5];
    cout<<"\n Enter the integer array elements:";
    read<int>(Array);
    cout<<"\n the minimum elements is"<<smallest<int>(Array);
    cout<<"\n enter the float array elements";
    read<float>(Array);
  cout<<"\n the minimum elements is"<<smallest<float>(Array);
    
}*/
/*#include<iostream>
using namespace std;
template<class T,class t1,class t2>
void average(T num,t1 num1,t2 num2)
{
    return(num+num1+num2)/3;
}
int main()
{
    int a;
    double b;
    float c;
    cout<<average<int ,double,float>(a,b,c);

}*/
/*#include<iostream>
using namespace std;
template <class T>
void display(T a)
{
    cout<<"AREA OF CIRCLE IS"<<3.14*a*a<<endl;
}
template <class T1>
void display(T1 b,T1 c)
{
    cout<<"AREA OF TRIANGLE IS"<<0.5*b*c<<endl;
}
template <class t1>
void display(t1 j,t1 k)
{
    cout<<"AREA OF RECTANGLE IS"<<j*k<<endl;

}
template <class t2>
void display(t2 l)
{
    cout<<"area of square is "<<l*l<<endl;
}
int main()
{
    int a;
    double b,c;
    int j,k;
    int l;
    cout<<display<int>(a);
    cout<<display<double>(b,c);
    cout<<display<int,int>(j,k);
    cout<<display<int>(l);

}*/
/*#include<iostream>
using namespace std;
template<class T>

int circle(T num){
    return (3.14*num*num);
}
template<class T1,class T2>
int trai(T1 x,T2 y){
    return (0.5*x*y);

}
template<class T3,class T4>
int rec(T3 a,T4 b){
    return (a*b);

}
template<class T4>
int squ(T4 c){
    return (c*c);

}
int main(){
    int num=2;
    int x=4,y=5;
    int a=6,b=3;
    int c=8;
    cout<<"area of circle: "<<circle<int>(num)<<endl;
    cout<<"area of triangle: "<<trai<int,int>(x,y)<<endl;
    cout<<"area of circle: "<<rec<int,int>(a,b)<<endl;
    cout<<"area of circle: "<<squ<int>(c)<<endl;
}*/
/*#include<iostream>
using namespace std;
const int SIZE=10;
class safe
{
    private:
    int arr[SIZE];
    public:
    safe()
    {
        register int i;
        for(int i=0;i<SIZE;i++)
        {
            arr[i]=i;

        }

    }
    int &operator[](int i)
    {
        if(i>SIZE)
        {
            cout<<"index out of bounds"<<endl;
            return arr[0];
        }
        return arr[i];
    }
};

    int main()
    {
        safe A;
        cout<<A[5];
        cout<<A[12];
        return 0;
    }*/
   /* #include<iostream>
    using namespace std;
    void Funct();
    int main()
    {
        try
        {
            {
                Funct();
            }
        }
        catch(double)
        {
            cerr <<"caught a double type" << '\n';
        }
        return 0;

        
    }
    void Funct()
    {
        throw 3;
    }*/
/*#include<iostream>
using namespace std;
class myexception
{
    public:
    string what() const{
        return "custom exception";
    }
};
int main()
{
    try{
        throw myexception();
    }
    catch(myexception &e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    double a=10,b=5,res;
    char Operator='/';
    try{
        if(b==0)
        throw"division by zero not allowed";
        res=a/b;
        cout<<a<<"/"<<b<<" = "<<res;
    }
    catch(const char* str)
    {
        cout<<"\njjjjjj"<<str;

    }
}*/
/*#include<iostream>
using namespace std;
class MyException{};
int func(int x)
{
    if(x<0)
        throw MyException();
    return x;    
}
int main()
{
    try
    {
        int result1=func(5);
        int result2=func(-3);
        cout<<result1<<" "<<result2;
    }

    catch(MyException& e)
    {

        cout<<"Caught MyException";
    }
    return 0;

    
}*/
/*#include<iostream>
using namespace std;
template<class T,int max>
int arrMin(T arr[],int n)
{
    int m=max;
    for(int i=0;i<n;i++)
    if(arr[i]<m)
    m=arr[i];
    return m;
}
int main()
{
    int arr1[]={10,20,15,12};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    char arr2[]={1,2,3};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<arrMin<int,10000>(arr1,n1)<<endl;
    cout<<arrMin<char,256>(arr2,n2);
    return 0;
}*/
/*#include<iostream>
using namespace std;
template <typename T>
T TestFunct(T Var1)
{
    return Var1*2;
}
int main()
{
    cout<<TestFunct<int>(1254)<<endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
template<class T =float ,int i=5>
class A
{
    public:
    A();
    int value;
};
template<> class A<>
{
    public:
    A();
};
template<> class A<double,10>
{
    public:
    A();
};
template<class T,int i>
A<T,i>::A(): value(i){
    cout<<value;
}
A<>::A(){
    cout<<"default";
}
int main()
{
    A<int,6> x;
    A<> y;
    A<double,10> z;
}*/
/*include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
int square(int x)
{
    if(x<0)
    throw runtime_error("Negative number detected");
    return x*x;
}
string square(const string& ss)
{
    if(ss.empty())
    throw invalid_argument("empty string detected");
    return ss+ss;
}
int main()
{
    int i=4,ii;
    string ww("A");
    try
    {
        ii=square(i);
        cout<<i<<ii;

    }
    catch(const std::exception& ex)
    {
        cout<<"Exception caught: "<<ex.what()<<endl;
    }
    try{
        cout<<square(ww)<<endl;

    }
    catch(const std::exception& ex)
    {
        cout<<"Exception caught: "<<ex.what()<<endl;
        throw;
    }
    return 0;

}*/
/*#include<iostream>
using namespace std;
void PrintSequence(int StopNum){
    int Num=1;
    while(true)
    {
        if(Num>=StopNum)
        throw Num;
        cout<<Num<<endl;
        Num++;
    }
}
int main()
{
    try{
        try{
            PrintSequence(2);

        catch(int ExNum)
        {
            cout<<"Caught exception:"<<ExNum<<endl;
            throw;
        }
        catch(int ExNum)
        {
            cout<<"Rethrown exception:"<<ExNum<<endl;

        }
        return 0;
    }
}
}*/
/*#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Child {
private:
    string name;
    int age;
    T parentContact;

public:
    Child(string n, int a, T pc) : name(n), age(a), parentContact(pc) {}

    void displayDetails() {
        cout << "Child Name: " << name << ", Age: " << age << ", Parent's Contact: " << parentContact << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Child<long long>* children = new Child<long long>[n];

    for (int i = 0; i < n; i++) {
        string name;
        int age;
        long long parentContact;

        cin >> name >> age >> parentContact;

        children[i] = Child<long long>(name, age, parentContact);
    }

    cout << "Enrolled Children:" << endl;
    for (int i = 0; i < n; i++) {
        children[i].displayDetails();
    }

    delete[] children;

    return 0;
}*/
//stl
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(5);
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    {
        v1[i]=i;
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<endl;
    }
    for(int i=5;i<10;i++)
    {
        v1.push_back(i);

    }
    cout<<"size is\t "<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\t";
    }
    cout<<endl;
    v1.pop_back();
    v1.pop_back();
    cout<<"size is \t"<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\t";
    }

    //another wayy
    cout<<"iterator way";
    vector<int>::iterator v;
    v=v1.begin();
    while(v!=v1.end())
    {
        cout<<"\n value of v="<<*v<<endl;
        v++;
    }
    return 0;


}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(10);
    cout<<"size is \t"<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
    {
        //v1[i]=i;
        cin>>v1[i];


    }
    vector<int>::iterator itr=v1.begin();
    itr+=5;
    v1.insert(itr,100);
    cout<<" "<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\t";
    }
    return 0;

}*/
/*#include<iostream>
using namespace std;
int main()
{
    vector<int> v1;
    cout<<v1.size()<<endl;
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(2);
    v1.push_back(1);
    cout<<"szie of vector ="<<v1.size()<<endl;
    cout<<"\n elements in array are\n";
    int i;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\t";
    }
    v1.pop_back();
    cout<<"\n elements in array are\n";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\t";

    }
    cout<<"\n using iterator for displaying \n";
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<"\t";
    }
    v1.push_back(8);
    v1.push_back(9);
    cout<<endl;
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<"\t";
    }
    it=v1.begin();
    it++;
    it++;
    v1.insert(it,15);
    cout<<"\n after insertion\n";
    cout<<endl;
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<"\t";
    }
    v1.erase(v1.begin()+4);
    cout<<"\n after deletion \n";
    cout<<endl;
    for(t=v1.begin();it!=v1.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl<<v1.size()<<endl;
    v1.clear();
    cout<<endl<<v1.size()<<endl;

    return 0;

}*/
/*#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>r1;
    r1.push_back(10);
    r1.push_back(20);
    r1.push_back(30);
    r1.push_front(15);
    r1.push_front(25);
    list<int>::iterator it=r1.begin();
    cout<<"\n element in linked are\n";
    for(it=r1.begin();it!=r1.end();it++)
    {
        cout<<*it<<"\t";
    }
    r1.pop_front();
    cout<<"\n element in linked list are\n";
    for(it=r1.begin();it!=r1.end();it++)
    {
        cout<<*it<<"\t";
    }
    r1.pop_back();
    cout<<"\n element in linked list are\n";
    for(it=r1.begin();it!=r1.end();it++)
    {
        cout<<*it<<"\t";
    }
    r1.sort();
    cout<<"\n element in linked list are\n";
    for(it=r1.begin();it!=r1.end();it++)
    {
        cout<<*it<<"\t";
    }
    r1.reverse();
    cout<<"\n element in linked list are\n";
    for(it=r1.begin();it!=r1.end();it++)
    {
        cout<<*it<<"\t";
    }
    it=r1.begin();
    it++;
    r1.erase();
    cout<<"\n element in linked list are\n";
    for(it=r1.begin();it!=r1.end();it++)
    {
        cout<<*it<<"\t";
    }
    return 0;
}*/
//list_merge_other_function
/*#include<iostream>
#include<list>
using namespace std;
void display(list<int> & l)
{
    list<int>::iterator p;
    for(p=l.begin();p!=l.end();p++)
    cout<<"\n"<<*p;

}
int main()
{
    list<int> list1;
    list<int> list2(5);
    for(int i=0;i<3;i++)
    list1.push_back(i);
    cout<<"\n displaying first list:";
    display(list1);
    list<int>::iterator p;
    for(p=list2.begin();p!=list2.end();p++)
    {
    *p=1;
    }
    cout<<"Displaying second list:";
    display(list2);
    cout<<"\n Poping element from front:";
    display(list2);
    cout<<"\n sorting first list :";
    list1.sort();
    display(list1);
    cout<<"\n sorting second list:";
    list2.sort();
    display(list2);
    cout<<"\n Merge list:";
    list1.merge(list2);
    display(list1);
    list1.reverse();
    cout<<"reverse merge list:"<<endl;
    display(list1);


}*/
//alogorthm for for_each()....
/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void show(int n)
{
    cout<<n<<" ";

}
int main()
{
    int arr[]={12,3,17,8};
    vector<int> v(arr,arr+4);
    for_each(v.begin(),v.end(),show);
   
}*/
//find()
/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int key;
    int arr[]={12,3,17,8,34,56,9};
    vector<int>v(arr,arr+7);
    vector<int>::iterator iter;
    cout<<"\n Enter value:";
    cin>>key;
    iter=find(v.begin(),v.end(),key);
    if(iter!=v.end())
    {
        cout<<"element"<<key<<"found"<<endl;
    }
    else
    {
        cout<<"Element"<<key<<"not in vector v"<<endl;
    }

}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={12,3,17,8};
    vector<int> v(arr,arr+4);
    for(vector<int>::iterator i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

}*/
//write a program to create a vector of size 5 input and print and 2 more values and print even number
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(5);
    cout<<"size is \t"<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
    {
        //v1[i]=i;
        cin>>v1[i];


    }
     for(int i=0;i<v1.size();i++)
    {
        
        cout<<v1[i];


    }

    vector<int>::iterator itr=v1.begin();
    itr+=5;
    v1.insert(itr,100);
    cout<<" "<<v1.size()<<"\n";
    vector<int>::iterator itr1=v1.begin();
    itr1+=6;
    v1.insert(itr1,84);
    cout<<" "<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]%2==0)
        {
        cout<<v1[i]<<"\t";
        }
    }
    return 0;

}*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(5);
    cout<<"size is \t"<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
    {
        //v1[i]=i;
        cin>>v1[i];


    }
     for(int i=0;i<v1.size();i++)
    {
        
        cout<<v1[i];


    }

    vector<int>::iterator itr=v1.begin();
    itr+=5;
    v1.insert(itr,100);
    cout<<" "<<v1.size()<<"\n";
    vector<int>::iterator itr1=v1.begin();
    itr1+=6;
    v1.insert(itr1,84);
    cout<<" "<<v1.size()<<"\n";
    int x;
    cin>>x;
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]==x)
        {
        cout<<"element"<<x<< "found";

        }
    }
    cout<<v1[i]<<endl;

    return 0;

}




