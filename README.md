# Pelles C 简体中文语言包

[Pelles C for Windows](https://www.pellesc.se/) 是一款我很喜欢的 IDE——Windows 下的免费 C/C++ 开发环境，集成编辑器、编译器、调试器、资源编辑器与项目管理器，自带完整的 Win32 SDK。它本身体积小巧，编译出的程序同样小巧，适合学习 C 语言和日常轻量开发。可惜官方只内置英文界面，于是做了这个简体中文语言包，希望让更多中文用户方便地用上它。

Pelles C 的界面语言通过语言包（`Intl\rsrc{LCID}.dll`）扩展，本项目提供的正是简体中文语言包（LCID `0x0804`）。

## 这是什么

本项目提供一个 `rsrc0804.dll`，放入 Pelles C 安装目录的 `Bin\Intl\` 后，在简体中文版系统下 IDE 会自动加载它，把菜单、对话框、工具提示、错误信息、文件过滤器、起始页等显示为中文。

## 如何使用

1. **获取语言包：**
   在仓库里打开 [rsrc0804/rsrc0804.dll](./rsrc0804/rsrc0804.dll)，点击 *Download* 按钮下载。

2. **复制到 Intl 目录：**
   将 `rsrc0804.dll` 复制到 Pelles C 安装目录下的 `Bin\Intl\`，默认完整路径：
   ```
   C:\Program Files\PellesC\Bin\Intl\
   ```
   与官方自带的 `rsrc0009.dll`（英文）同目录。写入该目录需要**管理员权限**。

3. **重启 IDE：**
   **完全退出 poide**（IDE 主程序）后再重新启动——语言包仅在启动时加载。在简体中文版系统下会自动应用中文界面，无需在 IDE 内设置。

> 若需切回英文界面，删除或重命名 `Intl\rsrc0804.dll` 后重启 IDE 即可。

## 版本

本语言包对应 Pelles C **14.50**。其版本号必须与 IDE 完全一致，否则 IDE 会忽略它而仍显示英文。

## 许可与致谢

- Pelles C 及其英文资源文件版权归原作者 [Pelle Orinius](https://www.pellesc.se/) 所有。
- 本中文翻译可自由使用与分发。
