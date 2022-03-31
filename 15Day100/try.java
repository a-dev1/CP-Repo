import java.util.*;

//abstraction {not defining logic of a method}
//a class having abstract method is called 
//statics methods and fun()'s
//java doesn't support multiple inheritance {derived from more than 2 parents, 2-2 baap not allowed }
//Interface 
// class C extends A implements B
// using interface to implement multiple inheritance in java

class Hello {
  public void printHiBhai() {
    System.out.println("Or bhai kya haal ha!!");
  }
}

class try1 {
  static int fact(int n) {
    int ans = 1;
    for(int i = 1; i <= n; i++) {
      ans *= i;
    }
    return ans;
  }

  public static void main(String[] args) {
    //factorial

    // System.out.println(fact(5));

    Hello h = new Hello();
    h.printHiBhai();

    //odd or even
    // int num = 2;
    // if(num%2 == 0) 
    //   System.ou
    // t.println("Num is even");
    // else
    //   System.out.println("Num in odd");
  }
}