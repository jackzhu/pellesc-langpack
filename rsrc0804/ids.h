/****************************************************************************
 *                                                                          *
 * File    : ids.h                                                          *
 *                                                                          *
 * Purpose : Misc ID's for menus, strings, icons etc.                       *
 *                                                                          *
 * History : Date      Reason                                               *
 *           03-02-02  Created                                              *
 *                                                                          *
 ****************************************************************************/

#ifndef H_IDS
#define H_IDS

//
// String ID's --------------------------------------------------------------
//

#define IDS_NULL                        10001

#define IDS_BADSCREENRESOLUTION         10002   // 6.50
#define IDS_BADCOMCTLVERSION            10003
#define IDS_BADVERSION                  10004
#define IDS_OUTOFMEMORY                 10005
#define IDS_MEMORYERROR                 10006
#define IDS_COMMDLGERROR                10007
#define IDS_THREADERROR                 10008
#define IDS_DEBUGGERERROR               10009
#define IDS_EXECERROR                   10010
#define IDS_PIPEERROR                   10011
#define IDS_BADNUMBER                   10012
#define IDS_BACKUPERROR                 10013
#define IDS_CHANGEDIRERROR              10014
#define IDS_CREATEDIRERROR              10015
#define IDS_CREATEFILEERROR             10016
#define IDS_OPENFILEERROR               10017
#define IDS_READFILEERROR               10018
#define IDS_WRITEFILEERROR              10019
#define IDS_RENAMEFILEERROR             10020   // 4.0
#define IDS_DELETEFILEERROR             10021   // 5.0
#define IDS_WRITEREGERROR               10022
#define IDS_WRITEXMLERROR               10023   // 5.0
#define IDS_PRINTERROR                  10024
#define IDS_HELPERROR                   10025
#define IDS_OPENURLERROR                10026   // 7.0
#define IDS_SAVENOW                     10027
#define IDS_QUITNOW                     10028
#define IDS_MUSTRELOADNOW               10029
#define IDS_RESTOREBACKUP               10030
#define IDS_WRAPFINDATBOTTOM            10031
#define IDS_WRAPFINDATTOP               10032
#define IDS_REPLACECOMPLETE             10033
#define IDS_FINDTEXTERROR               10034
#define IDS_FINDFUNCERROR               10035
#define IDS_BADREGEX                    10036   // 11.0
#define IDS_BADDEVICECOLORS             10037
#define IDS_DELETEIMAGE                 10038
#define IDS_CANTEDITIMAGE               10039
#define IDS_BADDROPSHADOWIMAGE          10040   // 4.0
#define IDS_BADGIFSCREEN                10041   // 12.0
#define IDS_CREATECTRLERROR             10042
#define IDS_CREATEDLGERROR              10043
#define IDS_DUPCONTROLID                10044
#define IDS_DUPCONTROLMNEMONIC          10045
#define IDS_DUPPOPUPMNEMONIC            10046
#define IDS_NODUPMNEMONICS              10047
#define IDS_PASTEERROR                  10048
#define IDS_RESERVEDID                  10049
#define IDS_CREATERSRCERROR             10050
#define IDS_BADRESOURCENAME             10051
#define IDS_BADRESOURCETYPE             10052   // 3.0
#define IDS_DUPRSRCLANGUAGE             10053
#define IDS_LOADFORMERROR               10054
#define IDS_SAVEFORMERROR               10055
#define IDS_LOADMENUERROR               10056
#define IDS_SAVEMENUERROR               10057
#define IDS_LOADACCELERROR              10058
#define IDS_SAVEACCELERROR              10059
#define IDS_LOADTEXTERROR               10060
#define IDS_SAVETEXTERROR               10061
#define IDS_LOADMESSERROR               10062   // 3.0
#define IDS_SAVEMESSERROR               10063   // 3.0
#define IDS_LOADIMAGEERROR              10064
#define IDS_SAVEIMAGEERROR              10065
#define IDS_LOADANIMERROR               10066
#define IDS_SAVEANIMERROR               10067
#define IDS_LOADEDITERROR               10068
#define IDS_SAVEEDITERROR               10069
#define IDS_LOADVERSERROR               10070
#define IDS_SAVEVERSERROR               10071
#define IDS_LOADDUMPERROR               10072
#define IDS_SAVEDUMPERROR               10073
#define IDS_ENLARGEBITMAP               10074
#define IDS_SELECTPROJROOT              10075
#define IDS_SELECTFINDPATH              10076
#define IDS_UPGRADEPROJECT              10077   // 9.0
#define IDS_DUPPROJNAME                 10078
#define IDS_DELETEPROJECT               10079   // 4.0
#define IDS_IMPORTPROJECT               10080   // 4.0
#define IDS_IMPORTPROJFILE              10081
#define IDS_DELETEPROJFILE              10082
#define IDS_ADDPROJFILE                 10083
#define IDS_BADPROJPATH                 10084   // 7.0
#define IDS_BADPROJFILEPATH             10085   // 6.0
#define IDS_NOPROJMODE                  10086   // 11.0+
#define IDS_DUPPROJMODE                 10087   // 9.0
#define IDS_BADPROJMODENAME             10088   // 9.0
#define IDS_EXTRACTZIPERROR             10089
#define IDS_NOPROJZIPFILES              10090
#define IDS_NOPROJEXECUTOR              10091
#define IDS_DUPTEXTID                   10092
#define IDS_SETATTRIBERROR              10093
#define IDS_BADCOMPRESSION              10094
#define IDS_NEEDCERTIFICATE             10095   // 5.0
#define IDS_BADMACRONAME                10096
#define IDS_DUPMACRONAME                10097
#define IDS_NOMACROVALUE                10098   // 6.0
#define IDS_DUPCUSTCNTL                 10099
#define IDS_CANTLOADDLL                 10100
#define IDS_BADCUSTCNTL                 10101
#define IDS_CANTINITCUSTCNTL            10102
#define IDS_CUSTCNTLINUSE               10103
#define IDS_CUSTCNTLERROR               10104
#define IDS_BADLABELNAME                10105
#define IDS_DUPLABELS                   10106
#define IDS_DUPLABELID                  10107
#define IDS_DUPLABELNAME                10108
#define IDS_BADACCELKEY                 10109
#define IDS_BADSTRINGVALUE              10110
#define IDS_BADTOOLTEXT                 10111
#define IDS_BADTOOLCOMMAND              10112
#define IDS_BADTOOLMACRO                10113
#define IDS_BADHELPTEXT                 10114
#define IDS_BADHELPCOMMAND              10115
#define IDS_BADHELPBUILTIN              10116   // 7.0
#define IDS_BADSNIPPETNAME              10117   // 5.0
#define IDS_DUPSNIPPETNAME              10118   // 5.0
#define IDS_BADSNIPPETCODE              10119   // 5.0
#define IDS_SAVESNIPPETERROR            10120   // 5.0
#define IDS_DUPKEY                      10121
#define IDS_NODEBUGINFO                 10122
#define IDS_STOPDEBUGGER                10123
#define IDS_EXCEPTION1                  10124
#define IDS_EXCEPTION2                  10125
#define IDS_HARDWAREBREAK               10126   // 4.0
#define IDS_TIMESTAMPERROR              10127
#define IDS_BADBRKPNTLINE               10128
#define IDS_BADEXPRESSION               10129   // 4.0
#define IDS_NOBREAKCHAR                 10130
#define IDS_CFORMATERROR                10131   // 3.0
#define IDS_KILLPROCESS                 10132
//
#define IDS_FINDABORTED                 10133
#define IDS_FINDRESULT                  10134
#define IDS_NOFILETIME                  10135
#define IDS_FILESIZE                    10136
//
#define IDS_FILEPOPUP                   10137   // 7.0: IDS_TITLEFILE -> IDS_FILEPOPUP
#define IDS_EDITPOPUP                   10138   // 7.0
#define IDS_VIEWPOPUP                   10139   // 7.0: IDS_TITLEVIEW -> IDS_VIEWPOPUP
#define IDS_PROJPOPUP                   10140   // 7.0
#define IDS_TOOLPOPUP                   10141   // 7.0: IDS_TITLETOOLS -> IDS_TOOLPOPUP
#define IDS_WINPOPUP                    10142   // 7.0: IDS_TITLEWINDOWS -> IDS_WINPOPUP
#define IDS_HELPPOPUP                   10143   // 7.0: IDS_HELPTITLE -> IDS_HELPPOPUP
#define IDS_SRCPOPUP                    10144   // 7.0: IDS_EDITPOPUP -> IDS_SRCPOPUP
#define IDS_IMGPOPUP                    10145   // 7.0: IDS_PICTPOPUP -> IDS_IMGPOPUP
#define IDS_DLGPOPUP                    10146   // 7.0: IDS_FORMPOPUP -> IDS_DLGPOPUP
#define IDS_MENUPOPUP                   10147
#define IDS_MESSPOPUP                   10148   // 3.0
#define IDS_RSRCPOPUP                   10149
#define IDS_DBGPOPUP                    10150
#define IDS_WEBPOPUP                    10151   // 7.0
#define IDS_DIFFPOPUP                   10152   // 7.0
#define IDS_CUSTOMHELPPOPUP             10153   // 5.0
#define IDS_FILEFIND                    10154
#define IDS_STOPFILEFIND                10155   // 7.0: IDS_FILEFINDQUIT -> IDS_STOPFILEFIND
#define IDS_UNDOACTION                  10156
#define IDS_REDOACTION                  10157
#define IDS_BUILDPROJ                   10158
#define IDS_REBUILDPROJ                 10159   // 5.0
#define IDS_CLEANPROJ                   10160   // 9.0
#define IDS_BUILDWKSPROJ                10161   // 5.0
#define IDS_REBUILDWKSPROJ              10162   // 5.0
#define IDS_CLEANWKSPROJ                10163   // 9.0
#define IDS_STOPBUILD                   10164   // 5.0
#define IDS_COMPILEPROJ                 10165
#define IDS_EXECUTEPROJ                 10166
#define IDS_DEBUGPROJ                   10167
#define IDS_PROFILEPROJ                 10168   // 6.50
#define IDS_EXCLPROJ                    10169   // 4.0
#define IDS_INCLPROJ                    10170   // 4.0
#define IDS_FILEDIFF                    10171   // 7.0
#define IDS_STOPFILEDIFF                10172   // 7.0
#define IDS_TITLEENVIRONMENT            10173   // 10.0
#define IDS_TITLESETUP                  10174
#define IDS_TITLEPROJSETUP              10175   // 4.0
#define IDS_TITLECHOOSECOLOR            10176   // 4.0
#define IDS_TITLECUSTOMIZE              10177
#define IDS_TITLECUSTOM                 10178
#define IDS_TITLEMISC                   10179
#define IDS_TITLEDIFFERENCE             10180   // 7.0
#define IDS_TITLECURSOR                 10181
#define IDS_TITLEICON                   10182
#define IDS_TITLEBITMAP                 10183
#define IDS_TITLEMENU                   10184
#define IDS_TITLEDIALOG                 10185
#define IDS_TITLESTRINGTABLE            10186
#define IDS_TITLEACCELTABLE             10187
#define IDS_TITLEMSGTABLE               10188
#define IDS_TITLEVERSION                10189
#define IDS_TITLEANICURSOR              10190
#define IDS_TITLEANIICON                10191
#define IDS_TITLEHTML                   10192
#define IDS_TITLEXML                    10193
#define IDS_TITLEMANIFEST               10194
#define IDS_TITLERCDATA                 10195
#define IDS_TITLEVIDEO                  10196
#define IDS_TITLESOUND                  10197
#define IDS_TITLETYPELIB                10198
#define IDS_TITLEID                     10199
#define IDS_TITLETEXT                   10200
#define IDS_TITLEWORKSPACE              10201   // 4.0
#define IDS_TITLESOURCEFILES            10202
#define IDS_TITLEINCLUDEFILES           10203
#define IDS_TITLERESOURCEFILES          10204
#define IDS_TITLEOTHERFILES             10205
#define IDS_TITLEEXTERNALFILES          10206   // 8.0
#define IDS_TITLEFILENAME               10207
#define IDS_TITLEFILEPATH               10208
#define IDS_TITLEFILEDATE               10209
#define IDS_TITLELASTWRITETIME          10210
#define IDS_TITLEPROJECT                10211
#define IDS_TITLEFILEFIND               10212
#define IDS_TITLEDEBUGGER               10213   // 11.00
#define IDS_TITLEDEBUGGER_RUNNING       10214
#define IDS_TITLEDEBUGGER_STOPPED       10215
#define IDS_TITLEPROFILER_RUNNING       10216   // 6.50
#define IDS_TITLEPROFILER               10217   // 6.50
#define IDS_TITLETRACE                  10218
#define IDS_TITLEOUTPUT                 10219
#define IDS_TITLEAUTO                   10220
#define IDS_TITLELOCALS                 10221
#define IDS_TITLEGLOBALS                10222
#define IDS_TITLEREGISTERS              10223
#define IDS_TITLESTACK                  10224
#define IDS_TITLEMEMORY                 10225
#define IDS_TITLETHREADS                10226
#define IDS_TITLEMODULES                10227
#define IDS_TITLEEXCEPTIONS             10228
#define IDS_TITLEBREAKPOINTS            10229
#define IDS_TITLEWATCH                  10230
#define IDS_TITLETHREADID               10231
#define IDS_TITLEDESCRIPTION            10232   // 9.0
#define IDS_TITLESUSPENDED              10233
#define IDS_TITLEPRIORITY               10234
#define IDS_TITLEHWBREAKNOTHING         10235   // 4.0
#define IDS_TITLEHWBREAKWRITEONLY       10236   // 4.0
#define IDS_TITLEHWBREAKREADWRITE       10237   // 4.0
#define IDS_TITLEHWBREAK1BYTE           10238   // 4.0
#define IDS_TITLEHWBREAK2BYTE           10239   // 4.0
#define IDS_TITLEHWBREAK4BYTE           10240   // 4.0
#define IDS_TITLESTOPALWAYS             10241
#define IDS_TITLEBROWSESOURCE           10242
#define IDS_TITLESAMPLES                10243   // 6.50
#define IDS_TITLEPERCENT                10244   // 6.50
#define IDS_TITLEFUNCTION               10245   // 6.50
#define IDS_TITLEMODULENAME             10246   // 6.50
#define IDS_TITLESOURCEFILE             10247   // 6.50
#define IDS_TITLEINCLUSIVE              10248   // 8.0
#define IDS_TITLEEXCLUSIVE              10249   // 8.0
#define IDS_TITLEIMPORT                 10250
#define IDS_TITLEADDFILES               10251
#define IDS_TITLEADDPROJECTS            10252   // 4.0
#define IDS_TITLEFILEVERSION            10253
#define IDS_TITLEPRODUCTVERSION         10254
#define IDS_TITLEFILEFLAGSMASK          10255
#define IDS_TITLEFILEFLAGS              10256
#define IDS_TITLEFILEOS                 10257
#define IDS_TITLEFILETYPE               10258
#define IDS_TITLEFILESUBTYPE            10259
#define IDS_TITLEBLOCKHEADER            10260
#define IDS_TITLECOMMENTS               10261
#define IDS_TITLECOMPANYNAME            10262
#define IDS_TITLEFILEDESCRIPTION        10263
#define IDS_TITLEFILEVERSION2           10264
#define IDS_TITLEINTERNALNAME           10265
#define IDS_TITLECOPYRIGHT              10266
#define IDS_TITLETRADEMARKS             10267
#define IDS_TITLEORIGINALNAME           10268
#define IDS_TITLEPRIVATEBUILD           10269
#define IDS_TITLEPRODUCTNAME            10270
#define IDS_TITLEPRODUCTVERSION2        10271
#define IDS_TITLESPECIALBUILD           10272
#define IDS_TITLEALLFRAMES              10273
#define IDS_TITLESOMEFRAMES             10274
#define IDS_TITLEONEFRAME               10275
#define IDS_TITLEDRAWFRAME              10276   // 10.0: IDS_TITLEPICTFRAME -> IDS_TITLEDRAWFRAME
#define IDS_TITLEPATH                   10277
#define IDS_TITLELIB                    10278
#define IDS_TITLEINCLUDE                10279
#define IDS_TITLEPROPS                  10280
#define IDS_TITLENAME                   10281
#define IDS_TITLEVALUE                  10282
#define IDS_TITLEADDRESS                10283
#define IDS_TITLEDBGINFO                10284   // 8.0
#define IDS_TITLEDBGFILE                10285   // 12.0
#define IDS_TITLETYPE                   10286
#define IDS_TITLELINENO                 10287
#define IDS_TITLEADDMACRO               10288
#define IDS_TITLEEDITMACRO              10289
#define IDS_TITLEADDTOOL                10290
#define IDS_TITLEEDITTOOL               10291
#define IDS_TITLEADDHELP                10292
#define IDS_TITLEEDITHELP               10293
#define IDS_TITLEADDSNIPPET             10294   // 5.0
#define IDS_TITLEEDITSNIPPET            10295   // 5.0
#define IDS_TITLEKEY                    10296
#define IDS_TITLE1BPP                   10297
#define IDS_TITLE4BPP                   10298
#define IDS_TITLE8BPP                   10299
#define IDS_TITLE16BPP                  10300
#define IDS_TITLE24BPP                  10301
#define IDS_TITLE32BPP                  10302
#define IDS_TITLENONE                   10303
#define IDS_TITLEC                      10304
#define IDS_TITLEASM                    10305
#define IDS_TITLERC                     10306   // 6.0
#define IDS_TITLEMC                     10307   // 6.0
#define IDS_TITLEINST                   10308   // 5.0
#define IDS_TITLEDEF                    10309
#define IDS_TITLECUT                    10310
#define IDS_TITLECOPY                   10311
#define IDS_TITLEPASTE                  10312
#define IDS_TITLECLEAR                  10313
#define IDS_TITLEEDIT                   10314
#define IDS_TITLEINSERT                 10315
#define IDS_TITLEEFFECT                 10316
#define IDS_TITLEMIRROR                 10317
#define IDS_TITLEROTATE                 10318
#define IDS_TITLEGRAYSCALE              10319
#define IDS_TITLESEPIATONE              10320   // 4.0
#define IDS_TITLEOPAQUEALPHA            10321   // 4.0
#define IDS_TITLEHSV                    10322
#define IDS_TITLEDRAW                   10323
#define IDS_TITLESCREENCOLOR            10324
#define IDS_TITLERESIZE                 10325
#define IDS_TITLEALIGN                  10326
#define IDS_TITLEEVENSPACE              10327
#define IDS_TITLESIZETOTEXT             10328
#define IDS_TITLEMOVE                   10329
#define IDS_TITLECENTER                 10330
#define IDS_TITLEORDER                  10331
#define IDS_TITLECONVERT                10332
#define IDS_TITLEINDENT                 10333
#define IDS_TITLEREPLACE                10334
#define IDS_TITLEDRAGDROP               10335
#define IDS_TITLETEST                   10336   // 6.0
#define IDS_TITLEADVANCED               10337   // 6.0
#define IDS_TITLESTANDARD               10338   // 6.0
#define IDS_TITLEHELPCONTENTS           10339   // 7.0
#define IDS_TITLEHELPINDEX              10340   // 7.0
#define IDS_TITLEHELPSEARCH             10341   // 8.0
#define IDS_TITLEOUTLINE                10342   // 7.0
#define IDS_TITLEEXPAND                 10343   // 7.0
#define IDS_OPENINCLUDE                 10344   // 4.50
#define IDS_CONTEXTHELP                 10345
#define IDS_VIEWDEFINITION              10346
#define IDS_PREVDEFINITION              10347
#define IDS_FINDCALLSITES               10348   // 4.0
#define IDS_SURROUNDBY                  10349   // 5.0
#define IDS_EDITBREAKPOINT              10350   // 4.0
#define IDS_BREAKALWAYS                 10351   // 4.0
#define IDS_BREAKONHITCOUNT             10352   // 4.0
#define IDS_BREAKONEXPRESSION           10353   // 4.0
#define IDS_BREAKDISABLED               10354   // 4.0
#define IDS_APPNAME                     10355
#define IDS_APPVERSION                  10356
#define IDS_SPLASHVERSION               10357
#define IDS_DEBUGHELPER                 10358   // 8.0 (IDS_APPNAME_DBGHELPER -> IDS_APPNAME + IDS_DEBUGHELPER)
#define IDS_ADMINISTRATOR               10359   // 8.0
#define IDS_UNTITLED                    10360
#define IDS_OK                          10361   // 9.0
#define IDS_CANCEL                      10362   // 9.0
#define IDS_YES                         10363
#define IDS_NO                          10364
#define IDS_EMPTY                       10365
#define IDS_SPECIAL                     10366
#define IDS_NEUTRAL                     10367   // 8.0
#define IDS_SAMPLELINE                  10368
#define IDS_PRINTFILE                   10369
#define IDS_PRINTPAGE                   10370
#define IDS_OUTPUTDONE                  10371
#define IDS_DELETEFROMDISK              10372   // 9.0
#define IDS_DONTASKAGAIN                10373   // 9.0
#define IDS_GIFDISPOSALMETHOD0          10374   // 12.0
#define IDS_GIFDISPOSALMETHOD1          10375   // 12.0
#define IDS_GIFDISPOSALMETHOD2          10376   // 12.0
#define IDS_GIFDISPOSALMETHOD3          10377   // 12.0
//
#define IDS_COMMONFILTER                10378
#define IDS_SOURCEFILTER                10379
#define IDS_RESOURCEFILTER              10380
#define IDS_PROJECTFILTER               10381
#define IDS_IMAGEFILTER                 10382
#define IDS_ANIMATIONFILTER             10383
#define IDS_EXECUTEFILTER               10384
#define IDS_INSTALLFILTER               10385   // 5.0
#define IDS_IMPSRCFILTER                10386   // 4.0
#define IDS_IMPPROJFILTER               10387   // 4.0
#define IDS_IMPRSRCFILTER               10388
#define IDS_IMPANICURFILTER             10389
#define IDS_IMPAVIFILTER                10390
#define IDS_CUSTCNTLFILTER              10391
#define IDS_PALETTEFILTER               10392
#define IDS_CUSTTOOLFILTER              10393
#define IDS_CUSTHELPFILTER              10394
#define IDS_ALLFILTER                   10395
#define IDS_SRCFILTER                   10396
#define IDS_INCFILTER                   10397
#define IDS_HTMFILTER                   10398
#define IDS_XMLFILTER                   10399
#define IDS_DEFFILTER                   10400
#define IDS_PISFILTER                   10401   // 5.0
#define IDS_ASMFILTER                   10402
#define IDS_RCFILTER                    10403
#define IDS_RESFILTER                   10404
#define IDS_JPGFILTER                   10405
#define IDS_PNGFILTER                   10406
#define IDS_GIFFILTER                   10407
#define IDS_BMPFILTER                   10408
#define IDS_ICOFILTER                   10409
#define IDS_CURFILTER                   10410
#define IDS_ANICURFILTER                10411
#define IDS_AVIFILTER                   10412
#define IDS_ZIPFILTER                   10413
#define IDS_MSGFILTER                   10414   // 3.0
#define IDS_WAVFILTER                   10415   // 6.0
#define IDS_CEXT                        10416
#define IDS_HEXT                        10417
#define IDS_PPWEXT                      10418   // 4.0
#define IDS_PPJEXT                      10419
#define IDS_PPXEXT                      10420
#define IDS_TAGEXT                      10421
#define IDS_RCEXT                       10422
#define IDS_RESEXT                      10423
#define IDS_PCXEXT                      10424
#define IDS_GIFEXT                      10425
#define IDS_JPGEXT                      10426
#define IDS_PNGEXT                      10427
#define IDS_BMPEXT                      10428
#define IDS_DIBEXT                      10429
#define IDS_ICOEXT                      10430
#define IDS_CUREXT                      10431
#define IDS_ANIEXT                      10432
#define IDS_AVIEXT                      10433
#define IDS_PALEXT                      10434
#define IDS_CHMEXT                      10435
#define IDS_LIBEXT                      10436
#define IDS_DLLEXT                      10437
#define IDS_EXEEXT                      10438
#define IDS_OBJEXT                      10439
#define IDS_HTMEXT                      10440
#define IDS_XMLEXT                      10441
#define IDS_ZIPEXT                      10442
#define IDS_DEFEXT                      10443
#define IDS_ASMEXT                      10444
#define IDS_INCEXT                      10445
#define IDS_MCEXT                       10446   // 6.0
#define IDS_MSGEXT                      10447   // 3.0
#define IDS_PISEXT                      10448   // 5.0
#define IDS_TXTEXT                      10449   // 5.0
#define IDS_WAVEXT                      10450   // 6.0
#define IDS_DATEXT                      10451   // 8.0
#define IDS_OPENAUTO                    10452   // 4.50
#define IDS_OPENTEXT                    10453   // 4.50
#define IDS_OPENBINARY                  10454   // 4.50
#define IDS_OPENRESOURCE                10455   // 4.50
#define IDS_OPENRCDATA                  10456   // 4.50
#define IDS_OPENCUSTOM                  10457   // 4.50
//
#define IDS_STATEPOS                    10458
#define IDS_STATESIZE                   10459
#define IDS_STATEEDIT                   10460
#define IDS_STATEDEPSCAN                10461
#define IDS_STATEBROWSEINFO             10462   // 8.0
#define IDS_STATEPOPUP                  10463
#define IDS_STATESEPARATOR              10464
#define IDS_STATEMENUITEM               10465
#define IDS_STATEIMAGELIST              10466
#define IDS_STATEOILPAINT               10467
#define IDS_STATEDITHER                 10468
#define IDS_STATEZIP                    10469   // 7.0
#define IDS_STATELOADPROJ               10470   // 9.0
#define IDS_STATEINITPROJ               10471   // 10.0
#define IDS_FILEFINDWHAT                10472
#define IDS_DEFAULTMENUTEXT             10473
#define IDS_DONTMESS                    10474
#define IDS_SELECTFROMLIST              10475
#define IDS_TARGETNAME                  10476
#define IDS_TARGETBASENAME              10477
#define IDS_FIRSTPREQNAME               10478
#define IDS_ALLPREQNAMES                10479
//
#define IDS_DIALOGTEXT                  10480   // 5.0
#define IDS_TEXTTEXT                    10481   // 5.0
#define IDS_EDITBOXTEXT                 10482   // 5.0
#define IDS_GROUPBOXTEXT                10483   // 5.0
#define IDS_PUSHBUTTONTEXT              10484   // 5.0
#define IDS_CHECKBOXTEXT                10485   // 5.0
#define IDS_RADIOBUTTONTEXT             10486   // 5.0
#define IDS_RICHEDITTEXT                10487   // 5.0
#define IDS_SYSLINKTEXT                 10488   // 5.0
#define IDS_NETADDRESSTEXT              10489   // 5.0
#define IDS_SPLITBUTTONTEXT             10490   // 5.0
#define IDS_COMMANDLINKTEXT             10491   // 5.0
#define IDS_CUSTOMTEXT                  10492   // 5.0
//
#define IDS_UNUSED                      10493
#define IDS_IDOK                        10494
#define IDS_IDCANCEL                    10495
//
#define IDS_RCHEADER                    10496
#define IDS_HHEADER                     10497
//
#define IDS_ACCELSHIFT                  10498
#define IDS_ACCELCONTROL                10499
#define IDS_ACCELALT                    10500
//
#define IDS_MAKHEADER                   10501
#define IDS_MAKTARGET                   10502
#define IDS_DELETING                    10503   // 9.0
#define IDS_BUILDING                    10504
#define IDS_BUILDSKIPPED                10505   // 9.0
#define IDS_BUILDDONE                   10506
#define IDS_BUILDABORTED                10507
#define IDS_BUILDFAILURE                10508
#define IDS_BUILDBROWSEFAILURE          10509   // 6.0
#define IDS_BUILDMACROERROR             10510
#define IDS_BUILDERROR                  10511
#define IDS_BUILDERRORIGNORE            10512
#define IDS_BUILDERRORMSG               10513
#define IDS_PROJGRP_WIZARD              10514   // 4.50
#define IDS_PROJGRP_EMPTY               10515   // 4.50
#define IDS_PROJTYPE_X86APP             10516
#define IDS_PROJTYPE_X86DLL             10517
#define IDS_PROJTYPE_X86LIB             10518
#define IDS_PROJTYPE_X86CON             10519
#define IDS_PROJTYPE_X64APP             10520   // 5.0
#define IDS_PROJTYPE_X64DLL             10521   // 5.0
#define IDS_PROJTYPE_X64LIB             10522   // 5.0
#define IDS_PROJTYPE_X64CON             10523   // 5.0
#define IDS_PROJTYPE_A64APP             10524   // 14.0
#define IDS_PROJTYPE_A64DLL             10525   // 14.0
#define IDS_PROJTYPE_A64LIB             10526   // 14.0
#define IDS_PROJTYPE_A64CON             10527   // 14.0
#define IDS_PROJTYPE_X86INST            10528   // 5.0
#define IDS_PROJTYPE_A64INST            10529   // 14.0
#define IDS_WKSHEADER                   10530   // 4.0
//
#define IDS_CC_DIAGCLASSIC              10531   // 10.0
#define IDS_CC_DIAGCARET                10532   // 10.0
#define IDS_CC_WARNLEVEL0               10533
#define IDS_CC_WARNLEVEL1               10534
#define IDS_CC_WARNLEVEL2               10535
#define IDS_CC_OPTNONE                  10536
#define IDS_CC_OPTTIME                  10537
#define IDS_CC_OPTSIZE                  10538
#define IDS_CC_DEBUGNONE                10539
#define IDS_CC_DEBUGLINES               10540
#define IDS_CC_DEBUGFULL                10541
#define IDS_CC_CDECL                    10542
#define IDS_CC_STDCALL                  10543
#define IDS_CC_FASTCALL                 10544
#define IDS_CC_VECTORCALL               10545   // 10.0
#define IDS_CC_CRT                      10546
#define IDS_CC_CRTMT                    10547
#define IDS_CC_CRTDLL                   10548
#define IDS_CC_ARCH_SSE2                10549   // 9.0
#define IDS_CC_ARCH_AVX                 10550   // 9.0
#define IDS_CC_ARCH_AVX2                10551   // 9.0
#define IDS_CC_FPFAST                   10552   // 6.0
#define IDS_CC_FPPRECISE                10553   // 6.0
#define IDS_CC_INLINENONE               10554   // 6.0
#define IDS_CC_INLINEUSER               10555   // 6.0
#define IDS_CC_INLINEAUTO               10556   // 6.0
#define IDS_CC_C99                      10557   // 7.0
#define IDS_CC_C11                      10558   // 7.0
#define IDS_CC_C17                      10559   // 9.0
#define IDS_CC_C23                      10560   // 13.0
#define IDS_AS_DEBUGNONE                10561
#define IDS_AS_DEBUGLINES               10562
#define IDS_AS_DEBUGFULL                10563
#define IDS_AS_CDECL                    10564   // 4.50
#define IDS_AS_STDCALL                  10565   // 4.50
#define IDS_AS_FASTCALL                 10566   // 4.50
#define IDS_LD_DEBUGNONE                10567
#define IDS_LD_DEBUGPO                  10568   // 9.0: IDS_LD_DEBUGCV -> IDS_LD_DEBUGPO
#define IDS_LD_DEBUGCOFF                10569
#define IDS_LD_DEBUGBOTH                10570
#define IDS_LD_NATIVE                   10571
#define IDS_LD_CONSOLE                  10572
#define IDS_LD_WINDOWS                  10573
//
#define IDS_DBG_DONE                    10574
#define IDS_DBG_CREATEPROCESS           10575
#define IDS_DBG_CREATETHREAD            10576
#define IDS_DBG_LOADMODULE              10577
#define IDS_DBG_EXITPROCESS             10578
#define IDS_DBG_EXITTHREAD              10579
#define IDS_DBG_UNLOADMODULE            10580
#define IDS_DBG_RELOCATION              10581
#define IDS_DBG_LOADERROR               10582
#define IDS_DBG_BORLAND                 10583   // 4.0
#define IDS_DBG_BADEXPRESSION           10584   // 4.0
//
// Commands (custom keyboard).
//
#define IDS_FILE_NEWPROJECT             10585
#define IDS_FILE_NEWSOURCE              10586
#define IDS_FILE_NEWRESOURCE            10587
#define IDS_FILE_NEWBITMAP              10588
#define IDS_FILE_NEWICON                10589
#define IDS_FILE_NEWCURSOR              10590
#define IDS_FILE_NEWANICURSOR           10591
#define IDS_FILE_NEWVIDEO               10592
#define IDS_FILE_NEWHEXDUMP             10593
#define IDS_FILE_NEWMSGTABLE            10594   // 3.0
#define IDS_FILE_NEWWEB                 10595   // 7.0
#define IDS_FILE_NEWDIFF                10596   // 7.0
#define IDS_FILE_OPEN                   10597
#define IDS_FILE_CLOSE                  10598
#define IDS_FILE_CLOSEPROJ              10599   // 5.0
#define IDS_FILE_SAVE                   10600
#define IDS_FILE_SAVEAS                 10601
#define IDS_FILE_SAVEALL                10602
#define IDS_FILE_PRINT                  10603
#define IDS_FILE_PRINTSETUP             10604
#define IDS_FILE_PROPERTIES             10605
#define IDS_FILE_EXIT                   10606
//
#define IDS_EDIT_UNDO                   10607
#define IDS_EDIT_REDO                   10608
#define IDS_EDIT_CUT                    10609
#define IDS_EDIT_COPY                   10610
#define IDS_EDIT_PASTE                  10611
#define IDS_EDIT_INSERT                 10612
#define IDS_EDIT_DELETE                 10613
#define IDS_EDIT_DELETEWORD             10614
#define IDS_EDIT_SELECTALL              10615
#define IDS_EDIT_FIND                   10616
#define IDS_EDIT_FINDNEXT               10617
#define IDS_EDIT_REPLACE                10618
#define IDS_EDIT_FILEFIND               10619
#define IDS_EDIT_GOTO                   10620
//
#define IDS_VIEW_SHOWTOOLBAR            10621
#define IDS_VIEW_SHOWSTATUSBAR          10622
#define IDS_VIEW_SHOWDOCTABS            10623
#define IDS_VIEW_SHOWWELCOME            10624   // 7.0
#define IDS_VIEW_TOGGLEFULLSCREEN       10625   // 8.0
#define IDS_VIEW_SOURCEFILES            10626   // 5.0
#define IDS_VIEW_TARGETFILES            10627   // 5.0
//
#define IDS_PROJ_ADDFILE                10628
#define IDS_PROJ_ADDPROJECT             10629   // 4.0
#define IDS_PROJ_SETTINGS               10630
#define IDS_PROJ_MODES                  10631   // 9.0
#define IDS_PROJ_COMPILE                10632
#define IDS_PROJ_BUILD                  10633
#define IDS_PROJ_REBUILD                10634   // 5.0: IDS_PROJ_BUILDALL -> IDS_PROJ_REBUILD
#define IDS_PROJ_CLEAN                  10635   // 9.0
#define IDS_PROJ_BUILDWKS               10636   // 5.0
#define IDS_PROJ_REBUILDWKS             10637   // 5.0
#define IDS_PROJ_CLEANWKS               10638   // 9.0
#define IDS_PROJ_STOPBUILD              10639
#define IDS_PROJ_MAKEALLPREQS           10640
#define IDS_PROJ_EXECUTE                10641
#define IDS_PROJ_PROFILE                10642   // 6.50
#define IDS_PROJ_ZIP                    10643
#define IDS_PROJ_UNZIP                  10644
#define IDS_PROJ_SETACTIVE              10645   // 4.0
#define IDS_PROJ_DEPENDENCIES           10646   // 4.0
//
#define IDS_TOOL_CUSTOMIZE              10647
#define IDS_TOOL_SETTINGS               10648
#define IDS_TOOL_CUSTOMTOOL             10649
#define IDS_TOOL_CUSTOMTOOL_1           10650
#define IDS_TOOL_CUSTOMTOOL_2           10651
#define IDS_TOOL_CUSTOMTOOL_3           10652
#define IDS_TOOL_CUSTOMTOOL_4           10653
#define IDS_TOOL_CUSTOMTOOL_5           10654
#define IDS_TOOL_CUSTOMTOOL_6           10655
#define IDS_TOOL_CUSTOMTOOL_7           10656
#define IDS_TOOL_CUSTOMTOOL_8           10657   // 5.0
#define IDS_TOOL_CUSTOMTOOL_9           10658   // 5.0
#define IDS_TOOL_CUSTOMTOOL_10          10659   // 5.0
#define IDS_TOOL_CUSTOMTOOL_11          10660   // 5.0
#define IDS_TOOL_CUSTOMTOOL_12          10661   // 5.0
#define IDS_TOOL_CUSTOMTOOL_13          10662   // 5.0
#define IDS_TOOL_CUSTOMTOOL_14          10663   // 5.0
#define IDS_TOOL_CUSTOMTOOL_15          10664   // 5.0
//
#define IDS_WIN_NEW                     10665
#define IDS_WIN_CASCADE                 10666
#define IDS_WIN_TILEVERT                10667
#define IDS_WIN_TILEHORZ                10668
#define IDS_WIN_CLOSEALL                10669
//
#define IDS_HELP_CONTENTS               10670
#define IDS_HELP_ABOUT                  10671
#define IDS_HELP_CUSTOMHELP             10672
#define IDS_HELP_CUSTOMHELP_1           10673
#define IDS_HELP_CUSTOMHELP_2           10674
#define IDS_HELP_CUSTOMHELP_3           10675
#define IDS_HELP_CUSTOMHELP_4           10676
#define IDS_HELP_CUSTOMHELP_5           10677
#define IDS_HELP_CUSTOMHELP_6           10678
#define IDS_HELP_CUSTOMHELP_7           10679
#define IDS_HELP_CUSTOMHELP_8           10680   // 5.0
#define IDS_HELP_CUSTOMHELP_9           10681   // 5.0
#define IDS_HELP_CUSTOMHELP_10          10682   // 5.0
#define IDS_HELP_CUSTOMHELP_11          10683   // 5.0
#define IDS_HELP_CUSTOMHELP_12          10684   // 5.0
#define IDS_HELP_CUSTOMHELP_13          10685   // 5.0
#define IDS_HELP_CUSTOMHELP_14          10686   // 5.0
#define IDS_HELP_CUSTOMHELP_15          10687   // 5.0
//
#define IDS_IMG_NEWIMAGE                10688
#define IDS_IMG_DELETEIMAGE             10689
#define IDS_IMG_RESIZE                  10690   // 5.0
#define IDS_IMG_MIRROR_HORZ             10691
#define IDS_IMG_MIRROR_VERT             10692
#define IDS_IMG_ROTATE                  10693
#define IDS_IMG_GRAYSCALE               10694
#define IDS_IMG_SEPIATONE               10695   // 4.0
#define IDS_IMG_HSV                     10696
#define IDS_IMG_OPAQUEALPHA             10697   // 4.0
#define IDS_IMG_EFFECT_OILPAINT         10698
#define IDS_IMG_EFFECT_SPREAD           10699
#define IDS_IMG_EFFECT_EMBOSS           10700
#define IDS_IMG_EFFECT_FISHEYE          10701
#define IDS_IMG_EFFECT_DROPSHADOW       10702   // 4.0
#define IDS_IMG_EFFECT_BLUR             10703
#define IDS_IMG_EFFECT_SHARPEN          10704
//
#define IDS_DLG_NEWPICTURE              10705   // 4.50
#define IDS_DLG_NEWTEXT                 10706   // 4.50
#define IDS_DLG_NEWEDITBOX              10707   // 4.50
#define IDS_DLG_NEWGROUPBOX             10708   // 4.50
#define IDS_DLG_NEWPUSHBUTTON           10709   // 4.50
#define IDS_DLG_NEWCHECKBOX             10710   // 4.50
#define IDS_DLG_NEWRADIOBUTTON          10711   // 4.50
#define IDS_DLG_NEWCOMBOBOX             10712   // 4.50
#define IDS_DLG_NEWLISTBOX              10713   // 4.50
#define IDS_DLG_NEWHSCROLLBAR           10714   // 4.50
#define IDS_DLG_NEWVSCROLLBAR           10715   // 4.50
#define IDS_DLG_NEWUPDOWN               10716   // 4.50
#define IDS_DLG_NEWPROGRESS             10717   // 4.50
#define IDS_DLG_NEWTRACKBAR             10718   // 4.50
#define IDS_DLG_NEWHOTKEY               10719   // 4.50
#define IDS_DLG_NEWLISTVIEW             10720   // 4.50
#define IDS_DLG_NEWTREEVIEW             10721   // 4.50
#define IDS_DLG_NEWTABCONTROL           10722   // 4.50
#define IDS_DLG_NEWANIMATE              10723   // 4.50
#define IDS_DLG_NEWRICHEDIT             10724   // 4.50
#define IDS_DLG_NEWRICHED20             10725   // 4.50
#define IDS_DLG_NEWRICHED30             10726   // 14.0
#define IDS_DLG_NEWRICHED50             10727   // 14.0
#define IDS_DLG_NEWDATETIME             10728   // 4.50
#define IDS_DLG_NEWMONTHCAL             10729   // 4.50
#define IDS_DLG_NEWCOMBOBOXEX           10730   // 4.50
#define IDS_DLG_NEWREBAR                10731   // 4.50
#define IDS_DLG_NEWPAGER                10732   // 4.50
#define IDS_DLG_NEWTOOLBAR              10733   // 4.50
#define IDS_DLG_NEWSTATUSBAR            10734   // 4.50
#define IDS_DLG_NEWSYSLINK              10735   // 5.0
#define IDS_DLG_NEWIPADDRESS            10736   // 5.0
#define IDS_DLG_NEWNETADDRESS           10737   // 5.0
#define IDS_DLG_NEWSPLITBUTTON          10738   // 5.0
#define IDS_DLG_NEWCOMMANDLINK          10739   // 5.0
#define IDS_DLG_NEWNATIVEFONT           10740   // 5.0
#define IDS_DLG_ALIGNLEFT               10741
#define IDS_DLG_ALIGNVERT               10742
#define IDS_DLG_ALIGNRIGHT              10743
#define IDS_DLG_ALIGNTOP                10744
#define IDS_DLG_ALIGNHORZ               10745
#define IDS_DLG_ALIGNBOTTOM             10746
#define IDS_DLG_CENTERVERT              10747
#define IDS_DLG_CENTERHORZ              10748
#define IDS_DLG_SPACEVERT               10749
#define IDS_DLG_SPACEHORZ               10750
#define IDS_DLG_ARRSIZEWIDTH            10751
#define IDS_DLG_ARRSIZEHEIGHT           10752
#define IDS_DLG_ARRSIZEBOTH             10753
#define IDS_DLG_ARRPUSHBOTTOM           10754
#define IDS_DLG_ARRPUSHRIGHT            10755
#define IDS_DLG_SIZETOTEXT              10756
#define IDS_DLG_NEWCUSTOM               10757
#define IDS_DLG_OPENCUSTOM              10758
#define IDS_DLG_REMOVECUSTOM            10759
#define IDS_DLG_LOCKCONTROLS            10760
#define IDS_DLG_ORDERCONTROLS           10761
//
#define IDS_RSRC_NEWBITMAP              10762
#define IDS_RSRC_NEWICON                10763
#define IDS_RSRC_NEWCURSOR              10764
#define IDS_RSRC_NEWANICURSOR           10765
#define IDS_RSRC_NEWVIDEO               10766
#define IDS_RSRC_NEWDIALOG              10767
#define IDS_RSRC_NEWMENU                10768
#define IDS_RSRC_NEWSTRINGTABLE         10769
#define IDS_RSRC_NEWMSGTABLE            10770   // 3.0
#define IDS_RSRC_NEWACCEL               10771
#define IDS_RSRC_NEWVERSION             10772
#define IDS_RSRC_NEWMANIFEST            10773
#define IDS_RSRC_NEWHTML                10774   // 5.0
#define IDS_RSRC_NEWCUSTOM              10775   // 3.0
#define IDS_RSRC_NEWCOPY                10776
#define IDS_RSRC_IMPORT                 10777
#define IDS_RSRC_EXPORT                 10778   // 6.0
#define IDS_RSRC_SORTNAMES              10779
#define IDS_RSRC_LABELS                 10780   // 6.50: IDS_VIEW_LABELS -> IDS_RSRC_LABELS
#define IDS_RSRC_INCLUDES               10781   // 6.50: IDS_VIEW_INCLUDES -> IDS_RSRC_INCLUDES
//
#define IDS_MESS_SETINCLUDE             10782   // 3.0
#define IDS_MESS_VIEWLABELS             10783   // 3.0
//
#define IDS_SRC_FORCECALLTIP            10784   // 4.50
#define IDS_SRC_COMPLETEWORD            10785
#define IDS_SRC_INSERTSNIPPET           10786   // 5.0
#define IDS_SRC_SURROUNDBY              10787   // 5.0
#define IDS_SRC_SURROUNDBY_1            10788   // 5.0
#define IDS_SRC_SURROUNDBY_2            10789   // 5.0
#define IDS_SRC_SURROUNDBY_3            10790   // 5.0
#define IDS_SRC_SURROUNDBY_4            10791   // 5.0
#define IDS_SRC_SURROUNDBY_5            10792   // 5.0
#define IDS_SRC_SURROUNDBY_6            10793   // 5.0
#define IDS_SRC_SURROUNDBY_7            10794   // 5.0
#define IDS_SRC_SURROUNDBY_8            10795   // 5.0
#define IDS_SRC_SURROUNDBY_9            10796   // 5.0
#define IDS_SRC_SURROUNDBY_10           10797   // 5.0
#define IDS_SRC_SURROUNDBY_11           10798   // 5.0
#define IDS_SRC_SURROUNDBY_12           10799   // 5.0
#define IDS_SRC_SURROUNDBY_13           10800   // 5.0
#define IDS_SRC_SURROUNDBY_14           10801   // 5.0
#define IDS_SRC_SURROUNDBY_15           10802   // 5.0
#define IDS_SRC_UCASE                   10803
#define IDS_SRC_LCASE                   10804
#define IDS_SRC_TABTOSPACE              10805
#define IDS_SRC_SPACETOTAB              10806
#define IDS_SRC_FORMAT                  10807   // 3.0
#define IDS_SRC_COMMENT                 10808   // 4.0
#define IDS_SRC_UNCOMMENT               10809   // 4.0
#define IDS_SRC_NEXTBOOKMARK            10810
#define IDS_SRC_PREVBOOKMARK            10811
#define IDS_SRC_SETBOOKMARK             10812
#define IDS_SRC_CLEARBOOKMARKS          10813
#define IDS_SRC_WHITESPACE              10814
#define IDS_SRC_LINEBREAKS              10815
#define IDS_SRC_LINENUMBERS             10816
#define IDS_SRC_FOLDINGS                10817
#define IDS_SRC_MATCHINGBRACES          10818   // 4.50
#define IDS_SRC_VIEWDEFINITION          10819   // 6.0
#define IDS_SRC_PREVDEFINITION          10820   // 6.0
#define IDS_SRC_FOLDALL                 10821
#define IDS_SRC_UNFOLDALL               10822
//
#define IDS_DBG_GO                      10823
#define IDS_DBG_RESTART                 10824
#define IDS_DBG_STOP                    10825
#define IDS_DBG_BREAK                   10826
#define IDS_DBG_STEPINTO                10827
#define IDS_DBG_STEPOVER                10828
#define IDS_DBG_STEPOUT                 10829   // 4.0
#define IDS_DBG_RUNTOCURSOR             10830   // 4.0
#define IDS_DBG_TOGGLEBREAKPOINT        10831   // 4.0
#define IDS_DBG_SHOWNEXTSTMT            10832
#define IDS_DBG_ADDWATCH                10833
#define IDS_DBG_QUICKWATCH              10834   // 4.0
#define IDS_DBG_HWBREAKS                10835   // 4.0 B4
//
#define IDS_WEB_BACK                    10836   // 7.0
#define IDS_WEB_FORWARD                 10837   // 7.0
#define IDS_WEB_HOME                    10838   // 8.0
#define IDS_WEB_REFRESH                 10839   // 7.0
#define IDS_WEB_CERTIFICATE             10840   // 7.0
#define IDS_WEB_SHOWSOURCE              10841   // 7.0
//
#define IDS_DIFF_PREVCHANGE             10842   // 7.0
#define IDS_DIFF_NEXTCHANGE             10843   // 7.0
#define IDS_DIFF_REFRESH                10844   // 7.0
#define IDS_DIFF_OPENLEFT               10845   // 7.0
#define IDS_DIFF_OPENRIGHT              10846   // 7.0
#define IDS_DIFF_OPENCOMPOSITE          10847   // 9.0
//
#define IDS_MISC_OPEN                   10848
#define IDS_MISC_TEST                   10849
#define IDS_MISC_CHECKMNEMONICS         10850
#define IDS_MISC_NEXTWINDOW             10851
//
// Tooltips.
//
#define IDS_TIP_NEW                     10852
#define IDS_TIP_OPEN                    10853
#define IDS_TIP_SAVE                    10854
#define IDS_TIP_SAVEALL                 10855
#define IDS_TIP_CUT                     10856
#define IDS_TIP_COPY                    10857
#define IDS_TIP_PASTE                   10858
#define IDS_TIP_UNDO                    10859
#define IDS_TIP_REDO                    10860
#define IDS_TIP_COMPILE                 10861
#define IDS_TIP_BUILD                   10862
#define IDS_TIP_SETTINGS                10863   // 8.0
#define IDS_TIP_MAKEALLPREQS            10864   // 11.0
#define IDS_TIP_EXECUTE                 10865
#define IDS_TIP_GO                      10866
#define IDS_TIP_RESTART                 10867
#define IDS_TIP_STOPDEBUG               10868   // 7.0: IDS_TIP_STOP -> IDS_TIP_STOPDEBUG
#define IDS_TIP_STEPINTO                10869
#define IDS_TIP_STEPOVER                10870
#define IDS_TIP_STEPOUT                 10871   // 4.0
#define IDS_TIP_QUICKWATCH              10872   // 4.0
#define IDS_TIP_DELETE                  10873
#define IDS_TIP_CHECKMNEMONICS          10874
//
#define IDS_TIP_PENCIL                  10875
#define IDS_TIP_BRUSH                   10876
#define IDS_TIP_SELECT                  10877
#define IDS_TIP_PICKCOLOR               10878
#define IDS_TIP_LINE                    10879
#define IDS_TIP_RECT                    10880
#define IDS_TIP_ELLIPSE                 10881   // 4.0 (renamed)
#define IDS_TIP_ROUNDRECT               10882
#define IDS_TIP_DRAWTEXT                10883
#define IDS_TIP_FLOODFILL               10884
#define IDS_TIP_SPRAY                   10885
#define IDS_TIP_ERASER                  10886
#define IDS_TIP_MAGNIFY                 10887
#define IDS_TIP_HOTSPOT                 10888
#define IDS_TIP_GRADIENT                10889   // 5.0
#define IDS_TIP_LEFTCOLOR               10890
#define IDS_TIP_RIGHTCOLOR              10891
#define IDS_TIP_SCREENCOLOR             10892
#define IDS_TIP_INVERSECOLOR            10893
#define IDS_TIP_TRANSPARENTCOLOR        10894   // 5.0
#define IDS_TIP_PALETTE                 10895   // 4.0
#define IDS_TIP_LOADPALETTE             10896   // 4.0
#define IDS_TIP_SAVEPALETTE             10897   // 4.0
#define IDS_TIP_RGBCOLOR                10898   // 4.0 (renamed)
#define IDS_TIP_RGBACOLOR               10899   // 4.0
//
#define IDS_TIP_POINTER                 10900
#define IDS_TIP_PICTURE                 10901
#define IDS_TIP_TEXT                    10902
#define IDS_TIP_EDITBOX                 10903
#define IDS_TIP_GROUPBOX                10904
#define IDS_TIP_PUSHBUTTON              10905
#define IDS_TIP_CHECKBOX                10906
#define IDS_TIP_RADIOBUTTON             10907
#define IDS_TIP_COMBOBOX                10908
#define IDS_TIP_LISTBOX                 10909
#define IDS_TIP_HSCROLLBAR              10910
#define IDS_TIP_VSCROLLBAR              10911
#define IDS_TIP_UPDOWN                  10912
#define IDS_TIP_PROGRESS                10913
#define IDS_TIP_TRACKBAR                10914
#define IDS_TIP_HOTKEY                  10915
#define IDS_TIP_LISTVIEW                10916
#define IDS_TIP_TREEVIEW                10917
#define IDS_TIP_TABCONTROL              10918
#define IDS_TIP_ANIMATE                 10919
#define IDS_TIP_RICHEDIT                10920
#define IDS_TIP_RICHED20                10921   // 4.50
#define IDS_TIP_RICHED30                10922   // 14.0
#define IDS_TIP_RICHED50                10923   // 14.0
#define IDS_TIP_DATETIME                10924
#define IDS_TIP_MONTHCAL                10925
#define IDS_TIP_COMBOBOXEX              10926
#define IDS_TIP_REBAR                   10927
#define IDS_TIP_PAGER                   10928
#define IDS_TIP_TOOLBAR                 10929
#define IDS_TIP_STATUSBAR               10930
#define IDS_TIP_SYSLINK                 10931   // 5.0
#define IDS_TIP_IPADDRESS               10932   // 5.0
#define IDS_TIP_NETADDRESS              10933   // 5.0
#define IDS_TIP_SPLITBUTTON             10934   // 5.0
#define IDS_TIP_COMMANDLINK             10935   // 5.0
#define IDS_TIP_NATIVEFONT              10936   // 5.0
#define IDS_TIP_CUSTOM                  10937
//
#define IDS_TIP_TEST                    10938
#define IDS_TIP_LOCKCONTROLS            10939
#define IDS_TIP_ORDERCONTROLS           10940
#define IDS_TIP_ARRPUSHBOTTOM           10941
#define IDS_TIP_ARRPUSHRIGHT            10942
#define IDS_TIP_ALIGNLEFT               10943
#define IDS_TIP_ALIGNRIGHT              10944
#define IDS_TIP_ALIGNTOP                10945
#define IDS_TIP_ALIGNBOTTOM             10946
#define IDS_TIP_ALIGNHORZ               10947
#define IDS_TIP_ALIGNVERT               10948
#define IDS_TIP_SPACEHORZ               10949
#define IDS_TIP_SPACEVERT               10950
#define IDS_TIP_ARRSIZEWIDTH            10951
#define IDS_TIP_ARRSIZEHEIGHT           10952
#define IDS_TIP_ARRSIZEBOTH             10953
#define IDS_TIP_CENTERHORZ              10954
#define IDS_TIP_CENTERVERT              10955
//
#define IDS_TIP_NEWFOLDER               10956
#define IDS_TIP_NEWFILE                 10957
#define IDS_TIP_NEWTOOL                 10958
#define IDS_TIP_NEWHELP                 10959
#define IDS_TIP_NEWSNIPPET              10960   // 5.0
#define IDS_TIP_IMPORT                  10961   // 5.0
#define IDS_TIP_EXPORT                  10962   // 5.0
#define IDS_TIP_MOVEUP                  10963
#define IDS_TIP_MOVEDOWN                10964
#define IDS_TIP_DEFAULTS                10965   // 10.0
//
#define IDS_TIP_NEWIMAGE                10966
#define IDS_TIP_DELETEIMAGE             10967
//
#define IDS_TIP_NEWMACRO                10968   // 6.50
#define IDS_TIP_EDITMACRO               10969   // 6.50
//
#define IDS_TIP_SOURCEFILES             10970
#define IDS_TIP_TARGETFILES             10971
#define IDS_TIP_CLOSE                   10972
//
#define IDS_TIP_BACK                    10973   // 7.0
#define IDS_TIP_FORWARD                 10974   // 7.0
#define IDS_TIP_HOME                    10975   // 8.0
#define IDS_TIP_REFRESH                 10976   // 7.0
#define IDS_TIP_CERTIFICATE             10977   // 7.0
//
#define IDS_TIP_PREVCHANGE              10978   // 7.0
#define IDS_TIP_NEXTCHANGE              10979   // 7.0
#define IDS_TIP_STOP                    10980   // 7.0
#define IDS_TIP_EXPAND                  10981   // 8.0
#define IDS_TIP_OUTLINE                 10982   // 8.0
//
// Color descriptions.
//
#define IDS_COLOR_TEXT                  10983
#define IDS_COLOR_ATTRIBUTE             10984   // 11.0
#define IDS_COLOR_KEYWORD               10985
#define IDS_COLOR_COMMENT               10986
#define IDS_COLOR_NUMBER                10987
#define IDS_COLOR_STRING                10988
#define IDS_COLOR_PREPROC               10989
#define IDS_COLOR_FUNCTION              10990
#define IDS_COLOR_OPERATOR              10991
#define IDS_COLOR_SELTEXT               10992
#define IDS_COLOR_BREAKPOINT            10993
#define IDS_COLOR_DEBUGLINE             10994
#define IDS_COLOR_DEBUGASM              10995   // 10.0
#define IDS_COLOR_PROFLINE              10996   // 6.50
#define IDS_COLOR_DIFFBLOB              10997   // 7.0
#define IDS_COLOR_DIFFLEFT              10998   // 7.0
#define IDS_COLOR_DIFFRIGHT             10999   // 7.0
#define IDS_COLORTABLE                  11000
//
// Encoding descriptions.
//
#define IDS_ENCODING_ANSI               11001   // 5.0 (#1)
#define IDS_ENCODING_OEM                11002   // 5.0 (#2)
#define IDS_ENCODING_UTF8               11003   // 5.0 (#3)
#define IDS_ENCODING_UTF8_NO_BOM        11004   // 5.0 (#4)
#define IDS_ENCODING_UTF16_LE           11005   // 5.0 (#5)
#define IDS_ENCODING_UTF16_BE           11006   // 5.0 (#6)
#define IDS_ENCODING_UTF32_LE           11007   // 5.0 (#7)
#define IDS_ENCODING_UTF32_BE           11008   // 5.0 (#8)
//
// Startup descriptions.
//
#define IDS_STARTUP_WELCOME             11009   // 7.0
#define IDS_STARTUP_PROJECT             11010   // 7.0
#define IDS_STARTUP_HOMEPAGE            11011   // 7.0
#define IDS_STARTUP_EMPTY               11012   // 7.0
//
#define IDS_DESC_GENERAL                11013
#define IDS_DESC_MYSTYLES               11014
#define IDS_DESC_STYLES                 11015
#define IDS_DESC_EXSTYLES               11016
#define IDS_DESC_RESIZER                11017   // 6.0
#define IDS_DESC_NAME                   11018
#define IDS_DESC_TEXT                   11019
#define IDS_DESC_ORDER                  11020
#define IDS_DESC_HELP                   11021   // 5.0
#define IDS_DESC_LEFT                   11022
#define IDS_DESC_TOP                    11023
#define IDS_DESC_WIDTH                  11024
#define IDS_DESC_HEIGHT                 11025
#define IDS_DESC_VERTRESIZER            11026   // 6.0
#define IDS_DESC_HORZRESIZER            11027   // 6.0
#define IDS_DESC_FONTNAME               11028
#define IDS_DESC_FONTSIZE               11029
#define IDS_DESC_FONTWEIGHT             11030
#define IDS_DESC_FONTCHARSET            11031
#define IDS_DESC_FONTITALIC             11032
#define IDS_DESC_CLASSNAME              11033
#define IDS_DESC_MENUNAME               11034
#define IDS_DESC_STYLE                  11035
#define IDS_DESC_ALIGNMENT              11036
#define IDS_DESC_TYPE                   11037
#define IDS_DESC_OWNERDRAW              11038
#define IDS_DESC_SELECTION              11039
#define IDS_DESC_POINT                  11040
#define IDS_DESC_VIEW                   11041
#define IDS_DESC_SORT                   11042
#define IDS_DESC_FOCUS                  11043
#define IDS_DESC_FORMAT                 11044
#define IDS_DESC_IMAGE                  11045
#define IDS_DESC_ELLIPSIS               11046
#define IDS_DESC_VERTALIGNMENT          11047
#define IDS_DESC_WS_OVERLAPPED          11048
#define IDS_DESC_WS_POPUP               11049
#define IDS_DESC_WS_CHILD               11050
#define IDS_DESC_WS_CAPTION             11051
#define IDS_DESC_WS_SYSMENU             11052
#define IDS_DESC_WS_VISIBLE             11053
#define IDS_DESC_WS_DISABLED            11054
#define IDS_DESC_WS_BORDER              11055
#define IDS_DESC_WS_GROUP               11056
#define IDS_DESC_WS_TABSTOP             11057
#define IDS_DESC_WS_HSCROLL             11058
#define IDS_DESC_WS_VSCROLL             11059
#define IDS_DESC_WS_MINIMIZEBOX         11060
#define IDS_DESC_WS_MAXIMIZEBOX         11061
#define IDS_DESC_WS_CLIPSIBLINGS        11062
#define IDS_DESC_WS_CLIPCHILDREN        11063
#define IDS_DESC_WS_THICKFRAME          11064
#define IDS_DESC_DS_MODALFRAME          11065
#define IDS_DESC_DS_SYSMODAL            11066
#define IDS_DESC_DS_ABSALIGN            11067
#define IDS_DESC_DS_CONTEXTHELP         11068
#define IDS_DESC_DS_SETFOREGROUND       11069
#define IDS_DESC_DS_3DLOOK              11070
#define IDS_DESC_DS_NOFAILCREATE        11071
#define IDS_DESC_DS_NOIDLEMSG           11072
#define IDS_DESC_DS_CONTROL             11073
#define IDS_DESC_DS_CENTER              11074
#define IDS_DESC_DS_CENTERMOUSE         11075
#define IDS_DESC_DS_LOCALEDIT           11076
#define IDS_DESC_SS_BITMAP              11077
#define IDS_DESC_SS_ICON                11078
#define IDS_DESC_SS_ENHMETAFILE         11079
#define IDS_DESC_SS_BLACKRECT           11080
#define IDS_DESC_SS_GRAYRECT            11081
#define IDS_DESC_SS_WHITERECT           11082
#define IDS_DESC_SS_BLACKFRAME          11083
#define IDS_DESC_SS_GRAYFRAME           11084
#define IDS_DESC_SS_WHITEFRAME          11085
#define IDS_DESC_SS_ETCHEDHORZ          11086
#define IDS_DESC_SS_ETCHEDVERT          11087
#define IDS_DESC_SS_ETCHEDFRAME         11088
#define IDS_DESC_SS_CENTERIMAGE         11089
#define IDS_DESC_SS_REALSIZEIMAGE       11090
#define IDS_DESC_SS_REALSIZECONTROL     11091   // 4.0
#define IDS_DESC_SS_SUNKEN              11092
#define IDS_DESC_SS_LEFT                11093
#define IDS_DESC_SS_CENTER              11094
#define IDS_DESC_SS_RIGHT               11095
#define IDS_DESC_SS_SIMPLE              11096
#define IDS_DESC_SS_LEFTNOWORDWRAP      11097
#define IDS_DESC_SS_OWNERDRAW           11098
#define IDS_DESC_SS_NOPREFIX            11099
#define IDS_DESC_SS_NOTIFY              11100
#define IDS_DESC_SS_RIGHTJUST           11101
#define IDS_DESC_SS_NOELLIPSIS          11102
#define IDS_DESC_SS_ENDELLIPSIS         11103
#define IDS_DESC_SS_PATHELLIPSIS        11104
#define IDS_DESC_SS_WORDELLIPSIS        11105
#define IDS_DESC_ES_LEFT                11106
#define IDS_DESC_ES_CENTER              11107
#define IDS_DESC_ES_RIGHT               11108
#define IDS_DESC_ES_MULTILINE           11109
#define IDS_DESC_ES_NUMBER              11110
#define IDS_DESC_ES_AUTOHSCROLL         11111
#define IDS_DESC_ES_AUTOVSCROLL         11112
#define IDS_DESC_ES_PASSWORD            11113
#define IDS_DESC_ES_NOHIDESEL           11114
#define IDS_DESC_ES_OEMCONVERT          11115
#define IDS_DESC_ES_WANTRETURN          11116
#define IDS_DESC_ES_UPPERCASE           11117
#define IDS_DESC_ES_LOWERCASE           11118
#define IDS_DESC_ES_READONLY            11119
#define IDS_DESC_ES_DISABLENOSCROLL     11120
#define IDS_DESC_BS_TEXT                11121
#define IDS_DESC_BS_ICON                11122
#define IDS_DESC_BS_BITMAP              11123
#define IDS_DESC_BS_NOTIFY              11124
#define IDS_DESC_BS_FLAT                11125
#define IDS_DESC_BS_PUSHBUTTON          11126
#define IDS_DESC_BS_DEFPUSHBUTTON       11127
#define IDS_DESC_BS_PUSHBOX             11128   // 5.0
#define IDS_DESC_BS_OWNERDRAW           11129
#define IDS_DESC_BS_MULTILINE           11130
#define IDS_DESC_BS_CHECKBOX            11131
#define IDS_DESC_BS_AUTOCHECKBOX        11132
#define IDS_DESC_BS_3STATE              11133
#define IDS_DESC_BS_AUTO3STATE          11134
#define IDS_DESC_BS_LEFTTEXT            11135
#define IDS_DESC_BS_PUSHLIKE            11136
#define IDS_DESC_BS_RADIOBUTTON         11137
#define IDS_DESC_BS_AUTORADIOBUTTON     11138
#define IDS_DESC_BS_LEFT                11139
#define IDS_DESC_BS_CENTER              11140
#define IDS_DESC_BS_RIGHT               11141
#define IDS_DESC_BS_TOP                 11142
#define IDS_DESC_BS_VCENTER             11143
#define IDS_DESC_BS_BOTTOM              11144
#define IDS_DESC_BS_NOALIGN             11145
#define IDS_DESC_BS_SPLITBUTTON         11146   // 5.0
#define IDS_DESC_BS_DEFSPLITBUTTON      11147   // 5.0
#define IDS_DESC_BS_COMMANDLINK         11148   // 5.0
#define IDS_DESC_BS_DEFCOMMANDLINK      11149   // 5.0
#define IDS_DESC_CBS_SIMPLE             11150
#define IDS_DESC_CBS_DROPDOWN           11151
#define IDS_DESC_CBS_DROPDOWNLIST       11152
#define IDS_DESC_OD_NO                  11153
#define IDS_DESC_OD_FIXED               11154
#define IDS_DESC_OD_VARIABLE            11155
#define IDS_DESC_CBS_AUTOHSCROLL        11156
#define IDS_DESC_CBS_OEMCONVERT         11157
#define IDS_DESC_CBS_SORT               11158
#define IDS_DESC_CBS_HASSTRINGS         11159
#define IDS_DESC_CBS_NOINTEGRALHEIGHT   11160
#define IDS_DESC_CBS_DISABLENOSCROLL    11161
#define IDS_DESC_CBS_UPPERCASE          11162
#define IDS_DESC_CBS_LOWERCASE          11163
#define IDS_DESC_LBS_SINGLESEL          11164
#define IDS_DESC_LBS_MULTIPLESEL        11165
#define IDS_DESC_LBS_EXTENDEDSEL        11166
#define IDS_DESC_LBS_NOSEL              11167
#define IDS_DESC_LBS_SORT               11168
#define IDS_DESC_LBS_HASSTRINGS         11169
#define IDS_DESC_LBS_NOINTEGRALHEIGHT   11170
#define IDS_DESC_LBS_DISABLENOSCROLL    11171
#define IDS_DESC_LBS_NOTIFY             11172
#define IDS_DESC_LBS_MULTICOLUMN        11173
#define IDS_DESC_LBS_NOREDRAW           11174
#define IDS_DESC_LBS_USETABSTOPS        11175
#define IDS_DESC_LBS_WANTKEYBOARDINPUT  11176
#define IDS_DESC_LBS_NODATA             11177
#define IDS_DESC_UDS_UNATTACHED         11178
#define IDS_DESC_UDS_ALIGNLEFT          11179
#define IDS_DESC_UDS_ALIGNRIGHT         11180
#define IDS_DESC_UDS_HORZ               11181
#define IDS_DESC_UDS_AUTOBUDDY          11182
#define IDS_DESC_UDS_SETBUDDYINT        11183
#define IDS_DESC_UDS_NOTHOUSANDS        11184
#define IDS_DESC_UDS_WRAP               11185
#define IDS_DESC_UDS_ARROWKEYS          11186
#define IDS_DESC_UDS_HOTTRACK           11187
#define IDS_DESC_PBS_VERTICAL           11188
#define IDS_DESC_PBS_SMOOTH             11189
#define IDS_DESC_PBS_MARQUEE            11190   // 4.0
#define IDS_DESC_TBS_BOTH               11191
#define IDS_DESC_TBS_LEFT               11192
#define IDS_DESC_TBS_RIGHT              11193
#define IDS_DESC_TBS_VERT               11194
#define IDS_DESC_TBS_NOTICKS            11195
#define IDS_DESC_TBS_AUTOTICKS          11196
#define IDS_DESC_TBS_ENABLESELRANGE     11197
#define IDS_DESC_TBS_FIXEDLENGTH        11198
#define IDS_DESC_TBS_NOTHUMB            11199
#define IDS_DESC_TBS_TOOLTIPS           11200
#define IDS_DESC_LVS_ICON               11201
#define IDS_DESC_LVS_SMALLICON          11202
#define IDS_DESC_LVS_LIST               11203
#define IDS_DESC_LVS_REPORT             11204
#define IDS_DESC_LVS_ALIGNTOP           11205
#define IDS_DESC_LVS_ALIGNLEFT          11206
#define IDS_DESC_LVS_NOSORT             11207
#define IDS_DESC_LVS_SORTASCENDING      11208
#define IDS_DESC_LVS_SORTDESCENDING     11209
#define IDS_DESC_LVS_SINGLESEL          11210
#define IDS_DESC_LVS_SHOWSELALWAYS      11211
#define IDS_DESC_LVS_AUTOARRANGE        11212
#define IDS_DESC_LVS_NOLABELWRAP        11213
#define IDS_DESC_LVS_EDITLABELS         11214
#define IDS_DESC_LVS_NOSCROLL           11215
#define IDS_DESC_LVS_NOCOLUMNHEADER     11216
#define IDS_DESC_LVS_NOSORTHEADER       11217
#define IDS_DESC_LVS_SHAREIMAGELISTS    11218
#define IDS_DESC_LVS_OWNERDRAWFIXED     11219
#define IDS_DESC_LVS_OWNERDATA          11220
#define IDS_DESC_TVS_HASBUTTONS         11221
#define IDS_DESC_TVS_HASLINES           11222
#define IDS_DESC_TVS_LINESATROOT        11223
#define IDS_DESC_TVS_EDITLABELS         11224
#define IDS_DESC_TVS_DISABLEDRAGDROP    11225
#define IDS_DESC_TVS_SHOWSELALWAYS      11226
#define IDS_DESC_TVS_NOTOOLTIPS         11227
#define IDS_DESC_TVS_CHECKBOXES         11228
#define IDS_DESC_TVS_TRACKSELECT        11229
#define IDS_DESC_TVS_SINGLEEXPAND       11230
#define IDS_DESC_TVS_INFOTIP            11231
#define IDS_DESC_TVS_FULLROWSELECT      11232
#define IDS_DESC_TVS_NOSCROLL           11233
#define IDS_DESC_TVS_NONEVENHEIGHT      11234
#define IDS_DESC_TCS_RIGHTJUSTIFY       11235
#define IDS_DESC_TCS_FIXEDWIDTH         11236
#define IDS_DESC_TCS_RAGGEDRIGHT        11237
#define IDS_DESC_TCS_FOCUSDEFAULT       11238
#define IDS_DESC_TCS_FOCUSONBUTTONDOWN  11239
#define IDS_DESC_TCS_FOCUSNEVER         11240
#define IDS_DESC_TCS_BUTTONS            11241
#define IDS_DESC_TCS_FLATBUTTONS        11242
#define IDS_DESC_TCS_TOOLTIPS           11243
#define IDS_DESC_TCS_MULTILINE          11244
#define IDS_DESC_TCS_OWNERDRAWFIXED     11245
#define IDS_DESC_TCS_FORCELABELLEFT     11246
#define IDS_DESC_TCS_FORCEICONLEFT      11247
#define IDS_DESC_TCS_HOTTRACK           11248
#define IDS_DESC_TCS_BOTTOM             11249
#define IDS_DESC_TCS_MULTISELECT        11250
#define IDS_DESC_TCS_SCROLLOPPOSITE     11251
#define IDS_DESC_TCS_VERTICAL           11252
#define IDS_DESC_ACS_CENTER             11253
#define IDS_DESC_ACS_TRANSPARENT        11254
#define IDS_DESC_ACS_AUTOPLAY           11255
#define IDS_DESC_ACS_TIMER              11256
#define IDS_DESC_DTS_SHORTDATEFORMAT    11257
#define IDS_DESC_DTS_LONGDATEFORMAT     11258
#define IDS_DESC_DTS_TIMEFORMAT         11259
#define IDS_DESC_DTS_RIGHTALIGN         11260
#define IDS_DESC_DTS_UPDOWN             11261
#define IDS_DESC_DTS_SHOWNONE           11262
#define IDS_DESC_MCS_DAYSTATE           11263
#define IDS_DESC_MCS_MULTISELECT        11264
#define IDS_DESC_MCS_WEEKNUMBERS        11265
#define IDS_DESC_MCS_NOTODAYCIRCLE      11266
#define IDS_DESC_MCS_NOTODAY            11267
#define IDS_DESC_CCS_NORESIZE           11268
#define IDS_DESC_CCS_TOP                11269
#define IDS_DESC_CCS_BOTTOM             11270
#define IDS_DESC_CCS_LEFT               11271
#define IDS_DESC_CCS_RIGHT              11272
#define IDS_DESC_CCS_NODIVIDER          11273
#define IDS_DESC_CCS_ADJUSTABLE         11274
#define IDS_DESC_RBS_VARHEIGHT          11275
#define IDS_DESC_RBS_BANDBORDERS        11276
#define IDS_DESC_RBS_FIXEDORDER         11277
#define IDS_DESC_RBS_REGISTERDROP       11278
#define IDS_DESC_RBS_AUTOSIZE           11279
#define IDS_DESC_RBS_VERTICALGRIPPER    11280
#define IDS_DESC_RBS_DBLCLKTOGGLE       11281
#define IDS_DESC_PGS_HORZ               11282
#define IDS_DESC_PGS_AUTOSCROLL         11283
#define IDS_DESC_PGS_DRAGNDROP          11284
#define IDS_DESC_TBSTYLE_FLAT           11285
#define IDS_DESC_TBSTYLE_LIST           11286
#define IDS_DESC_TBSTYLE_WRAPABLE       11287
#define IDS_DESC_TBSTYLE_TRANSPARENT    11288
#define IDS_DESC_TBSTYLE_TOOLTIPS       11289
#define IDS_DESC_TBSTYLE_ALTDRAG        11290
#define IDS_DESC_TBSTYLE_CUSTOMERASE    11291
#define IDS_DESC_TBSTYLE_REGISTERDROP   11292
#define IDS_DESC_SBARS_SIZEGRIP         11293
#define IDS_DESC_LWS_TRANSPARENT        11294   // 5.0
#define IDS_DESC_LWS_IGNORERETURN       11295   // 5.0
#define IDS_DESC_LWS_NOPREFIX           11296   // 5.0
#define IDS_DESC_LWS_USEVISUALSTYLE     11297   // 5.0
#define IDS_DESC_LWS_USECUSTOMTEXT      11298   // 5.0
#define IDS_DESC_LWS_RIGHT              11299   // 5.0
#define IDS_DESC_NFS_EDIT               11300   // 5.0
#define IDS_DESC_NFS_STATIC             11301   // 5.0
#define IDS_DESC_NFS_LISTCOMBO          11302   // 5.0
#define IDS_DESC_NFS_BUTTON             11303   // 5.0
#define IDS_DESC_NFS_ALL                11304   // 5.0
#define IDS_DESC_NFS_USEFONTASSOC       11305   // 5.0
#define IDS_DESC_WS_EX_CLIENTEDGE       11306
#define IDS_DESC_WS_EX_STATICEDGE       11307
#define IDS_DESC_WS_EX_TRANSPARENT      11308
#define IDS_DESC_WS_EX_ACCEPTFILES      11309
#define IDS_DESC_WS_EX_RIGHT            11310
#define IDS_DESC_WS_EX_LEFTSCROLLBAR    11311
#define IDS_DESC_WS_EX_TOOLWINDOW       11312
#define IDS_DESC_WS_EX_CONTROLPARENT    11313
#define IDS_DESC_WS_EX_CONTEXTHELP      11314
#define IDS_DESC_WS_EX_NOPARENTNOTIFY   11315
#define IDS_DESC_WS_EX_APPWINDOW        11316   // 4.0
#define IDS_DESC_WS_EX_TOPMOST          11317   // 4.0
#define IDS_DESC_WS_EX_NOACTIVATE       11318   // 4.0
#define IDS_HELP_NAME                   11319
#define IDS_HELP_TEXT                   11320
#define IDS_HELP_ORDER                  11321
#define IDS_HELP_HELP                   11322   // 5.0
#define IDS_HELP_LEFT                   11323
#define IDS_HELP_TOP                    11324
#define IDS_HELP_WIDTH                  11325
#define IDS_HELP_HEIGHT                 11326
#define IDS_HELP_VERTRESIZER            11327   // 6.0
#define IDS_HELP_HORZRESIZER            11328   // 6.0
#define IDS_HELP_FONTNAME               11329
#define IDS_HELP_FONTSIZE               11330
#define IDS_HELP_FONTWEIGHT             11331
#define IDS_HELP_FONTCHARSET            11332
#define IDS_HELP_FONTITALIC             11333
#define IDS_HELP_CLASSNAME              11334
#define IDS_HELP_MENUNAME               11335
#define IDS_HELP_STYLES                 11336   // 4.0
#define IDS_HELP_EXSTYLES               11337   // 4.0
#define IDS_HELP_STYLE                  11338
#define IDS_HELP_ALIGNMENT              11339
#define IDS_HELP_TYPE                   11340
#define IDS_HELP_OWNERDRAW              11341
#define IDS_HELP_SELECTION              11342
#define IDS_HELP_POINT                  11343
#define IDS_HELP_VIEW                   11344
#define IDS_HELP_SORT                   11345
#define IDS_HELP_FOCUS                  11346
#define IDS_HELP_FORMAT                 11347
#define IDS_HELP_IMAGE                  11348
#define IDS_HELP_ELLIPSIS               11349
#define IDS_HELP_VERTALIGNMENT          11350
#define IDS_HELP_WS_CAPTION             11351
#define IDS_HELP_WS_SYSMENU             11352
#define IDS_HELP_WS_VISIBLE             11353
#define IDS_HELP_WS_DISABLED            11354
#define IDS_HELP_WS_BORDER              11355
#define IDS_HELP_WS_GROUP               11356
#define IDS_HELP_WS_TABSTOP             11357
#define IDS_HELP_WS_HSCROLL             11358
#define IDS_HELP_WS_VSCROLL             11359
#define IDS_HELP_WS_MINIMIZEBOX         11360
#define IDS_HELP_WS_MAXIMIZEBOX         11361
#define IDS_HELP_WS_CLIPSIBLINGS        11362
#define IDS_HELP_WS_CLIPCHILDREN        11363
#define IDS_HELP_WS_THICKFRAME          11364
#define IDS_HELP_DS_MODALFRAME          11365
#define IDS_HELP_DS_SYSMODAL            11366
#define IDS_HELP_DS_ABSALIGN            11367
#define IDS_HELP_DS_CONTEXTHELP         11368
#define IDS_HELP_DS_SETFOREGROUND       11369
#define IDS_HELP_DS_3DLOOK              11370
#define IDS_HELP_DS_NOFAILCREATE        11371
#define IDS_HELP_DS_NOIDLEMSG           11372
#define IDS_HELP_DS_CONTROL             11373
#define IDS_HELP_DS_CENTER              11374
#define IDS_HELP_DS_CENTERMOUSE         11375
#define IDS_HELP_DS_LOCALEDIT           11376
#define IDS_HELP_SS_CENTERIMAGE         11377
#define IDS_HELP_SS_REALSIZEIMAGE       11378
#define IDS_HELP_SS_REALSIZECONTROL     11379   // 4.0
#define IDS_HELP_SS_SUNKEN              11380
#define IDS_HELP_SS_SIMPLE              11381
#define IDS_HELP_SS_LEFTNOWORDWRAP      11382
#define IDS_HELP_SS_OWNERDRAW           11383
#define IDS_HELP_SS_NOPREFIX            11384
#define IDS_HELP_SS_NOTIFY              11385
#define IDS_HELP_SS_RIGHTJUST           11386
#define IDS_HELP_ES_MULTILINE           11387
#define IDS_HELP_ES_NUMBER              11388
#define IDS_HELP_ES_AUTOHSCROLL         11389
#define IDS_HELP_ES_AUTOVSCROLL         11390
#define IDS_HELP_ES_PASSWORD            11391
#define IDS_HELP_ES_NOHIDESEL           11392
#define IDS_HELP_ES_OEMCONVERT          11393
#define IDS_HELP_ES_WANTRETURN          11394
#define IDS_HELP_ES_UPPERCASE           11395
#define IDS_HELP_ES_LOWERCASE           11396
#define IDS_HELP_ES_READONLY            11397
#define IDS_HELP_ES_DISABLENOSCROLL     11398
#define IDS_HELP_BS_NOTIFY              11399
#define IDS_HELP_BS_FLAT                11400
#define IDS_HELP_BS_MULTILINE           11401
#define IDS_HELP_BS_LEFTTEXT            11402
#define IDS_HELP_BS_PUSHLIKE            11403
#define IDS_HELP_CBS_AUTOHSCROLL        11404
#define IDS_HELP_CBS_OEMCONVERT         11405
#define IDS_HELP_CBS_SORT               11406
#define IDS_HELP_CBS_HASSTRINGS         11407
#define IDS_HELP_CBS_NOINTEGRALHEIGHT   11408
#define IDS_HELP_CBS_DISABLENOSCROLL    11409
#define IDS_HELP_CBS_UPPERCASE          11410
#define IDS_HELP_CBS_LOWERCASE          11411
#define IDS_HELP_LBS_SORT               11412
#define IDS_HELP_LBS_HASSTRINGS         11413
#define IDS_HELP_LBS_NOINTEGRALHEIGHT   11414
#define IDS_HELP_LBS_DISABLENOSCROLL    11415
#define IDS_HELP_LBS_NOTIFY             11416
#define IDS_HELP_LBS_MULTICOLUMN        11417
#define IDS_HELP_LBS_NOREDRAW           11418
#define IDS_HELP_LBS_USETABSTOPS        11419
#define IDS_HELP_LBS_WANTKEYBOARDINPUT  11420
#define IDS_HELP_LBS_NODATA             11421
#define IDS_HELP_UDS_HORZ               11422
#define IDS_HELP_UDS_AUTOBUDDY          11423
#define IDS_HELP_UDS_SETBUDDYINT        11424
#define IDS_HELP_UDS_NOTHOUSANDS        11425
#define IDS_HELP_UDS_WRAP               11426
#define IDS_HELP_UDS_ARROWKEYS          11427
#define IDS_HELP_UDS_HOTTRACK           11428
#define IDS_HELP_PBS_VERTICAL           11429
#define IDS_HELP_PBS_SMOOTH             11430
#define IDS_HELP_PBS_MARQUEE            11431   // 4.0
#define IDS_HELP_TBS_VERT               11432
#define IDS_HELP_TBS_NOTICKS            11433
#define IDS_HELP_TBS_AUTOTICKS          11434
#define IDS_HELP_TBS_ENABLESELRANGE     11435
#define IDS_HELP_TBS_FIXEDLENGTH        11436
#define IDS_HELP_TBS_NOTHUMB            11437
#define IDS_HELP_TBS_TOOLTIPS           11438
#define IDS_HELP_LVS_SINGLESEL          11439
#define IDS_HELP_LVS_SHOWSELALWAYS      11440
#define IDS_HELP_LVS_AUTOARRANGE        11441
#define IDS_HELP_LVS_NOLABELWRAP        11442
#define IDS_HELP_LVS_EDITLABELS         11443
#define IDS_HELP_LVS_NOSCROLL           11444
#define IDS_HELP_LVS_NOCOLUMNHEADER     11445
#define IDS_HELP_LVS_NOSORTHEADER       11446
#define IDS_HELP_LVS_SHAREIMAGELISTS    11447
#define IDS_HELP_LVS_OWNERDRAWFIXED     11448
#define IDS_HELP_LVS_OWNERDATA          11449
#define IDS_HELP_TVS_HASBUTTONS         11450
#define IDS_HELP_TVS_HASLINES           11451
#define IDS_HELP_TVS_LINESATROOT        11452
#define IDS_HELP_TVS_EDITLABELS         11453
#define IDS_HELP_TVS_DISABLEDRAGDROP    11454
#define IDS_HELP_TVS_SHOWSELALWAYS      11455
#define IDS_HELP_TVS_NOTOOLTIPS         11456
#define IDS_HELP_TVS_CHECKBOXES         11457
#define IDS_HELP_TVS_TRACKSELECT        11458
#define IDS_HELP_TVS_SINGLEEXPAND       11459
#define IDS_HELP_TVS_INFOTIP            11460
#define IDS_HELP_TVS_FULLROWSELECT      11461
#define IDS_HELP_TVS_NOSCROLL           11462
#define IDS_HELP_TVS_NONEVENHEIGHT      11463
#define IDS_HELP_TCS_BUTTONS            11464
#define IDS_HELP_TCS_FLATBUTTONS        11465
#define IDS_HELP_TCS_TOOLTIPS           11466
#define IDS_HELP_TCS_MULTILINE          11467
#define IDS_HELP_TCS_OWNERDRAWFIXED     11468
#define IDS_HELP_TCS_FORCELABELLEFT     11469
#define IDS_HELP_TCS_FORCEICONLEFT      11470
#define IDS_HELP_TCS_HOTTRACK           11471
#define IDS_HELP_TCS_BOTTOM             11472
#define IDS_HELP_TCS_MULTISELECT        11473
#define IDS_HELP_TCS_SCROLLOPPOSITE     11474
#define IDS_HELP_TCS_VERTICAL           11475
#define IDS_HELP_ACS_CENTER             11476
#define IDS_HELP_ACS_TRANSPARENT        11477
#define IDS_HELP_ACS_AUTOPLAY           11478
#define IDS_HELP_ACS_TIMER              11479
#define IDS_HELP_DTS_RIGHTALIGN         11480
#define IDS_HELP_DTS_UPDOWN             11481
#define IDS_HELP_DTS_SHOWNONE           11482
#define IDS_HELP_MCS_DAYSTATE           11483
#define IDS_HELP_MCS_MULTISELECT        11484
#define IDS_HELP_MCS_WEEKNUMBERS        11485
#define IDS_HELP_MCS_NOTODAYCIRCLE      11486
#define IDS_HELP_MCS_NOTODAY            11487
#define IDS_HELP_CCS_NORESIZE           11488
#define IDS_HELP_CCS_TOP                11489
#define IDS_HELP_CCS_BOTTOM             11490
#define IDS_HELP_CCS_LEFT               11491
#define IDS_HELP_CCS_RIGHT              11492
#define IDS_HELP_CCS_NODIVIDER          11493
#define IDS_HELP_CCS_ADJUSTABLE         11494
#define IDS_HELP_RBS_VARHEIGHT          11495
#define IDS_HELP_RBS_BANDBORDERS        11496
#define IDS_HELP_RBS_FIXEDORDER         11497
#define IDS_HELP_RBS_REGISTERDROP       11498
#define IDS_HELP_RBS_AUTOSIZE           11499
#define IDS_HELP_RBS_VERTICALGRIPPER    11500
#define IDS_HELP_RBS_DBLCLKTOGGLE       11501
#define IDS_HELP_PGS_HORZ               11502
#define IDS_HELP_PGS_AUTOSCROLL         11503
#define IDS_HELP_PGS_DRAGNDROP          11504
#define IDS_HELP_TBSTYLE_FLAT           11505
#define IDS_HELP_TBSTYLE_LIST           11506
#define IDS_HELP_TBSTYLE_WRAPABLE       11507
#define IDS_HELP_TBSTYLE_TRANSPARENT    11508
#define IDS_HELP_TBSTYLE_TOOLTIPS       11509
#define IDS_HELP_TBSTYLE_ALTDRAG        11510
#define IDS_HELP_TBSTYLE_CUSTOMERASE    11511
#define IDS_HELP_TBSTYLE_REGISTERDROP   11512
#define IDS_HELP_SBARS_SIZEGRIP         11513
#define IDS_HELP_LWS_TRANSPARENT        11514   // 5.0
#define IDS_HELP_LWS_IGNORERETURN       11515   // 5.0
#define IDS_HELP_LWS_NOPREFIX           11516   // 5.0
#define IDS_HELP_LWS_USEVISUALSTYLE     11517   // 5.0
#define IDS_HELP_LWS_USECUSTOMTEXT      11518   // 5.0
#define IDS_HELP_LWS_RIGHT              11519   // 5.0
#define IDS_HELP_NFS_EDIT               11520   // 5.0
#define IDS_HELP_NFS_STATIC             11521   // 5.0
#define IDS_HELP_NFS_LISTCOMBO          11522   // 5.0
#define IDS_HELP_NFS_BUTTON             11523   // 5.0
#define IDS_HELP_NFS_ALL                11524   // 5.0
#define IDS_HELP_NFS_USEFONTASSOC       11525   // 5.0
#define IDS_HELP_WS_EX_CLIENTEDGE       11526
#define IDS_HELP_WS_EX_STATICEDGE       11527
#define IDS_HELP_WS_EX_TRANSPARENT      11528
#define IDS_HELP_WS_EX_ACCEPTFILES      11529
#define IDS_HELP_WS_EX_RIGHT            11530
#define IDS_HELP_WS_EX_LEFTSCROLLBAR    11531
#define IDS_HELP_WS_EX_TOOLWINDOW       11532
#define IDS_HELP_WS_EX_CONTROLPARENT    11533
#define IDS_HELP_WS_EX_CONTEXTHELP      11534
#define IDS_HELP_WS_EX_NOPARENTNOTIFY   11535
#define IDS_HELP_WS_EX_APPWINDOW        11536   // 4.0
#define IDS_HELP_WS_EX_TOPMOST          11537   // 4.0
#define IDS_HELP_WS_EX_NOACTIVATE       11538   // 4.0
//
#define IDS_ERR_CANTREADFILE            11539
#define IDS_ERR_CANTWRITEFILE           11540
#define IDS_ERR_LINETOOLONG             11541
#define IDS_ERR_INVALIDCHAR             11542
#define IDS_ERR_BADFILEFORMAT           11543
#define IDS_ERR_BADIMAGEFORMAT          11544
#define IDS_ERR_BADRSRCFORMAT           11545
#define IDS_ERR_BADSYNTAX               11546
#define IDS_ERR_OS2BITMAP               11547
#define IDS_ERR_UNKNOWNCODEC            11548
#define IDS_ERR_CODECERROR              11549
#define IDS_ERR_INVALIDVIDEO            11550
#define IDS_ERR_WFPPROTECTED            11551
#define IDS_ERR_TOOMANYCOLORS           11552
#define IDS_ERR_WRONGCHECKSUM           11553
#define IDS_ERR_BADEXECFORMAT           11554   // 5.0
#define IDS_ERR_NOFILEBUFSPACE          11555   // 13.0
#define IDS_ERR_TOOMANYIMAGES           11556   // 12.0
#define IDS_ERR_INTERNAL                11557   // 13.0
//
#define IDS_DIFF_ONLY_IN                11558   // 7.0
#define IDS_DIFF_DIFFERENT              11559   // 7.0
#define IDS_DIFF_IDENTICAL              11560   // 7.0
#define IDS_DIFF_SAME_SIZE              11561   // 7.0
#define IDS_DIFF_IDENTICAL_TIMES        11562   // 7.0
#define IDS_DIFF_IN_BLANKS_ONLY         11563   // 7.0
#define IDS_DIFF_BOTH_UNREADABLE        11564   // 7.0
#define IDS_DIFF_LEFT_UNREADABLE        11565   // 7.0
#define IDS_DIFF_RIGHT_UNREADABLE       11566   // 7.0
#define IDS_DIFF_UNREADABLE             11567   // 7.0
#define IDS_DIFF_IS_MORE_RECENT         11568   // 7.0
//
#define IDS_SCOPE_DOCUMENT              11569   // 9.0
#define IDS_SCOPE_PROJECT               11570   // 9.0
#define IDS_SCOPE_WORKSPACE             11571   // 9.0
//
#define CSTRINGS                        1571    // Number of strings

//
// Menu ID's ----------------------------------------------------------------
//

//
// File menu.
//
#define IDM_FILE_NEWPROJECT         6001
#define IDM_FILE_NEWSOURCE          6002
#define IDM_FILE_NEWRESOURCE        6003
#define IDM_FILE_NEWBITMAP          6004
#define IDM_FILE_NEWICON            6005
#define IDM_FILE_NEWCURSOR          6006
#define IDM_FILE_NEWANICURSOR       6007
#define IDM_FILE_NEWVIDEO           6008
#define IDM_FILE_NEWHEXDUMP         6009
#define IDM_FILE_NEWMSGTABLE        6010    // 3.0
#define IDM_FILE_NEWWEB             6011    // 7.0
#define IDM_FILE_NEWDIFF            6012    // 7.0
#define IDM_FILE_NEWADDIN           6013    // 8.0
#define IDM_FILE_OPEN               6014
#define IDM_FILE_OPENPROJ           6015    // 7.0 (Welcome page only)
#define IDM_FILE_CLOSE              6016
#define IDM_FILE_CLOSEPROJ          6017    // 5.0
#define IDM_FILE_SAVE               6018
#define IDM_FILE_SAVEAS             6019
#define IDM_FILE_SAVEALL            6020
#define IDM_FILE_PRINT              6021
#define IDM_FILE_PRINTSETUP         6022
#define IDM_FILE_PROPERTIES         6023
#define IDM_FILE_EXIT               6024
#define IDM_FILE_ADDIN              6025    // (placeholder, never used)
#define IDM_FILE_MRUFILE            6026    // room for 8 files.
#define IDM_FILE_MRUFILE_1          6027    // (placeholder, never used)
#define IDM_FILE_MRUFILE_2          6028    // (placeholder, never used)
#define IDM_FILE_MRUFILE_3          6029    // (placeholder, never used)
#define IDM_FILE_MRUFILE_4          6030    // (placeholder, never used)
#define IDM_FILE_MRUFILE_5          6031    // (placeholder, never used)
#define IDM_FILE_MRUFILE_6          6032    // (placeholder, never used)
#define IDM_FILE_MRUFILE_7          6033    // (placeholder, never used)
#define IDM_FILE_MRUFILE_8          6034    // (placeholder, never used)
#define IDM_FILE_MRUPROJ            6035    // room for 8 projects.
#define IDM_FILE_MRUPROJ_1          6036    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_2          6037    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_3          6038    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_4          6039    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_5          6040    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_6          6041    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_7          6042    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_8          6043    // (placeholder, never used)
#define IDM_FILE_MRULINK            6044    // room for 8 links (7.0).
#define IDM_FILE_MRULINK_1          6045    // (placeholder, never used)
#define IDM_FILE_MRULINK_2          6046    // (placeholder, never used)
#define IDM_FILE_MRULINK_3          6047    // (placeholder, never used)
#define IDM_FILE_MRULINK_4          6048    // (placeholder, never used)
#define IDM_FILE_MRULINK_5          6049    // (placeholder, never used)
#define IDM_FILE_MRULINK_6          6050    // (placeholder, never used)
#define IDM_FILE_MRULINK_7          6051    // (placeholder, never used)
#define IDM_FILE_MRULINK_8          6052    // (placeholder, never used)
//
// Edit menu.
//
#define IDM_EDIT_UNDO               6053
#define IDM_EDIT_REDO               6054
#define IDM_EDIT_CUT                6055
#define IDM_EDIT_COPY               6056
#define IDM_EDIT_PASTE              6057
#define IDM_EDIT_INSERT             6058
#define IDM_EDIT_DELETE             6059
#define IDM_EDIT_DELETEWORD         6060
#define IDM_EDIT_SELECTALL          6061
#define IDM_EDIT_FIND               6062
#define IDM_EDIT_FINDNEXT           6063
#define IDM_EDIT_REPLACE            6064
#define IDM_EDIT_FILEFIND           6065
#define IDM_EDIT_GOTO               6066
#define IDM_EDIT_ADDIN              6067    // (placeholder, never used)
//
// View menu.
//
#define IDM_VIEW_SOURCEFILES        6068    // 5.0
#define IDM_VIEW_TARGETFILES        6069    // 5.0
#define IDM_VIEW_PROJECT            6070    // 5.0
#define IDM_VIEW_FILEFIND           6071    // 5.0
#define IDM_VIEW_OUTPUT             6072    // 5.0
#define IDM_VIEW_TRACE              6073    // 5.0
#define IDM_VIEW_BREAKPOINTS        6074    // 5.0
#define IDM_VIEW_AUTO               6075    // 5.0
#define IDM_VIEW_WATCH              6076    // 5.0
#define IDM_VIEW_LOCALS             6077    // 5.0
#define IDM_VIEW_GLOBALS            6078    // 5.0
#define IDM_VIEW_REGISTERS          6079    // 5.0
#define IDM_VIEW_STACK              6080    // 5.0
#define IDM_VIEW_MEMORY             6081    // 5.0
#define IDM_VIEW_THREADS            6082    // 5.0
#define IDM_VIEW_MODULES            6083    // 5.0
#define IDM_VIEW_EXCEPTIONS         6084    // 5.0
#define IDM_VIEW_HELPCONTENTS       6085    // 7.0
#define IDM_VIEW_HELPINDEX          6086    // 7.0
#define IDM_VIEW_HELPSEARCH         6087    // 8.0
#define IDM_VIEW_OUTLINE            6088    // 7.0
#define IDM_VIEW_EXPAND             6089    // 7.0
#define IDM_VIEW_SHOWTOOLBAR        6090
#define IDM_VIEW_SHOWSTATUSBAR      6091
#define IDM_VIEW_SHOWDOCTABS        6092
#define IDM_VIEW_SHOWWELCOME        6093    // 7.0
#define IDM_VIEW_TOGGLEFULLSCREEN   6094    // 8.0
#define IDM_VIEW_TOGGLEPROJPANE     6095    // 4.0 (hidden)
#define IDM_VIEW_TABPAGES           6096    // 5.0 (placeholder, never used)
#define IDM_VIEW_ADDIN              6097    // (placeholder, never used)
//
// Project menu.
//
#define IDM_PROJ_BUILD              6098    // Project menu.
#define IDM_PROJ_REBUILD            6099    // Project menu (5.0: IDM_PROJ_BUILDALL -> IDM_PROJ_REBUILD).
#define IDM_PROJ_CLEAN              6100    // Project menu (9.0).
#define IDM_PROJ_BUILDWKS           6101    // Project menu (5.0).
#define IDM_PROJ_REBUILDWKS         6102    // Project menu (5.0).
#define IDM_PROJ_CLEANWKS           6103    // Project menu (9.0).
#define IDM_PROJ_COMPILE            6104    // Project menu.
#define IDM_PROJ_STOPBUILD          6105    // Project menu.
#define IDM_PROJ_EXECUTE            6106    // Project menu.
#define IDM_PROJ_PROFILE            6107    // Project menu (6.50).
#define IDM_PROJ_ADDFILE            6108    // Project menu.
#define IDM_PROJ_ADDPROJECT         6109    // Project menu (4.0).
#define IDM_PROJ_MAKEALLPREQS       6110    // Project menu.
#define IDM_PROJ_ZIP                6111    // Project menu.
#define IDM_PROJ_UNZIP              6112    // Project menu.
#define IDM_PROJ_SETACTIVE          6113    // Project menu (4.0).
#define IDM_PROJ_DEPENDENCIES       6114    // Project menu (4.0).
#define IDM_PROJ_SETTINGS           6115    // Project menu.
#define IDM_PROJ_MODES              6116    // Project menu (9.0).
#define IDM_PROJ_WORKSPACE          6117    // Project menu (4.0).
#define IDM_PROJ_CTX_OPEN           6118    // Context menu (4.0).
#define IDM_PROJ_CTX_OPENAS_TEXT    6119    // Context menu (5.0).
#define IDM_PROJ_CTX_OPENAS_BINARY  6120    // Context menu (5.0).
#define IDM_PROJ_CTX_OPENFUNC       6121    // Context menu (8.0).
#define IDM_PROJ_CTX_ADDFILE        6122    // Context menu (4.0).
#define IDM_PROJ_CTX_DELETE         6123    // Context menu (4.0).
#define IDM_PROJ_CTX_RENAME         6124    // Context menu (4.0).
#define IDM_PROJ_CTX_EXCLUDE        6125    // Context menu (4.0).
#define IDM_PROJ_CTX_ZIP            6126    // Context menu (4.0).
#define IDM_PROJ_CTX_UNZIP          6127    // Context menu (4.0).
#define IDM_PROJ_CTX_SETACTIVE      6128    // Context menu (4.0).
#define IDM_PROJ_CTX_MAKEALLPREQS   6129    // Context menu (4.0).
#define IDM_PROJ_CTX_SORTFUNCS      6130    // Context menu (4.0).
#define IDM_PROJ_CTX_SETTINGS       6131    // Context menu (4.0).
#define IDM_PROJ_CTX_PROPERTIES     6132    // Context menu (4.0).
#define IDM_PROJ_CTX_BUILD          6133    // Context menu (4.0).
#define IDM_PROJ_CTX_REBUILD        6134    // Context menu (4.0) (5.0: IDM_PROJ_CTX_FORCEBUILD -> IDM_PROJ_CTX_REBUILD).
#define IDM_PROJ_CTX_EXECUTE        6135    // Context menu (4.0).
#define IDM_PROJ_CTX_DEBUG          6136    // Context menu (4.0).
#define IDM_PROJ_CTX_MAKETARGPREQS  6137    // Context menu (4.0).
#define IDM_PROJ_CTX_TOGGLEPANE     6138    // Context menu (4.0).
#define IDM_PROJ_CTX_PROFILE        6139    // Context menu (6.50).
#define IDM_PROJ_CTX_MAKEWKSPREQS   6140    // Context menu (7.0).
#define IDM_PROJ_CTX_CLEAN          6141    // Project menu (7.0).
#define IDM_PROJ_CTX_CLEANWKS       6142    // Project menu (7.0).
#define IDM_PROJ_ADDIN              6143    // (placeholder, never used)
#define IDM_PROJ_ADDIN_CTX          6144    // (placeholder, never used)
//
// Tools window.
//
#define IDM_TOOL_CUSTOMIZE          6145
#define IDM_TOOL_SETTINGS           6146
#define IDM_TOOL_CUSTOMTOOL         6147    // room for 16 tools.
#define IDM_TOOL_CUSTOMTOOL_1       6148    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_2       6149    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_3       6150    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_4       6151    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_5       6152    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_6       6153    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_7       6154    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_8       6155    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_9       6156    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_10      6157    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_11      6158    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_12      6159    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_13      6160    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_14      6161    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_15      6162    // (placeholder, never used) (5.0)
//
// Window menu.
//
#define IDM_WIN_NEW                 6163
#define IDM_WIN_CASCADE             6164
#define IDM_WIN_TILEVERT            6165
#define IDM_WIN_TILEHORZ            6166
#define IDM_WIN_CLOSEALL            6167
//
// Help menu.
//
#define IDM_HELP_CONTENTS           6168
#define IDM_HELP_CUSTOM             6169    // (placeholder, never used) (5.0)
#define IDM_HELP_WEB_FORUM          6170    // 3.0
#define IDM_HELP_WEB_HOME           6171    // 14.0
#define IDM_HELP_WEB_ADDIN          6172    // (placeholder, never used)
#define IDM_HELP_ABOUT              6173
#define IDM_HELP_CUSTOMHELP         6174    // room for 16 help files.
#define IDM_HELP_CUSTOMHELP_1       6175    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_2       6176    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_3       6177    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_4       6178    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_5       6179    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_6       6180    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_7       6181    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_8       6182    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_9       6183    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_10      6184    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_11      6185    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_12      6186    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_13      6187    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_14      6188    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_15      6189    // (placeholder, never used) (5.0)
#define IDM_HELP_ADDIN              6190    // (placeholder, never used)
//
// Image/Dialog/Resource/Animation/Source/Debug/Web/Difference window.
//
#define IDM_IMG_NEWIMAGE            6191
#define IDM_IMG_DELETEIMAGE         6192
#define IDM_IMG_RESIZE              6193    // 5.0
#define IDM_IMG_MIRROR_HORZ         6194
#define IDM_IMG_MIRROR_VERT         6195
#define IDM_IMG_ROTATE              6196
#define IDM_IMG_GRAYSCALE           6197
#define IDM_IMG_SEPIATONE           6198    // 4.0
#define IDM_IMG_HSV                 6199
#define IDM_IMG_OPAQUEALPHA         6200    // 4.0
#define IDM_IMG_EFFECT_OILPAINT     6201
#define IDM_IMG_EFFECT_SPREAD       6202
#define IDM_IMG_EFFECT_EMBOSS       6203
#define IDM_IMG_EFFECT_FISHEYE      6204
#define IDM_IMG_EFFECT_DROPSHADOW   6205    // 4.0
#define IDM_IMG_EFFECT_BLUR         6206
#define IDM_IMG_EFFECT_SHARPEN      6207
//
#define IDM_DLG_NEWPICTURE          6208    // 4.50
#define IDM_DLG_NEWTEXT             6209    // 4.50
#define IDM_DLG_NEWEDITBOX          6210    // 4.50
#define IDM_DLG_NEWGROUPBOX         6211    // 4.50
#define IDM_DLG_NEWPUSHBUTTON       6212    // 4.50
#define IDM_DLG_NEWCHECKBOX         6213    // 4.50
#define IDM_DLG_NEWRADIOBUTTON      6214    // 4.50
#define IDM_DLG_NEWCOMBOBOX         6215    // 4.50
#define IDM_DLG_NEWLISTBOX          6216    // 4.50
#define IDM_DLG_NEWHSCROLLBAR       6217    // 4.50
#define IDM_DLG_NEWVSCROLLBAR       6218    // 4.50
#define IDM_DLG_NEWUPDOWN           6219    // 4.50
#define IDM_DLG_NEWPROGRESS         6220    // 4.50
#define IDM_DLG_NEWTRACKBAR         6221    // 4.50
#define IDM_DLG_NEWHOTKEY           6222    // 4.50
#define IDM_DLG_NEWLISTVIEW         6223    // 4.50
#define IDM_DLG_NEWTREEVIEW         6224    // 4.50
#define IDM_DLG_NEWTABCONTROL       6225    // 4.50
#define IDM_DLG_NEWANIMATE          6226    // 4.50
#define IDM_DLG_NEWRICHEDIT         6227    // 4.50
#define IDM_DLG_NEWRICHED20         6228    // 4.50
#define IDM_DLG_NEWRICHED30         6229    // 14.0
#define IDM_DLG_NEWRICHED50         6230    // 14.0
#define IDM_DLG_NEWDATETIME         6231    // 4.50
#define IDM_DLG_NEWMONTHCAL         6232    // 4.50
#define IDM_DLG_NEWCOMBOBOXEX       6233    // 4.50
#define IDM_DLG_NEWREBAR            6234    // 4.50
#define IDM_DLG_NEWPAGER            6235    // 4.50
#define IDM_DLG_NEWTOOLBAR          6236    // 4.50
#define IDM_DLG_NEWSTATUSBAR        6237    // 4.50
#define IDM_DLG_NEWSYSLINK          6238    // 5.0
#define IDM_DLG_NEWIPADDRESS        6239    // 5.0
#define IDM_DLG_NEWNETADDRESS       6240    // 5.0
#define IDM_DLG_NEWSPLITBUTTON      6241    // 5.0
#define IDM_DLG_NEWCOMMANDLINK      6242    // 5.0
#define IDM_DLG_NEWNATIVEFONT       6243    // 5.0
#define IDM_DLG_ALIGN               6244
#define IDM_DLG_ALIGNLEFT           6245
#define IDM_DLG_ALIGNVERT           6246
#define IDM_DLG_ALIGNRIGHT          6247
#define IDM_DLG_ALIGNTOP            6248
#define IDM_DLG_ALIGNHORZ           6249
#define IDM_DLG_ALIGNBOTTOM         6250
#define IDM_DLG_CENTER              6251
#define IDM_DLG_CENTERVERT          6252
#define IDM_DLG_CENTERHORZ          6253
#define IDM_DLG_SPACE               6254
#define IDM_DLG_SPACEVERT           6255
#define IDM_DLG_SPACEHORZ           6256
#define IDM_DLG_ARRSIZE             6257
#define IDM_DLG_ARRSIZEWIDTH        6258
#define IDM_DLG_ARRSIZEHEIGHT       6259
#define IDM_DLG_ARRSIZEBOTH         6260
#define IDM_DLG_ARRPUSH             6261
#define IDM_DLG_ARRPUSHBOTTOM       6262
#define IDM_DLG_ARRPUSHRIGHT        6263
#define IDM_DLG_SIZETOTEXT          6264
#define IDM_DLG_SORTNAMES           6265
#define IDM_DLG_SORTPROPS           6266
#define IDM_DLG_PROPDESCRIPTION     6267
#define IDM_DLG_RAWSTYLES           6268    // 4.0
#define IDM_DLG_HIDEPROPS           6269
#define IDM_DLG_NEWCUSTOM           6270
#define IDM_DLG_OPENCUSTOM          6271
#define IDM_DLG_REMOVECUSTOM        6272
#define IDM_DLG_LOCKCONTROLS        6273
#define IDM_DLG_ORDERCONTROLS       6274
//
#define IDM_RSRC_NEWBITMAP          6275
#define IDM_RSRC_NEWICON            6276
#define IDM_RSRC_NEWCURSOR          6277
#define IDM_RSRC_NEWANICURSOR       6278
#define IDM_RSRC_NEWVIDEO           6279
#define IDM_RSRC_NEWDIALOG          6280
#define IDM_RSRC_NEWMENU            6281
#define IDM_RSRC_NEWSTRINGTABLE     6282
#define IDM_RSRC_NEWMSGTABLE        6283    // 3.0
#define IDM_RSRC_NEWACCEL           6284
#define IDM_RSRC_NEWVERSION         6285
#define IDM_RSRC_NEWMANIFEST        6286
#define IDM_RSRC_NEWHTML            6287    // 5.0
#define IDM_RSRC_NEWCUSTOM          6288    // 3.0
#define IDM_RSRC_NEWCOPY            6289
#define IDM_RSRC_IMPORT             6290
#define IDM_RSRC_EXPORT             6291    // 6.0
#define IDM_RSRC_SORTNAMES          6292
#define IDM_RSRC_LABELS             6293    // 6.50: IDM_VIEW_LABELS -> IDM_RSRC_LABELS
#define IDM_RSRC_INCLUDES           6294    // 6.50: IDM_VIEW_INCLUDES -> IDM_RSRC_INCLUDES
#define IDM_RSRC_ADDIN              6295    // 3.0 (placeholder, never used)
#define IDM_RSRC_NEW_ADDIN          6296    // 3.0 (placeholder, never used)
//
#define IDM_ANIM_IMPORT             6297
#define IDM_ANIM_EXPORT             6298    // 14.0
//
#define IDM_MESS_SETINCLUDE         6299    // 3.0
#define IDM_MESS_VIEWLABELS         6300    // 3.0
#define IDM_MESS_ADDIN              6301    // 3.0 (placeholder, never used)
//
#define IDM_SRC_FORCECALLTIP        6302    // 4.50
#define IDM_SRC_COMPLETEWORD        6303
#define IDM_SRC_INSERTSNIPPET       6304    // 5.0
#define IDM_SRC_SURROUNDBYPOPUP     6305    // 5.0
#define IDM_SRC_SURROUNDBY          6306    // 5.0 - room for 16 snippets.
#define IDM_SRC_SURROUNDBY_1        6307    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_2        6308    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_3        6309    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_4        6310    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_5        6311    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_6        6312    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_7        6313    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_8        6314    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_9        6315    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_10       6316    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_11       6317    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_12       6318    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_13       6319    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_14       6320    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_15       6321    // 5.0 (placeholder, never used)
#define IDM_SRC_UCASE               6322
#define IDM_SRC_LCASE               6323
#define IDM_SRC_TABTOSPACE          6324
#define IDM_SRC_SPACETOTAB          6325
#define IDM_SRC_FORMAT              6326    // 3.0
#define IDM_SRC_COMMENT             6327    // 4.0
#define IDM_SRC_UNCOMMENT           6328    // 4.0
#define IDM_SRC_NEXTBOOKMARK        6329
#define IDM_SRC_PREVBOOKMARK        6330
#define IDM_SRC_SETBOOKMARK         6331
#define IDM_SRC_CLEARBOOKMARKS      6332
#define IDM_SRC_WHITESPACE          6333
#define IDM_SRC_LINEBREAKS          6334
#define IDM_SRC_LINENUMBERS         6335
#define IDM_SRC_FOLDINGS            6336
#define IDM_SRC_MATCHINGBRACES      6337    // 4.50
#define IDM_SRC_OPENINCLUDE         6338    // 4.50
#define IDM_SRC_CONTEXTHELP         6339
#define IDM_SRC_VIEWDEFINITION      6340
#define IDM_SRC_PREVDEFINITION      6341
#define IDM_SRC_FINDCALLSITES       6342    // 4.0
#define IDM_SRC_FOLDALL             6343
#define IDM_SRC_UNFOLDALL           6344
#define IDM_SRC_ADDIN               6345    // (placeholder, never used)
#define IDM_SRC_ADDIN_CONV          6346    // (placeholder, never used)
//
#define IDM_DBG_GO                  6347
#define IDM_DBG_RESTART             6348
#define IDM_DBG_STOP                6349
#define IDM_DBG_BREAK               6350
#define IDM_DBG_STEPINTO            6351
#define IDM_DBG_STEPOVER            6352
#define IDM_DBG_STEPOUT             6353    // 4.0
#define IDM_DBG_RUNTOCURSOR         6354    // 4.0
#define IDM_DBG_TOGGLEBREAKPOINT    6355    // 4.0
#define IDM_DBG_EDITBREAKPOINT      6356    // 4.0
#define IDM_DBG_REMOVEBREAKPOINT    6357    // 4.0
#define IDM_DBG_REMOVEBREAKPOINTS   6358    // 4.0
#define IDM_DBG_SHOWNEXTSTMT        6359
#define IDM_DBG_SHOWDISASM          6360
#define IDM_DBG_SHOWSOURCE          6361
#define IDM_DBG_SHOWCODEBYTES       6362
#define IDM_DBG_SHOWSYMBOLS         6363
#define IDM_DBG_ADDWATCH            6364
#define IDM_DBG_REMOVEWATCH         6365
#define IDM_DBG_REMOVEALLWATCHES    6366
#define IDM_DBG_QUICKWATCH          6367    // 4.0
#define IDM_DBG_HWBREAKS            6368    // 4.0
#define IDM_DBG_HEXVALUES           6369    // 4.50
#define IDM_DBG_CPU                 6370    // 5.0
#define IDM_DBG_FPU                 6371    // 5.0
#define IDM_DBG_MMX                 6372    // 5.0
#define IDM_DBG_SSE                 6373    // 5.0
#define IDM_DBG_AVX                 6374    // 7.0 (disabled), 8.0 (supported)
#define IDM_DBG_CPUSEG              6375    // 9.0
#define IDM_DBG_AVX512              6376    // 10.0
#define IDM_DBG_NEON                6377    // 14.10
#define IDM_DBG_TOGGLESUSPENDED     6378    // 6.50
#define IDM_DBG_COPYNAME            6379    // 12.0
#define IDM_DBG_COPYFILENAME        6380    // 12.0
#define IDM_DBG_COPYDBGFILE         6381    // 12.0
#define IDM_DBG_COPYADDRESS         6382    // 12.0
#define IDM_DBG_ADDIN               6383    // (placeholder, never used)
//
#define IDM_WEB_BACK                6384    // 7.0
#define IDM_WEB_FORWARD             6385    // 7.0
#define IDM_WEB_HOME                6386    // 8.0
#define IDM_WEB_REFRESH             6387    // 7.0
#define IDM_WEB_CERTIFICATE         6388    // 7.0
#define IDM_WEB_SHOWSOURCE          6389    // 7.0
#define IDM_WEB_ZOOM_SMALLEST       6390    // 7.0
#define IDM_WEB_ZOOM_SMALLER        6391    // 7.0
#define IDM_WEB_ZOOM_MEDIUM         6392    // 7.0
#define IDM_WEB_ZOOM_LARGER         6393    // 7.0
#define IDM_WEB_ZOOM_LARGEST        6394    // 7.0
#define IDM_WEB_ADDIN               6395    // (placeholder, never used)
//
#define IDM_DIFF_PREVCHANGE         6396    // 7.0
#define IDM_DIFF_NEXTCHANGE         6397    // 7.0
#define IDM_DIFF_REFRESH            6398    // 7.0
#define IDM_DIFF_STOP               6399    // 7.0
#define IDM_DIFF_OPENLEFT           6400    // 7.0
#define IDM_DIFF_OPENRIGHT          6401    // 7.0
#define IDM_DIFF_OPENCOMPOSITE      6402    // 9.0
#define IDM_DIFF_ADDIN              6403    // (placeholder, never used)
//
// Misc commands.
//
#define IDM_MISC_OPEN               6404
#define IDM_MISC_TEST               6405
#define IDM_MISC_CHECKMNEMONICS     6406
#define IDM_MISC_NEXTWINDOW         6407
#define IDM_MISC_MODEPOPUP          6408    // 10.0
#define IDM_MISC_KILLPROCESS        6409
#define IDM_MISC_CLOSEALLOTHER      6410    // 12.0
//
// Drag & drop menu.
//
#define IDM_DROP_MOVE               6411
#define IDM_DROP_COPY               6412
#define IDM_DROP_CANCEL             6413
//
// Add-in commands (internal).
//
#define IDM_ADDIN_COMMAND           6414
// Range to: IDM_ADDIN_COMMAND + CMAXADDINS - 1

//
// Dialog ID's --------------------------------------------------------------
//

#define DLG_SPLASH              1001
#define DLG_ABOUT               1002
#define DLG_MAINRIBBON          1003    // 9.0
#define DLG_PROJECTRIBBON       1004
#define DLG_FORMRIBBON          1005
#define DLG_MENURIBBON          1006
#define DLG_DRAWRIBBON          1007    // 10.0: DLG_PICTRIBBON -> DLG_DRAWRIBBON
#define DLG_ANIMRIBBON          1008
#define DLG_MEMRIBBON           1009
#define DLG_WEBRIBBON           1010    // 7.0
#define DLG_HELPRIBBON          1011    // 8.0
#define DLG_DIFFRIBBON          1012    // 7.0
#define DLG_NEWPROJECT          1013
#define DLG_NEWDEFPROJECT       1014    // 4.0
#define DLG_NEWICONIMAGE        1015
#define DLG_NEWCURSORIMAGE      1016
#define DLG_NEWCUSTOMIMAGE      1017    // 6.0
#define DLG_PROPSFILE           1018
#define DLG_PROPSSOURCE         1019
#define DLG_PROPSPROJ           1020    // 5.0
#define DLG_PROPSCMDS           1021
#define DLG_PROPSPREQS          1022
#define DLG_PROPSBITMAP         1023
#define DLG_PROPSBITMAP_BMP     1024    // 12.0
#define DLG_PROPSBITMAP_GIF     1025    // 12.0
#define DLG_PROPSBITMAP_PNG     1026    // 12.0
#define DLG_PROPSICONCURSOR     1027
#define DLG_PROPSRSRC           1028
#define DLG_PROPSRSRC2          1029    // 5.0
#define DLG_PROPSSTRING         1030
#define DLG_PROPSMESSAGE        1031    // 3.0
#define DLG_PROPSMENU           1032
#define DLG_PROPSACCEL          1033
#define DLG_PROPSACON           1034
#define DLG_PROPSVIDEO          1035
#define DLG_PROPSPROF           1036    // 6.50
#define DLG_SETUPGENERAL        1037
#define DLG_SETUPCOLORFONT      1038    // 10.0
#define DLG_SETUPSTARTUP        1039    // 10.0
#define DLG_SETUPWEB            1040    // 7.0
#define DLG_SETUPPROJECT        1041    // 7.0
#define DLG_SETUPFOLDERS        1042
#define DLG_SETUPBROWSE         1043    // 10.0
#define DLG_SETUPZIP            1044    // 10.0
#define DLG_SETUPDEBUG          1045
#define DLG_SETUPDEBUGJIT       1046    // 12.0
#define DLG_SETUPDEBUGTRACE     1047    // 12.0
#define DLG_SETUPPROFILE        1048    // 10.0
#define DLG_SETUPSOURCE         1049
#define DLG_SETUPSOURCEC        1050    // 13.0
#define DLG_SETUPSOURCEASM      1051    // 13.0
#define DLG_SETUPSOURCERC       1052    // 13.0
#define DLG_SETUPSOURCEPIS      1053    // 13.0
#define DLG_SETUPRESOURCE       1054    // 10.0
#define DLG_SETUPDIALOG         1055
#define DLG_SETUPIMAGE          1056
#define DLG_SETUPIMAGEJPG       1057    // 10.0
#define DLG_SETUPIMAGEPNG       1058    // 10.0
#define DLG_SETUPADDINS         1059
#define DLG_SETUPSYSDEFS        1060    // 5.0
#define DLG_PROJGENERAL         1061    // 10.0
#define DLG_PROJMACROS          1062    // 10.0
#define DLG_PROJFOLDERS         1063    // 10.0
#define DLG_PROJZIP             1064    // 10.0
#define DLG_PROJSYMBOLS         1065    // 10.0
#define DLG_PROJCOMPILER1       1066    // 10.0
#define DLG_PROJCOMPILER2       1067    // 10.0
#define DLG_PROJASSEMBLER       1068    // 10.0
#define DLG_PROJRESCOMPILER     1069    // 10.0
#define DLG_PROJMSGCOMPILER     1070    // 10.0
#define DLG_PROJLINKER1         1071    // 10.0
#define DLG_PROJLINKER2         1072    // 10.0
#define DLG_PROJLIBRARIAN       1073    // 10.0
#define DLG_PROJINSTBUILDER     1074    // 10.0
#define DLG_PROJSIGNER          1075    // 10.0
#define DLG_PRINT               1076
#define DLG_FIND                1077
#define DLG_REPLACE             1078
#define DLG_FILEFIND            1079
#define DLG_GOTOLINE            1080
#define DLG_GOTOFUNCTION        1081
#define DLG_RSRCLABELS          1082
#define DLG_RSRCINCLUDES        1083
#define DLG_CUSTOMTOOLS         1084
#define DLG_TOOL                1085
#define DLG_CUSTOMHELP          1086
#define DLG_HELP                1087
#define DLG_CUSTOMKEYS          1088
#define DLG_ADDINS              1089
#define DLG_SNIPPETS            1090    // 5.0
#define DLG_SNIPPET             1091    // 5.0
#define DLG_CUSTOMRESOURCE      1092    // 3.0
#define DLG_DUPRESOURCE         1093
#define DLG_PROJMACRO           1094
#define DLG_NEWCUSTOM           1095
#define DLG_REMOVECUSTOM        1096
#define DLG_SELECTCUSTOM        1097
#define DLG_COLORPAL            1098    // 4.0
#define DLG_COLORHSV            1099    // 4.0
#define DLG_RESIZEIMAGE         1100    // 5.0
#define DLG_ROTATEIMAGE         1101
#define DLG_OILPAINTIMAGE       1102
#define DLG_SPREADIMAGE         1103
#define DLG_FISHEYEIMAGE        1104
#define DLG_DROPSHADOWIMAGE     1105    // 4.0
#define DLG_HSVIMAGE            1106
#define DLG_DRAWTEXT            1107
#define DLG_FORMTEXT            1108    // 5.0
#define DLG_MENUTEST            1109
#define DLG_TYPEDKEY            1110
#define DLG_SELECTPROJECT       1111    // 4.0
#define DLG_PROJECTDEPS         1112    // 4.0
#define DLG_PROJECTMODES        1113    // 9.0
#define DLG_NEWPROJMODE         1114    // 9.0
#define DLG_EXTRACTZIP          1115
#define DLG_BROWSEINFO          1116
#define DLG_SELECTSNIPPET       1117    // 5.0
#define DLG_EDITBREAK           1118    // 4.0
#define DLG_ADDWATCH            1119
#define DLG_QUICKWATCH          1120    // 4.0
#define DLG_HWBREAKS            1121    // 4.0
#define DLG_EFLAGS              1122
#define DLG_CONTROLWORD         1123
#define DLG_STATUSWORD          1124
#define DLG_TAGWORD             1125
#define DLG_MXCSR               1126
#define DLG_PSTATE              1127    // 14.10
#define DLG_RUNEXE              1128    // 5.0; 6.50: DLG_DEBUGEXE -> DLG_RUNEXE

//
// Dialog control ID's ------------------------------------------------------
//

#define DID_ABOUT1              4001
#define DID_ABOUT2              4002
#define DID_ABOUT3              4003
#define DID_ABOUT4              4004
#define DID_ABOUT5              4005
#define DID_MODELIST            4006    // DLG_MAINRIBBON
#define DID_IMAGELIST           4007    // DLG_DRAWRIBBON
#define DID_HOTSPOT             4008
#define DID_HOTSPOTLABEL        4009
#define DID_ACONFRAME           4010
#define DID_ACONRATE            4011
#define DID_ACONRATESPIN        4012
#define DID_ACONTITLE           4013
#define DID_ACONARTIST          4014
#define DID_ACONFRAMES          4015
#define DID_ACONSTEPS           4016
#define DID_ACONRATEDEF         4017
#define DID_OPENASLIST          4018    // 4.50
#define DID_NEWPROJLIST         4019
#define DID_NEWPROJVIEW         4020
#define DID_PROJNAME            4021
#define DID_PROJPATH            4022
#define DID_ADVANCED            4023    // 6.0
#define DID_OUTPUTPATH          4024    // 6.0
#define DID_OUTPUTPATHLABEL     4025    // 6.0
#define DID_RESULTPATH          4026    // 6.0
#define DID_RESULTPATHLABEL     4027    // 6.0
#define DID_NEWWORKSPACE        4028    // 4.0
#define DID_ADDTOWORKSPACE      4029    // 4.0
#define DID_NEWIMAGELIST        4030    // Both Icon and Cursor. Must be!
#define DID_CUSTOMCLASS         4031
#define DID_CUSTOMSTYLE         4032
#define DID_CUSTOMEXSTYLE       4033
#define DID_CUSTOMWIDTH         4034
#define DID_CUSTOMHEIGHT        4035
#define DID_CUSTOMTEXT          4036
#define DID_FILENAME            4037
#define DID_FILEPATH            4038
#define DID_FILESIZE            4039
#define DID_REALFILESIZE        4040    // 8.0
#define DID_FILEICON            4041
#define DID_FILEMESSAGE         4042    // 5.0
#define DID_TIME_CREATED        4043
#define DID_TIME_CHANGED        4044
#define DID_TIME_TOUCHED        4045
#define DID_ATTR_ARCHIVE        4046
#define DID_ATTR_READONLY       4047
#define DID_ATTR_HIDDEN         4048
#define DID_ATTR_SYSTEM         4049
#define DID_LANGUAGE            4050
#define DID_CRBREAK             4051
#define DID_LFBREAK             4052
#define DID_ENCODING            4053    // 5.0
#define DID_ENCODING2           4054    // 5.0
#define DID_ENCODING3           4055    // 5.0
#define DID_CTRLCHARS           4056
#define DID_SHELLCOMMANDS       4057
#define DID_MACROLIST           4058
#define DID_MACRONAME           4059
#define DID_MACROVALUE          4060
#define DID_PREQSLIST           4061
#define DID_PROJTYPELABEL       4062    // 10.0
#define DID_PROJTYPE            4063    // 10.0
#define DID_IMAGEWIDTH          4064
#define DID_IMAGEHEIGHT         4065
#define DID_IMAGECOLORS         4066
#define DID_COMPRESSEDFILE      4067
#define DID_TRANSPARENCY        4068    // 5.0
#define DID_XORMASK             4069
#define DID_ANDMASK             4070
#define DID_SCREENWIDTH         4071    // 12.0 (GIF)
#define DID_SCREENHEIGHT        4072    // 12.0 (GIF)
#define DID_SCREENLEFT          4073    // 12.0 (GIF)
#define DID_SCREENTOP           4074    // 12.0 (GIF)
#define DID_DELAYTIME           4075    // 12.0 (GIF)
#define DID_DELAYTIMESPIN       4076    // 12.0 (GIF)
#define DID_REPETITIONS         4077    // 12.0 (GIF)
#define DID_DISPOSALMETHOD      4078    // 12.0 (GIF)
#define DID_INTERLACED          4079    // 12.0 (GIF)
#define DID_RSRCID              4080
#define DID_RSRCLANGUAGE        4081
#define DID_RSRCFILENAME        4082    // 4.0
#define DID_RSRCTYPE            4083    // 3.0
#define DID_STRINGID            4084
#define DID_STRINGTEXT          4085
#define DID_MSGID               4086    // 3.0
#define DID_MSGCODE             4087    // 3.0
#define DID_MSGFACILITY         4088    // 3.0
#define DID_MSGSEVERITY         4089    // 3.0
#define DID_MSGCUSTOMER         4090    // 3.0
#define DID_MSGTEXT             4091    // 3.0
#define DID_MSGANSI             4092    // 3.0
#define DID_MSGUTF16            4093    // 3.0
#define DID_MSGUTF8             4094    // 13.00
#define DID_MENUID              4095
#define DID_MENUTEXT            4096
#define DID_MENUPOPUP           4097
#define DID_MENUSEPARATOR       4098
#define DID_MENUDEFAULT         4099
#define DID_MENUGRAYED          4100
#define DID_MENUCHECKED         4101
#define DID_MENURADIOCHECK      4102
#define DID_MENUBREAK           4103
#define DID_ACCELID             4104
#define DID_ACCELKEY            4105
#define DID_ACCELCTRL           4106
#define DID_ACCELALT            4107
#define DID_ACCELSHIFT          4108
#define DID_ACCELASCII          4109
#define DID_ACCELVIRTKEY        4110
#define DID_VIDEORATE           4111
#define DID_VIDEORATESPIN       4112
#define DID_FRAMERATE           4113
#define DID_FRAMERATESPIN       4114
#define DID_TRANSPARENT         4115
#define DID_CODEC               4116
#define DID_FUNCSAMPLES         4117    // 6.50
#define DID_PROFSAMPLES         4118    // 6.50
#define DID_VOIDSAMPLES         4119    // 6.50
#define DID_SHOWSPLASH          4120
#define DID_ONSTARTUP           4121    // 7.0
#define DID_SHOWPATH            4122
#define DID_AUTORELOAD          4123    // 6.0
#define DID_MAXFILESIZE         4124    // 11.0
#define DID_UNIQUERSRCIDENTS    4125    // 4.0
#define DID_MOUSELINES          4126
#define DID_MOUSELINESSPIN      4127
#define DID_CARETWIDTH          4128    // 12.0
#define DID_CARETWIDTHSPIN      4129    // 12.0
#define DID_THEME               4130    // 10.0
#define DID_CATEGORIES          4131    // 10.0
#define DID_COLORLIST           4132
#define DID_FORECOLOR           4133
#define DID_BACKCOLOR           4134
#define DID_FONTFACE            4135
#define DID_FONTSIZE            4136
#define DID_BROWSEINFO          4137
#define DID_BROWSELEVEL1        4138
#define DID_BROWSELEVEL2        4139
#define DID_CALLTIPS            4140
#define DID_INFOTIPS            4141    // 9.0
#define DID_MEMBERLIST          4142
#define DID_INCLUDELIST         4143    // 6.50
#define DID_DRAGDROP            4144
#define DID_WRAPFINDQUERY       4145
#define DID_MAKEBACKUP          4146
#define DID_TABSIZE             4147
#define DID_INDENTSIZE          4148    // 4.50
#define DID_USETABS             4149    // 3.0
#define DID_SPACETABS           4150    // 3.0
#define DID_INDENTNONE          4151    // 3.0
#define DID_INDENTBLOCK         4152    // 3.0
#define DID_INDENTSMART         4153    // 3.0
#define DID_STRUCTBRACE         4154    // 12.0
#define DID_ENUMBRACE           4155    // 12.0
#define DID_FUNCBRACE           4156    // 12.0
#define DID_STMTBRACE           4157    // 12.0
#define DID_STMTSPACE           4158    // 12.0
#define DID_OPORSPACE           4159    // 12.0
#define DID_PARENSPACE          4160    // 12.0
#define DID_CALLSPACE           4161    // 12.0
#define DID_ELSECUDDLE          4162    // 12.0
#define DID_DOCUDDLE            4163    // 12.0
#define DID_CASEINDENT          4164    // 12.0
#define DID_TRIMBLANKS          4165    // 12.0
#define DID_AUTOFILESAVE        4166
#define DID_FASTLOADPROJECT     4167    // 3.0
#define DID_PROJPANELEFT        4168    // 7.0
#define DID_PROJPANERIGHT       4169    // 7.0
#define DID_SORTPROJFUNCS       4170    // 7.0
#define DID_AUTOSELECTNEWPROJ   4171    // 7.0
#define DID_ZIPEXTRA            4172    // 7.0
#define DID_UNIQUEZIPNAMES      4173    // 4.0
#define DID_CLEANPROJECTMODE    4174    // 9.0
#define DID_CXFORMGRID          4175
#define DID_CYFORMGRID          4176
#define DID_CXFORMMARGIN        4177
#define DID_CYFORMMARGIN        4178
#define DID_CXCONTROLSPACE      4179
#define DID_CYCONTROLSPACE      4180
#define DID_CXBUTTONSPACE       4181
#define DID_CYBUTTONSPACE       4182
#define DID_FORMGRID            4183
#define DID_PIXELGRID           4184
#define DID_IMAGEGRID           4185
#define DID_CXIMAGEGRID         4186
#define DID_CYIMAGEGRID         4187
#define DID_JPEGQUALITY         4188
#define DID_PNGCOMPRESSION      4189    // 4.0
#define DID_USEDITHER           4190
#define DID_JITDEBUGGER         4191
#define DID_HEXVALUES           4192
#define DID_FLAGSDIALOG         4193
#define DID_BREAKONENTRY        4194    // 4.0
#define DID_MAXARRAYELEMS       4195    // 3.0
#define DID_DBGHELPSYMPATH      4196    // 13.0
#define DID_THREADMSG           4197    // 12.0
#define DID_MODULEMSG           4198    // 12.0
#define DID_OUTPUTMSG           4199    // 12.0
#define DID_DBGHELPMSG          4200    // 13.0
#define DID_PROFRATE            4201    // 6.50
#define DID_PROFRATESPIN        4202    // 6.50
#define DID_ALLMODULES          4203    // 6.50
#define DID_PROFLINES           4204    // 8.0
#define DID_CALLTREE            4205    // 8.0
#define DID_HOMEPAGE            4206    // 7.0
#define DID_FOLDERGROUP         4207
#define DID_FOLDERS             4208
#define DID_ARGUMENTS           4209    // GNRL
#define DID_WORKPATH            4210    // GNRL
#define DID_EXECUTOR            4211    // GNRL
#define DID_PPDEFINE            4212    // CC, RC, AS
#define DID_PPUNDEFINELABEL     4213    // CC, RC
#define DID_PPUNDEFINE          4214    // CC, RC
#define DID_DEBUGINFO           4215    // CC, AS, LINK
#define DID_WARNINGLEVEL        4216    // CC
#define DID_DIAGTYPE            4217    // CC (10.0)
#define DID_CSTANDARD           4218    // CC (7.0)
#define DID_MSEXTENSIONS        4219    // CC
#define DID_EXTENSIONS          4220    // CC
#define DID_OPENMP              4221    // CC (8.0)
#define DID_CHARUNSIGNED        4222    // CC
#define DID_TIME64              4223    // CC (10.0)
#define DID_OVERFLOWTRAP        4224    // CC (7.0)
#define DID_CRTLIB              4225    // CC
#define DID_OPTIMIZATION        4226    // CC
#define DID_OPTIMIZEMORE        4227    // CC (11.0)
#define DID_INLINEMODEL         4228    // CC (6.0)
#define DID_ARCH                4229    // CC (9.0)
#define DID_FPMODEL             4230    // CC (6.0)
#define DID_CALLCONV            4231    // CC, AS
#define DID_OMITDEFAULTLIB      4232    // CC
#define DID_OLDNAMES            4233    // CC
#define DID_NULLTERMINATE       4234    // RC (5.0)
#define DID_MAPFILE             4235    // LINK
#define DID_DBGFILE             4236    // LINK (9.0)
#define DID_NODEFAULTLIB        4237    // LINK
#define DID_RELEASE             4238    // LINK
#define DID_LARGEADDRESSAWARE   4239    // LINK (5.0)
#define DID_SAFESEH             4240    // LINK (9.0)
#define DID_LIBRARIES           4241    // LINK
#define DID_DELAYLOADS          4242    // LINK
#define DID_ENTRYPOINT          4243    // LINK
#define DID_SECTALIGN           4244    // LINK
#define DID_FILEALIGN           4245    // LINK (13.0)
#define DID_STACKRESERVE        4246    // LINK
#define DID_STACKCOMMIT         4247    // LINK
#define DID_VERMAJOR            4248    // LINK
#define DID_VERMINOR            4249    // LINK
#define DID_OSVERMAJOR          4250    // LINK
#define DID_OSVERMINOR          4251    // LINK
#define DID_SUBSYSTEM           4252    // LINK
#define DID_SUBSYSMAJOR         4253    // LINK
#define DID_SUBSYSMINOR         4254    // LINK
#define DID_VERBOSE             4255    // PROJ, RC, MC, LINK, LIB, INST, CAB, SIGN
#define DID_SIGN                4256    // SIGN (5.0)
#define DID_CERTIFICATE         4257    // SIGN (5.0)
#define DID_TIMESTAMPSERVER     4258    // SIGN (5.0)
#define DID_PROGRESS            4259
#define DID_FINDWHAT            4260
#define DID_REPLACEWITH         4261
#define DID_SEARCHUP            4262
#define DID_SEARCHDOWN          4263
#define DID_MATCHCASE           4264
#define DID_WHOLEWORD           4265    // 6.0
#define DID_REGEX               4266    // 11.0
#define DID_FINDSCOPE           4267    // 9.0
#define DID_FINDSCOPELABEL      4268    // 9.0
#define DID_FINDSPEC            4269    // 7.0: DID_FINDFORMAT -> DID_FINDSPEC
#define DID_FINDPATH            4270
#define DID_SUBFOLDERS          4271
#define DID_LINENO              4272
#define DID_ADDRESS             4273
#define DID_FUNCNAME            4274
#define DID_LABELLIST           4275
#define DID_LABELNAME           4276
#define DID_LABELVALUE          4277
#define DID_INCLUDES            4278
#define DID_TOOLS               4279
#define DID_TOOLTEXT            4280
#define DID_TOOLCOMMAND         4281
#define DID_TOOLARGUMENTS       4282
#define DID_TOOLFOLDER          4283
#define DID_TOOLCAPTURE         4284
#define DID_HELPFILES           4285
#define DID_HELPTEXT            4286
#define DID_HELPCOMMAND         4287
#define DID_HELPBUILTIN         4288    // 7.0
#define DID_KEYCATEGORIES       4289
#define DID_KEYCOMMANDS         4290
#define DID_KEYLIST             4291
#define DID_ADDINS              4292
#define DID_ADDINTEXT           4293    // 9.0: stc32 -> DID_ADDINTEXT
#define DID_SNIPPETGROUP        4294    // 5.0
#define DID_SNIPPETS            4295    // 5.0
#define DID_SNIPPETNAME         4296    // 5.0
#define DID_SNIPPETCODE         4297    // 5.0
#define DID_IMPORTASLIST        4298    // 4.50 (from 3.0 radio buttons)
#define DID_CUSTOMLIST          4299
#define DID_CUSTOMSAMPLE        4300
#define DID_RETAINRATIO         4301    // 5.0
#define DID_DEGREES             4302
#define DID_RADIUS              4303
#define DID_AMOUNT              4304
#define DID_CURVATURE           4305
#define DID_OFFSETX             4306    // 4.0
#define DID_OFFSETXSPIN         4307    // 4.0
#define DID_OFFSETY             4308    // 4.0
#define DID_OFFSETYSPIN         4309    // 4.0
#define DID_HUE                 4310
#define DID_HUESPIN             4311    // 5.0
#define DID_SATURATION          4312
#define DID_SATURATIONSPIN      4313    // 5.0
#define DID_BRIGHTNESS          4314
#define DID_BRIGHTNESSSPIN      4315    // 5.0
#define DID_PREVIEW             4316
#define DID_TOOLBAR             4317
#define DID_GENERIC             4318
#define DID_GENERIC2            4319    // 6.0
#define DID_PROJECTLIST         4320    // 4.0
#define DID_DEPENDENCYLIST      4321    // 4.0
#define DID_MODENAME            4322    // 9.0
#define DID_ZIPCOMMENT          4323
#define DID_ZIPFILES            4324
#define DID_BROWSETAGS          4325
#define DID_BREAKONHITCOUNT     4326    // 4.0
#define DID_BREAKCOUNT          4327    // 4.0
#define DID_BREAKONEXPRESSION   4328    // 4.0
#define DID_BREAKEXPRESSION     4329    // 4.0
#define DID_BREAKENABLED        4330    // 4.0
#define DID_WATCHBYLIST         4331    // 4.0
#define DID_WATCHLIST           4332
#define DID_WATCHBYEXPRESSION   4333    // 4.0
#define DID_WATCHEXPRESSION     4334    // 4.0
#define DID_WATCHRESULT         4335    // 4.0
#define DID_HWBREAKTYPE1        4336    // 4.0
#define DID_HWBREAKTYPE2        4337    // 4.0
#define DID_HWBREAKTYPE3        4338    // 4.0
#define DID_HWBREAKTYPE4        4339    // 4.0
#define DID_HWBREAKADDRESS1     4340    // 4.0
#define DID_HWBREAKADDRESS2     4341    // 4.0
#define DID_HWBREAKADDRESS3     4342    // 4.0
#define DID_HWBREAKADDRESS4     4343    // 4.0
#define DID_HWBREAKSIZE1        4344    // 4.0
#define DID_HWBREAKSIZE2        4345    // 4.0
#define DID_HWBREAKSIZE3        4346    // 4.0
#define DID_HWBREAKSIZE4        4347    // 4.0
#define DID_CF                  4348
#define DID_PF                  4349
#define DID_AF                  4350
#define DID_ZF                  4351
#define DID_SF                  4352
#define DID_DF                  4353
#define DID_OF                  4354
#define DID_IM                  4355
#define DID_DM                  4356
#define DID_ZM                  4357
#define DID_OM                  4358
#define DID_UM                  4359
#define DID_PM                  4360
#define DID_PC0                 4361
#define DID_PC1                 4362
#define DID_PC2                 4363
#define DID_PC3                 4364
#define DID_RC0                 4365
#define DID_RC1                 4366
#define DID_RC2                 4367
#define DID_RC3                 4368
#define DID_IE                  4369
#define DID_DE                  4370
#define DID_ZE                  4371
#define DID_OE                  4372
#define DID_UE                  4373
#define DID_PE                  4374
#define DID_STKFAULT            4375
#define DID_ES                  4376
#define DID_TOP                 4377
#define DID_TAG0                4378
#define DID_TAG1                4379
#define DID_TAG2                4380
#define DID_TAG3                4381
#define DID_TAG4                4382
#define DID_TAG5                4383
#define DID_TAG6                4384
#define DID_TAG7                4385
#define DID_DAZ                 4386
#define DID_FZ                  4387
#define DID_N                   4388    // 14.10
#define DID_Z                   4389    // 14.10
#define DID_C                   4390    // 14.10
#define DID_V                   4391    // 14.10
#define DID_PALETTE             4392    // 4.0
#define DID_HSV                 4393    // 4.0
#define DID_RED                 4394    // 4.0
#define DID_REDSPIN             4395    // 5.0
#define DID_GREEN               4396    // 4.0
#define DID_GREENSPIN           4397    // 5.0
#define DID_BLUE                4398    // 4.0
#define DID_BLUESPIN            4399    // 5.0
#define DID_ALPHA               4400    // 4.0
#define DID_ALPHASPIN           4401    // 5.0
#define DID_ALPHALABEL          4402    // 4.0
#define DID_ALPHATRACK          4403    // 4.0
#define DID_ALPHAFRAME          4404    // 4.0
#define DID_PALINDEX            4405    // 6.50
#define DID_URL                 4406    // 7.0
#define DID_LEFT                4407    // 7.0
#define DID_RIGHT               4408    // 7.0
#define DID_DEEP                4409    // 7.0

// Private Button ID's.
#define IDOK                    1       // For help project.
#define IDCANCEL                2       // For help project.
#define IDADD                   21
#define IDCHANGE                22
#define IDDEL                   23
#define IDDEFAULT               24
#define IDREPLACE               25
#define IDREPLACEALL            26
#define IDBROWSE                27
#define IDTYPEDKEY              28
#define IDSETUP                 29
#define IDSYSDEFS               30      // 5.0
#define IDBROWSE2               31      // 7.0
#define IDRENAME                32      // 9.0

//
// Various resource ID's ----------------------------------------------------
//

// Menu ID's.
//
#define IDR_MNU_MAIN            2001
#define IDR_MNU_MODE            2002    // 10.0
#define IDR_MNU_EDIT            2003
#define IDR_MNU_DRAW            2004    // 10.0: IDR_MNU_PICT -> IDR_MNU_DRAW
#define IDR_MNU_FORM            2005
#define IDR_MNU_MENU            2006
#define IDR_MNU_MESS            2007    // 3.0
#define IDR_MNU_RSRC            2008
#define IDR_MNU_DBG             2009
#define IDR_MNU_WEB             2010    // 7.0
#define IDR_MNU_DIFF            2011    // 7.0

#define IDR_CTX_EDIT            2012
#define IDR_CTX_DRAW            2013    // 10.0: IDR_CTX_PICT -> IDR_CTX_DRAW
#define IDR_CTX_FORM            2014
#define IDR_CTX_TEXT            2015
#define IDR_CTX_MESS            2016    // 3.0
#define IDR_CTX_MENU            2017
#define IDR_CTX_ACCL            2018
#define IDR_CTX_VERS            2019
#define IDR_CTX_ANIM            2020
#define IDR_CTX_RSRC            2021
#define IDR_CTX_DUMP            2022
#define IDR_CTX_PROF            2023    // 6.50
#define IDR_CTX_PROJPANE        2024    // 4.0
#define IDR_CTX_PROJSRCWKS      2025    // 4.0
#define IDR_CTX_PROJSRCPROJ     2026    // 4.0
#define IDR_CTX_PROJSRCFILE     2027    // 4.0
#define IDR_CTX_PROJSRCFUNC     2028    // 8.0
#define IDR_CTX_PROJTARGWKS     2029    // 5.0
#define IDR_CTX_PROJTARGPROJ    2030    // 4.0
#define IDR_CTX_PROJTARGFILE    2031    // 4.0
#define IDR_CTX_BUILD           2032
#define IDR_CTX_PROPS           2033
#define IDR_CTX_FILEFIND        2034    // 10.0
#define IDR_CTX_OUTPUT          2035
#define IDR_CTX_TRACE           2036
#define IDR_CTX_DBGSRC          2037
#define IDR_CTX_DBGMIX          2038
#define IDR_CTX_BREAK           2039    // 4.0
#define IDR_CTX_WATCH           2040
#define IDR_CTX_SYMBOL          2041    // 4.50
#define IDR_CTX_MEMORY          2042    // 4.50
#define IDR_CTX_THREAD          2043    // 6.50
#define IDR_CTX_MODULE          2044    // 12.0
#define IDR_CTX_REGS            2045    // 5.0
#define IDR_CTX_A64REGS         2046    // 14.10
#define IDR_CTX_DROP            2047
#define IDR_CTX_TABS            2048
#define IDR_CTX_WEB             2049    // 7.0
#define IDR_CTX_DIFFOUTLINE     2050    // 7.0
#define IDR_CTX_DIFFEXPAND      2051    // 7.0

#define IDR_ACC_MAIN            3001

// Bitmap ID's.
//
#define IDR_BMP_SPLASH          8001    // Splash screen.
#define IDR_BMP_BRUSHTYPES      8002
#define IDR_BMP_SELTYPES        8003
#define IDR_BMP_ERASETYPES      8004
#define IDR_BMP_LINETYPES       8005    // 4.0
#define IDR_BMP_SHAPETYPES      8006
#define IDR_BMP_SPRAYTYPES      8007
#define IDR_BMP_ZOOMTYPES       8008
#define IDR_BMP_GRADTYPES       8009    // 5.0
#define IDR_BMP_HANDLE1         8010
#define IDR_BMP_HANDLE2         8011
#define IDR_BMP_HELPTREE        8012    // 7.0
#define IDR_BMP_MDITABS         8013    // 8.0
#define IDR_BMP_HOT_MDITABS     8014    // 8.0
#define IDR_BMP_FONTCUES        8015    // 6.50
#define IDR_BMP_THRDCUES        8016    // 6.50
#define IDR_BMP_BRUSHTYPES_BIG  8017    // 13.0
#define IDR_BMP_SELTYPES_BIG    8018    // 13.0
#define IDR_BMP_ERASETYPES_BIG  8019    // 13.0
#define IDR_BMP_LINETYPES_BIG   8020    // 13.0
#define IDR_BMP_SHAPETYPES_BIG  8021    // 13.0
#define IDR_BMP_SPRAYTYPES_BIG  8022    // 13.0
#define IDR_BMP_ZOOMTYPES_BIG   8023    // 13.0
#define IDR_BMP_GRADTYPES_BIG   8024    // 13.0

// Alpha channel patterns.
#define IDR_BMP_ALPHAZOOM4      8025    // 13.0
#define IDR_BMP_ALPHAZOOM8      8026    // 4.0
#define IDR_BMP_ALPHAZOOM16     8027    // 13.0

// Icon ID's.
//
#define IDR_ICO_MAIN            8028    // Application icon.
#define IDR_ICO_SRCFILE         8029    // Explorer association icon (.c, .asm).
#define IDR_ICO_WRKFILE         8030    // Explorer association icon (.h, .inc, .rc, ...).
#define IDR_ICO_SOURCE          8031
#define IDR_ICO_IMAGE           8032
#define IDR_ICO_DIALOG          8033
#define IDR_ICO_DEBUG           8034
#define IDR_ICO_PROFILE         8035    // 6.50
#define IDR_ICO_STRTABLE        8036
#define IDR_ICO_MSGTABLE        8037    // 3.0
#define IDR_ICO_MENU            8038
#define IDR_ICO_ACCEL           8039
#define IDR_ICO_VERSION         8040
#define IDR_ICO_ANIM            8041
#define IDR_ICO_RESOURCE        8042
#define IDR_ICO_HEXDUMP         8043
#define IDR_ICO_DIFF            8044    // 7.0
#define IDR_ICO_W32APP          8045
#define IDR_ICO_W32DLL          8046
#define IDR_ICO_W32LIB          8047
#define IDR_ICO_W32CON          8048
#define IDR_ICO_W32INST         8049    // 5.0
#define IDR_ICO_WIZARD          8050
#define IDR_ICO_CHECK           8051
// Objects and actions.
#define IDR_ICO_OPEN            8052    // 6.50
#define IDR_ICO_SAVE            8053    // 6.50
#define IDR_ICO_SAVEALL         8054    // 6.50
#define IDR_ICO_PRINT           8055    // 6.50
#define IDR_ICO_PROPERTIES      8056    // 6.50

#define IDR_ICO_UNDO            8057    // 6.50
#define IDR_ICO_REDO            8058    // 6.50
#define IDR_ICO_CUT             8059    // 6.50
#define IDR_ICO_COPY            8060    // 6.50
#define IDR_ICO_PASTE           8061    // 6.50
#define IDR_ICO_DELETE          8062    // 6.50
#define IDR_ICO_INSERT          8063    // 6.50
#define IDR_ICO_EDIT            8064    // 6.50
#define IDR_ICO_FIND            8065    // 6.50
#define IDR_ICO_FINDNEXT        8066    // 6.50
#define IDR_ICO_FILEFIND        8067    // 6.50

#define IDR_ICO_TABPAGES        8068    // 6.50
#define IDR_ICO_CASCADE         8069    // 6.50
#define IDR_ICO_TILEHORZ        8070    // 6.50
#define IDR_ICO_TILEVERT        8071    // 6.50
#define IDR_ICO_TOOL            8072    // 6.50
#define IDR_ICO_HELP            8073    // 6.50
#define IDR_ICO_WEB             8074    // 6.50
#define IDR_ICO_USER            8075    // 6.50

#define IDR_ICO_BITMAP          8076    // 6.50
#define IDR_ICO_ICON            8077    // 6.50
#define IDR_ICO_CURSOR          8078    // 6.50
#define IDR_ICO_ANICURSOR       8079    // 6.50
#define IDR_ICO_VIDEO           8080    // 6.50

#define IDR_ICO_ANIICON         8081    // 13.0
#define IDR_ICO_HTML            8082    // 13.0
#define IDR_ICO_MANIFEST        8083    // 13.0
#define IDR_ICO_WAVE            8084    // 13.0
#define IDR_ICO_TYPELIB         8085    // 13.0

#define IDR_ICO_FOLDER          8086    // 6.50
#define IDR_ICO_MOVEUP          8087    // 6.50
#define IDR_ICO_MOVEDOWN        8088    // 6.50
#define IDR_ICO_RENAME          8089    // 6.50

#define IDR_ICO_BACK            8090    // 7.0
#define IDR_ICO_FORWARD         8091    // 7.0
#define IDR_ICO_HOME            8092    // 8.0
#define IDR_ICO_REFRESH         8093    // 7.0
#define IDR_ICO_CERTIFICATE     8094    // 7.0

// Debugger.
#define IDR_ICO_GODEBUG         8095    // 6.50
#define IDR_ICO_RESTART         8096    // 6.50
#define IDR_ICO_BREAK           8097    // 6.50
#define IDR_ICO_STOPDEBUG       8098    // 6.50, 7.0: IDR_ICO_STOP -> IDR_ICO_STOPDEBUG
#define IDR_ICO_STEPINTO        8099    // 6.50
#define IDR_ICO_STEPOVER        8100    // 6.50
#define IDR_ICO_STEPOUT         8101    // 6.50
#define IDR_ICO_QUICKWATCH      8102    // 6.50
#define IDR_ICO_BRKPNT          8103    // 6.50, 13.0: IDR_ICO_TOGGLEBRKPT -> IDR_ICO_BRKPNT
#define IDR_ICO_BRKPNT_EXT      8104    // 13.0
#define IDR_ICO_BRKPNT_OFF      8105    // 13.0
#define IDR_ICO_SHOWNEXTSTMT    8106    // 6.50
// Projects.
#define IDR_ICO_SOURCEFILE      8107    // 6.50
#define IDR_ICO_TARGETFILE      8108    // 6.50
#define IDR_ICO_HEADERFILE      8109    // 13.0
#define IDR_ICO_RESOURCEFILE    8110    // 13.0
#define IDR_ICO_OTHERFILE       8111    // 13.0
#define IDR_ICO_BUILD           8112    // 6.50
#define IDR_ICO_STOPBUILD       8113    // 6.50
#define IDR_ICO_COMPILE         8114    // 6.50
#define IDR_ICO_EXECUTE         8115    // 6.50
#define IDR_ICO_ADDFILE         8116    // 6.50
#define IDR_ICO_ADDPROJ         8117    // 6.50
#define IDR_ICO_ZIP             8118    // 6.50
#define IDR_ICO_UNZIP           8119    // 6.50
#define IDR_ICO_MAKEPREQ        8120    // 6.50
#define IDR_ICO_SETACTIVE       8121    // 6.50
#define IDR_ICO_SETTINGS        8122    // 6.50
#define IDR_ICO_EXCLUDE         8123    // 6.50
#define IDR_ICO_CLOSEPROJ       8124    // 6.50
#define IDR_ICO_VIEWLIST        8125    // 6.50
#define IDR_ICO_VIEWICON        8126    // 6.50
#define IDR_ICO_ADVANCED        8127    // 6.50
#define IDR_ICO_STANDARD        8128    // 6.50
#define IDR_ICO_WORKSPACE       8129    // 13.0
#define IDR_ICO_FUNCTION        8130    // 13.0
#define IDR_ICO_VARIABLE        8131    // 13.0
#define IDR_ICO_STRUCT          8132    // 13.0
#define IDR_ICO_MEMBER          8133    // 13.0
#define IDR_ICO_ENUMER          8134    // 13.0
#define IDR_ICO_ENUM            8135    // 13.0
#define IDR_ICO_DEFINE          8136    // 13.0
#define IDR_ICO_TYPEDEF         8137    // 13.0
// Image editor.
#define IDR_ICO_PENCIL          8138    // 6.50
#define IDR_ICO_BRUSH           8139    // 6.50
#define IDR_ICO_SELECT          8140    // 6.50
#define IDR_ICO_ERASER          8141    // 6.50
#define IDR_ICO_LINE            8142    // 6.50
#define IDR_ICO_RECT            8143    // 6.50
#define IDR_ICO_ELLIPSE         8144    // 6.50
#define IDR_ICO_ROUNDRECT       8145    // 6.50
#define IDR_ICO_FILL            8146    // 6.50
#define IDR_ICO_DRAWTEXT        8147    // 6.50
#define IDR_ICO_SPRAY           8148    // 6.50
#define IDR_ICO_PICKCOLOR       8149    // 6.50
#define IDR_ICO_MAGNIFY         8150    // 6.50
#define IDR_ICO_HOTSPOT         8151    // 6.50
#define IDR_ICO_GRADIENT        8152    // 6.50
#define IDR_ICO_PALETTE         8153    // 6.50
#define IDR_ICO_OPENPALETTE     8154    // 6.50
#define IDR_ICO_SAVEPALETTE     8155    // 6.50
#define IDR_ICO_ROTATE          8156    // 6.50
#define IDR_ICO_MIRRORVERT      8157    // 6.50
#define IDR_ICO_MIRRORHORZ      8158    // 6.50
#define IDR_ICO_RESIZE          8159    // 6.50
#define IDR_ICO_NEWIMAGE        8160    // 6.50
// Dialog editor.
#define IDR_ICO_TESTDIALOG      8161    // 6.50
#define IDR_ICO_CHECKMNEMONICS  8162    // 6.50
#define IDR_ICO_LOCKCONTROLS    8163    // 6.50
#define IDR_ICO_ORDERCONTROLS   8164    // 6.50
#define IDR_ICO_ALIGNLEFT       8165    // 6.50
#define IDR_ICO_ALIGNRIGHT      8166    // 6.50
#define IDR_ICO_ALIGNTOP        8167    // 6.50
#define IDR_ICO_ALIGNBOTTOM     8168    // 6.50
#define IDR_ICO_ALIGNHORZ       8169    // 6.50
#define IDR_ICO_ALIGNVERT       8170    // 6.50
#define IDR_ICO_SPACEHORZ       8171    // 6.50
#define IDR_ICO_SPACEVERT       8172    // 6.50
#define IDR_ICO_ARRSIZEWIDTH    8173    // 6.50
#define IDR_ICO_ARRSIZEHEIGHT   8174    // 6.50
#define IDR_ICO_ARRSIZEBOTH     8175    // 6.50
#define IDR_ICO_ARRPUSHBOTTOM   8176    // 6.50
#define IDR_ICO_ARRPUSHRIGHT    8177    // 6.50
#define IDR_ICO_CENTERHORZ      8178    // 6.50
#define IDR_ICO_CENTERVERT      8179    // 6.50
// Dialog controls.
#define IDR_ICO_POINTER         8180    // 6.50
#define IDR_ICO_PICTURE         8181    // 6.50
#define IDR_ICO_STATIC          8182    // 6.50
#define IDR_ICO_EDITBOX         8183    // 6.50
#define IDR_ICO_GROUPBOX        8184    // 6.50
#define IDR_ICO_PUSHBUTTON      8185    // 6.50
#define IDR_ICO_CHECKBOX        8186    // 6.50
#define IDR_ICO_RADIOBUTTON     8187    // 6.50
#define IDR_ICO_COMBOBOX        8188    // 6.50
#define IDR_ICO_LISTBOX         8189    // 6.50
#define IDR_ICO_HSCROLLBAR      8190    // 6.50
#define IDR_ICO_VSCROLLBAR      8191    // 6.50
#define IDR_ICO_UPDOWN          8192    // 6.50
#define IDR_ICO_PROGRESS        8193    // 6.50
#define IDR_ICO_TRACKBAR        8194    // 6.50
#define IDR_ICO_HOTKEY          8195    // 6.50
#define IDR_ICO_LISTVIEW        8196    // 6.50
#define IDR_ICO_TREEVIEW        8197    // 6.50
#define IDR_ICO_TABCONTROL      8198    // 6.50
#define IDR_ICO_ANIMATE         8199    // 6.50
#define IDR_ICO_RICHEDIT        8200    // 6.50
#define IDR_ICO_RICHED20        8201    // 6.50
#define IDR_ICO_RICHED30        8202    // 14.0
#define IDR_ICO_RICHED50        8203    // 14.0
#define IDR_ICO_DATETIME        8204    // 6.50
#define IDR_ICO_MONTHCAL        8205    // 6.50
#define IDR_ICO_COMBOBOXEX      8206    // 6.50
#define IDR_ICO_REBAR           8207    // 6.50
#define IDR_ICO_PAGER           8208    // 6.50
#define IDR_ICO_TOOLBAR         8209    // 6.50
#define IDR_ICO_STATUSBAR       8210    // 6.50
#define IDR_ICO_SYSLINK         8211    // 6.50
#define IDR_ICO_IPADDRESS       8212    // 6.50
#define IDR_ICO_NETADDRESS      8213    // 6.50
#define IDR_ICO_SPLITBUTTON     8214    // 6.50
#define IDR_ICO_COMMANDLINK     8215    // 6.50
#define IDR_ICO_NATIVEFONT      8216    // 6.50
// Dialog properties.
#define IDR_ICO_DROPDOWN        8217    // 13.0
#define IDR_ICO_MOREEDIT        8218    // 13.0
// Menu editor.
#define IDR_ICO_TESTMENU        8219    // 6.50
// Source editor.
#define IDR_ICO_BOOKMARK        8220    // 6.50, 13.0: IDR_ICO_SETBOOKMARK -> IDR_ICO_BOOKMARK
#define IDR_ICO_NEXTBOOKMARK    8221    // 6.50
#define IDR_ICO_PREVBOOKMARK    8222    // 6.50
#define IDR_ICO_CFORMAT         8223    // 6.50
#define IDR_ICO_SPACETOTAB      8224    // 6.50
#define IDR_ICO_TABTOSPACE      8225    // 6.50
#define IDR_ICO_CARRIAGE        8226    // 13.0
#define IDR_ICO_LINEFEED        8227    // 13.0
// Difference.
#define IDR_ICO_PREVCHANGE      8228    // 7.0
#define IDR_ICO_NEXTCHANGE      8229    // 7.0
#define IDR_ICO_EXPAND          8230    // 7.0
#define IDR_ICO_COLLAPSE        8231    // 7.0
// Nothing.
#define IDR_ICO_NULL            8232    // 13.0


// Cursor ID's.
//
#define IDR_CUR_RESIZELR        8233
#define IDR_CUR_RESIZEUD        8234
#define IDR_CUR_HOTSPOT         8235
#define IDR_CUR_FLOOD           8236
#define IDR_CUR_SPRAY           8237
#define IDR_CUR_CROSS           8238
#define IDR_CUR_PENCIL          8239
#define IDR_CUR_PICKCOLOR       8240
#define IDR_CUR_MAGNIFY         8241
#define IDR_CUR_OUTSEL          8242
#define IDR_CUR_MOVE            8243
#define IDR_CUR_DROPTOOL        8244
#define IDR_CUR_DRAGMOVE        8245
#define IDR_CUR_DRAGCOPY        8246
#define IDR_CUR_NODROP          8247

// Misc ID's.
//
#define IDR_RAW_ANIFRAME        8248
#define IDR_DLL_SERVER          8249    // 4.50
#define IDR_WAV_DOH             8250
#define IDR_HTM_WELCOME         8251    // 7.0

#endif // H_IDS
