from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    Nattawut_info_Node = Node(
        package="ce_nattawut",
        executable="info",
        name="nattawut_info",
        parameters=[
            {"ce_name": "Nattawut"},
            {"ce_no": 5},
            {"ce_section": "CAE6441"}
        ]
    )

    Cal_Cir_server_node = Node(
        package="ce_nattawut",
        executable="cal_server",
        name="cal_server",
    )   
    
    ld.add_action(Nattawut_info_Node)
    ld.add_action(Cal_Cir_server_node)
    return ld