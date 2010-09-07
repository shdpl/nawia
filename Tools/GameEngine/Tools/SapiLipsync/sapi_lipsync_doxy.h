/* 
sapi_lipsync_doxy.h

Copyright (C) 2005 Annosoft, LLC. Richardson, Texas. 
All rights reserved.  
	
Permission is hereby granted, free of charge, to use and distribute
this software and its documentation without restriction, including   
without limitation the rights to use, copy, modify, merge, publish,  
distribute, sublicense, and/or sell copies of this work, and to      
permit persons to whom this work is furnished to do so, subject to   
the following conditions:                                            
1. The code must retain the above copyright notice, this list of    
	conditions and the following disclaimer.                        
2. Any modifications must be clearly marked as such.                
3. Original authors' names are not deleted.                         
4. The name "Annosoft" and the authors' names can be not used to endorse or 
   promote products derived from this software without specific prior written       
   permission.                                            

ANNOSOFT AND THE CONTRIBUTORS TO THIS WORK DISCLAIM ALL WARRANTIES 
WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF 
MERCHANTABILITY AND FITNESS, IN NO EVENT ANNOSOFT NOR THE CONTRIBUTORS 
BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY 
DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   
AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING 
OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. 

*/	

/**
@file sapi_lipsync_doxy.h
@brief contains doxygen groupings and other info needed to generate good 
documentation from the source code 
@date
- 20050821 created mrz
- 20051030 proofing and fixing many grammatical errors.	
**/

/** 
@defgroup copyright_notice Copyright and Usage Information

Copyright (C) 2005 Annosoft, LLC. Richardson, Texas. All rights reserved.  
	
Permission is hereby granted, free of charge, to use and distribute
this software and its documentation without restriction, including   
without limitation the rights to use, copy, modify, merge, publish,  
distribute, sublicense, and/or sell copies of this work, and to      
permit persons to whom this work is furnished to do so, subject to   
the following conditions:<P>                                            
1. The code must retain the above copyright notice, this list of    
	conditions and the following disclaimer.<P>                        
2. Any modifications must be clearly marked as such.<P>                                        
3. Original authors' names are not deleted.<P>                                                 
4. The name "Annosoft" and the authors' names can be not used to endorse or 
   promote products derived from this software without specific prior written       
   permission.<P>                                                                    

ANNOSOFT AND THE CONTRIBUTORS TO THIS WORK DISCLAIM ALL WARRANTIES 
WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF 
MERCHANTABILITY AND FITNESS, IN NO EVENT ANNOSOFT NOR THE CONTRIBUTORS 
BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY 
DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN   
AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING 
OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. 

*/	

/** 
@defgroup why Why did Annosoft release this software?

Annosoft develops high end lipsync software, so it is a reasonable question
as to why Annosoft would offer a free solution.

It started as a need to evaluate the capabilities of SAPI 5.1 as a competitive
offering. We put both feet forward to develop the best system we could
using SAPI.  

From our evaluation, where annosoft wins is the amount of time our commercial software will save 
you on large projects:
- How much can you depend on the results begin correct? 
- How much time are you willing spend on manual lipsyncing when things don't go? 
- How much time are are you willing to spend training the speech system for all your 
voice audio and switch the Speech control panel every time you want to lipsync?  
- Do you need to support languages other than English? 

In large scale production use, there will be higher production cost associated with SAPI over our commercial offerings. 
The team will have to work more closely with their animations, and their system 
components to have good quality. 

All that said, it's free upfront. We hope that it can be useful.

The SAPI textless lipsync generates reasonable quality and is more reliable
than SAPI textbased lipsync. But it still generates many local misalignments, and
the fact that results are used to train the system models, system models
will become confused when faced with new speakers or different recording characteristics.

On files over about 10 seconds, performance drops in SAPI. SAPI Text Based Lipsync
(in my tests) failed to fully align audio files over 10 seconds. It generates partial results in
many cases. Cutting up the audio files manually into smaller pieces is the work-around, albiet a painful one. 
In my tests, it failed completely on most telephonic audio. This probably relates to the 
order in which I performed my tests because of an inner model adaptation process.

We haven't done production work with this software. I know that speech training and
managing speech profiles are probably going to be an issue. We're very interested in 
war stories so if you have one!

<b> Our Conclusions </b>


- Annosoft's Text Based Lipsync is an order of magnitude better. It can align
short or long files equally well. The alignment results are consistantly better 
than SAPI. This doesn't mean that microsoft speech software is lame, it's just 
not designed for this purpose.

- Annosoft has broader uses because it's more accurate.

- Closed captioning and lipsync on very long files. We work with 10 minute files.

- Support for all languages in our textless lipsync. Support for 
 English, Spanish, French, German and Italian in text based lipsync.

- Stable codebase with years of production use and fully supported by a senior engineer

- A proprietary "smoothing" system that makes output much better than just
using raw phonemes. 

- For big projects, using SAPI the fiddle factor will become very expensive. 
Annosoft is more reliable and fully supported. We wrote every line of the code, and
you're always talking to the engineer. 
*/

/**
@defgroup lipsync_tool The Lipsync Tool
@brief The Lipsync Tool is a standalone software product developed by Annosoft

The lipsync tool is available in "save disabled" download form. This version
can be downloaded from here:
- http://www.annosoft.com/demos.htm
- http://www.annosoft.com/sdkdemo/lipsyncdemo.zip

It's totally free and won't time out or bug you about purchasing the full product. 
You can't save tweeks though, or the results of the proprietary smoothing.

For this project, it represents a really easy way to evaluate the SAPI lipsync.
You can open the output from sapi_lipsync.exe in the lipsync tool and
view the results visually across a timeline and in a talking 3d model.

*/

/**
@defgroup anno_format .anno file format

The .anno file format is a simple newline delimited list of markers.
For this implementation, there are 4 markers that readers need to support

@b phn marker

The @b phn marker describes a phoneme event. It will look like this:
@verbatim
phn 229 318 75 h
phn 318 498 75 EY
phn 498 817 0 x
@endverbatim

phn milli-start-time milli-end-time morph-value phoneme-label

The "phn" marker at the beginning of a line indicates a phoneme label.
The milli-start-time and milli-end-time and the phoneme-label are the
results from the SAPI engine. The morph-value is something the annosoft
sdks generate but the SAPI engine does not. It will either be 0 for 'x'
silence, or it will be 75. 

@b word marker

The @b word marker describes a word recognition event with timing for the word
@verbatim
word 229 498 Hey
phn 229 318 75 h
phn 318 498 75 EY
phn 498 817 0 x
@endverbatim

word milli-start-time milli-end-time text-of-word

This may or may not be useful. \ref lipsync_tool will display them in the timeline

@b audio marker
This is the first marker in the file generated by sapi. It indicates the
audio file used in the alignment. You can skip it. \ref lipsync_tool will use
this to locate the audio file when loading the .anno file. That's why it's written out.

@verbatim
audio C:\wavs\01cleaned.wav
phn 0 229 0 x
word 229 498 Hey
@endverbatim

audio path-to-audio-file

@b %%-begin-anno-text-%% 

This is always the last item in the file generated by this software.

@verbatim
%%-begin-anno-text-%% 
Hey There, My name is lane. and it's my please to guide you through this online 
admissions information session. My role here is to recommend students into our
program who are committed to graduate and be successful in their career.

So one of the first things I need to know is whether you've got the commitment
to change your future by seeking higher education.

From the drop down menu below, choose one answer to the following question
and don't forget to click submit when your done. 

Why is a college education important to you?
%%-end-anno-text-%%
@endverbatim

If text based lipsync is used, the original text is also written to the output.
This is the only multiline marker. it may span more lines. If you want to 
read it, when you see the "%%-begin-anno-text-%%" string, read until you find
a "%%-end-anno-text-%%" marker. It may span multiple lines.

\ref lipsync_tool uses this to load the transcription so the annosoft version of
text based lipsync. (Compare for yourself!)


that it. Pretty parsable format.
*/

/** @defgroup anno40 Annosoft Phoneme Labels

Annosoft phoneme labels. The program currenly outputs these phoneme, and
any unexpected (unknown) phonemes generate by SAPI.

@htmlonly
<p><b>Phoneme Labels</b></p>
<table border="1" style="border-collapse: collapse" bordercolor="#111111" width="50%" height="50" cellspacing="0" cellpadding="3">
  <tr>
    <th width="9%" height="18" align="center">label</th>
    <th width="26%" height="18">&nbsp;word</th>
    <th width="65%" height="18">example transcription</th>
  </tr>
  <tr>
    <td width="9%" height="19" align="center">x</td>
    <td width="26%" height="19" align="center">silence</td>
    <td width="65%" height="19">&nbsp;</td>
  </tr>
  <tr>
    <td width="9%" height="19" align="center">IY&nbsp; </td>
    <td width="26%" height="19" align="center">eat </td>
    <td width="65%" height="19">IY t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">IH</td>
    <td width="26%" height="10" align="center">it</td>
    <td width="65%" height="10">IH t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">EH</td>
    <td width="26%" height="10" align="center">Ed</td>
    <td width="65%" height="10">EH d</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">AE</td>
    <td width="26%" height="10" align="center">at</td>
    <td width="65%" height="10">AE t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">AH</td>
    <td width="26%" height="10" align="center">hut</td>
    <td width="65%" height="10">h AH t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">UW</td>
    <td width="26%" height="10" align="center">two</td>
    <td width="65%" height="10">t UW</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">UH</td>
    <td width="26%" height="10" align="center">hood</td>
    <td width="65%" height="10">h UH d</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">AA</td>
    <td width="26%" height="10" align="center">odd</td>
    <td width="65%" height="10">AA d</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">AO</td>
    <td width="26%" height="10" align="center">ought</td>
    <td width="65%" height="10">AO t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">EY</td>
    <td width="26%" height="10" align="center">ate</td>
    <td width="65%" height="10">EY t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">AY</td>
    <td width="26%" height="10" align="center">hide</td>
    <td width="65%" height="10">h AY d</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">OY</td>
    <td width="26%" height="10" align="center">toy</td>
    <td width="65%" height="10">t OY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">AW</td>
    <td width="26%" height="10" align="center">cow</td>
    <td width="65%" height="10">k AW</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">OW</td>
    <td width="26%" height="10" align="center">oat</td>
    <td width="65%" height="10">OW t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">l</td>
    <td width="26%" height="10" align="center">lee</td>
    <td width="65%" height="10">l IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">r</td>
    <td width="26%" height="10" align="center">read</td>
    <td width="65%" height="10">r IY d</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">y</td>
    <td width="26%" height="10" align="center">yield</td>
    <td width="65%" height="10">y IY l d</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">w</td>
    <td width="26%" height="10" align="center">we</td>
    <td width="65%" height="10">w IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">ER</td>
    <td width="26%" height="10" align="center">hurt</td>
    <td width="65%" height="10">h ER t</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">m</td>
    <td width="26%" height="10" align="center">me</td>
    <td width="65%" height="10">m IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">n</td>
    <td width="26%" height="10" align="center">knee</td>
    <td width="65%" height="10">n IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">NG</td>
    <td width="26%" height="10" align="center">ping</td>
    <td width="65%" height="10">p IH NG</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">CH</td>
    <td width="26%" height="10" align="center">cheese</td>
    <td width="65%" height="10">CH IY z</td>
  </tr>
  <tr>
    <td width="9%" height="11" align="center">j</td>
    <td width="26%" height="11" align="center">gee</td>
    <td width="65%" height="11">j IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">DH</td>
    <td width="26%" height="10" align="center">thee</td>
    <td width="65%" height="10">DH IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">b</td>
    <td width="26%" height="10" align="center">be</td>
    <td width="65%" height="10">b IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">d</td>
    <td width="26%" height="10" align="center">dee</td>
    <td width="65%" height="10">d IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">g</td>
    <td width="26%" height="10" align="center">green</td>
    <td width="65%" height="10">g r IY n</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">p</td>
    <td width="26%" height="10" align="center">pee</td>
    <td width="65%" height="10">p IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">t</td>
    <td width="26%" height="10" align="center">tea</td>
    <td width="65%" height="10">t IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">k</td>
    <td width="26%" height="10" align="center">key</td>
    <td width="65%" height="10">k IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">z</td>
    <td width="26%" height="10" align="center">zee</td>
    <td width="65%" height="10">z IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">ZH</td>
    <td width="26%" height="10" align="center">seizure</td>
    <td width="65%" height="10">s IY ZH ER</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">v</td>
    <td width="26%" height="10" align="center">vee</td>
    <td width="65%" height="10">v IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">f</td>
    <td width="26%" height="10" align="center">fee</td>
    <td width="65%" height="10">f IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">TH</td>
    <td width="26%" height="10" align="center">theta</td>
    <td width="65%" height="10">TH EY t AH</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">s</td>
    <td width="26%" height="10" align="center">sea</td>
    <td width="65%" height="10">s IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">SH</td>
    <td width="26%" height="10" align="center">she</td>
    <td width="65%" height="10">SH IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center">h</td>
    <td width="26%" height="10" align="center">he</td>
    <td width="65%" height="10">h IY</td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center"></td>
    <td width="26%" height="10" align="center"></td>
    <td width="65%" height="10"></td>
  </tr>
  <tr>
    <td width="9%" height="10" align="center"></td>
    <td width="26%" height="10" align="center"></td>
    <td width="65%" height="10"></td>
  </tr>
</table>
@endhtmlonly
**/

/**
@mainpage

<b> SAPI 5.1 Lipsync Console Program and Source Code </b>

Hi. Welcome to the documentation for the free SAPI lipsync implementation provided
by <a href="http://www.annosoft.com">Annosoft</a>.

The latest source code and binary release can be downloaded 
from <a href="http://www.annosoft.com/sapi_lipsync/latest_source.zip">
http://www.annosoft.com/sapi_lipsync/latest_source.zip</a>. The plan is to 
move this to sourceforge.net.

This software and source code allow developers to integrate an automatic
lipsync engine into their application, or use directly. Annosoft offers higher end versions,
but this one is FREE.

This software is a WIN32 Console Application that uses the Microsoft Speech
API (SAPI) 5.1 Engine to generate time-aligned phonetical information given
Microsoft RIFF Wave input. 

It is distributed as an executable and in source form in the hope that this
may be useful. Annosoft developed this software in response to customer queries (see \ref why).

We think that it might be useful to independent game developers, and might
also be used to produce new innovative tools to aid the game industry. 
Check out \ref copyright_notice for more details.

The inputs to the system are a wave file and an optional text transcription.
The mode which uses the wave file only is called "textless lipsync",
and the mode which uses the wave file and the text transcript is called
"text based lipsync". You will see these all over the code and 
in the documentation. 

The output from the system is a newline delimited list of phoneme timings
and word timings produced by SAPI. The program prints the results to
the console. Programs can either read this directly, or they can be piped, using
the ">" command line operator, to an auxillary file.

The output is a simple format described in (\ref anno_format). The good news
is that the output of the system can be evaluated directly in \ref lipsync_tool. No need to
buy anything, just download the software provided at http://www.annosoft.com/demos.htm

The Lipsync Tool isn't required but does make it easy to evaluate this software. 
Otherwise, you'll need to develop a rendering system of some kind since all this software
outputs is phoneme and word timing.

<b> Runtime Requirements </b>

The system expects that SAPI 5.1 is installed on the machine and the 
Speech Recognition language is set to "Microsoft Speech Recognizer 5.1". This can 
be validated by opening the <b> Control Panel -> Speech </b> Configuration. 
The "language" drop-list should be set to "Microsoft Speech Recognizer 5.1". 
Other systems won't work as well because we don't have the phoneme mappings,
and may fail altogether.

<b> Build Requirements </b>

- Need to install SAPI 5.1 SDK. Freely available here:<BR/>http://www.microsoft.com/speech/download/sdk51/
- Visual Studio 6 or greater. 

In the project settings, the C++ include paths include a path to the Speech API headers
- "C:\Program Files\Microsoft Speech SDK 5.1\Include"

If you install the SAPI 5.1 SDK to a different location than this, you will need
to change the build path.

In the project settings, the C++ link paths (Additional Library Path) include a path to:
-  "C:\Program Files\Microsoft Speech SDK 5.1\Lib\i386"

Again, if you install the SAPI 5.1 SDK to different location, you'll need to modify
this in order to link.

With those two settings, the projects should build fine. You can turn on or
off _UNICODE, but the internal structures are primarily std::wstring because
SAPI 5.1 expects and returns unicode strings.

<b> Usage </b>

It's a console application in it's current form. 
\ref sapi_lipsync_args explains the current options, which will likely be expanded.

The system spits phoneme timings out to the console. The application can
pipe these to a file which is designed to be easy to parse. By default, we
map to the \ref anno40, which is suprisingly similar to that used
by the SAPI 5.1 English system. I haven't tried it on other languages, too much
of headache.

@verbatim
DOS\\>sapi_lipsync.exe 01.wav 01.txt > 01.anno
;; run text based lipsync and pipe the results in the anno file
;; this file can be opened by "The Lipsync Tool" for evaluation
@endverbatim

@verbatim
DOS\\>sapi_lipsync.exe 01.wav > 01.anno
;; run textless lipsync and pipe the results in the anno file
;; this file can be opened by "The Lipsync Tool" for evaluation
@endverbatim

Thats about in on program usage for now.

<b> The Code </b>

There are only a few classes and functions that make the whole thing work.
The actual processing code is in sapi_lipsync.h and sapi_lipsync.cpp.

We created a base class sapi_lipsync which contains common code used by
both textless and textbased. And then we created two classes 
(sapi_textless_lipsync and sapi_textbased_lipsync) to do the specialty stuff.

The lipsync process in both cases runs asyncronously and the applicaton
has to poll for results. We need to add an "escape" key to stop the process
and accept the current results. We don't have that yet.

::run_sapi_textbased_lipsync demonstrates concisely how to perform text based lipsync
and phoneme alignment.

::run_sapi_textless_lipsync demonstrates concisely how to perform textless lipsync
and phoneme alignment.

**/