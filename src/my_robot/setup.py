from setuptools import find_packages, setup

package_name = 'my_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='supakorn',
    maintainer_email='supakorn@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "first_node = my_robot.my_first_node:main",
            "cal_rect = my_robot.CalRect_server:main",
            "cal_rect_c = my_robot.CalRect_client:main",
            "hw_para = my_robot.HwStatus_para_publish:main",
        ],
    },
)
