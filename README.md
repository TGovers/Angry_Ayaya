# ANGRY AYAYA

**DO YOU LIKE ANIME? DO YOU LIKE MEMES? DO YOU OCCASSIONALLY PARTAKE IN AUDIO CREATION WHERE YOU DESPERATELY NEED AN ANIME-THEMED PLUGIN???** 

**DON’T LIE MY FELLOW ~~WEEBS~~ ANIME ENTHUSIASTS, WE KNOW YOU DO AND _BOY OH BOY_ DO WE HAVE THE PRODUCT FOR YOU!**

![alt text](https://i.imgur.com/BVEH52G.png "Ayaya")

### /// INTRODUCING ///
### /// ANGRY AYAYA ///

![alt text](https://i.imgur.com/SUclgfs.png "Angry Ayaya - Day")

![alt text](https://i.imgur.com/uGejeX9.png "Angry Ayaya - Night")

## Table of Contents  
[Angry Ayaya Demostration Video](#angryayayademonstrationvideo)

[Angry Ayaya TLDR](#angryayayatldr)

[Installation Guide](#installation-guide)

[Angry Ayaya In-depth](#angry-ayaya-in-depth)

[Contributing](#contributing)

[License](#license)

<a name="angryayayademonstrationvideo"/>
<a name="angryayayatldr"/>
<a name="installationguide"/>
<a name="angryayayaindepth"/>

## Angry Ayaya Demonstration Video

### Omoide (思い出) Demonstration

[![IMAGE ALT TEXT HERE](https://i.imgur.com/GYrOufe.png)](https://vimeo.com/367559235)

## Angry Ayaya TLDR

Angry Ayaya is a part of a greater plugin suite by Studio Nani called 

### Omoide (思い出)

Check out our other awesome plugins through the following links!

- https://github.com/TGovers/Tokyo_Re-Verb

- https://github.com/TGovers/Initial_Delay

- https://github.com/TGovers/Initial_Demon

Angry Ayaya is a simple and intuitive VST plugin with an anime aesthetic. It utilises a 2-parameter IRR filter and a 4-parameter Distortion. Angry Ayaya was designed for use with a multitude of different instruments in mind, such as
* Synths
* Baritone Electric Guitars
* 7/8 String Electric Guitars
* Bass Guitars
* And anything else you want to put through it, it's completely up to you!

Angry Ayaya has full automation and save state capabilities for easy use within your favourite DAW! Angry Ayaya features installers for both Windows and Mac systems, as well as access to the JUCE project itself (please refer to license)

Angry Ayaya was inspired by the internet meme “Ayaya”, click the link to the Youtube video below to **_witness the majesty that is Ayaya_** 

[![IMAGE ALT TEXT HERE](http://img.youtube.com/vi/9wnNW4HyDtg/0.jpg)](http://www.youtube.com/watch?v=9wnNW4HyDtg)

We created the plugin with the mindset of making a great-sounding plugin first and foremost, with a visually-appealing aesthetic following that. 

We wanted to release Angry Ayaya for free, but if you wish to donate it would be hugely appreciated! We are two university students from Wellington, New Zealand in our final year of a Bachelor of Commercial Music at Massey University. We will always keep this plug-in free, but feel free to throw us a nickel or two via the Paypal button below if you enjoy our work!


[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=YP29EFC3QEU4L)

Additionally, if you want to get in contact with us please refer to our personal websites:

- https://tgovers1998.wixsite.com/taylorgovers

- https://ethanzacharypunter.wixsite.com/studionani

We'd love to hear from you about our plug-in, whether it be recommendations, issues or just a nice message to us!

From the team behind **_Angry Ayaya_**, we really hope that you enjoy our plugin and make some awesome tunes with it!
Thank you!

-- Studio Nani --

## Installation Guide

For Mac users, we recommend cloning/downloading the repository to your computer and installing the plugin through the easy-to-use DMG installer. Simply mount the disk image/DMG (AngryAyaya_MAC.dmg) and then open the .pkg file found inside. Follow the instructions within the .pkg installer and you'll be good to go!

For Windows users, we recommend downloading the repository to your computer and installing the plugin through the easy-to-use EXE installer (AngryAyaya_WINDOWS.exe)

If using the JUCE project directly, please refer to a youtube guide or the JUCE website if you are unsure on how to begin! We recommend this [video by Miskat Music](https://www.youtube.com/watch?v=rGzSSNjbXlA "https://www.youtube.com/watch?v=rGzSSNjbXlA") or the [JUCE Tutorials Page](https://juce.com/learn/tutorials "https://juce.com/learn/tutorials").

Another great source of help we can recommend is [The Audio Programmer Youtube Page](https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A "https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A") 

## Angry Ayaya In-depth

Angry Ayaya was primarily built with [Projucer](https://juce.com/ "https://juce.com/")/[XCode](https://developer.apple.com/xcode/ "https://developer.apple.com/xcode/") as a plugin suited specifically to those who maybe don’t know their way round plugins, but are wanting something cool and intuitive to add that extra “oomph!” to their work.

It utilises an always-active low-pass IIR filter and an optional distortion. IIR filters stands for an Infinite Impulse Response filter, which is unique with how the decay never really reaches zero (to put it simply!). We choose to use this as we personally thought it sounded the best out of the different kinds of filters that we tested. 

The IIR filter has two parameters that you can change; the frequency Cutoff and the Q-Factor. 
* The Cuttoff knob changes the maximum frequency that the filter will let through (as a low-pass filter)
* The Q-Factor knob changes the resonance or **Q** of the filter

The Distortion feature has four parameters that you can change; the Drive, Range, Blend and Volume. 
* The Drive knob changes the overall drive of the distortion (how "grunty" it is, to put it simply)
* The Range knob changes the overall frequencies of the distortion
* The Blend knob changes the blend between the distortion and the pre-distortion sound (ie the pure audio with just the IIR filter affecting it)
* The Volume knob changes the overall volume of the plugin (**this affects the whole plugin** and is used even if you "turn off" the distortion)

If you want to essentially “turn off” the distortion, just turn the distortion Drive, Range and Blend knobs to their lowest values.

Additionally, if you set the Volume knob to past 1.0, you will clip your audio. 99% of the time you really will not want this (hence the warning!), but we left it in for the niche cases when you might. 

And finally, if you turn the Drive knob up you'll change the time of day (and really annoy her!)

![alt text](https://i.imgur.com/uGejeX9.png "She's Angry")

## Contributing and Inspiration

Currently Angry Ayaya is not open to contribution, but this could change in the future!

Taylor Govers: Processor Editor, Repository/README/License Management, Assistant GUI Editor

Ethan Punter: GUI Editor, GUI Repository Management, Photoshop Editor

For this project, we had inspiration and were helped with code by these youtubers. They make awesome work so please check them out and support them!

[The Audio Programmer](https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A "https://www.youtube.com/channel/UCpKb02FsH4WH4X_2xhIoJ1A")

[Reon Fourie](https://www.youtube.com/watch?v=iNCR5flSuDs&t=1s "https://www.youtube.com/watch?v=iNCR5flSuDs&t")

And of course, huge inspiration from the anime behind the meme [Kiniro Mosaic](https://myanimelist.net/anime/16732/Kiniro_Mosaic "https://myanimelist.net/anime/16732/Kiniro_Mosaic"), the creator [Yui Hara](https://myanimelist.net/people/12541/Yui_Hara "https://myanimelist.net/people/12541/Yui_Hara") and the studio that created it [Studio Gokumi](https://en.wikipedia.org/wiki/Studio_Gokumi "https://en.wikipedia.org/wiki/Studio_Gokumi")  

## License

[GNU GPLv3](https://github.com/TGovers/Angry_Ayaya/blob/master/LICENSE.txt)
