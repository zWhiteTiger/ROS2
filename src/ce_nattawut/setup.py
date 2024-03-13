from setuptools import find_packages, setup

package_name = 'ce_nattawut'

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
    maintainer='tiger',
    maintainer_email='tiger@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "info = ce_nattawut.nattawut_info:main",
            "cal_server = ce_nattawut.nattawut_server:main"
        ],
    },
)
