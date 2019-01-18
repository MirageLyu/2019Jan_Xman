重打包直接把调用setVisibility的smali语句删掉。看到编辑框跟按钮。
分析代码check在so的`plus2`中。

三个参数是
`"flag{", this.val$oneEdit.getText().toString(), "}"`

但是so中把参数顺序判断反了，要输出正确的话必须要重新打包下apk改下参数顺序。

