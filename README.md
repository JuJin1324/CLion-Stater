# CLion-starter
CMake 및 C언어를 사용하는 IDE인 CLion의 처음 사용을 위한 프로젝트

## Microsoft Windows
### CLion/CMake 개발 환경 셋팅
Toolchain 설치 : MinGW   
툴체인이란? [참조 사이트](https://kkhipp.tistory.com/176)   

<b>MSYS2 설치</b>   
설명 : MinGW 실행 환경(터미널 및 기본 Linux 환경 제공)   
scoop을 사용하여 설치 : `scoop install msys2`
* Scoop 이란? Windows의 Power Shell 에서 사용하는 패키지 관리자(우분투의 apt / macOS의 brew와 같은 역할)
* Scoop 설치 방법 - [참조 페이지](https://github.com/JuJin1324/Windows-Starter/blob/master/README.md#scoop-%EC%84%A4%EC%B9%98)

<b>MinGW 설치</b>   
설명 : Windows에서 GNU POSIX 환경 개발을 위한 Toolchain
* MSYS2 터미널 실행
* MSYS2의 패키지 관리자 <b>pacman</b>을 통하여 설치 : `pacman -S mingw-w64-x86_64-toolchain`   
참조사이트 : [링크](https://stackoverflow.com/questions/36375081/how-to-run-clion-with-msys2-on-windows)
```bash
# 해당 툴체인 환경변수에 추가
$ echo -e '\nexport PATH="/mingw64/bin:$PATH"' >> ~/.bashrc
$ source ~/.bashrc
```
* 설치 확인 : `gcc -v`

<b>make</b>   
설명 : Makefile에 기술한 대로 C언어 소스를 컴파일하여 실행파일을 만들어주는 프로그램
* MSYS2의 패키지 관리자 <b>pacman</b>을 통하여 설치 : `pacman -S make`   

<b>CLion에 Toolchain 등록</b>   
File -> Settings -> Build, Execution, Deployment -> Toolchains -> + 버튼 -> MinGW 선택
* Environment : C:\Users\사용자명\scoop\apps\msys2\current\mingw64
* Debugger : C:\Users\사용자명\scoop\apps\msys2\current\mingw64\bin\gdb.exe

Apply 버튼 클릭 후 OK 버튼

## macOS
### CLion/CMake 개발 환경 셋팅
Toolchain 설치 : `xcode-select --install`   
설치 확인 : `gcc -v`

## Ubuntu 
### CLion/CMake 개발 환경 셋팅
Toolchain 설치 : `sudo apt-get install -y gcc g++ make`
설치 확인 : `gcc -v`
