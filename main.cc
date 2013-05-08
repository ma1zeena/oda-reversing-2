//version two has been implemented
// check out http://www.onlinedisassembler.com/odaweb/run_hex
//credits:
/><Ma1zeena><


<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html lang="en">
  <head>
    <meta charset="utf-8">
    <title>ODA - Online Disassembler</title>
    <meta name="description" content="ODA is an online disassembler for a wide range of machine architectures, including: Alpha, ARM, AVR, Intel x86, Motorola 68000, MIPS, PDP-11, PowerPC, SPARC, Z80, and more!  Upload a Windows PE file, ELF, or raw binary and then view the disassembly and object file meta date such as symbols and sections.">
    <meta name="author" content="">
    <meta name="keywords" content="online disassembler, reversing, reverse engineering, ELF, portable executable, Windows PE, binary, program analysis, malware, shell code, Alpha, ARM, AVR, Intel x86, Motorola 68000, MIPS, PDP-11, PowerPC, SPARC, Z80" />

    <!-- Le HTML5 shim, for IE6-8 support of HTML elements -->
    <!--[if lt IE 9]>
      <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->
    
   <!-- Le styles -->
    <link rel="stylesheet" type="text/css" media="all" href="/static/css/bootstrap.min.css" />
    <link rel="stylesheet" type="text/css" media="all" href="/static/css/bootstrap-responsive.min.css" />
    <link rel="stylesheet" type="text/css" media="all" href="/static/css/oda.css"  />
        
    <script type="text/javascript" src="/static/scripts/lib/jquery-1.7.1.min.js"></script>
    <script type="text/javascript" src="/static/scripts/lib/bootstrap.js"></script>
    <script type="text/javascript" src="/static/scripts/lib/knockout-2.1.0.js"></script>
    <script type="text/javascript" src="/static/scripts/lib/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="/static/scripts/lib/scroll-startstop.events.jquery.js"></script>
    
    <script type="text/javascript" src="/static/scripts/oda.js"></script>
    
  
<script src="/static/scripts/run_hex.js"></script>

	
    <script type="text/javascript">

	    var _gaq = _gaq || [];
	    _gaq.push(['_setAccount', 'UA-25987200-1']);
	    _gaq.push(['_trackPageview']);
	
	    (function() {
	        var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
	        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
	        var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
	    })();

	</script>
	
  </head>
  
  <body>
  	
  

<div class="navbar navbar-fixed-top">
  <div class="navbar-inner">
    <div class="container">
       <a class="brand" href="http://www.onlinedisassembler.com/blog/">ODA</a> 

      <ul class="nav">
      	<li class="active"><a href="/odaweb/run_hex">Copy Hex</a></li>
        <li class="">
        	<a href="/odaweb/file_upload">File Upload</a></li>
        <li><form class="navbar-form pull-left">
        	
        	</form>        
        <li>
        	<a href="http://www.onlinedisassembler.com/blog/">Blog</a>
        </li>   
        <li>
        	<a href=mailto:admin@onlinedisassembler.com>Contact Us!</a>
        </li>     
      </ul>
    </div>        
  </div>
  
</div>


    <div class="container">
    
		

<script>

	
</script>

<div class="content">
	
	<form class="well form-inline">
		  <img src="/static/images/oda.png" class="span2" style="margin-top:-30px; margin-left:-35px; width: 106px; height: 94px;"/>
          <img src="/static/images/oda.gif" style="margin-top:-30px; width: 106px; height: 94px; float:left; position: relative; left: -106px; margin-right:-115px; display:none; " id="oda-gear"/>      		
        <h2> 
             Select Your Architecture: <label class="control-label upload-form-control" for="platformSelect">Platform</label>
        <select class="span2" id="platformSelect" name="normalSelect">
        	
        	   <option>alpha</option>  
        	
        	   <option>alpha:ev4</option>  
        	
        	   <option>alpha:ev5</option>  
        	
        	   <option>alpha:ev6</option>  
        	
        	   <option>arc</option>  
        	
        	   <option>arc5</option>  
        	
        	   <option>base</option>  
        	
        	   <option>arc6</option>  
        	
        	   <option>arc7</option>  
        	
        	   <option>arc8</option>  
        	
        	   <option>arm</option>  
        	
        	   <option>armv2</option>  
        	
        	   <option>armv2a</option>  
        	
        	   <option>armv3</option>  
        	
        	   <option>armv3m</option>  
        	
        	   <option>armv4</option>  
        	
        	   <option>armv4t</option>  
        	
        	   <option>armv5</option>  
        	
        	   <option>armv5t</option>  
        	
        	   <option>armv5te</option>  
        	
        	   <option>xscale</option>  
        	
        	   <option>ep9312</option>  
        	
        	   <option>iwmmxt</option>  
        	
        	   <option>iwmmxt2</option>  
        	
        	   <option>avr</option>  
        	
        	   <option>avr:1</option>  
        	
        	   <option>avr:2</option>  
        	
        	   <option>avr:25</option>  
        	
        	   <option>avr:3</option>  
        	
        	   <option>avr:31</option>  
        	
        	   <option>avr:35</option>  
        	
        	   <option>avr:4</option>  
        	
        	   <option>avr:5</option>  
        	
        	   <option>avr:51</option>  
        	
        	   <option>avr:6</option>  
        	
        	   <option>avr:101</option>  
        	
        	   <option>avr:102</option>  
        	
        	   <option>avr:103</option>  
        	
        	   <option>avr:104</option>  
        	
        	   <option>avr:105</option>  
        	
        	   <option>avr:106</option>  
        	
        	   <option>avr:107</option>  
        	
        	   <option>bfin</option>  
        	
        	   <option>cr16</option>  
        	
        	   <option>cr16c</option>  
        	
        	   <option>cris</option>  
        	
        	   <option>crisv32</option>  
        	
        	   <option>cris:common_v10_v32</option>  
        	
        	   <option>crx</option>  
        	
        	   <option>d10v</option>  
        	
        	   <option>d10v:ts2</option>  
        	
        	   <option>d10v:ts3</option>  
        	
        	   <option>d30v</option>  
        	
        	   <option>dlx</option>  
        	
        	   <option>fr30</option>  
        	
        	   <option>frv</option>  
        	
        	   <option>tomcat</option>  
        	
        	   <option>simple</option>  
        	
        	   <option>fr550</option>  
        	
        	   <option>fr500</option>  
        	
        	   <option>fr450</option>  
        	
        	   <option>fr400</option>  
        	
        	   <option>fr300</option>  
        	
        	   <option>h8300</option>  
        	
        	   <option>h8300h</option>  
        	
        	   <option>h8300s</option>  
        	
        	   <option>h8300hn</option>  
        	
        	   <option>h8300sn</option>  
        	
        	   <option>h8300sx</option>  
        	
        	   <option>h8300sxn</option>  
        	
        	   <option>h8500</option>  
        	
        	   <option>hppa1.1</option>  
        	
        	   <option>hppa2.0w</option>  
        	
        	   <option>hppa2.0</option>  
        	
        	   <option>hppa1.0</option>  
        	
        	   <option>i370:common</option>  
        	
        	   <option>i370:360</option>  
        	
        	   <option>i370:370</option>  
        	
        	   <option>i386</option>  
        	
        	   <option>i386:x86-64</option>  
        	
        	   <option>i386:x64-32</option>  
        	
        	   <option>i8086</option>  
        	
        	   <option>i386:intel</option>  
        	
        	   <option>i386:x86-64:intel</option>  
        	
        	   <option>i386:x64-32:intel</option>  
        	
        	   <option>i860</option>  
        	
        	   <option>i960:core</option>  
        	
        	   <option>i960:mc</option>  
        	
        	   <option>i960:xa</option>  
        	
        	   <option>i960:ca</option>  
        	
        	   <option>i960:jx</option>  
        	
        	   <option>i960:hx</option>  
        	
        	   <option>ia64-elf64</option>  
        	
        	   <option>ia64-elf32</option>  
        	
        	   <option>ip2022ext</option>  
        	
        	   <option>ip2022</option>  
        	
        	   <option>iq2000</option>  
        	
        	   <option>iq10</option>  
        	
        	   <option>k1om</option>  
        	
        	   <option>k1om:intel</option>  
        	
        	   <option>l1om</option>  
        	
        	   <option>l1om:intel</option>  
        	
        	   <option>lm32</option>  
        	
        	   <option>m16c</option>  
        	
        	   <option>m32c</option>  
        	
        	   <option>m32r</option>  
        	
        	   <option>m32rx</option>  
        	
        	   <option>m32r2</option>  
        	
        	   <option>m68hc11</option>  
        	
        	   <option>m68hc12</option>  
        	
        	   <option>m68hc12</option>  
        	
        	   <option>m68k</option>  
        	
        	   <option>m68k:68000</option>  
        	
        	   <option>m68k:68008</option>  
        	
        	   <option>m68k:68010</option>  
        	
        	   <option>m68k:68020</option>  
        	
        	   <option>m68k:68030</option>  
        	
        	   <option>m68k:68040</option>  
        	
        	   <option>m68k:68060</option>  
        	
        	   <option>m68k:cpu32</option>  
        	
        	   <option>m68k:fido</option>  
        	
        	   <option>m68k:isa-a:nodiv</option>  
        	
        	   <option>m68k:isa-a</option>  
        	
        	   <option>m68k:isa-a:mac</option>  
        	
        	   <option>m68k:isa-a:emac</option>  
        	
        	   <option>m68k:isa-aplus</option>  
        	
        	   <option>m68k:isa-aplus:mac</option>  
        	
        	   <option>m68k:isa-aplus:emac</option>  
        	
        	   <option>m68k:isa-b:nousp</option>  
        	
        	   <option>m68k:isa-b:nousp:mac</option>  
        	
        	   <option>m68k:isa-b:nousp:emac</option>  
        	
        	   <option>m68k:isa-b</option>  
        	
        	   <option>m68k:isa-b:mac</option>  
        	
        	   <option>m68k:isa-b:emac</option>  
        	
        	   <option>m68k:isa-b:float</option>  
        	
        	   <option>m68k:isa-b:float:mac</option>  
        	
        	   <option>m68k:isa-b:float:emac</option>  
        	
        	   <option>m68k:isa-c</option>  
        	
        	   <option>m68k:isa-c:mac</option>  
        	
        	   <option>m68k:isa-c:emac</option>  
        	
        	   <option>m68k:isa-c:nodiv</option>  
        	
        	   <option>m68k:isa-c:nodiv:mac</option>  
        	
        	   <option>m68k:isa-c:nodiv:emac</option>  
        	
        	   <option>m68k:5200</option>  
        	
        	   <option>m68k:5206e</option>  
        	
        	   <option>m68k:5307</option>  
        	
        	   <option>m68k:5407</option>  
        	
        	   <option>m68k:528x</option>  
        	
        	   <option>m68k:521x</option>  
        	
        	   <option>m68k:5249</option>  
        	
        	   <option>m68k:547x</option>  
        	
        	   <option>m68k:548x</option>  
        	
        	   <option>m68k:cfv4e</option>  
        	
        	   <option>m88k:88100</option>  
        	
        	   <option>MCore</option>  
        	
        	   <option>mep</option>  
        	
        	   <option>h1</option>  
        	
        	   <option>c5</option>  
        	
        	   <option>mips</option>  
        	
        	   <option>mips:3000</option>  
        	
        	   <option>mips:3900</option>  
        	
        	   <option>mips:4000</option>  
        	
        	   <option>mips:4010</option>  
        	
        	   <option>mips:4100</option>  
        	
        	   <option>mips:4111</option>  
        	
        	   <option>mips:4120</option>  
        	
        	   <option>mips:4300</option>  
        	
        	   <option>mips:4400</option>  
        	
        	   <option>mips:4600</option>  
        	
        	   <option>mips:4650</option>  
        	
        	   <option>mips:5000</option>  
        	
        	   <option>mips:5400</option>  
        	
        	   <option>mips:5500</option>  
        	
        	   <option>mips:6000</option>  
        	
        	   <option>mips:7000</option>  
        	
        	   <option>mips:8000</option>  
        	
        	   <option>mips:9000</option>  
        	
        	   <option>mips:10000</option>  
        	
        	   <option>mips:12000</option>  
        	
        	   <option>mips:14000</option>  
        	
        	   <option>mips:16000</option>  
        	
        	   <option>mips:16</option>  
        	
        	   <option>mips:mips5</option>  
        	
        	   <option>mips:isa32</option>  
        	
        	   <option>mips:isa32r2</option>  
        	
        	   <option>mips:isa64</option>  
        	
        	   <option>mips:isa64r2</option>  
        	
        	   <option>mips:sb1</option>  
        	
        	   <option>mips:loongson_2e</option>  
        	
        	   <option>mips:loongson_2f</option>  
        	
        	   <option>mips:loongson_3a</option>  
        	
        	   <option>mips:octeon</option>  
        	
        	   <option>mips:xlr</option>  
        	
        	   <option>mips:micromips</option>  
        	
        	   <option>mmix</option>  
        	
        	   <option>mn10200</option>  
        	
        	   <option>mn10300</option>  
        	
        	   <option>am33</option>  
        	
        	   <option>am33-2</option>  
        	
        	   <option>msp:14</option>  
        	
        	   <option>msp:11</option>  
        	
        	   <option>msp:110</option>  
        	
        	   <option>msp:12</option>  
        	
        	   <option>msp:13</option>  
        	
        	   <option>msp:14</option>  
        	
        	   <option>msp:15</option>  
        	
        	   <option>msp:16</option>  
        	
        	   <option>msp:21</option>  
        	
        	   <option>msp:31</option>  
        	
        	   <option>msp:32</option>  
        	
        	   <option>msp:33</option>  
        	
        	   <option>msp:41</option>  
        	
        	   <option>msp:42</option>  
        	
        	   <option>msp:43</option>  
        	
        	   <option>msp:44</option>  
        	
        	   <option>ms1</option>  
        	
        	   <option>ms1-003</option>  
        	
        	   <option>ms2</option>  
        	
        	   <option>ns32k:32032</option>  
        	
        	   <option>ns32k:32532</option>  
        	
        	   <option>openrisc</option>  
        	
        	   <option>or32</option>  
        	
        	   <option>pdp11</option>  
        	
        	   <option>powerpc:common64</option>  
        	
        	   <option>powerpc:common</option>  
        	
        	   <option>powerpc:603</option>  
        	
        	   <option>powerpc:EC603e</option>  
        	
        	   <option>powerpc:604</option>  
        	
        	   <option>powerpc:403</option>  
        	
        	   <option>powerpc:601</option>  
        	
        	   <option>powerpc:620</option>  
        	
        	   <option>powerpc:630</option>  
        	
        	   <option>powerpc:a35</option>  
        	
        	   <option>powerpc:rs64ii</option>  
        	
        	   <option>powerpc:rs64iii</option>  
        	
        	   <option>powerpc:7400</option>  
        	
        	   <option>powerpc:e500</option>  
        	
        	   <option>powerpc:e500mc</option>  
        	
        	   <option>powerpc:e500mc64</option>  
        	
        	   <option>powerpc:MPC8XX</option>  
        	
        	   <option>powerpc:750</option>  
        	
        	   <option>powerpc:titan</option>  
        	
        	   <option>rs6000:6000</option>  
        	
        	   <option>rs6000:rs1</option>  
        	
        	   <option>rs6000:rsc</option>  
        	
        	   <option>rs6000:rs2</option>  
        	
        	   <option>rx</option>  
        	
        	   <option>rx</option>  
        	
        	   <option>s390:31-bit</option>  
        	
        	   <option>s390:64-bit</option>  
        	
        	   <option>score7</option>  
        	
        	   <option>score3</option>  
        	
        	   <option>sh</option>  
        	
        	   <option>sh2</option>  
        	
        	   <option>sh2e</option>  
        	
        	   <option>sh-dsp</option>  
        	
        	   <option>sh3</option>  
        	
        	   <option>sh3-nommu</option>  
        	
        	   <option>sh3-dsp</option>  
        	
        	   <option>sh3e</option>  
        	
        	   <option>sh4</option>  
        	
        	   <option>sh4a</option>  
        	
        	   <option>sh4al-dsp</option>  
        	
        	   <option>sh4-nofpu</option>  
        	
        	   <option>sh4-nommu-nofpu</option>  
        	
        	   <option>sh4a-nofpu</option>  
        	
        	   <option>sh2a</option>  
        	
        	   <option>sh2a-nofpu</option>  
        	
        	   <option>sh2a-nofpu-or-sh4-nommu-nofpu</option>  
        	
        	   <option>sh2a-nofpu-or-sh3-nommu</option>  
        	
        	   <option>sh2a-or-sh4</option>  
        	
        	   <option>sh2a-or-sh3e</option>  
        	
        	   <option>sh5</option>  
        	
        	   <option>sparc</option>  
        	
        	   <option>sparc:sparclet</option>  
        	
        	   <option>sparc:sparclite</option>  
        	
        	   <option>sparc:v8plus</option>  
        	
        	   <option>sparc:v8plusa</option>  
        	
        	   <option>sparc:sparclite_le</option>  
        	
        	   <option>sparc:v9</option>  
        	
        	   <option>sparc:v9a</option>  
        	
        	   <option>sparc:v8plusb</option>  
        	
        	   <option>sparc:v9b</option>  
        	
        	   <option>spu:256K</option>  
        	
        	   <option>tms320c30</option>  
        	
        	   <option>tms320c4x</option>  
        	
        	   <option>tms320c3x</option>  
        	
        	   <option>tms320c54x</option>  
        	
        	   <option>tic6x</option>  
        	
        	   <option>tic80</option>  
        	
        	   <option>tilegx</option>  
        	
        	   <option>tilepro</option>  
        	
        	   <option>v850</option>  
        	
        	   <option>v850e2v3</option>  
        	
        	   <option>v850e2</option>  
        	
        	   <option>v850e1</option>  
        	
        	   <option>v850e</option>  
        	
        	   <option>vax</option>  
        	
        	   <option>w65</option>  
        	
        	   <option>we32k:32000</option>  
        	
        	   <option>xstormy16</option>  
        	
        	   <option>xtensa</option>  
        	
        	   <option>xc16x</option>  
        	
        	   <option>xc16xl</option>  
        	
        	   <option>xc16xs</option>  
        	
        	   <option>z80-any</option>  
        	
        	   <option>z80-strict</option>  
        	
        	   <option>z80</option>  
        	
        	   <option>z80-full</option>  
        	
        	   <option>z8001</option>  
        	
        	   <option>z8002</option>  
        	                      
        </select>
        <!--a href="#myModal" role="button" class="btn" data-toggle="modal">Options</a-->
        <button id='optionsBtn' class="btn" type="button">Options</button>
        <!-- Modal -->
        <div id="myModal" class="modal hide fade" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true"></div>

         </h2>
       </form>
    
<div class="row show-grid">
    <div class="span4" style="height:600px;">    	
    	<div class="alert alert-info"><span class="label label-info">Hexadecimal Only!</span> Put binary below</div>
    	<textarea id="hex" data-bind="value: hex" style="width:95%;height:500px;">55 31 D2 89 E5 8B 45 08 56 8B 75 0C 53 8D 58 FF 0F B6 0C 16 88 4C 13 01 83 C2 01 84 C9 75 F1 5B 5E 5D C3 
    	</textarea>    	
    </div>
    <div class="span8" style="height:700px;">
    	<div class="well form-inline">
    		Examples: <select id="selectExamples">
    			<option>strcpy (x86)</option>
    			<option>strcpy (arm)</option>
    		</select>
    		</select>
    	</div>
    	<div id="disassembly" class="assembly" style="overflow: auto;height:600px;"></div>
    </div>
        
  </div>

</div>


        <footer>
          <span class="label label-warning">Notice</span>This site is still under heavy development.  Thanks for your patience!
          <p>&copy; Online Disassembler 2012</p>
        </footer>
    </div>
    
  </body>
</html>
