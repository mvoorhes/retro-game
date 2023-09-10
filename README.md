# retro-game

This is a 2d game made in C++ and SFML with a kind of retro aesthetic.

## Version alpha 0.1.5 short preview
[Screencast from 18.05.2023 16:11:44.webm](https://github.com/sebe324/retro-game/assets/58781463/dbf247eb-723e-4829-8a6e-fc5e821885e2)

## Description

The player controls a hero, that fights monsters in a procedurally generated world.



Enemies can spawn in different biomes.

All enemies have their own properties. Some will attack on sight, others will run away or be neutral.
There are also different monster types with their own properties. 

A few monsters will fight until their last hp point, while some others are going to escape if low on hp.

There are numerous classes to choose from and each has unique abilities.




## Project Status
W.I.P

## Building from source

### Using command line

1. Install SFML from their original website: [https://www.sfml-dev.org/download.php](https://www.sfml-dev.org/download.php)
2. In CMakeLists.txt line 7 set CMAKE_PREFIX_PATH to the location of the SFML folder you downloaded.
3. In CmakeLists.txt line 50 set the include directory to the include folder in the SFML folder.
4. Use the following commands in the command line:
    ```cmake .```
   ```cmake --build .```
5. Move SFML dynamic link libraries from the SFML_LOCATION/bin to the Debug folder in the project directory.
6. Just click the app icon. It should work now.
### Using an IDE
1. Install SFML from their original website: [https://www.sfml-dev.org/download.php](https://www.sfml-dev.org/download.php)
2. Configure it with your IDE. Here are some tutorials: [https://www.sfml-dev.org/tutorials/2.5/](https://www.sfml-dev.org/tutorials/2.5/)
3. Create a new project and add the source files into the project.
4. Copy the sfml dlls (window, graphics and system) where the executable is located.
5. Run the game.

## Installation
 
1. Install the release from the "releases" tab.
2. Unzip the package
3. Run the executable

## Contributing

If anyone wants to help feel free to fork, add some things and contribute.

You can also start an issue and leave feedback. 

There is a lot of things to do:

 - Making the code more readable
 - Documentation
 - GUI changes
 - More gameplay mechanics (abilities, special effects, obstacles, etc)
 - Sound
 - A duel gamemode
 - Ranged attacks
 - Player Inventory
 - Language 
 - And much more
 

## License

[MIT](https://choosealicense.com/licenses/mit/)
