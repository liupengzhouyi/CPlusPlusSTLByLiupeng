# memset

## memset作用

* 将已开辟内存空间 s 的首 n 个字节的值设为值 c

    `void *memset(void *s,int c,size_t n)`
    
* 是在一段内存块中填充某个给定的值

* 对较大的结构体或数组进行清零操作的一种最快方法

## 为什么使用？

* 如果不清空，可能会在测试当中出现野值

* 惧怕未经初始化的内存

## 使用方法

* 一个char a[20]清零, 一定是 `memset(a, 0, 20)`

* 初始化使用


    char buffer[20]; 
    memset(buffer, 0, sizeof((char)*20)); 
    strcpy(buffer, "123"); 
    
* 清空结构体

    struct sample_struct
    {
    char csName[16];
    int iSeq;
    int iType;
    };
    
对于变量
    
    struct sample_strcut stTest;

一般情况下，清空stTest的方法

    stTest.csName[0]='/0';
    stTest.iSeq=0;
    stTest.iType=0;

用memset就非常方便：

    memset(&stTest,0,sizeof(struct sample_struct));


