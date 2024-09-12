from setuptools import find_packages, setup

package_name = 'drone_controlling'

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
    maintainer='drone',
    maintainer_email='drone@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "movement = drone_controlling.movement:main",
            "telemtry = drone_controlling.telemetry:main",
            "commander = drone_controlling.commander:main",
            "collector = drone_controlling.collector:main",
            "PIDMovement = drone_controlling.PIDMovement:main",
            "AICoordinates = drone_controlling.AICoordinates:main"
        ],
    },
)
