#include <iostream>
#include <vector>
#include <gtest/gtest.h>

template <typename T1, typename T2>
class MyTClass {
private:
	int number;
	std::vector<float> vec;
	T1 inst1;
	T2 inst2;
public:
	MyTClass(int _num, const std::vector<float>& _v, const T1& _obj1, const T2& _obj2)
		: number(_num), vec(_v), inst1(_obj1), inst2(_obj2) {}

	bool foo() {
		return inst1.bar(number, vec);
	}
};

template<typename T>
class MyTClass<int, T> {
private:
	int number;
	std::vector<float> vec;
	int inst1;
	T inst2;

public:
	MyTClass(int _num, const std::vector<float>& _v, int _inst1, const T& _obj)
		: number(_num), vec(_v), inst1(_inst1), inst2(_obj) {}

	bool foo() {
		return true;
	}
};

template<typename T>
class MyTClass<double, T> {
private:
	int number;
	std::vector<float> vec;
	double inst1;
	T inst2;

public:
	MyTClass(int _num, const std::vector<float>& _v, double _inst1, const T& _obj)
		: number(_num), vec(_v), inst1(_inst1), inst2(_obj) {}

	bool foo() {
		return false;
	}
};

class Class1 {
public:
	bool bar(int num, const std::vector<float>& vec) {
		return num > 0;
	}

	int c_1_1() {
		std::cout << "c_1_1\n";
		return 1;
	}

	float c_1_2() {
		std::cout << "c_1_2\n";
		return 0.1;
	}

	void c_1_3() {
		std::cout << "c_1_3\n";
	}
};

class Class2 {
public:
	bool bar(int num, const std::vector<float>& vec) {
		return !vec.empty();
	}

	int c_2_1() {
		std::cout << "c_2_1\n";
		return 2;
	}

	float c_2_2() {
		std::cout << "c_2_2\n";
		return 0.2;
	}

	void c_2_3() {
		std::cout << "c_2_3\n";
	}
};

class Class3 {
public:
	bool bar(int num, const std::vector<float>& vec) {
		return num == -int(vec.size());
	}

	int c_3_1() {
		std::cout << "c_3_1\n";
		return 3;
	}

	float c_3_2() {
		std::cout << "c_3_2\n";
		return 0.3;
	}

	void c_3_3() {
		std::cout << "c_3_3\n";
	}
};

class MyTClassTest : public ::testing::Test {
public:
	Class1 cl1;
	Class2 cl2;
	Class3 cl3;

	MyTClass<Class1, int> createClass1Test(int num, const std::vector<float>& vec, int inst1) {
		return MyTClass<Class1, int>(num, vec, cl1, inst1);
	}

	MyTClass<Class2, int> createClass2Test(int num, const std::vector<float>& vec, int inst1) {
		return MyTClass<Class2, int>(num, vec, cl2, inst1);
	}

	MyTClass<Class3, int> createClass3Test(int num, const std::vector<float>& vec, int inst1) {
		return MyTClass<Class3, int>(num, vec, cl3, inst1);
	}
};

//MyTClassTest tst;

// Class1
TEST_F(MyTClassTest, Class1FooReturnsTrue) {
	std::vector<float> vec = {1.0f, 2.0f, 3.0f};
	auto myClass1 = createClass1Test(5, vec, 10);
	EXPECT_TRUE(myClass1.foo());
}

TEST_F(MyTClassTest, Class1FooReturnsFalse) {
	std::vector<float> vec = {1.0f, 2.0f, 3.0f};
	auto myClass1 = createClass1Test(-5, vec, 10);
	EXPECT_FALSE(myClass1.foo());
}

// Class2
TEST_F(MyTClassTest, Class2FooReturnsTrue) {
	std::vector<float> vec = {1.0f, 2.0f, 3.0f};
	auto myClass2 = createClass2Test(1, vec, 10);
	EXPECT_TRUE(myClass2.foo());
}

TEST_F(MyTClassTest, Class2FooReturnsFalse) {
	std::vector<float> vec = {};
	auto myClass2 = createClass2Test(-5, vec, 10);
	EXPECT_FALSE(myClass2.foo());
}

// Class3
TEST_F(MyTClassTest, Class3FooReturnsTrue) {
	std::vector<float> vec = {1.0f, 2.0f, 3.0f};
	auto myClass3 = createClass3Test(-3, vec, 10);
	EXPECT_TRUE(myClass3.foo());
}

TEST_F(MyTClassTest, Class3FooReturnsFalse) {
	std::vector<float> vec = {1.0f, 2.0f, 3.0f};
	auto myClass3 = createClass3Test(3, vec, 10);
	EXPECT_FALSE(myClass3.foo());
}

// For specialization
TEST_F(MyTClassTest, IntSpecializationReturnsTrue) {
    MyTClass<int, Class1> myIntClass(0, {}, 0, cl1);
    EXPECT_TRUE(myIntClass.foo());
}

TEST_F(MyTClassTest, DoubleSpecializationReturnsFalse) {
    MyTClass<double, Class1> myDoubleClass(0, {}, 0.0, cl1);
    EXPECT_FALSE(myDoubleClass.foo());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
