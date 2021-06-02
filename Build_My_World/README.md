**Project 1 (Build My World): Simulation of the World**

**Summary of Tasks - Robotics** https://www.udacity.com/course/robotics-software-engineer--nd209

Let’s summarize what you should do in this project to create a simulation world for all your projects in this Robotics Software Engineer Nanodegree Program.

1. Build a single floor wall structure using the Building Editor tool in Gazebo. Apply at least one feature, one color, and optionally one texture to your structure. Make sure there's enough space between the walls for a robot to navigate.
2. Model any object of your choice using the Model Editor tool in Gazebo. Your model links should be connected with joints.
3. Import your structure and two instances of your model inside an empty Gazebo World.
4. Import at least one model from the Gazebo online library and implement it in your existing Gazebo world.
5. Write a C++ World Plugin to interact with your world. Your code should display “Welcome to ’s World!” message as soon as you launch the Gazebo world file.
6. These tasks are just the basic requirements for you to pass the project! Feel free to have fun designing and importing multiple models.

**Gazebo World**
![image](https://user-images.githubusercontent.com/43186153/120549291-66754d00-c3c1-11eb-8bd8-daff1d9486a1.png)


**Directory Structure**
    .Build_My_World                    # Build My World Project. All the project work is inside this folder.
    ├── model                          # Model files 
    │   ├── Building
    │   │   ├── model.config
    │   │   ├── model.sdf
    │   ├── HumanoidRobot
    │   │   ├── model.config
    │   │   ├── model.sdf
    ├── script                         # Gazebo World plugin C++ script      
    │   ├── welcome_message.cpp
    ├── world                          # Gazebo main World containing models 
    │   ├── UdacityOffice.world
    ├── CMakeLists.txt                 # Link libraries 
    └──  

**Run Instructions**

1. git clone 
2. cd Robotics_Software_Engineer/Build_My_World
3. mkdir build 
4. cd build
5. cmake ../
6. cmake 
7. export plugin to build directory
8. cd ..
9. cd world 
10. gazebo UdacityOffice.World
