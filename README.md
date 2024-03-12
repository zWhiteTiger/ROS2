# Project Title
ROS2 - Work Space

We chose ROS2 Iron Irwini to use.
## Author
<style>
    img {
  border-radius: 50%;
  }
</style>
[@zWhiteTiger](https://github.com/zWhiteTiger)
<p align="start" class="img">
  <img src="https://avatars.githubusercontent.com/u/157341421?v=4" width="100" title="zWhiteTiger">
</p>

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

1. Check **ROS2** is already **installed?**
   ```cmd
   source /opt/ros/iron/setup.bash
   ros2
   ```
2. **Update & Upgrade** Ubuntu
   ```cmd
   sudo apt update
   sudo apt upgrade
   ```
3. Install **Colcon**
   ```cmd
   sudo apt install python3-colcon-common-extensions
   ```
4. Test Colcon
   Access to Colcon path you will find **colcon-argcomplete.bash**
   ```cmd
   cd /usr/share/colcon_argcomplete/hook/
   ```
5. Config **./bashrc** Insert this line at the end of the file.
   - source /opt/ros/iron/setup.bash
   - source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
   - source ~/ros2_ws/install/setup.bash
     ```cmd
     gedit ~/.bashrc
     ```

 ## TextEditor Tools
 TextEditor we chose **Visual Studio** Code
   ```cmd
   sudo apt update
   sudo apt install snapd
   sudo snap install code --classic
   ```
Run **Programs** with command
   ```cmd
   code .
   ```
Install Python **Pip** to **Build Package**
   ```code
   sudo apt install python3-pip
   ```

## Create FirstPackage
When we have installed ROS2 and various tools, 

and everything is set up, we are ready to create a package for use.
1. **Create Path** Directory by command **mkdir**
   ```cmd
   mkdir ros2_ws
   ```
2. Build ros2_ws
   ```cmd
   colcon build
   ```
3. Create **src** in to **ros2_ws**
   go to **ros2_ws**
   ```cmd
   cd ros2_ws
   ```
   create **src**
   ```cmd
   mkdri src
   ```
4. **Create First Package**
   go inside **/src**
   ```cmd
   cd src
   ```
   **create package**
   ```cmd
   ros2 pkg create <Project-Name> --build-type ament_python --dependencies rclpy
   ```
   "< Project-Name >" is your project name
5. **go inside** your **project**
   ```cmd
   cd <Projec-tName>/<Projec-tName>
   ```
6. Add **Permission** file **+X**
   After obtaining the package,
   proceed to create a **Node** to operate in **ROS2**. Create a Python file named **first_node.py** and change the file permissions to +x.
   ```cmd
   touch first_node.py
   ```
   change the file permissions to **+x**.
   ```cmd
   chmod +x first_node.py
   ```
8. **After that**, **write** the Python code. Once completed, **test the file** using the following command:
   ```cmd
   ./first_node.py
   ```
9. Edit package.xml
   To edit the **package.xml** file by adding a library section and modify the setup.py file by adding code inside **bucket** 'console_scripts':[]
   ```xml
   "<Name> = <Project-Name>.first_node:main",
   ```
   Example:
   ```xml
   ntry_points={
        'console_scripts': [
            "hw_status = ce_robot.HardwareStatus_publish:main",
            "cal_rect = ce_robot.CalRect_server:main",
            "calrect_client = ce_robot.CalRect_client:main",
        ],
    },
   ```
10. Build Package
   The build process should be performed in the **ros2_ws** directory.
   ```cmd
   cd ~/ros2_ws
   ```
   Next step:
   ```cmd
   colcon build
   ```
11. Run **Terminal**
    ```cmd
    source ~/.bashrc
    ```
    Run your **Node**
    ```cmd
    ros2 run ce_robot first_node
    ```
