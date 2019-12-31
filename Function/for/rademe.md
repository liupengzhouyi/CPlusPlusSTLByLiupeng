

# for in C17

## 循环一个向量

    std::vector<int> v = {1, 2, 3, 4};
    for (int i : v)
        std::cout << i << " ";

### 编译器是如何解释的？

    {        
        auto && __range = range_expression ; 
        auto __begin = begin_expr ;
        auto __end = end_expr ;
        for ( ; __begin != __end; ++__begin) { 
            range_declaration = *__begin; 
            loop_statement 
        } 
    }

