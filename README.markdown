# DarwiinRemoteOSC

Darwiin remote with OSC extension for Max OS X (Mountain Lion)

Based on [DarwiinRemote 0.7] (http://sourceforge.net/projects/darwiin-remote/) and a modified WiiRemoteFramework
OSC functionality based on https://code.google.com/p/darwiinosc/ by andreas schlegel

Adapted by [Matthias Kronlachner] (www.matthiaskronlachner.com)

Changing osc ip/port send/receive settings
-------------------------

You can change Sender IP:PORT and Receiver Port by commandline arguments:

Open terminal and go to folder DarwiinRemote.app/Contents/MacOS

    ./DarwiinRemote -ip <send ip> -port <send port> -rcv_port <rcv port>

To set for example send ip to 192.168.0.2, sender port to 5610 and receiver port to 5611

    ./DarwiinRemote -ip 192.168.0.2 -port 5610 -rcv_port 5611

This is very useful if you connect multiple wii controllers
-> start multiple instances with different port settings


TODO
-------------------------
* Fix issue with Mame OS X receiving input on menu, but not on games
* Add disconnect button
* Convert to ARC
    * Replace void* context with protocols
* Remove warnings
* Update icon to higher resolution
* Improve UI