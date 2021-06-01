#include <gazebo/gazebo.hh>

namespace gazebo
{
  class Project1: public WorldPlugin
  {
    public: Project1() : WorldPlugin() //Welcome message from constructor
            {
              printf("Welcome to Ram Gautam's Wrold\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(Project1)
}
