# Project Title
ROS2 - Work Space

We chose ROS2 Iron Irwini to use.
## Author
[@zWhiteTiger](https://github.com/zWhiteTiger)

## Environment Variables
 - Linux Ubuntu 22.04.3 LTS (Jammy Jellyfish)

## Installations
Follow **command line** below message to install **ROS2**
### ROS2 Installation
1. Locale **Ubuntu**
   ```cmd
   locale  # check for UTF-8
   
   sudo apt update && sudo apt install locales
   sudo locale-gen en_US en_US.UTF-8
   sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
   export LANG=en_US.UTF-8
   
   locale  # verify setting
   ```

2. Install **repository** in **Ubuntu**
   ```cmd
   sudo apt install software-properties-common
   sudo add-apt-repository universe
   ```
3. Install **Key** for **ROS**
   ```cmd
   sudo apt update && sudo apt install curl -y
   sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
   ```cmd
4. Add **Sources** list in **repository**
   ```cmd
   echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
   ```
5. **Update & Upgrade** Ubuntu
   ```cmd
   sudo apt update
   sudo apt upgrade
   ``` 
6. Install **ROS2 Iron desktop**
   ```cmd
   sudo apt install ros-iron-desktop
   ```
7. Install **ROS2 Iron base**
   ```cmd
   sudo apt install ros-iron-ros-base
   ```

### Installations - Python
Follow **command line** below message to install **Python**

1. **Update & Upgrade** Ubuntu
   ```cmd
   sudo apt update
   sudo apt upgrade
   ```
2. Install Python
   ```cmd
   sudo apt install python3
   ```

### Install Colcon
we need to Build package ROS2 by Colcon

1. Check ROS2 is already installed?
   ```cmd
   source /opt/ros/iron/setup.bash
   ros2
   ```
2. **Update & Upgrade** Ubuntu
   ```cmd
   sudo apt update
   sudo apt upgrade
   ```
3. Install Colcon
   ```cmd
   sudo apt install python3-colcon-common-extensions
   ```
