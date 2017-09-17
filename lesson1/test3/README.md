# printf函数说明：

函数签名：

```
int printf(const char *format,[argument]);
format 参数输出的格式，定义格式为：%[flags][width][.perc][F|N|h|l]type

printf函数类型为整型，其返回值是整型值。
其值实际为printf控制输出的字符数。
```


规定数据输出方式，具体如下：

1.type 含义如下：

```

%a	浮点数、十六进制数和p-记数法(C99)
%A	浮点数、十六进制数和p-记数法(C99)
%c	一个字符
%d	有符号十进制整数
%e	浮点数、e-记数法
%E	浮点数、E-记数法
%f	浮点数、十进制记数法
%g	根据数值不同自动选择%f或%e。%e格式在指数小于-4或者大于等于精度时使用
%G	根据数值不同自动选择%f或%E。%E格式在指数小于-4或者大于等于精度时使用
%i	有符号十进制整数（与%d相同）
%o	无符号八进制整数
%p	指针
%s	字符串
%S	wchar_t字符（宽字符）类型字符串
%u	无符号十进制整数
%x	使用十六进制数字0f的无符号十六进制整数
%X	使用十六进制数字0F的无符号十六进制整数
%%	打印一个百分号
%n	相连参量应是一个指针，其中存放已写字符的个数
```

2.flags 规定输出格式，取值和含义如下：

```
digit 或* 	
字段宽度的最小值。如果该字段不能容纳要打印的数或者字符串，系统就会使用更宽的字段。当为  * 号时，表示从参数中获取宽度。
例：“%4d”、printf("%*d", width, num)

.digit或 .*   	
精度。对于%e、%E和%f转换，是将要在小数点的右边打印的数字的位数。对于%g和%G转换，是有效数字的最大位数。对于%s转换，是将要打印的字符的最大数目。对于整数转换，是将要打印的数字的最小位数,如果必要，要使用前导0来达到这个位数。只使用“."和使用“.0”相同，所以%f与%.0f相同。当为 * 号时，表示从参数中获取精度。
例：“%5.2f“、printf("%5.*f", precision, num)

 h
和整数转换说明符一起使用，表示一个short int 或 unsigned short int类型数值
例：”%hu“、”%hx“、”%6.4hd“

 hh
和整数转换说明符一起使用，表示一个char 或 unsigned char类型数值
例：”%hhu“、”%hhx“、”%6.4hhd“

 j
和整数转换说明符一起使用，表示一个intmax_t或uintmax_t值
例：”%jd“、”%8jx“

 l
和整数转换说明符一起使用，表示一个long nt 或 unsigned long int类型数值
例：”%ld“、”%8lu“

 ll
和整数转换说明符一起使用，表示一个long long int 或 unsigned long long int类型数值(C99)
例：”%lld“、”%llu“

 L
和浮点转换说明符一起使用，表示一个long double值
例：”%Lf“、”%10.4Le“

 t
和整数转换说明符一起使用，表示一个ptrdiff_t值（与两个指针之间的差相对应的类型）(C99)
例：”%td“、”%12ti“

 z                           
和整数转换说明符一起使用，表示一个size_t值（C99）
例："%zd"、“%12zx”
```

3.width 用于控制显示数值的宽度，取值和含义如下

```
-	  项目是左对齐的  例：“%-4s”
+	  有符号的值若为正，则显示正号；若为负的，则显示负号  例：“%+6.2f”
空格	  有符号的值若为正，则显示空格代替正号；若为负的，则显示负号  例：“% 6.2f“
#	   使用转换说明的可选形式。若为%o格式，显示前导0；若为%x和%X格式，则显示前导0x和0X。对于所有浮点形式，#保证了即使不跟任何数字，也打印一个小数点字符。对于%g和%G格式，它防止尾随零被删除。
      例：”%#o“、”%#x“、”%#8.0f“、”%+#10.3E“
0                   	
对于所有的数字格式，用前导0来填充字段宽度，如果出现-标志或者指定了精度（对于整数）则忽略该标志
例：”%010d“、”%08.3f“
```
以上原文
以下增加部分：
	这一课时增加了makefile的语法，这个makefile搞懂了基本上不大的程序就够用了。
	我在学习中的一些心得，mingw64请用官方的版本，因为之前用了一个改版，导致-m32参数无法使用。注意老的mingw别用了。用mingw_64的版本，可以同时编辑32和64位，默认是编译64位。makefile中的缩进千万别的空格，在网页上复制代码时特别要注意。
	