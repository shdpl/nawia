================================== NAWIA - let the journey begin. ============================================
1. Foreword
	Nawia, is going to be community oriented Free Software Open Source MMORPG, yet commercial.
Because of very early project stage, I'm not going to bother anyone with features and plans.
On the other side, if nothing in my life gonna seriously go wrong, it will be something big,
so if You're interested You can subscribe, and go back in let's say one year (2011/2012).

Until this time, there are few already implemented projects that might interest You (chronological order):
- WorldForge (GPL)
- Planeshift and their Crystal Space engine (GPL/LGPL) http://www.planeshift.it/
- Ryzom (AGPL/GPL) http://dev.ryzom.com/
- Myst Online (GPL) http://mystonline.com/

2. Project
	Currently, project consists of three parts: 
a) 3D engine
b) game server
c) web application

3. 3D engine
	Engine is written in D language in OOP manner. The main goals are modularity, flexibility
and code reuse (on source code level). This should work in both ways, importing code from other
projects and minimizing dependencies. Current license is LGPLv3+, ideally GPLv3+.

Description of engine packages:
* ae	- Audio Engine
* api	- set of adapters gluing engine with external components
* cfg	- configuration package, that builds complete game from components
* ee	- Entity Engine for controlling and managing game entities
* eh	- wrapping Exception Handler, that is responsible for reporting critical errors
* ge	- Graphic Engine
* gui	- Graphics User Interface
* io	- set of packages for Input/Output 
	* hid	- Human Interface Devices handling
	* net	- NETwork communication with Game Server
	* hdd	- Hard Disk Drive file input
* job	- Handling jobs, and scheduling
* msg	- Main communication package, that handles messages between other components
* pe	- Physics Engine
* se	- Scripting Engine
* type	- Package, that tries to unify semantic types, and those that are lacking in D standard library

4. Game server
	There are doubts if we should use Scala or D for Game Server. It's not even partially implemented yet.
License - AGPLv3+
	
5. Web application
	Web application language is Java with Enterprise Edition standards. It includes website, project management support,
game server administration tools and content editors (not all though). We would like to focus on standards
compliance and again, modularity. License: AGPLv3+ with CLASSPATH exception. Several goals are:
* portlet-based CMS
* painless RDF data tagging
* minimizing client-side code (while maximizing data-description languages usage, not by cutting off features)
* WSDL services
* exteriorisation of users identity 
* ESAPI incorporation (sorry, authors posteriori)
* `google living stories`-like filtering

6. Future
	There are plans for developing standalone content developing tools and maybe portable website-based
game client and many many game-related ideas. Currently, this work is ambitious enough, so we'll see.
