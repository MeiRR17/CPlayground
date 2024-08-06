class MyClass
{
    public:

};

int main()
{
    MyClass c1;
    MyClass* c2;
    c2 = new MyClass;
    delete c2;
    return 0;
}
