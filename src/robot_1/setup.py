from setuptools import find_packages, setup

package_name = 'robot_1'

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
            "first_pub = robot_1.first_publisher:main",
            "first_sup = robot_1.first_sub:main",
            "second_sup = robot_1.second_sub:main",
            "third_sup = robot_1.third_sub:main",
            "add_two_ints_sv = robot_1.add_two_ints_server:main",
            "add_two_ints_cli = robot_1.add_two_ints_client:main",
            "hw_status = robot_1.hw_status_pub:main",
        ],
    },
)
