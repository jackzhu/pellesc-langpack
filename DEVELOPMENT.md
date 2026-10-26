# 开发者文档

面向本项目维护者的背景资料与参考链接。分工约定：给人类开发者看的说明性内容放本文件；[AGENTS.md](./AGENTS.md) 只保留 agent 工作所需的操作规则；最终用户的使用说明见 [README.md](./README.md)。

翻译对象是 `rsrc0804/chs.rc`：全文约 5000 行，含 127 个对话框模板、主菜单与全部右键菜单、加速键表、VERSIONINFO，以及约 2000 条字符串表（错误信息、文件过滤器、工具提示、窗口样式描述、帮助文本等）。

## 语言包机制与 LCID 选型

Pelles C 的多语言界面由官方支持：IDE 按系统 UI 语言在 `Bin\Intl\` 下查找 `rsrc{LCID}.dll`，文件名中的 4 位十六进制数即 Windows LCID。官方翻译说明见 Pelles C Wiki：<http://wiki.pellesc.de/doku.php/translating>（链接目前可能已失效）。

本项目选用 `0x0804`（中文-中国，zh-CN，十进制 2052）：微软 [MS-LCID] 规范定义 `0x04` 为简体中文（zh-Hans）、`0x7C04` 为繁体中文（zh-Hant）、`0x0404` 为繁体中文-台湾（zh-TW），而 Pelles C 官网把 `0x04` 标注为繁体，存在歧义；为免混淆，采用无歧义的 `0x0804`。

参考：

- [MS-LCID: Windows Language Code Identifier (LCID) Reference](https://learn.microsoft.com/openspecs/windows_protocols/ms-lcid/70feba9f-294e-491e-b6eb-56532684c37f)
- [Language Identifier Constants and Strings (Microsoft Learn)](https://learn.microsoft.com/windows/win32/intl/language-identifier-constants-and-strings)

## 构建方式

命令行构建步骤见 [AGENTS.md](./AGENTS.md)；也可用 Pelles C IDE 打开 `rsrc0804\rsrc0804.ppj` 直接 Build（IDE 内部构建无需设置 INCLUDE 环境变量）。
