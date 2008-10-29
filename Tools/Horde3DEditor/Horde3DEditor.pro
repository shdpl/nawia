TEMPLATE = subdirs

CONFIG += debug_and_release

SUBDIRS = \    
	..\Dependencies\Lua\src \
    .\src\tgaPlugIn \
	.\src\psdPlugIn \
	.\src\EditorLib \
	.\src\QPropertyEditor \
	.\src\QXmlTree \
	.\src\HordeSceneEditorCore \
	.\src\HordeSceneEditor \
	.\src\TerrainToolPlugIn \
	.\src\QTerrainNodeExtension
