# Chip8
A Chip 8 interpreter based on: [Guide to making a CHIP-8 emuator](https://tobiasvl.github.io/blog/write-a-chip-8-emulator/).

# Setup
To setup the local build system run `./init.bld.env.sh` script. That creates a setup for a build in a `local/` folder in the project root based on the initfiles in `./bin/initfiles/`. 

## The local folder
The local folder is a folder with build configuration for defined targets that the scripts in `bin/` can use. 

The `bin/build.sh` script is a basic template that can be used to expand upon. The template contains an env setup with context regarding the build and local filesystem.
