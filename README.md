# <div align = center><h1>yfetch</h1></div>
<p align = center>Lightweight system information retriever.</p>

# <div align = center><img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/yfetch manjaro.png" width=50% height = 50%></div>

## Supported distros

- Arch(btw)
- Debian
- Fedora
- Gentoo
- Solus
- Manjaro
- openSUSE
- Ubuntu
- Pop!_OS
- Linux Mint
- Void Linux

*and the list will grow with time.*

> It can run on any distro,but the distro will show unknown and the ASCII art will be the Linux Tux with no colors.
> If you want a specific distro to be added,you can create a new issue regarding it.
## Install
Before running it for the first time,make sure you gave yfetch the rights to execute.
This can be done either with the help of your file manager,or in the terminal by running :

`$ chmod +x yfetch`

To install it,open terminal and follow these steps :

```bash
 $ sudo su
 
 # After you enter your password you should be in super user mode.
 # Once that is done,change your directory to where yfetch is downloaded.
 
 cd <path>
 
 # And now we can copy it in /bin/ where all binaries are.
 
 cp yfetch /bin/yfetch
 
 # Once that is done,you can now run yfetch by simply entering
 
 $ yfetch
```

## Build
To build it,I have used `gcc`,but any C++ compiler will do.

You will also need a [C POSIX library](https://en.wikipedia.org/wiki/C_POSIX_library).

## Captures
Here are some captures I took of yfetch while testing it on different live cd's.

<img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/yfetch arch.png" width=60% height = 60%>
<img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/yfetch manjaro.png" width=60% height = 60%>
<img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/yfetch ubuntu.png" width=60% height = 60%>
<img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/yfetch fedora.png" width=60% height = 60%>

## LICENSE
This project is licensed under the GNU GPL v3.0 license. View LICENSE.md to learn more.

# Issues
If you find issues while running the app,please report them in the [issues](https://github.com/datcuandrei/yfetch/issues) section.
