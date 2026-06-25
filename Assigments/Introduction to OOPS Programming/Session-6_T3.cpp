#include<iostream>

using namespace std;

class Product {
public:
    virtual void upload() {
    	cout<<"This is an abstract class";	
	} 
};


class Electronics : public Product {
public:
    void upload() {
        cout << "Uploading electronic product details to Flipkart." << endl;
    }
};


class Clothing : public Product {
public:
    void upload() {
        cout << "Uploading clothing product details to Flipkart." << endl;
    }
};

int main() {
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();

    return 0;
}

