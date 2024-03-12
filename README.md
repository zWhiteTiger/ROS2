# ROS2 - Work Space
## About of Project
@zWhiteTiger

## Installation
Update apt
```cmd
sudo apt update
```
### Python Installation
```cmd
sudo apt install python3
```
Check Version
```cmd
python3 --version
```
### Add path Python to Environments
Find the Python installation path
```cmd
which python3
```
Edit shell profile config
```cmd
nano ~/.bashrc
```
Add Python to PATH
```cmd
export PATH="/usr/bin/python3:$PATH"
```
Apply the Changes
```cmd
source ~/.bashrc    # For Bash
```

## Install Library
Library: Colcon
```cmd
sudo apt install python3-colcon-common-extensions
```
Library: ROS2
