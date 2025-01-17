from setuptools import find_packages
from setuptools import setup

setup(
    name='study_interface',
    version='0.0.0',
    packages=find_packages(
        include=('study_interface', 'study_interface.*')),
)
