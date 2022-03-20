#include "ros/ros.h"
#include "std_msgs/Int8.h"

#include <iostream>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "publisherNode");
    ros::NodeHandle _nh;

    ros::Publisher topicoExemploRef = _nh.advertise<std_msgs::Int8>("topicoExemplo", 1);

    std_msgs::Int8 mensagem;
    mensagem.data = 200;

    while(ros::ok())
    {
        topicoExemploRef.publish(mensagem);
        ros::spinOnce();
    }
}

