# hello-world
The first-repository  
Markdown语法<br>
***1 关于标题***  
#一级标题  
##二级标题  
###三级标题  
####四级标题  
#####五级标题  
######六级标题  

大标题（对应一级标题）
========
中标题（对应二级标题）
---------  

***显示文本***  
1 要显示一个超链接的话，就直接输入这个链接的**URL**<br>  
https://github.com/BDDB1/hello-world/edit/main/README.md
>
2 给一段文字加入超链接的格式: [要显示的文字](链接的地址"悬停显示的字")，其中“悬停显示的字”是可选项  
[My csdn url](https://blog.csdn.net/hold_the_key?type=blog"承诺$枷锁csdn博客地址")
>
3 插入圆点符，在文字前加 * ，要注意的是星号* 后面要有一个空格，否则显示为普通星号。此外还有二级圆点和三级圆点。就是多加一个Tab,即第二行一个 Tab ,第三行两个 Tab。  
例如:  
* 一级圆点  
*    二级圆点  
*     三级圆点  

***插入图片***  
方法一: ![](图片链接的地址"悬停显示的字")  
![img](D:\img1.jpg)  
方法二: GitHub仓库里的图片(建议使用这种方法:其他来源URL很可能会失效)  
前提是你的远程仓库有图片，图片链接的地址格式如下:  
https://github.com/你的用户名/你的项目名/raw/分支名/存放图片的文件夹/该文件夹下的图片  
其中: raw 表示原数据的意思;主分支 master,一般默认。  

***插入代码***  
我们需要在代码的上一行和下一行用 ``` 标记，第一行可加语言，可加亮代码。 ``` 不是 3 个单引号，而是数字1左边，Tab键上面的键  
如:  
```
int sum1 = 0,sum2 = 1;

sum1+++sum2
`sum1++ + sum2`
`sum1 + ++sum2`  
```

***插入表格***  
|First Header | Second Header|  
|Content Cell | Content Cell |  
|Content Cell | Content Cell |  
***以上基本够用了，不会的就用HTML标签，值得一提的是，Markdown支持大部分HTML标签，如<br>***  
附:[markdown支持的html标签](https://github.com/github/markup/tree/master#readme)  
转载:[大佬](https://www.cnblogs.com/jingwhale/p/4223657.html)  
