from distutils.core import setup, Extension

module1 = Extension('mysample',
                    sources = ['mysample.c'])

setup (name = 'Spam Module',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [module1])