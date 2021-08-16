#include <iostream>
using namespace std;

class Box
{
	int height,width;
public:
	Box()
	{
		height = 0;
		width = 0;
	}
	Box(int height, int width)
	{
		this->height = height;
		this->width = width;
	}
	void setvalue(int height, int width){
		this->height=height;
		this->width = width;
	}
	void show()
	{
		cout<<"height : "<<height<<"  width : "<<width <<endl;
	}
	Box operator + (int a)
	{
		Box ob;
		ob.height = this->height + a;
		ob.width = this->width + a;
		
		return ob;
	}
	
	Box operator -(int a)
	{
		Box ob;
		ob.height = this->height - a;
		ob.width = this->width - a;
		
		return ob;
	}
	
	Box operator *(int a)
	{
		Box ob;
		ob.height = this->height * a;
		ob.width = this->width * a;
		
		return ob;
	}
	
	Box operator /(int a)
	{
		Box ob;
		ob.height = this->height / a;
		ob.width = this->width / a;
		
		return ob;
	}
	// + overload for obj
	Box operator +(Box B)
	{
		Box ob;
		ob.height = this->height + B.height;
		ob.width = this->width + B.width;
		
		return ob;
	}
	
	// * overloade
	
	Box operator *(Box B)
	{
		Box ob;
		ob.height = this->height * B.height;
		ob.width = this->width * B.width;
		
		return ob;
	}
	
	Box operator -(Box B)
	{
		Box ob;
		ob.height = this->height - B.height;
		ob.width = this->width - B.width;
		
		return ob;
	}
	
	// / overloade
	
	Box operator / (Box B)
	{
		Box ob;
		ob.height = this->height / B.height;
		ob.width = this->width / B.width;
		
		return ob;
	}
	
	
	// unary
	
	Box operator -()
	{
		height = -height;
		width = -width;
		
		return Box(height,width);
	}
	
	// increment
	Box operator ++()
	{
		Box B;
		B.height++;
		B.width++;
		
		return *this;
	}
	
	friend Box operator + (int a, Box ob);
	friend Box operator - (int a, Box ob);
	friend Box operator * (int a, Box ob);
	friend Box operator / (int a, Box ob);
};

Box operator + (int a, Box ob)
{
	Box B;
	B.height = a+ob.height;
	B.width = a+ob.width;
	
	return B;
}

Box operator - (int a, Box ob)
{
	Box B;
	B.height = a - ob.height;
	B.width = a - ob.width;
	
	return B;
}

Box operator * (int a, Box ob)
{
	Box B;
	B.height = a * ob.height;
	B.width = a * ob.width;
	
	return B;
}

Box operator / (int a, Box ob)
{
	Box B;
	B.height = a / ob.height;
	B.width = a / ob.width;
	
	return B;
}


int main()
{
	Box b1,b2,b3;
	b1.setvalue(5,6);
	b2.setvalue(10,3);
	
	cout<<"B1 value  : ";
	b1.show();
	cout<<"B2 value  : ";
	b2.show();
	
	cout<<endl;
	b3 = b1+b2;
	
	cout<<"+ operator overload = ";
	b3.show();
	
	b3 = b1*b2;
	cout<<"* operator overload = ";
	b3.show();
	
	b3 = b1-b2;
	cout<<"- operator overload = ";
	b3.show();
	
	b3 = b1/b2;
	cout<<"/ operator overload = ";
	b3.show();
	
	//b3 = b1 + 5;
	//b3.show();
	
	//b3 = 5+b1;
//	b3.show();

	//-b3;
//	b3.show();
	
	++b3;
	b3.show();
	
	++b1;
	b1.show();
	return 0;
}
