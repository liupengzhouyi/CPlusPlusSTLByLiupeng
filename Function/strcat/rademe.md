# strcat

## 作用

* 字符串连接


## 原理


    char *string_cat(char *source,const char *dest)
    {
        int i,j;
        int n1=strlen(source);
        i=n1;
        for(j=0;dest[j]!=0;j++,i++)  //从数组s1的位置处开始加入新的字符
        {
            source[i]=dest[j];
        }
        return source;
    }