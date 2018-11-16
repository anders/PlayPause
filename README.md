# PlayPause
This program sends the play/pause key.

## Why
I wanted to map my keyboard calculator key to something useful, I found out you can override the default action in the registry.

````
# PlayPause.reg
Windows Registry Editor Version 5.00

[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\AppKey\18]
"ShellExecute"="C:\\Users\\Anders\\PlayPause.exe"
````
