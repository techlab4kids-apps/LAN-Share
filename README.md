<p align="center">
    <img src="src/img/icon.png"/>
</p>


[![Build Status](https://travis-ci.org/abdularis/LAN-Share.svg?branch=master)](https://travis-ci.org/abdularis/LAN-Share)

# LAN Share
LAN Share is a cross platform local area network file transfer application, built using Qt GUI framework. It can be used to transfer a whole folder, one or more files, large or small immediatelly without any additional configuration.

**Notes on TechLAB4Kids changes:
We starts to use this code for integrate the tool we use in our activities with children.
We cannot support it but any suggestion or problem is welcome. Thanks :-)**

## Install
You can download the Ubuntu package or linux AppImage or Windows executable from the release page.
[https://github.com/abdularis/LAN-Share/releases](https://github.com/abdularis/LAN-Share/releases)

* Using .deb (Ubuntu/Debian)

download the latest version, for example `lanshare_1.2.1-1_amd64.deb` then open a terminal, navigate to directory where the downloaded package is located and type

```
$ sudo dpkg -i ./lanshare_1.2.1-1_amd64.deb
```

* Using AppImage (All Linux)

simply download the AppImage and run it on all linux distribution

* For Windows

See the github release page or go to [Softpedia](https://www.softpedia.com/get/Internet/File-Sharing/LAN-Share.shtml)

## Features
* Send one or more files
* Send folder
* Send to multiple receiver at the same time
* Cancel, pause and resume operations while transferring

## TechLAB4Kids added features
* Send starts faster than official version
* Send is now serialized in order to cope relatively well with a number of clients greater than 5. Tested with 20 clients
* Clients to select are always alphabetically ordered to allow to restart the send process from a defined client excluding previous ones 
* Some changes to UI in order to monitor send progress
* Broadcasted hotname instead of configured named host
* Calculates ETA

## Usage
* Computer has to be connected to a local area network (wired or wireless)
* Run the application in both sender and receiver
* Send the file/folder by, select *Send* (files or folder) then -> select receiver in the *'Select Receiver'* dialog, finally click *'Send'*
* File/folder would automatically received by the receiver

## Screenshots (Not updated!)

![Screenshot 1](screenshot.png)

![Screenshot 2](screenshot2.png)

![Screenshot 3](screenshot3.png)

## License
GPLv3
