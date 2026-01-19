# gba-bios
open-source GBA BIOS replacement

## Building  
Making a new logo:  
logo_data.png should be 256x256 16 colors  
`grit logo_data.png -gB4 -p -pn16 -m -mLs -mh32 -mw32 -gzl -mzl -ftc`  

Using an old docker to compile:  
`docker pull devkitpro/devkitarm:20180522`  
`docker run -it --rm -v $(pwd):/source --user "$(id -u):$(id -g)" devkitpro/devkitarm:20180522 bash`  
`cd libtonc && make && cd ../ && make`  

Make it 16 KiB:  
`truncate -s 16K gba_bios.bin`  

## Who, and why

This replacement BIOS was (from what I can gather) made originally by the [VisualBoyAdvance-M](https://github.com/visualboyadvance-m/visualboyadvance-m/) folks, later modified by [Normmatt](https://github.com/Normmatt/).

The files were extracted from the [ReGBA emulator](https://github.com/Nebuleon/ReGBA/tree/master/bios) as explained in a [GBAtemp forum comment](https://gbatemp.net/threads/normatts-gba-bios-source-code.575969/#post-9242063) of that being the source of the one in their [downloads page](https://gbatemp.net/download/normatts-open-source-gba-bios-compiled.35225/).

The License of the [VBA-M emulator is the GPLv2](https://github.com/visualboyadvance-m/visualboyadvance-m/blob/master/doc/License.txt), and since that license cannot change between forks, that's the one in this repo.

