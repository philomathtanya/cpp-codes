class base{
 private:
  int value;
 public:
  base(int x){
   value=x;
  }
  virtual void fun(){
   
  }
}

class derived{
 private:
  int a;
 public:
  derived(int x, int y):base(x){
   base *b;
   b=this;
   b->fun();      //calls derived::fun()
  }
  void fun(){
   cout<<”fun inside derived class”<<endl;
  }
}
