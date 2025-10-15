#include <iostream>

using namespace std;

//int main() {
//	cout << "Hello, World!" << endl;
//
//	int x = 0;
//	cout << "Please enter an integer: ";
//	cin >> x;
//	cout << "You entered: " << x << endl;
//
//	int& rx = x;
//	cout << "Reference to x created, rx = " << rx << endl;
//	rx = 5;
//	cout << "After modifying through reference, x = " << x << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	int px = 1;
//
//protected:
//	int py = 2;
//
//private:
//	int pz = 3;
//};
//
//class B : private A
//{
//public:
//	void show()
//	{
//		cout << "Public member px: " << this->px << endl; // Accessible
//		cout << "Protected member py: " << py << endl; // Accessible in derived class
//		// cout << "Private member pz: " << pz << endl; // Error: cannot access private member
//	}
//};
//
//int main()
//{
//	//A a;
//	//cout << "Public member px: " << a.px << endl;
//	// cout << "Protected member py: " << a.py << endl; // Error: cannot access protected member
//	// cout << "Private member pz: " << a.pz << endl; // Error: cannot access private member
//
//	B b;
//	b.show();
//
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << "A's constructor called." << endl;
//	}
//
//	~A()
//	{
//		cout << "A's destructor called." << endl;
//	}
//
//	A(const A& other)
//	{
//		cout << "A's copy constructor called." << endl;
//	}
//
//	A& operator=(const A& other)
//	{
//		cout << "A's copy assignment operator called." << endl;
//		if (this != &other) // Check for self-assignment
//		{
//			// Copy data members here if any
//		}
//		return *this;
//	}
//};
//
//int main()
//{
//	A a1; // Calls constructor
//	A a2 = a1; // Calls copy constructor
//	A a3;
//	a3 = a1; // Calls copy assignment operator
//	return 0; // Calls destructor for a1, a2, and a3
//}

//class A
//{
//public:
//	virtual void show() = 0;
//};
//
//class B : public A
//{
//public:
//	B(int x)
//	{
//		cout << "B's constructor called with x = " << x << endl;
//	}
//
//	virtual void show() override
//	{
//		cout << "B's implementation of show." << endl;
//	}
//};
//
//class C : public B
//{
//public:
//	C(int x) : B(x)
//	{
//		cout << "C's constructor called with x = " << x << endl;
//	}
//
//	virtual void show() override
//	{
//		cout << "C's implementation of show." << endl;
//	}
//};
//
//int main()
//{
//	A* a = new B(1);
//	a->show(); // Calls B's implementation of show.
//	delete a; // Clean up memory
//	a = new C(1);
//	a->show(); // Calls C's implementation of show.
//	delete a; // Clean up memory
//	// 先构造B，再构造C
//	// 先析构C，再析构B
//
//	return 0;
//}

//int Add(int a, int b)
//{
//	cout << "Adding integers: " << a << " + " << b << endl;
//	return a + b;
//}
//
//float Add(float a, float b)
//{
//	cout << "Adding floats: " << a << " + " << b << endl;
//	return a + b;
//}
//
//int main()
//{
//	int intResult = Add(3, 4);
//	cout << "Integer result: " << intResult << endl;
//	float floatResult = Add(3.5f, 4.5f);
//	cout << "Float result: " << floatResult << endl;
//	return 0;
//}

//template <typename T>
//T Add(T a, T b)
//{
//	cout << "Adding: " << a << " + " << b << endl;
//	return a + b;
//}
//
//template <typename T>
//class MyClass
//{
//public:
//	MyClass(T a)
//		:_a(a)
//	{ }
//
//	~MyClass(){}
//
//private:
//	T _a;
//};
//
//int main()
//{
//	int intResult = Add(3, 4);
//	cout << "Integer result: " << intResult << endl;
//	float floatResult = Add(3.5f, 4.5f);
//	cout << "Float result: " << floatResult << endl;
//	MyClass<int> myIntClass(10);
//	MyClass<float> myFloatClass(10.5f);
//	return 0;
//}