# Project Title
ROS2 - Work Space

We chose ROS2 Iron Irwini to use.
## Author
[@zWhiteTiger](https://github.com/zWhiteTiger)

## Environment Variables
 - Linux Ubuntu 22.04.3 LTS (Jammy Jellyfish)

## Installations
1. Locale Ubuntu
   ```cmd
   locale  # check for UTF-8
   
   sudo apt update && sudo apt install locales
   sudo locale-gen en_US en_US.UTF-8
   sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
   export LANG=en_US.UTF-8
   
   locale  # verify setting
   ```

2. Install repository in Ubuntu
   ```cmd
   sudo apt install software-properties-common
   sudo add-apt-repository universe
   ```
3. Install Key for ROS
   ```cmd
   sudo apt update && sudo apt install curl -y
   sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```cmd
