HORDE3D Export Version 0.2.1
==========================

Author: Felix Kistler (felixkistler@gmail.com)


Usage:
------

1. Put Horde3DExport.py in your Blender script directory, e.g. "C:\Programme\Blender\.blender\scripts".

2. Run Blender and export your Blender files by "File->Export->Horde3D (.xml)" using several settings.



Settings:
---------

- The "Export filename" defines the directory and filename used for the model and the geometry file.
- The "Shader" defines the shader used within the material files used by the exported model.
- The "Relative material path" will be used for the Horde3D material files. Note that an additional subdirectory for the exported model will be created. It will be named using the base name of the export filename.
- The "Relative animation path" will be used for any exported animation files
- A "Texture subdirectory" can be specified when you want to move all textures used by this model to its own directory within the relative texture path. Otherwise the textures will be copied directly to the texture path (may be useful if you use the same textures in several models
All textures used by your model will be copied to the Relative texture path.
- You can choose to create the scene, animation, geometry and material files or not using the appropriate buttons.

Note that if you create the scene graph- and geometry file in a subdirectory of your Horde3D Geometry and/or Scene Graph path, the exporter won't recognize that and links the geometry file within the scene graph as if there is no sub directory. That's why the example above will create a cube.scene.xml in the Cube subdirectory that contains a link to a cube.geo without the additional subdirectory cube.


Animations:
-----------

The exporter supports three types of animations:
Mesh animations: They are exported by playing the timeline from currently setted frame start to frame end and - in every frame - writing the transformations of all objects in the *.anim file. You can use keyframes for that.
Bone animations: Work similar to mesh animations. The bones are exported as joints to Horde. Because of some problems with the matrices, you should apply scale/rotation to obdata (CTRL+A,1) and set the bone's roll to zero.
Shape keys: are exported as morph targets. You can find their names in the *.scene.xml as comment.

Textures and Materials:
-----------------------

The exporter tries to create the materials in the same way as they exist in blender. As there a few differences to horde, you should currently only use one texture per material (except of bump maps). And there should only be one material per object. Note: not all shaders support joints and not all shaders support transparency! So you have to choose them carefully.

If you don't want to use textures but static material colors ( Note, no procedural textures! ), you have to use a special shader for them. By default the exporter writes the material color for geometry that don't have textures as a uniform to the material files. If you want to use these uniforms the shader must exactly use this uniform name, currently Materialcol. If you want to use the material color you might try using the materialCol.shader.xml in the Community SVN Branch To add your exported model to a scene and fine tune your shaders and materials you could use the Horde3D Editor.


More in the Horde3D Wiki: http://horde3d.org/wiki/index.php5?title=Direct_Export_from_Blender



THANKS to Volker Wiendl, Marcel Pham for help.
