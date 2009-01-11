TEMPLATE = subdirs

CONFIG += debug_and_release \
          ordered

SUBDIRS = \    
        ../Dependencies/Lua/src \
        ./src/tgaPlugIn \
        ./src/psdPlugIn \
        ./src/EditorLib \
        ./src/QPropertyEditor \
        ./src/QXmlTree \
        ./src/Horde3D \
        ./src/Horde3DUtils \
        ./src/HordeSceneEditorCore \
        ./src/HordeSceneEditor \
        ./src/TerrainToolPlugIn \
        ./src/QTerrainNodeExtension
