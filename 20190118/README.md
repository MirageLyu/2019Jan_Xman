# 20190118

## 三个方向

### 应用安全

### 系统安全

### 硬件安全



---

## 安卓运行机制与系统架构

### 安卓系统架构简介

![image1](https://img-blog.csdn.net/20180411142749957?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3Bhbjg2MTE5MDA3OQ==/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)

- 四层架构：应用层、应用层框架、系统库与Runtime、Linux内核
- 主要攻击对象：应用层框架 (Package Manager：实现静默安装)

---

- Binder：进程间通信机制
- 共享内存机制与纯Linux不同
- Ubsan: Undefined Behavior Sanitizer MediaServer中检测不正常指令的机制

---

#### 进程视角

![process-arch](https://img-blog.csdn.net/20180411143731457?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3Bhbjg2MTE5MDA3OQ==/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)

### 安卓组件(widget)介绍

- 弱化进程概念
- Intent：组件间的通信媒介，实现进程跳转
  - 显式/隐式Indent