# <div align = center><h1>dafetch</h1></div>
<p align = center>Lightweight system information retriever.</p>

# <div align = center><img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/dafetch debian.png" width=50% height = 50%></div>

## Small description
dafetch is a lightweight C++ program that runs in the terminal and retrieves system information regarding your OS such as the distro,linux,uptime,DE/WM,etc.It's main advantage compared to other command-line system information tools is that dafetch executes faster.

Execution time for dafetch :
```
real	0m0,003s
user	0m0,000s
sys	0m0,003s
```

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
- Puppy Linux
- PeppermintOS

*and the list will grow with time.*

> It can run on any distro,but the distro will show unknown and the ASCII art will be the Linux Tux with no colors.
> If you want a specific distro to be added,you can create a new issue regarding it.
## Install
Before running it for the first time,make sure you gave dafetch the rights to execute.
This can be done either with the help of your file manager,or in the terminal by running :

`$ chmod +x dafetch`

To install it,open terminal and follow these steps :

```bash
 $ sudo su
 
 # After you enter your password you should be in super user mode.
 # Once that is done,change your directory to where dafetch is downloaded.
 
 $ cd <path>
 
 # And now we can copy it in /bin/ where all binaries are.
 
 $ mv dafetch /bin/dafetch
 
 # Once that is done,you can now run dafetch by simply entering
 
 $ dafetch
```

## Build
To build it,I have used `gcc`,but any C++ compiler will do.

You will also need a [C POSIX library](https://en.wikipedia.org/wiki/C_POSIX_library).

## Captures
Here are some captures I took of dafetch while testing it on different live cd's.

<img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/dafetch manjaro.png" width=60% height = 60%>
<img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/dafetch ubuntu.png" width=60% height = 60%>
<img src="https://raw.githubusercontent.com/datcuandrei/yfetch/master/captures/dafetch peppermint.png" width=60% height = 60%>

## LICENSE
This project is licensed under the GNU GPL v3.0 license. View LICENSE.md to learn more.

# Issues
If you find issues while running the app,please report them in the [issues](https://github.com/datcuandrei/dafetch/issues) section.
