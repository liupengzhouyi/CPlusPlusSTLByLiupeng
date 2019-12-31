# auto

* 1、C++11之后的标准下，应该尽量多的使用auto
* 2、auto不会有任何的效率损失，都是基于编译期的推导
* 3、auto还会带来更好的安全性



### 1. 不允许使用auto作为 *模板参数* 传递

    #include <iostream>
    #include <vector>
    
    int main()
    {
      std::vector<int> v1; // ok
      std::vector<auto> v2; // error
    }

### 2. 不允许使用auto定义数组

    #include <iostream>
    
    int main()
    {
      auto arr[5]; // error: 同样无法确定数组的总占用长度
    }
    
### 3. 不允许使用auto定义struct/class的成员变量

    #include <iostream>
    
    struct animal
    {
      int age;
      auto name; // error: 无法确定最终外层struct的占用长度
    };
    
    int main(){
        return 0;
    }
    
### 4. 不允许使用auto定义函数参数

    #include <iostream>
    
    void func(auto x){
        // code
    }
    
    int main(){
        return 0;
    }
    
    
### 5. auto 定义变量时必须同时初始化

    #include <iostream>
    int main(){
      auto x; // error
      auto y = 10; // ok
    }

