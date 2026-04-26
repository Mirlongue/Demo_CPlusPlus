install `Visual Studio Community 2026`

![](./img/Visual_Studio.png)

open    `x64 Native Tools Command Prompt for VS`

```shell
cd /d <Stdexec_Demo path>
# git clone https://github.com/NVIDIA/stdexec.git
dir
mkdir build
cd build
cmake .. # RAPIDS.cmake may download failed. try more
cmake --build .
./demo.exe
```

