import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='ros_yolo',
    version='0.0.0',
    packages=find_packages(
        include=('ros_yolo', 'ros_yolo.*')),
)
