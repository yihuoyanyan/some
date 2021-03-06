:set nocompatible
这个命令支持回退

4.编辑操作
　　进入输入模式命令
　　i插入命令 a附加命令 o打开命令 c修改命令
　　r取代命令 s替换命令 Esc退出命令

　　输入模式的操作
　　Home光标到行首
　　End 光标到行尾
　　Page Up和Page Down上下翻页
　　Delect删除光标位置的字符

　　删除操作(命令模式使用)
　　x删除光标处的单个字符
　　dd删除光标所在行
　　dw删除当前字符到单词尾包括空格的所有字符
　　#x例如3x删除光标处向右的三个字符
　　#dd例如3dd从当前行开始向下删除三行文本

　　撤销操作
　　u命令取消最近一次的操作，可以使用多次来恢复原有的操作
　　U取消所有操作
　　Ctrl+R可以恢复对使用u命令的操作

　　复制操作
　　yy命令复制当前整行的内容到vi缓冲区
　　yw复制当前光标所在位置到单词尾字符的内容到vi缓存区，相当于复制一个单词
　　y$复制光标所在位置到行尾内容到缓存区
　　y^复制光标所在位置到行首内容到缓存区
　　#yy例如：5yy就是复制5行
　　#yw例如：2yw就是复制两个单词

　　如果要复制第m行到第n行之间的内容，可以在末行模式中输入m，ny例如：3，5y复制第三行到第五行内容到缓存区。

5.查找和替换
　　vi的查找和替换功能主要在末行模式完成：

　　至上而下的查找
　　/ 要查找的字符窜，其中/代表从光标所在位置起开始查找，例如：/ work

　　至下而上的查找
　　？要查找的字符窜 例如：/ work

　　替换
　　:s/old/new用new替换行中首次出现的old
　　: s/old/new/g 用new替换行中所有出现的old
　　:#,# s/old/new/g用new替换从第＃行到第＃行中出现的old
　　：% s/old/new/g用new替换整篇中出现的old

　　如果替换的范围较大时，在所有的命令尾加一个c命令，强制每个替换需要用户进行确认，例如:s/old/new/c 或s/old/new/gc

　　6恢复文件
　　vi在编辑某一个文件时，会生成一个临时文件，这个文件以 . 开头并以 .swp结尾。正常退出该文件自动删除，如果意外退出例如忽然断电，该文件不会删除，我们在下次编辑时可以选择一下命令处理：

　　O只读打开，不改变文件内容
　　E继续编辑文件，不恢复.swp文件保存的内容
　　R将恢复上次编辑以后未保存文件内容
　　Q退出vi
　　D删除.swp文件
　　或者使用vi －r 文件名来恢复未保存的内容

在GUI下：
（1）可按i进入插入模式
（2）使用鼠标拖动反选要粘贴的内容，按鼠标左键复制选定块到缓冲区
（3）然后将光标移到要粘贴处，按鼠标中键（两键鼠标可同时按左右键），粘贴缓冲区内容。

在纯文本终端下：
（1）选定文本块，使用v进入可视模式；移动光标键选定内容
（2）复制选定块到缓冲区，用y；复制整行，用yy
（3）剪切选定块到缓冲区，用d；剪切整行用dd
（4）粘贴缓冲区中的内容，用p

在同一编辑窗打开第二个文件，用:sp [filename]
在多个编辑文件之间切换，用Ctrl+w

命令前面加数字表示重复次数，加字母表示使用的缓冲区名称。
获取帮助，用:help [内容或命令]