# Pelles C 简体中文语言包

本项目为 [Pelles C for Windows](https://www.pellesc.se/) IDE 制作简体中文资源 DLL（语言包）。

`rsrc0009` 是官方英文语言包源文件（LCID `0x0009`，缩写 `eng`），作为翻译参照保留，不要改动。
`rsrc0804` 是简体中文语言包（LCID `0x0804`，缩写 `chs`），由前者翻译而来。

**文档分工**：人类开发者的背景资料与参考链接见 [DEVELOPMENT.md](./DEVELOPMENT.md)，最终用户文档见 [README.md](./README.md)；本文件只保留 agent 工作所需的操作规则。

## 构建

需要本机已安装 Pelles C（默认安装在 `C:\Program Files\PellesC`）。

```bash
cd rsrc0804
INCLUDE="C:\Program Files\PellesC\Include\Win;C:\Program Files\PellesC\Include" \
  "/c/Program Files/PellesC/bin/porc.exe" -N chs.rc -Fooutput/chs.res
"/c/Program Files/PellesC/bin/polink.exe" -subsystem:windows -machine:x86 -dll -noentry \
  -out:rsrc0804.dll output/chs.res
```

`INCLUDE` 环境变量必须设置，否则 porc 找不到 `windows.h`。

## 部署

把 `rsrc0804.dll` 复制到 `C:\Program Files\PellesC\Bin\Intl\`（与官方 `rsrc0009.dll` 同目录，写入需管理员权限），完全退出 poide 后重新启动即生效。面向最终用户的完整说明见 [README.md](./README.md)。

## ⚠️ 关键约束：版本号必须与 IDE 一致

poide.exe 加载 `rsrc{LCID}.dll` 时会**校验 DLL 版本**：`chs.rc` 末尾 `VERSIONINFO` 的 `FILEVERSION` / `PRODUCTVERSION`（及对应 `FileVersion` / `ProductVersion` 字符串值）与 `poide.exe` 不一致时，IDE 会**静默回退到英文 `rsrc0009.dll`**——DLL 看似 `LoadLibrary` 成功却完全不起作用。这些字段直接沿用 `eng.rc` 的现成值即可。**升级 IDE 后如果语言包突然失效，第一步就检查这里的版本号是否需要更新。**

## 翻译规范

- **技术术语保持不译**：DLL/EXE/CODEC/ANSI/UTF-8、窗口样式名（`WS_*` / `LVS_*` / `CBS_*` 等）、命令标识符、文件扩展名。
- **格式说明符保留**：`%ls`、`%d`、`%08X`、`\r\n`、`\0` 等必须原样保留，位置可在句中调整以符合中文语序。
- **菜单助记符 `&`**（仅 `MENUITEM`/`POPUP`）：助记符**只能沿用英文原文里已有的 `&`，英文原文没有 `&` 的菜单项不擅自添加**。原文有 `&` 时分两种情况：
  - **译成中文的项**：助记符移到末尾 `中文(&X)`，**字母统一大写**；带省略号的置于省略号前。如 `&File`→`文件(&F)`、`&Open...`→`打开(&O)...`、`Bi&nary`→`二进制(&N)`。
  - **因术语保留英文原文的项**：保持英文原位的 `&` 与原大小写不动，不要追加末尾 `(&X)`。如 `E&xport...`（小写 x 在单词中间，保持）、`&HTML`（H 词首，保持）。
- 对话框 `CONTROL` 标签的助记符一般保留英文原样或整体省略，不套用上述菜单规则。
- **保持控件坐标与 ID 不变**：翻译只改引号内的文本，CONTROL 行的坐标、ID、样式位逐字节保留，避免对话框布局错乱。
- **`welcome.htm` 内部写死了 DLL 文件名**：横幅图片路径为 `res://rsrc0009.dll/#10/BANNER`，翻译时必须把其中的 `rsrc0009.dll` 改成 `rsrc0804.dll`，否则中文包起始页的横幅图无法显示（图片资源加载自语言包 DLL 自身）。

## 已知限制 / 注意事项

- `podump`（Pelles C 自带的二进制转储工具）的正确选项是 `/RESOURCES`、`/ALL` 等，**用 `/` 前缀**；`-r` / `-v` 这类短选项会被忽略（Git Bash 下还可能被路径转换干扰），用它诊断资源结构时注意。
- 资源脚本必须是 **UTF-16 LE + BOM** 编码，否则 porc 处理会出问题。用脚本改写时务必保留编码与 CRLF：Python 读用 `encoding='utf-16', newline=''`，写用 `encoding='utf-16-le'` 并手动前置 BOM（`'\ufeff'`）。
- **porc 的反斜杠转义**：字符串里单个 `\0` 会被编译成真正的空字节（= 字符串终止符），字符串会在该处被截断；要显示**字面**反斜杠，源码必须写两个反斜杠 `\\`。实测：源码 `\\0` → 编译为字面 `\0`（一个反斜杠 + 0）；源码 `\0` → 编译为 NUL。凡是译文要出现字面反斜杠（路径、`\0`、`\n` 等）都要照此处理。
- 工作区文件 `rsrc0804.ppx` 里记录的是 IDE 打开过的文件标签，不影响构建，可忽略。
