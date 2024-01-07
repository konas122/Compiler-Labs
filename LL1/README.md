## 说明

该文件夹存放**LL(1) 文法**代码

### 使用

`grammer.txt` 中存放文法

- 示例 1

运行并输入

```shell
i+i-i$
```

输出

```shell
步骤           已匹配          栈             输入串          动作
0                             E$             i+i-i$         E->iCB
1                             iCB$           i+i-i$         i
2              i              CB$            +i-i$          C->@
3              i              B$             +i-i$          B->+TB
4              i              +TB$           +i-i$          +
5              i+             TB$            i-i$           T->iC
6              i+             iCB$           i-i$           i
7              i+i            CB$            -i$            C->@
8              i+i            B$             -i$            B->-TB
9              i+i            -TB$           -i$            -
10             i+i-           TB$            i$             T->iC
11             i+i-           iCB$           i$             i
12             i+i-i          CB$            $              C->@
13             i+i-i          B$             $              B->@
14             i+i-i          $              $              $
```

- 示例 2

运行并输入

```shell
i-i+*i$
```

输出

```shell
步骤           已匹配          栈             输入串          动作
0                             E$             i-i+*i$        E->iCB
1                             iCB$           i-i+*i$        i
2              i              CB$            -i+*i$         C->@
3              i              B$             -i+*i$         B->-TB
4              i              -TB$           -i+*i$         -
5              i-             TB$            i+*i$          T->iC
6              i-             iCB$           i+*i$          i
7              i-i            CB$            +*i$           C->@
8              i-i            B$             +*i$           B->+TB
9              i-i            +TB$           +*i$           +
错误: 非法的输入字符 *, 跳过
10             i-i+*          TB$            i$             T->iC
11             i-i+*          iCB$           i$             i
12             i-i+*i         CB$            $              C->@
13             i-i+*i         B$             $              B->@
14             i-i+*i         $              $              $
```
